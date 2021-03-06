//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString, NSURL, NSURLRequest, UIView, WKFrameInfo, WKSecurityOrigin;
@protocol FBWebView, FBWebViewFrame;

@protocol FBWebViewDelegate <NSObject>

@optional
- (NSString *)fetchTokenToReplaceClickIDAEMPayload:(NSString *)arg1 forDomain:(NSString *)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 cannotStartAutoLoginForURL:(NSURL *)arg2 withError:(long long)arg3;
- (void)webView:(UIView<FBWebView> *)arg1 didStartAutoLoginForURL:(NSURL *)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 didDetermineMIMEType:(NSString *)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 didRunJavaScriptTextInputPanelWithPrompt:(NSString *)arg2 defaultText:(NSString *)arg3 initiatedByFrame:(WKFrameInfo *)arg4 allowed:(_Bool)arg5;
- (void)webView:(UIView<FBWebView> *)arg1 didRunJavaScriptConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 allowed:(_Bool)arg4;
- (void)webView:(UIView<FBWebView> *)arg1 didRunJavaScriptAlertPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 allowed:(_Bool)arg4;
- (void)webView:(UIView<FBWebView> *)arg1 receivedResponseStatusCode:(long long)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 scriptMessageReceivedFrom:(WKSecurityOrigin *)arg2 websiteURL:(NSURL *)arg3 messageName:(NSString *)arg4 messageParams:(NSDictionary *)arg5;
- (void)webViewWebContentProcessDidTerminate:(UIView<FBWebView> *)arg1;
- (void)didTapOnBrowserContent;
- (void)webView:(UIView<FBWebView> *)arg1 contentSizeChanged:(struct CGSize)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 loadingStateChanged:(_Bool)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 progressChanged:(double)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 didDetectQueryParameterAttachmentRejectionOnURL:(NSURL *)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 didReceiveServerRedirectForNavigation:(NSURLRequest *)arg2;
- (void)webViewSelectionChanged:(NSString *)arg1;
- (void)webViewBlockingResourcesLoaded:(UIView<FBWebView> *)arg1;
- (void)webView:(UIView<FBWebView> *)arg1 didFinishNavigationRequest:(NSURLRequest *)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 didFailNavigationRequest:(NSURLRequest *)arg2 withError:(NSError *)arg3;
- (void)webView:(UIView<FBWebView> *)arg1 didStartNavigationRequest:(NSURLRequest *)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 didCommitNavigationRequest:(NSURLRequest *)arg2 forInitialNavigation:(_Bool)arg3;
- (_Bool)webView:(UIView<FBWebView> *)arg1 shouldStartNavigationRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3 sourceFrame:(id <FBWebViewFrame>)arg4 targetFrame:(id <FBWebViewFrame>)arg5;
- (void)webView:(UIView<FBWebView> *)arg1 navigationHistoryChangedCanGoBack:(_Bool)arg2 canGoForward:(_Bool)arg3;
- (void)webView:(UIView<FBWebView> *)arg1 URLChanged:(NSURL *)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 titleChanged:(NSString *)arg2;
@end

