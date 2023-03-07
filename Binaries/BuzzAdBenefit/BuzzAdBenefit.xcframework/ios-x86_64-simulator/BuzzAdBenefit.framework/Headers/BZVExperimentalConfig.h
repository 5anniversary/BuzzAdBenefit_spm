@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/// Experimental configurations of the framework.
///
/// This API is experimental. It may be changed in the future without notice.
@interface BZVExperimentalConfig : NSObject

@property (nonatomic, assign, readwrite) BOOL swiftEnabled;

+ (instancetype)defaultConfig;

@end

NS_ASSUME_NONNULL_END
