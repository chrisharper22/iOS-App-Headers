//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/FBWebView-Protocol.h>

@class FBKVOController, FBTimer, FBWKWebViewDelegateAdaptor, FBWKWebViewNavigationRequest, NSArray, NSMutableSet, NSRegularExpression, NSString, NSURL, NSURLRequest, UIScreenEdgePanGestureRecognizer, UIScrollView, WKBackForwardListItem, WKNavigation, WKWebView;
@protocol FBWebViewAlertHandler, FBWebViewAnalytics, FBWebViewDataStoreContaining, FBWebViewDelegate;

@interface FBWKWebView : UIView <FBWebView>
{
    FBKVOController *_KVOController;
    _Bool _readyToNavigate;
    CDUnknownBlockType _pendingBlockToRunWhenReady;
    FBTimer *_touchEventTimer;
    long long _hackPOSTMethod;
    NSRegularExpression *_linkshimPattern;
    _Bool _youtubeNavigationFix;
    _Bool _hidesTitle;
    _Bool _hidesURL;
    UIScreenEdgePanGestureRecognizer *_backGesture;
    NSMutableSet *_scriptMessageHandlerNames;
    _Bool _isBannerAtTop;
    _Bool _allowPopupsOnlyDuringUserInteraction;
    _Bool _isFollowingInitialURLChain;
    _Bool _hasPendingDecision;
    _Bool _didCommitInitialNavigation;
    _Bool _didReceiveTTI;
    _Bool _hasNonLinkshimInteraction;
    _Bool _allowPopups;
    _Bool _isLoadingBlankPageForResetting;
    _Bool _hasASecondaryNavigation;
    _Bool _enableITPLoginFlow;
    _Bool _enableCookieHeaderFiddlingForITP;
    _Bool _enableReplacingAEMPayloadWithTokenForClickID;
    _Bool _enableClickIDAttachingAfterRedirections;
    UIView *_bannerView;
    long long _displayState;
    UIView *_errorView;
    NSString *_streamingWebViewEndpointURI;
    NSURLRequest *_request;
    NSURL *_URL;
    NSMutableSet *_initialURLChain;
    FBWKWebViewNavigationRequest *_pendingNavigationRequest;
    id <FBWebViewAlertHandler> _alertHandler;
    id <FBWebViewAnalytics> _analytics;
    WKNavigation *_perfLogNavigation;
    NSArray *_hostsForCookieInjector;
    NSString *_paymentAutofillInlineJS;
    NSMutableSet *_paymentAutofillCachedFrames;
    WKBackForwardListItem *_lastItemOfLastSession;
    id <FBWebViewDataStoreContaining> _dataStoreContainer;
    WKWebView *_webView;
    FBWKWebViewDelegateAdaptor *_delegateAdaptor;
}

+ (id)getTextSizeInheritStringValue:(id)arg1 preferredContentSize:(id)arg2;
+ (void)addUnsupportedMIMEType:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) FBWKWebViewDelegateAdaptor *delegateAdaptor; // @synthesize delegateAdaptor=_delegateAdaptor;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool enableClickIDAttachingAfterRedirections; // @synthesize enableClickIDAttachingAfterRedirections=_enableClickIDAttachingAfterRedirections;
@property(nonatomic) _Bool enableReplacingAEMPayloadWithTokenForClickID; // @synthesize enableReplacingAEMPayloadWithTokenForClickID=_enableReplacingAEMPayloadWithTokenForClickID;
@property(nonatomic) _Bool enableCookieHeaderFiddlingForITP; // @synthesize enableCookieHeaderFiddlingForITP=_enableCookieHeaderFiddlingForITP;
@property(nonatomic) _Bool enableITPLoginFlow; // @synthesize enableITPLoginFlow=_enableITPLoginFlow;
@property(retain, nonatomic) id <FBWebViewDataStoreContaining> dataStoreContainer; // @synthesize dataStoreContainer=_dataStoreContainer;
@property(retain, nonatomic) WKBackForwardListItem *lastItemOfLastSession; // @synthesize lastItemOfLastSession=_lastItemOfLastSession;
@property(retain, nonatomic) NSMutableSet *paymentAutofillCachedFrames; // @synthesize paymentAutofillCachedFrames=_paymentAutofillCachedFrames;
@property(retain, nonatomic) NSString *paymentAutofillInlineJS; // @synthesize paymentAutofillInlineJS=_paymentAutofillInlineJS;
@property(nonatomic) _Bool hasASecondaryNavigation; // @synthesize hasASecondaryNavigation=_hasASecondaryNavigation;
@property(nonatomic) _Bool isLoadingBlankPageForResetting; // @synthesize isLoadingBlankPageForResetting=_isLoadingBlankPageForResetting;
@property(readonly, copy, nonatomic) NSArray *hostsForCookieInjector; // @synthesize hostsForCookieInjector=_hostsForCookieInjector;
@property(readonly, nonatomic) _Bool allowPopups; // @synthesize allowPopups=_allowPopups;
@property(retain, nonatomic) WKNavigation *perfLogNavigation; // @synthesize perfLogNavigation=_perfLogNavigation;
@property(retain, nonatomic) id <FBWebViewAnalytics> analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) id <FBWebViewAlertHandler> alertHandler; // @synthesize alertHandler=_alertHandler;
@property(retain, nonatomic) FBWKWebViewNavigationRequest *pendingNavigationRequest; // @synthesize pendingNavigationRequest=_pendingNavigationRequest;
@property(nonatomic) _Bool hasNonLinkshimInteraction; // @synthesize hasNonLinkshimInteraction=_hasNonLinkshimInteraction;
@property(retain, nonatomic) NSMutableSet *initialURLChain; // @synthesize initialURLChain=_initialURLChain;
@property(nonatomic) _Bool didReceiveTTI; // @synthesize didReceiveTTI=_didReceiveTTI;
@property(nonatomic) _Bool didCommitInitialNavigation; // @synthesize didCommitInitialNavigation=_didCommitInitialNavigation;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool hasPendingDecision; // @synthesize hasPendingDecision=_hasPendingDecision;
@property(nonatomic) _Bool isFollowingInitialURLChain; // @synthesize isFollowingInitialURLChain=_isFollowingInitialURLChain;
@property(copy, nonatomic) NSString *streamingWebViewEndpointURI; // @synthesize streamingWebViewEndpointURI=_streamingWebViewEndpointURI;
@property(nonatomic, setter=setAllowPopupsOnlyDuringUserInteraction:) _Bool allowPopupsOnlyDuringUserInteraction; // @synthesize allowPopupsOnlyDuringUserInteraction=_allowPopupsOnlyDuringUserInteraction;
@property(nonatomic) _Bool isBannerAtTop; // @synthesize isBannerAtTop=_isBannerAtTop;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) long long displayState; // @synthesize displayState=_displayState;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
- (void)_touchEventDetector;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tryStoppingAudioPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)injectJavaScript:(id)arg1 withName:(id)arg2 injectionTime:(long long)arg3 forMainFrameOnly:(_Bool)arg4;
- (void)removeScriptMessageHandlerForName:(id)arg1;
- (void)addScriptMessageHandlerForName:(id)arg1;
- (_Bool)hasOnlySecureContent;
- (void)stopLoading;
- (void)reload;
- (void)goForward;
- (void)goBack;
@property(nonatomic) _Bool allowsLinkPreview;
- (id)_findBackGesture;
- (_Bool)_willGoingBackGoToLastSession;
@property(readonly, nonatomic) _Bool canGoBack;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, nonatomic) double zoomScale;
- (_Bool)_tryHackPOSTForRequest:(id)arg1;
- (void)_setReadyToNavigate;
- (void)_runBlockWhenReadyToNavigate:(CDUnknownBlockType)arg1;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (void)safeExecuteJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forceYoutubeRestrictedMode;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_layoutBannerView;
- (void)setOpaque:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)_getTextSizeInheritString:(id)arg1;
- (id)_getSelectionScriptString;
- (id)_TTIMetricScriptString;
- (id)_disableLocationServicesScriptString;
- (id)_injectDeviceIdIfNeededForMobileWeb;
- (void)dealloc;
- (void)resetForReuse;
- (id)initWithProcessPoolContainer:(id)arg1 dataStoreContainer:(id)arg2 frame:(struct CGRect)arg3 analytics:(id)arg4 alertHandler:(id)arg5 hostsForCookieInjector:(id)arg6 enableAutomaticMediaPlayback:(_Bool)arg7 useRegexEnhancedAutofillJS:(_Bool)arg8 useRegexEnhancedAutofillJSV2:(_Bool)arg9 enablePaymentAutofill:(_Bool)arg10 injectPCMJSToAllFrames:(_Bool)arg11 enableTextSizeInherit:(_Bool)arg12 textSizeInheritValues:(id)arg13 allowPIPMediaPlayback:(_Bool)arg14 enableITPLoginFlow:(_Bool)arg15 enableCookieHeaderFiddlingForITP:(_Bool)arg16 enableReplacingAEMPayloadWithTokenForClickID:(_Bool)arg17 enableClickIDAttachingAfterRedirections:(_Bool)arg18;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_navigationHistoryChanged;
- (void)_URLChangedTo:(id)arg1 from:(id)arg2;
- (void)_titleChanged:(id)arg1 from:(id)arg2;
- (void)_contentSizeChanged;
- (void)_estimatedProgressChanged;
- (void)_loadingStateChanged;
@property(nonatomic) _Bool allowsBackForwardNavigationGestures;
- (void)setClickID:(id)arg1;
- (void)setHackPOSTRequestMethod:(long long)arg1;
@property(copy, nonatomic) NSString *customUserAgent;
@property(nonatomic) __weak id <FBWebViewDelegate> delegate;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, copy, nonatomic) NSURL *currentLocationURL;
@property(readonly, copy, nonatomic) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
