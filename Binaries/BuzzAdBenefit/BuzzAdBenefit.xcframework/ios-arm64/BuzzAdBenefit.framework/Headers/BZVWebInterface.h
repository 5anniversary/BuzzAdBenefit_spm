@import Foundation;

@class WKWebView;
@class WKScriptMessage;

extern NSString * const BuzzAdBenefitWebInterfaceName;

@interface BZVWebInterface : NSObject

@property (nonatomic, weak, readonly) WKWebView *webView;

- (instancetype)initWithWebView:(WKWebView *)webView;
- (void)handleScriptMessage:(WKScriptMessage *)message;

@end
