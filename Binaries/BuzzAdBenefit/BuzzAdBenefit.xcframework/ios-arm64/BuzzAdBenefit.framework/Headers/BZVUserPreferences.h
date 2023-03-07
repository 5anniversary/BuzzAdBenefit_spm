@import Foundation;
#import <BuzzAdBenefit/BZVVideoAutoPlayType.h>

@class BZVUserPreferencesBuilder;

NS_ASSUME_NONNULL_BEGIN

typedef void(^BZVUserPreferencesBuilderBlock)(BZVUserPreferencesBuilder *builder);

@interface BZVUserPreferences : NSObject

@property (nonatomic, assign, readonly) BZVVideoAutoPlayType autoPlayType;

@end

@interface BZVUserPreferences (Builder)

+ (instancetype)userPreferencesWithBlock:(BZVUserPreferencesBuilderBlock)block;

@end

@interface BZVUserPreferencesBuilder : NSObject

@property (nonatomic, assign, readwrite) BZVVideoAutoPlayType autoPlayType;

- (BZVUserPreferences *)build;

@end

NS_ASSUME_NONNULL_END
