@import Foundation;

@class BZVConfigBuilder;
@class BZVExperimentalConfig;
@class BZVFeedConfig;

NS_ASSUME_NONNULL_BEGIN

typedef void(^BZVConfigBuilderBlock)(BZVConfigBuilder *builder);

@interface BZVConfig : NSObject

@property (nonatomic, copy, readonly) NSString *appId;
@property (nonatomic, assign, readonly) BOOL logging;
@property (nonatomic, strong, readonly, nullable) BZVFeedConfig *defaultFeedConfig;
@property (nonatomic, strong, readonly) BZVExperimentalConfig *experimentalConfig;

@end

@interface BZVConfig (Builder)

+ (instancetype)configWithBlock:(BZVConfigBuilderBlock)block;

@end

@interface BZVConfigBuilder : NSObject

@property (nonatomic, copy, readwrite) NSString *appId;
@property (nonatomic, assign, readwrite) BOOL logging;
@property (nonatomic, strong, readwrite, nullable) BZVFeedConfig *defaultFeedConfig;
@property (nonatomic, strong, readwrite, nullable) BZVExperimentalConfig *experimentalConfig;

- (BZVConfig *)build;

@end

NS_ASSUME_NONNULL_END
