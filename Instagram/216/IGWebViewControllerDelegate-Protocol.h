//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGWebViewController, NSDate, NSError, NSString, NSURL, NSURLRequest, UIView;
@protocol FBWebView;

@protocol IGWebViewControllerDelegate <NSObject>
- (NSDate *)browserStartInitializationTime;
- (void)webViewController:(IGWebViewController *)arg1 URLChanged:(NSURL *)arg2;
- (void)webViewController:(IGWebViewController *)arg1 titleChanged:(NSString *)arg2;
- (void)webViewControllerWillDismiss:(IGWebViewController *)arg1 completion:(void (^)(void))arg2;
- (void)webViewController:(IGWebViewController *)arg1 didRetryLoadRequest:(NSURLRequest *)arg2;
- (void)webViewController:(IGWebViewController *)arg1 didFailNavigationRequest:(NSURLRequest *)arg2 withError:(NSError *)arg3;
- (void)webViewController:(IGWebViewController *)arg1 didCommitNavigationRequestWithWebview:(UIView<FBWebView> *)arg2 forInitialNavigation:(_Bool)arg3;
- (void)webViewController:(IGWebViewController *)arg1 didFinishNavigationRequestWithWebview:(UIView<FBWebView> *)arg2;
- (void)webViewController:(IGWebViewController *)arg1 progressChanged:(double)arg2;
- (void)webViewController:(IGWebViewController *)arg1 didStartNavigationRequest:(NSURLRequest *)arg2;
@end

