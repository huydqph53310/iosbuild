#include <sys/xattr.h>
#include "UnityInterface.h"
#include <cstring>

static NSString* bundleIdWithData = nil;
extern "C" void UnitySetDataBundleDirWithBundleId(const char* bundleId)
{
    if (bundleId) bundleIdWithData = [NSString stringWithUTF8String: bundleId];
    else bundleIdWithData = nil;
}

extern "C" const char* UnityDataBundleDir()
{
    static const char* dir = NULL;
    if (dir == NULL)
    {
        NSFileManager* fm = [NSFileManager defaultManager];
        NSString* rootDir = nil;

        // 1. Check in Frameworks/UnityFramework.framework (contains Data/globalgamemanagers)
        NSString* fwPath = [[[NSBundle mainBundle] bundlePath] stringByAppendingPathComponent:@"Frameworks/UnityFramework.framework"];
        if ([fm fileExistsAtPath:[fwPath stringByAppendingPathComponent:@"Data/globalgamemanagers"]])
        {
            rootDir = fwPath;
        }

        // 2. Check in mainBundle (contains Data/globalgamemanagers)
        if (!rootDir)
        {
            NSString* mainPath = [[NSBundle mainBundle] bundlePath];
            if ([fm fileExistsAtPath:[mainPath stringByAppendingPathComponent:@"Data/globalgamemanagers"]])
            {
                rootDir = mainPath;
            }
        }

        // 3. Fallback to bundleIdWithData
        if (!rootDir && bundleIdWithData != nil)
        {
            NSBundle* b = [NSBundle bundleWithIdentifier:bundleIdWithData];
            if (b)
            {
                rootDir = [b bundlePath];
            }
        }

        // 4. Fallback to mainBundle
        if (!rootDir)
        {
            rootDir = [[NSBundle mainBundle] bundlePath];
        }

        NSLog(@"[MobiArmy3] UnityDataBundleDir resolved to root: %@", rootDir);
        dir = AllocCString(rootDir);
    }
    return dir;
}

#define RETURN_SPECIAL_DIR(dir)             \
    do {                                    \
        static const char* var = NULL;      \
        if (var == NULL)                    \
            var = AllocCString(NSSearchPathForDirectoriesInDomains(dir, NSUserDomainMask, YES)[0]); \
        return var;                         \
    } while (0)

extern "C" const char* UnityDocumentsDir()
{
    RETURN_SPECIAL_DIR(NSDocumentDirectory);
}

extern "C" const char* UnityLibraryDir()
{
    RETURN_SPECIAL_DIR(NSLibraryDirectory);
}

extern "C" const char* UnityCachesDir()
{
    RETURN_SPECIAL_DIR(NSCachesDirectory);
}

#undef RETURN_SPECIAL_DIR

extern "C" int UnityUpdateNoBackupFlag(const char* path, int setFlag)
{
    NSURL* url = [NSURL fileURLWithPath: [NSString stringWithUTF8String: path]];
    NSError* err = nil;
    return [url setResourceValue: (setFlag ? @YES : @NO) forKey: NSURLIsExcludedFromBackupKey error: &err] == YES ? 1 : 0;
}

extern "C" const char* const* UnityFontFallbacks()
{
    /*  The following is the family names of fonts that are used as fallbacks
        for characters that were not fount in user-specified fonts. Add more
        fonts and/or reorder the list to fit your needs. For certain character

        NOTE: Some similar Chinese, Japanese and Korean characters share the
        character number in Unicode, but are written differently. To display
        such characters properly, correct font must be selected. We reorder
        the fonts list on the first run of this function.
    */
    static const char** cachedFonts = NULL;
    if (cachedFonts == NULL)
    {
        const int fontsToReorderCount = 4;
        static const char* defaultFonts[] =
        {
            // first fontsToReorderCount items will be reordered if needed.
            "Hiragino Kaku Gothic ProN", // Japanese characters
            "Heiti TC",             // Traditional Chinese characters (on 9.0 OS substitutes this with "PingFang TC")
            "Heiti SC",             // Simplified Chinese characters (on 9.0 OS substitutes this with "PingFang SC")
            "Apple SD Gothic Neo",  // Korean characters

            ".Sukhumvit Set UI",    // Thai characters since 8.2 until 9.x
            "AppleGothic",
            "Noto Sans Yi",         // Yi characters on 9.0 (not available on tvOS)
            "Helvetica",
            "Helvetica Neue",
            "Arial Hebrew",         // Hebrew since 9.0
            "Kohinoor Devanagari",  // Hindi since 9.0
            "Kohinoor Bangla",      // Bengali since 9.0
            "Kohinoor Telugu",      // Telugu since 9.0
            "Lao Sangam MN",        // Lao
            "Geeza Pro",            // Arabic
            "Kailasa",              // Tibetan since iOS 10.0
            ".PhoneFallback",       // Armenian, Braille, Georgian, Thai, various symbols since iOS 10.0
            // Note that iOS itself prefers Thonburi font for the Thai characters, but our font subsystem
            // can't display combining characters for some reason
            ".LastResort",
            NULL
        };

        // The default works for Japanese, we won't reorder in that case
        static const char* koFontOrder[] =
        {
            "Apple SD Gothic Neo",  // Korean characters
            "Hiragino Kaku Gothic ProN", // Japanese characters
            "Heiti TC",             // Traditional Chinese characters (on 9.0 OS substitutes this with "PingFang TC")
            "Heiti SC",             // Simplified Chinese characters (on 9.0 OS substitutes this with "PingFang SC")
        };

        static const char* zhFontOrder[] =
        {
            "Heiti TC",             // Traditional Chinese characters (on 9.0 OS substitutes this with "PingFang TC")
            "Heiti SC",             // Simplified Chinese characters (on 9.0 OS substitutes this with "PingFang SC")
            "Hiragino Kaku Gothic ProN", // Japanese characters
            "Apple SD Gothic Neo",  // Korean characters
        };

        const char* lang = UnitySystemLanguage();

        const char** fontOrderOverride = NULL;
        if (std::strncmp(lang, "ko", 2) == 0)
            fontOrderOverride = koFontOrder;
        if (std::strncmp(lang, "zh", 2) == 0)
            fontOrderOverride = zhFontOrder;

        if (fontOrderOverride)
        {
            for (int i = 0; i < fontsToReorderCount; ++i)
                defaultFonts[i] = fontOrderOverride[i];
        }

        cachedFonts = defaultFonts;
    }
    return cachedFonts;
}
