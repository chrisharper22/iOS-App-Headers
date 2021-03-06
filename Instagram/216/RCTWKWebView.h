//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTView.h"

#import "RCTAutoInsetsProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, UIColor, WKNavigationAction, WKWebView;

@interface RCTWKWebView : RCTView <WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler, UIScrollViewDelegate, RCTAutoInsetsProtocol>
{
    UIColor *_savedBackgroundColor;
    CDUnknownBlockType _decisionHandler;
    WKNavigationAction *_navigationAction;
    _Bool _alwaysReloadOnSourceChange;
    _Bool _messagingEnabled;
    _Bool _scrollEnabled;
    _Bool _allowsInlineMediaPlayback;
    _Bool _bounces;
    _Bool _mediaPlaybackRequiresUserAction;
    _Bool _automaticallyAdjustContentInsets;
    _Bool _useSharedCookieStorage;
    _Bool _incognito;
    NSDictionary *_source;
    NSString *_injectedJavaScript;
    double _decelerationRate;
    unsigned long long _dataDetectorTypes;
    NSArray *_cookies;
    CDUnknownBlockType _onLoadingStart;
    CDUnknownBlockType _onLoadingFinish;
    CDUnknownBlockType _onLoadingError;
    CDUnknownBlockType _onShouldStartLoadWithRequest;
    CDUnknownBlockType _onMessage;
    WKWebView *_webView;
    struct UIEdgeInsets _contentInset;
}

+ (void)setClientAuthenticationCredential:(id)arg1;
+ (_Bool)dynamicallyLoadWebKitIfAvailable;
- (void).cxx_destruct;
@property(copy, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType onMessage; // @synthesize onMessage=_onMessage;
@property(copy, nonatomic) CDUnknownBlockType onShouldStartLoadWithRequest; // @synthesize onShouldStartLoadWithRequest=_onShouldStartLoadWithRequest;
@property(copy, nonatomic) CDUnknownBlockType onLoadingError; // @synthesize onLoadingError=_onLoadingError;
@property(copy, nonatomic) CDUnknownBlockType onLoadingFinish; // @synthesize onLoadingFinish=_onLoadingFinish;
@property(copy, nonatomic) CDUnknownBlockType onLoadingStart; // @synthesize onLoadingStart=_onLoadingStart;
@property(nonatomic) _Bool incognito; // @synthesize incognito=_incognito;
@property(copy, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
@property(nonatomic) _Bool useSharedCookieStorage; // @synthesize useSharedCookieStorage=_useSharedCookieStorage;
@property(nonatomic) _Bool automaticallyAdjustContentInsets; // @synthesize automaticallyAdjustContentInsets=_automaticallyAdjustContentInsets;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction; // @synthesize mediaPlaybackRequiresUserAction=_mediaPlaybackRequiresUserAction;
@property(nonatomic) _Bool bounces; // @synthesize bounces=_bounces;
@property(nonatomic) _Bool allowsInlineMediaPlayback; // @synthesize allowsInlineMediaPlayback=_allowsInlineMediaPlayback;
@property(nonatomic) double decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(copy, nonatomic) NSString *injectedJavaScript; // @synthesize injectedJavaScript=_injectedJavaScript;
@property(nonatomic) _Bool messagingEnabled; // @synthesize messagingEnabled=_messagingEnabled;
@property(nonatomic) _Bool alwaysReloadOnSourceChange; // @synthesize alwaysReloadOnSourceChange=_alwaysReloadOnSourceChange;
@property(copy, nonatomic) NSDictionary *source; // @synthesize source=_source;
- (void)stopLoading;
- (void)reload;
- (void)goBack;
- (void)goForward;
- (void)injectJavaScript:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)evaluateJS:(id)arg1 thenCall:(CDUnknownBlockType)arg2;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)shouldStartLoad:(_Bool)arg1;
- (id)eventForNavigationAction:(id)arg1;
- (id)baseEvent;
- (void)layoutSubviews;
- (void)postMessage:(id)arg1 targetOrigin:(id)arg2;
- (void)postMessage:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)visitSource;
- (void)refreshContentInset;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

