source 'https://cdn.cocoapods.org/'

platform :ios, '15.0'

target 'UnityFramework' do
  pod 'UnityAds', '~> 4.12.5'
end
target 'Unity-iPhone' do
end
use_frameworks! :linkage => :static

post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '15.0'
      config.build_settings['EXPANDED_CODE_SIGN_IDENTITY'] = ""
      config.build_settings['CODE_SIGNING_REQUIRED'] = "NO"
      config.build_settings['CODE_SIGNING_ALLOWED'] = "NO"
      config.build_settings['SWIFT_VERSION'] = '5.0'
      config.build_settings['CLANG_ENABLE_MODULES'] = 'YES'
      config.build_settings['ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES'] = "NO"
      config.build_settings['GCC_WARN_INHIBIT_ALL_WARNINGS'] = 'YES'

      libs = config.build_settings['LIBRARY_SEARCH_PATHS'] || ['$(inherited)']
      libs = [libs] if libs.is_a?(String)
      ['$(TOOLCHAIN_DIR)/usr/lib/swift/$(PLATFORM_NAME)', '$(SDKROOT)/usr/lib/swift', '$(TOOLCHAIN_DIR)/usr/lib/swift-5.0/$(PLATFORM_NAME)'].each do |p|
        libs << p unless libs.include?(p)
      end
      config.build_settings['LIBRARY_SEARCH_PATHS'] = libs
    end
  end

  installer.aggregate_targets.each do |aggregate_target|
    aggregate_target.user_project.targets.each do |target|
      target.build_configurations.each do |config|
        config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '15.0'
        config.build_settings['CLANG_ENABLE_MODULES'] = 'YES'
        config.build_settings['SWIFT_VERSION'] = '5.0'
        config.build_settings['CODE_SIGNING_REQUIRED'] = "NO"
        config.build_settings['CODE_SIGNING_ALLOWED'] = "NO"
        config.build_settings['EXPANDED_CODE_SIGN_IDENTITY'] = ""

        config.build_settings['ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES'] = "NO"

        flags = config.build_settings['OTHER_LDFLAGS'] || ['$(inherited)']
        flags = flags.is_a?(Array) ? flags : [flags]
        flags << '-Wl,-headerpad_max_install_names' unless flags.include?('-Wl,-headerpad_max_install_names')
        flags = flags.reject { |f| f.is_a?(String) && (f.start_with?('-lswift') || f == 'AppTrackingTransparency' || f == 'AdAttributionKit' || f == 'StoreKit' || f == '-weak_framework' || f == '-framework') }
        config.build_settings['OTHER_LDFLAGS'] = flags
      end
    end
    aggregate_target.user_project.save
  end
end
