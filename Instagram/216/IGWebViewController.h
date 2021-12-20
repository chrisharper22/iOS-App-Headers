//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "FBPassLoaderDelegate-Protocol.h"
#import "FBWebViewDelegate-Protocol.h"
#import "IABAutofillControllerDelegate-Protocol.h"
#import "IABPCMWebViewControllerDelegate-Protocol.h"
#import "IGBrowserSettingsViewControllerDelegate-Protocol.h"
#import "IGIABAutofillControllerDelegate-Protocol.h"
#import "IGRefreshControlContentInsetDataSource-Protocol.h"
#import "IGWebViewErrorPageDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBBrowserIntegrityLoggingController, FBPassLoader, FBPayIAWMessageHandler, FBTimer, IABLoggingCoordinator, IGIABAutofillController, IGIABPCMDataManager, IGInstantExperienceBrowserSetupManager, IGNavigationController, IGPrivacyCookieConsentHelper, IGRefreshControl, IGUserSession, IGWebViewErrorPage, NSArray, NSDate, NSMutableArray, NSNumber, NSString, NSURL, NSURLRequest, UILongPressGestureRecognizer, UIScrollView, UIView;
@protocol ACSClientConforming, FBScriptMessageHandling, FBWebView, IABPCMControllerConforming, IGWebViewControllerChromeDelegate, IGWebViewControllerDelegate, IGWebViewControllerScrollDelegate;

@interface IGWebViewController : IGViewController <FBPassLoaderDelegate, FBWebViewDelegate, IGWebViewErrorPageDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, IGRefreshControlContentInsetDataSource, IGIABAutofillControllerDelegate, IABAutofillControllerDelegate, IGBrowserSettingsViewControllerDelegate, IABPCMWebViewControllerDelegate>
{
    NSURLRequest *_urlRequest;
    IGWebViewErrorPage *_errorPage;
    FBPassLoader *_passLoader;
    id <FBScriptMessageHandling> _scriptMessageHandler;
    unsigned long long _options;
    IGInstantExperienceBrowserSetupManager *_ixSetupManager;
    FBBrowserIntegrityLoggingController *_browserIntegrityController;
    IABLoggingCoordinator *_loggingCoordinator;
    UILongPressGestureRecognizer *_touchDownGestureRecognizer;
    _Bool _didInitialScroll;
    unsigned long long _numberOfCloses;
    IGRefreshControl *_refreshControl;
    IGIABAutofillController *_autofillController;
    NSNumber *_browserHistoryItemId;
    IGNavigationController *_browserSettingsNavigation;
    IGIABPCMDataManager *_iabPCMDataManager;
    NSString *_adDestination;
    NSNumber *_adCampaignID;
    struct __CFHost *_asyncDNSHost;
    _Bool _isDNSPrefetchEnabled;
    long long _numberOfRetry;
    FBTimer *_retryTimer;
    NSDate *_domLoadedTime;
    NSString *_browserSessionAdTrackingToken;
    _Bool _contentSizeChangeIsLogged;
    _Bool _shouldHidePresentedErrorPageOnSuccessfulNavigation;
    id <ACSClientConforming> _acsSecurityTokenClient;
    id <IGWebViewControllerDelegate> _delegate;
    NSMutableArray *_organicRedirectChain;
    FBPayIAWMessageHandler *_fbpayBrigeMessageHandler;
    IGPrivacyCookieConsentHelper *_igPrivacyCookieConsentHelper;
    _Bool _shouldHideToolbarWhenViewAppear;
    _Bool _browserIsVisible;
    id <IGWebViewControllerScrollDelegate> _scrollDelegate;
    id <IGWebViewControllerChromeDelegate> _chromeDelegate;
    UIView<FBWebView> *_webView;
    unsigned long long _loadState;
    IGUserSession *_userSession;
    NSURL *_redirectURL;
    id <IABPCMControllerConforming> _iabPCMController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IABPCMControllerConforming> iabPCMController; // @synthesize iabPCMController=_iabPCMController;
@property(nonatomic) _Bool browserIsVisible; // @synthesize browserIsVisible=_browserIsVisible;
@property(nonatomic) _Bool shouldHideToolbarWhenViewAppear; // @synthesize shouldHideToolbarWhenViewAppear=_shouldHideToolbarWhenViewAppear;
@property(readonly, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(readonly, nonatomic) UIView<FBWebView> *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <IGWebViewControllerChromeDelegate> chromeDelegate; // @synthesize chromeDelegate=_chromeDelegate;
@property(nonatomic) __weak id <IGWebViewControllerScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (double)idleTopContentInsetForRefreshControl:(id)arg1;
- (void)_startDNSPrefetchWithRequest:(id)arg1;
- (void)_cancelDNSPrefetchIfNecessary;
- (void)_injectAutofillJSToWebViewIfNecessary:(id)arg1;
- (void)_retryReloadWithType:(unsigned long long)arg1;
- (void)_handlePostNavigationWithURL:(id)arg1 type:(unsigned long long)arg2;
- (void)_registerMessagesForScriptMessageHandlerIfNecessary;
- (void)didTouchDown:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_applicationWillResignActive:(id)arg1;
- (void)passLoader:(id)arg1 didFinishLoadingPass:(id)arg2 error:(id)arg3;
- (void)passLoader:(id)arg1 didReceiveUnsupportedMIMEType:(id)arg2;
- (void)openBrowserSettingsForSoftKeyboard;
- (void)webViewErrorPageDidTapRetry:(id)arg1;
- (void)_cancelPendingPassLoadIfNecessary;
- (void)_loadMIMETypeWithRequest:(id)arg1;
- (void)_handlePageError:(id)arg1;
- (void)_removeErrorPageIfNecessary;
- (void)_removeScriptHandlerForExpressCheckout;
- (void)_injectScriptHandlerForExpressCheckout;
- (void)_removeInjectedJSForPCM;
- (void)_injectJSForPCM;
- (void)fetchAdData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sendClickIDData:(id)arg1 AEMPayload:(id)arg2 forACSToken:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)sendConversion:(id)arg1 delay:(long long)arg2 delayFlow:(unsigned long long)arg3 callback:(CDUnknownBlockType)arg4;
- (_Bool)shouldLogJSLocalComputation;
- (_Bool)shouldUseJSLocalComputation;
- (void)fetchConversionDataWithPixelID:(id)arg1 event:(id)arg2 customData:(id)arg3 currentUrl:(id)arg4 clickInfo:(id)arg5 crossDomainEnabled:(_Bool)arg6 callback:(CDUnknownBlockType)arg7;
- (void)browserSettingsViewControllerDidTapOnLinkedText:(id)arg1;
- (void)browserSettingsViewControllerDidRequestClearBrowserData;
- (void)browserSettingsViewControllerDidRequestEditPaymentAutofillData;
- (void)browserSettingsViewControllerDidRequestSetUserPaymentAutofillEnabled:(_Bool)arg1;
- (void)browserSettingsViewControllerDidRequestSetUserContactAutofillEnabled:(_Bool)arg1;
- (id)browserSettingsViewControllerDidRequestCurrentSettingsState;
- (void)browserSettingsViewControllerDidRequestEditContactAutofillData;
- (void)autofillControllerDidInteractWithForm;
- (id)autofillControllerDidRequestDOMLoadedTime;
- (void)autofillControllerDidFinishFetchingOptOutResult;
- (id)fetchTokenToReplaceClickIDAEMPayload:(id)arg1 forDomain:(id)arg2;
- (void)webView:(id)arg1 receivedResponseStatusCode:(long long)arg2;
- (void)webView:(id)arg1 scriptMessageReceivedFrom:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5;
- (void)webViewBlockingResourcesLoaded:(id)arg1;
- (void)webView:(id)arg1 URLChanged:(id)arg2;
- (void)webView:(id)arg1 titleChanged:(id)arg2;
- (void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didCommitNavigationRequest:(id)arg2 forInitialNavigation:(_Bool)arg3;
- (void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2;
- (void)webView:(id)arg1 contentSizeChanged:(struct CGSize)arg2;
- (void)webView:(id)arg1 progressChanged:(double)arg2;
- (void)webView:(id)arg1 loadingStateChanged:(_Bool)arg2;
- (void)webView:(id)arg1 didStartNavigationRequest:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(long long)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(readonly, nonatomic) NSArray *organicRedirectChain;
- (_Bool)shouldApplyEPDPolicy;
- (void)setupSessionWithBrowserSessionID:(id)arg1 browserHistoryItemId:(id)arg2 options:(unsigned long long)arg3 loggingCoordinator:(id)arg4 scriptMessageHandler:(id)arg5 browserIntegrityController:(id)arg6 redirectURL:(id)arg7;
- (void)_setupFbPayBridge;
- (void)openBrowserSettings;
@property(readonly, nonatomic) UIScrollView *webViewScrollView;
@property(readonly, nonatomic) NSURL *currentLocationURL;
- (void)cleanUpClosedWebView;
- (void)removeErrorPageIfNecessary;
- (void)reloadWebviewWithRefreshType:(unsigned long long)arg1;
- (void)_loadRequest:(id)arg1;
- (void)loadRequest:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)clearWebViewCache;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_pullToRefresh:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 browserSessionID:(id)arg2 browserSessionAdTrackingToken:(id)arg3 browserHistoryItemId:(id)arg4 analyticsModule:(id)arg5 options:(unsigned long long)arg6 loggingCoordinator:(id)arg7 scriptMessageHandler:(id)arg8 browserIntegrityController:(id)arg9 redirectURL:(id)arg10 adDestination:(id)arg11 adCampaignID:(id)arg12 delegate:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
