#import <BuzzAdBenefit/BZVConfig.h>
#import <BuzzAdBenefit/BZVExperimentalConfig.h>
#import <BuzzAdBenefit/BZVLoginRequest.h>
#import <BuzzAdBenefit/BZVUserPreferences.h>
#import <BuzzAdBenefit/BZVVideoAutoPlayType.h>
#import <BuzzAdBenefit/BZVWebInterface.h>
#import <BuzzAdBenefitBase/BZVError.h>
#import <BuzzAdBenefitBase/BZVPrivacyPolicyManager.h>
#import <BuzzAdBenefitBase/BZVUserInterfaceStyle.h>
#import <BuzzAdBenefitNative/BuzzAdBenefitNative.h>
#import <BuzzAdBenefitFeed/BuzzAdBenefitFeed.h>
#import <BuzzAdBenefitInterstitial/BuzzAdBenefitInterstitial.h>

@class NSObject;
@class UIViewController;

NS_ASSUME_NONNULL_BEGIN

@interface BuzzAdBenefit: NSObject

+ (instancetype)sharedInstance;

@end

@interface BuzzAdBenefit (Configuration)

+ (void)initializeWithConfig:(BZVConfig *)config;
+ (BZVConfig *)config;

+ (void)loginWithBlock:(BZVLoginRequestBuilderBlock)block onSuccess:(void(^)(void))onSuccess onFailure:(void(^)(NSError *error))onFailure;
+ (void)logout;
+ (BOOL)isLoggedIn;

+ (void)setUserInterfaceStyle:(BZVUserInterfaceStyle)userInterfaceStyle;
+ (BZVUserInterfaceStyle)userInterfaceStyle;

+ (void)setUserPreferences:(nullable BZVUserPreferences *)userPreferences;
+ (nullable BZVUserPreferences *)userPreferences;

+ (void)setLauncher:(id<BZVLauncher>)launcher;
+ (id<BZVLauncher>)launcher;

@end

@interface BuzzAdBenefit (InquiryPage)

+ (void)presentInquiryPageOnViewController:(UIViewController *)viewController;
+ (void)presentInquiryPageOnViewController:(UIViewController *)viewController unitId:(nullable NSString *)unitId;

@end

@interface BuzzAdBenefit (BaseReward)

+ (void)getAvailableFeedBaseRewardForUnitId:(NSString *)unitId onComplete:(void (^)(NSInteger baseReward))onComplete;

@end

@interface BuzzAdBenefit (PrivacyPolicy)

@property (class, nonatomic, strong, readonly) BZVPrivacyPolicyManager *privacyPolicyManager;

@end

NS_ASSUME_NONNULL_END
