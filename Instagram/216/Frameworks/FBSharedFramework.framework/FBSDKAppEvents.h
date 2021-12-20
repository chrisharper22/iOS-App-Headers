//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKAppEventsState, FBSDKEventBindingManager, FBSDKServerConfiguration, NSString;
@protocol FBSDKATEPublisherCreating, FBSDKATEPublishing, FBSDKAdvertiserIDProviding, FBSDKAppEventDropDetermining><FBSDKAppEventParametersExtracting><FBSDKAppEventsUtility><FBSDKLoggingNotifying, FBSDKAppEventsConfigurationProviding, FBSDKAppEventsParameterProcessing><FBSDKEventsProcessing, FBSDKAppEventsReporter, FBSDKAppEventsStatePersisting, FBSDKAppEventsStateProviding, FBSDKDataPersisting, FBSDKEventProcessing><FBSDKIntegrityParametersProcessorProvider, FBSDKFeatureChecking, FBSDKGraphRequestFactory, FBSDKMetadataIndexing, FBSDKPaymentObserving, FBSDKServerConfigurationProviding, FBSDKSettings, FBSDKSourceApplicationTracking><FBSDKTimeSpentRecording, FBSDKUserDataPersisting, OS_dispatch_source;

@interface FBSDKAppEvents : NSObject
{
    NSString *_userID;
    _Bool _isConfigured;
    _Bool __isUnityInitialized;
    unsigned long long _flushBehavior;
    long long _applicationState;
    NSString *_pushNotificationsDeviceTokenString;
    NSObject<OS_dispatch_source> *_flushTimer;
    FBSDKServerConfiguration *_serverConfiguration;
    FBSDKAppEventsState *_appEventsState;
    Class _gateKeeperManager;
    id <FBSDKAppEventsConfigurationProviding> _appEventsConfigurationProvider;
    id <FBSDKServerConfigurationProviding> _serverConfigurationProvider;
    id <FBSDKGraphRequestFactory> _graphRequestFactory;
    id <FBSDKFeatureChecking> _featureChecker;
    id <FBSDKDataPersisting> _primaryDataStore;
    Class _logger;
    id <FBSDKSettings> _settings;
    id <FBSDKPaymentObserving> _paymentObserver;
    id <FBSDKSourceApplicationTracking><FBSDKTimeSpentRecording> _timeSpentRecorder;
    id <FBSDKAppEventsStatePersisting> _appEventsStateStore;
    id <FBSDKAppEventsParameterProcessing><FBSDKEventsProcessing> _eventDeactivationParameterProcessor;
    id <FBSDKAppEventsParameterProcessing><FBSDKEventsProcessing> _restrictiveDataFilterParameterProcessor;
    id <FBSDKATEPublisherCreating> _atePublisherFactory;
    id <FBSDKATEPublishing> _atePublisher;
    id <FBSDKAppEventsStateProviding> _appEventsStateProvider;
    id <FBSDKAdvertiserIDProviding> _advertiserIDProvider;
    id <FBSDKUserDataPersisting> _userDataStore;
    id <FBSDKAppEventDropDetermining><FBSDKAppEventParametersExtracting><FBSDKAppEventsUtility><FBSDKLoggingNotifying> _appEventsUtility;
    id <FBSDKEventProcessing><FBSDKIntegrityParametersProcessorProvider> _onDeviceMLModelManager;
    id <FBSDKMetadataIndexing> _metadataIndexer;
    id <FBSDKAppEventsReporter> _skAdNetworkReporter;
    Class _codelessIndexer;
    Class _swizzler;
    FBSDKEventBindingManager *_eventBindingManager;
    Class _aemReporter;
}

+ (id)requestForCustomAudienceThirdPartyIDWithAccessToken:(id)arg1;
+ (id)shared;
+ (void)sendEventBindingsToUnity;
+ (void)setIsUnityInit:(_Bool)arg1;
+ (void)augmentHybridWKWebView:(id)arg1;
+ (id)anonymousID;
+ (void)clearUserDataForType:(id)arg1;
+ (void)setUserData:(id)arg1 forType:(id)arg2;
+ (void)clearUserData;
+ (id)getUserData;
+ (void)setUserEmail:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 phone:(id)arg4 dateOfBirth:(id)arg5 gender:(id)arg6 city:(id)arg7 state:(id)arg8 zip:(id)arg9 country:(id)arg10;
+ (void)clearUserID;
+ (void)setUserID:(id)arg1;
+ (id)userID;
+ (void)flush;
+ (void)setLoggingOverrideAppID:(id)arg1;
+ (id)loggingOverrideAppID;
+ (void)setFlushBehavior:(unsigned long long)arg1;
+ (unsigned long long)flushBehavior;
+ (void)setPushNotificationsDeviceTokenString:(id)arg1;
+ (void)setPushNotificationsDeviceToken:(id)arg1;
+ (void)activateApp;
+ (void)logProductItem:(id)arg1 availability:(unsigned long long)arg2 condition:(unsigned long long)arg3 description:(id)arg4 imageLink:(id)arg5 link:(id)arg6 title:(id)arg7 priceAmount:(double)arg8 currency:(id)arg9 gtin:(id)arg10 mpn:(id)arg11 brand:(id)arg12 parameters:(id)arg13;
+ (void)logPushNotificationOpen:(id)arg1 action:(id)arg2;
+ (void)logPushNotificationOpen:(id)arg1;
+ (void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
+ (void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3;
+ (void)logPurchase:(double)arg1 currency:(id)arg2;
+ (void)logEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
+ (void)logEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3;
+ (void)logEvent:(id)arg1 parameters:(id)arg2;
+ (void)logEvent:(id)arg1 valueToSum:(double)arg2;
+ (void)logEvent:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) Class aemReporter; // @synthesize aemReporter=_aemReporter;
@property(retain, nonatomic) FBSDKEventBindingManager *eventBindingManager; // @synthesize eventBindingManager=_eventBindingManager;
@property(retain, nonatomic) Class swizzler; // @synthesize swizzler=_swizzler;
@property(retain, nonatomic) Class codelessIndexer; // @synthesize codelessIndexer=_codelessIndexer;
@property(retain, nonatomic) id <FBSDKAppEventsReporter> skAdNetworkReporter; // @synthesize skAdNetworkReporter=_skAdNetworkReporter;
@property(retain, nonatomic) id <FBSDKMetadataIndexing> metadataIndexer; // @synthesize metadataIndexer=_metadataIndexer;
@property(retain, nonatomic) id <FBSDKEventProcessing><FBSDKIntegrityParametersProcessorProvider> onDeviceMLModelManager; // @synthesize onDeviceMLModelManager=_onDeviceMLModelManager;
@property(retain, nonatomic) id <FBSDKAppEventDropDetermining><FBSDKAppEventParametersExtracting><FBSDKAppEventsUtility><FBSDKLoggingNotifying> appEventsUtility; // @synthesize appEventsUtility=_appEventsUtility;
@property(retain, nonatomic) id <FBSDKUserDataPersisting> userDataStore; // @synthesize userDataStore=_userDataStore;
@property(retain, nonatomic) id <FBSDKAdvertiserIDProviding> advertiserIDProvider; // @synthesize advertiserIDProvider=_advertiserIDProvider;
@property(retain, nonatomic) id <FBSDKAppEventsStateProviding> appEventsStateProvider; // @synthesize appEventsStateProvider=_appEventsStateProvider;
@property(retain, nonatomic) id <FBSDKATEPublishing> atePublisher; // @synthesize atePublisher=_atePublisher;
@property(retain, nonatomic) id <FBSDKATEPublisherCreating> atePublisherFactory; // @synthesize atePublisherFactory=_atePublisherFactory;
@property(retain, nonatomic) id <FBSDKAppEventsParameterProcessing><FBSDKEventsProcessing> restrictiveDataFilterParameterProcessor; // @synthesize restrictiveDataFilterParameterProcessor=_restrictiveDataFilterParameterProcessor;
@property(retain, nonatomic) id <FBSDKAppEventsParameterProcessing><FBSDKEventsProcessing> eventDeactivationParameterProcessor; // @synthesize eventDeactivationParameterProcessor=_eventDeactivationParameterProcessor;
@property(retain, nonatomic) id <FBSDKAppEventsStatePersisting> appEventsStateStore; // @synthesize appEventsStateStore=_appEventsStateStore;
@property(retain, nonatomic) id <FBSDKSourceApplicationTracking><FBSDKTimeSpentRecording> timeSpentRecorder; // @synthesize timeSpentRecorder=_timeSpentRecorder;
@property(retain, nonatomic) id <FBSDKPaymentObserving> paymentObserver; // @synthesize paymentObserver=_paymentObserver;
@property(retain, nonatomic) id <FBSDKSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) Class logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <FBSDKDataPersisting> primaryDataStore; // @synthesize primaryDataStore=_primaryDataStore;
@property(retain, nonatomic) id <FBSDKFeatureChecking> featureChecker; // @synthesize featureChecker=_featureChecker;
@property(retain, nonatomic) id <FBSDKGraphRequestFactory> graphRequestFactory; // @synthesize graphRequestFactory=_graphRequestFactory;
@property(retain, nonatomic) id <FBSDKServerConfigurationProviding> serverConfigurationProvider; // @synthesize serverConfigurationProvider=_serverConfigurationProvider;
@property(retain, nonatomic) id <FBSDKAppEventsConfigurationProviding> appEventsConfigurationProvider; // @synthesize appEventsConfigurationProvider=_appEventsConfigurationProvider;
@property(retain, nonatomic) Class gateKeeperManager; // @synthesize gateKeeperManager=_gateKeeperManager;
@property(nonatomic) _Bool _isUnityInitialized; // @synthesize _isUnityInitialized=__isUnityInitialized;
@property(retain, nonatomic) FBSDKAppEventsState *appEventsState; // @synthesize appEventsState=_appEventsState;
@property(retain, nonatomic) FBSDKServerConfiguration *serverConfiguration; // @synthesize serverConfiguration=_serverConfiguration;
@property(nonatomic) _Bool isConfigured; // @synthesize isConfigured=_isConfigured;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *flushTimer; // @synthesize flushTimer=_flushTimer;
@property(copy, nonatomic) NSString *pushNotificationsDeviceTokenString; // @synthesize pushNotificationsDeviceTokenString=_pushNotificationsDeviceTokenString;
@property(nonatomic) long long applicationState; // @synthesize applicationState=_applicationState;
@property(nonatomic) unsigned long long flushBehavior; // @synthesize flushBehavior=_flushBehavior;
- (id)requestForCustomAudienceThirdPartyIDWithAccessToken:(id)arg1;
- (void)validateConfiguration;
- (void)applicationMovingFromActiveStateOrTerminating;
- (void)applicationDidBecomeActive;
- (void)flushTimerFired:(id)arg1;
- (void)handleActivitiesPostCompletion:(id)arg1 loggingEntry:(id)arg2 appEventsState:(id)arg3;
- (void)flushOnMainQueue:(id)arg1 forReason:(unsigned long long)arg2;
- (void)checkPersistedEvents;
- (void)logEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 isImplicitlyLogged:(_Bool)arg4 accessToken:(id)arg5;
- (void)fetchServerConfiguration:(CDUnknownBlockType)arg1;
- (void)enableCodelessEvents;
- (void)appendInstallTimestamp:(id)arg1;
- (void)publishATE;
- (void)publishInstall;
- (id)appID;
- (void)registerAutoResetSourceApplication;
- (void)setSourceApplication:(id)arg1 isFromAppLink:(_Bool)arg2;
- (void)setSourceApplication:(id)arg1 openURL:(id)arg2;
- (void)flushForReason:(unsigned long long)arg1;
- (void)logImplicitEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
- (void)logInternalEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 isImplicitlyLogged:(_Bool)arg4 accessToken:(id)arg5;
- (void)logInternalEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3 isImplicitlyLogged:(_Bool)arg4;
- (void)logInternalEvent:(id)arg1 parameters:(id)arg2 isImplicitlyLogged:(_Bool)arg3 accessToken:(id)arg4;
- (void)logInternalEvent:(id)arg1 parameters:(id)arg2 isImplicitlyLogged:(_Bool)arg3;
- (void)logInternalEvent:(id)arg1 valueToSum:(double)arg2 isImplicitlyLogged:(_Bool)arg3;
- (void)logInternalEvent:(id)arg1 isImplicitlyLogged:(_Bool)arg2;
- (void)configureNonTVComponentsWithOnDeviceMLModelManager:(id)arg1 metadataIndexer:(id)arg2 skAdNetworkReporter:(id)arg3 codelessIndexer:(Class)arg4 swizzler:(Class)arg5 aemReporter:(Class)arg6;
- (void)configureWithGateKeeperManager:(Class)arg1 appEventsConfigurationProvider:(id)arg2 serverConfigurationProvider:(id)arg3 graphRequestFactory:(id)arg4 featureChecker:(id)arg5 primaryDataStore:(id)arg6 logger:(Class)arg7 settings:(id)arg8 paymentObserver:(id)arg9 timeSpentRecorder:(id)arg10 appEventsStateStore:(id)arg11 eventDeactivationParameterProcessor:(id)arg12 restrictiveDataFilterParameterProcessor:(id)arg13 atePublisherFactory:(id)arg14 appEventsStateProvider:(id)arg15 advertiserIDProvider:(id)arg16 userDataStore:(id)arg17 appEventsUtility:(id)arg18;
- (void)sendEventBindingsToUnity;
- (void)setIsUnityInitialized:(_Bool)arg1;
- (void)augmentHybridWebView:(id)arg1;
@property(readonly, nonatomic) NSString *anonymousID;
- (void)clearUserDataForType:(id)arg1;
- (void)setUserData:(id)arg1 forType:(id)arg2;
- (void)clearUserData;
- (id)getUserData;
- (void)setUserEmail:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 phone:(id)arg4 dateOfBirth:(id)arg5 gender:(id)arg6 city:(id)arg7 state:(id)arg8 zip:(id)arg9 country:(id)arg10;
@property(copy, nonatomic) NSString *userID;
- (void)flush;
@property(copy, nonatomic) NSString *loggingOverrideAppID;
- (void)setPushNotificationsDeviceToken:(id)arg1;
- (void)activateApp;
- (void)logProductItem:(id)arg1 availability:(unsigned long long)arg2 condition:(unsigned long long)arg3 description:(id)arg4 imageLink:(id)arg5 link:(id)arg6 title:(id)arg7 priceAmount:(double)arg8 currency:(id)arg9 gtin:(id)arg10 mpn:(id)arg11 brand:(id)arg12 parameters:(id)arg13;
- (void)logPushNotificationOpen:(id)arg1 action:(id)arg2;
- (void)logPushNotificationOpen:(id)arg1;
- (void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
- (void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3;
- (void)logPurchase:(double)arg1 currency:(id)arg2;
- (void)logEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
- (void)logEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3;
- (void)logEvent:(id)arg1 parameters:(id)arg2;
- (void)logEvent:(id)arg1 valueToSum:(double)arg2;
- (void)logEvent:(id)arg1;
- (void)dealloc;
- (void)startObservingApplicationLifecycleNotifications;
- (id)initWithFlushBehavior:(unsigned long long)arg1 flushPeriodInSeconds:(int)arg2;
- (id)init;

@end

