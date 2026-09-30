#import <UIKit/UIKit.h>
#import <UnityFramework/UnityFramework.h>
#import <signal.h>
#import <execinfo.h>

static void LogToDoc(NSString* str)
{
    NSLog(@"[MobiArmy3] %@", str);
    NSArray* paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    if (paths && [paths count] > 0)
    {
        NSString* logPath = [[paths objectAtIndex:0] stringByAppendingPathComponent:@"startup_log.txt"];
        NSData* data = [[str stringByAppendingString:@"\n"] dataUsingEncoding:NSUTF8StringEncoding];
        NSFileHandle* handle = [NSFileHandle fileHandleForWritingAtPath:logPath];
        if (!handle)
        {
            [[NSFileManager defaultManager] createFileAtPath:logPath contents:data attributes:nil];
        }
        else
        {
            [handle seekToEndOfFile];
            [handle writeData:data];
            [handle closeFile];
        }
    }
}

static void GlobalSignalHandler(int sig)
{
    void* callstack[64];
    int frames = backtrace(callstack, 64);
    char** strs = backtrace_symbols(callstack, frames);
    NSMutableString* trace = [NSMutableString stringWithFormat:@"[CRASH] Signal %d received!\nCall stack:\n", sig];
    if (strs)
    {
        for (int i = 0; i < frames; ++i)
        {
            [trace appendFormat:@"%s\n", strs[i]];
        }
        free(strs);
    }
    LogToDoc(trace);
    signal(sig, SIG_DFL);
}

static void GlobalExceptionHandler(NSException* exception)
{
    NSString* err = [NSString stringWithFormat:@"[EXCEPTION] %@: %@\nStack:\n%@",
                     exception.name, exception.reason, [exception.callStackSymbols componentsJoinedByString:@"\n"]];
    LogToDoc(err);
}

@interface FallbackAppDelegate : UIResponder <UIApplicationDelegate>
@property (strong, nonatomic) UIWindow *window;
@end

@implementation FallbackAppDelegate
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.backgroundColor = [UIColor blackColor];
    
    UIViewController* vc = [[UIViewController alloc] init];
    vc.view.backgroundColor = [UIColor colorWithRed:0.08f green:0.08f blue:0.12f alpha:1.0f];
    
    UILabel* titleLabel = [[UILabel alloc] initWithFrame:CGRectMake(20, 50, vc.view.bounds.size.width - 40, 40)];
    titleLabel.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleBottomMargin;
    titleLabel.text = @"MobiArmy3 - Loading Error";
    titleLabel.textColor = [UIColor redColor];
    titleLabel.font = [UIFont boldSystemFontOfSize:18];
    [vc.view addSubview:titleLabel];
    
    UITextView* textView = [[UITextView alloc] initWithFrame:CGRectMake(15, 100, vc.view.bounds.size.width - 30, vc.view.bounds.size.height - 120)];
    textView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    textView.backgroundColor = [UIColor colorWithRed:0.12f green:0.12f blue:0.16f alpha:1.0f];
    textView.textColor = [UIColor whiteColor];
    textView.font = [UIFont systemFontOfSize:12];
    textView.editable = NO;
    
    NSArray* paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    if (paths && [paths count] > 0)
    {
        NSString* logPath = [[paths objectAtIndex:0] stringByAppendingPathComponent:@"startup_log.txt"];
        textView.text = [NSString stringWithContentsOfFile:logPath encoding:NSUTF8StringEncoding error:nil];
    }
    if (!textView.text || [textView.text length] == 0)
    {
        textView.text = @"UnityFramework failed to load on this device.";
    }
    [vc.view addSubview:textView];
    
    self.window.rootViewController = vc;
    [self.window makeKeyAndVisible];
    return YES;
}
@end

UnityFramework* UnityFrameworkLoad()
{
    LogToDoc(@"Starting UnityFrameworkLoad");
    NSString* bundlePath = nil;
    bundlePath = [[NSBundle mainBundle] bundlePath];
    bundlePath = [bundlePath stringByAppendingString: @"/Frameworks/UnityFramework.framework"];
    LogToDoc([NSString stringWithFormat:@"Framework bundle path: %@", bundlePath]);

    NSBundle* bundle = [NSBundle bundleWithPath: bundlePath];
    if ([bundle isLoaded] == false)
    {
        NSError* error = nil;
        [bundle loadAndReturnError: &error];
        if (error != nil)
        {
            LogToDoc([NSString stringWithFormat:@"[FATAL] Failed to load UnityFramework.framework: %@", error]);
        }
        else
        {
            LogToDoc(@"Successfully loaded UnityFramework.framework bundle");
        }
    }

    Class principalClass = bundle ? [bundle principalClass] : nil;
    if (!principalClass)
    {
        principalClass = NSClassFromString(@"UnityFramework");
    }

    UnityFramework* ufw = nil;
    if (principalClass && [principalClass respondsToSelector:@selector(getInstance)])
    {
        ufw = [(id)principalClass getInstance];
    }
    
    if (ufw != nil)
    {
        NSString* mainBundleId = [[NSBundle mainBundle] bundleIdentifier];
        if (mainBundleId && [mainBundleId length] > 0)
        {
            [ufw setDataBundleId: [mainBundleId UTF8String]];
            LogToDoc([NSString stringWithFormat:@"UnityFramework initialized with main bundle id %@", mainBundleId]);
        }
        else
        {
            LogToDoc(@"UnityFramework using main bundle");
        }
    }
    else
    {
        LogToDoc(@"[FATAL] UnityFramework instance is nil!");
    }

    return ufw;
}

int main(int argc, char* argv[])
{
    @autoreleasepool
    {
        NSArray* paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        if (paths && [paths count] > 0)
        {
            NSString* logPath = [[paths objectAtIndex:0] stringByAppendingPathComponent:@"startup_log.txt"];
            freopen([logPath UTF8String], "a+", stdout);
            freopen([logPath UTF8String], "a+", stderr);
            setvbuf(stdout, NULL, _IONBF, 0);
            setvbuf(stderr, NULL, _IONBF, 0);
        }

        signal(SIGSEGV, GlobalSignalHandler);
        signal(SIGABRT, GlobalSignalHandler);
        signal(SIGBUS, GlobalSignalHandler);
        signal(SIGILL, GlobalSignalHandler);
        signal(SIGFPE, GlobalSignalHandler);
        signal(SIGPIPE, SIG_IGN);
        NSSetUncaughtExceptionHandler(&GlobalExceptionHandler);

        LogToDoc(@"=== MobiArmy3 Starting ===");
        id ufw = UnityFrameworkLoad();
        if (ufw && [ufw respondsToSelector:@selector(runUIApplicationMainWithArgc:argv:)])
        {
            LogToDoc(@"Running UnityFramework runUIApplicationMainWithArgc");
            [ufw runUIApplicationMainWithArgc: argc argv: argv];
            return 0;
        }
        else
        {
            LogToDoc(@"Starting Fallback AppDelegate");
            return UIApplicationMain(argc, argv, nil, NSStringFromClass([FallbackAppDelegate class]));
        }
    }
}
