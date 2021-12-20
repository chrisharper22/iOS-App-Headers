//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IABPCMControllerConforming-Protocol.h"
#import "IABPCMJSMessageHandlerDelegate-Protocol.h"

@class FBStashSQLite, IABAEMPixelEventProcessor, IABLoggingCoordinator, IABPCMAdConversionsStorage, IABPCMEventCounters, IABPCMJSMessageHandler, IABPCMSecurityTokenController, NSArray, NSDate, NSMutableDictionary, NSNumber, NSString;
@protocol IABPCMWebViewControllerDelegate;

@interface IABPCMController : NSObject <IABPCMControllerConforming, IABPCMJSMessageHandlerDelegate>
{
    IABPCMSecurityTokenController *_securityTokenController;
    IABPCMJSMessageHandler *_jsMessageHandler;
    IABPCMAdConversionsStorage *_conversionsStorage;
    FBStashSQLite *_adClickStash;
    IABAEMPixelEventProcessor *_pixelEventsProcessor;
    IABLoggingCoordinator *_loggingCoordinator;
    id <IABPCMWebViewControllerDelegate> _delegate;
    NSString *_adClientToken;
    NSDate *_userClickExpirationTimestamp;
    long long _priority;
    long long _conversionId;
    NSMutableDictionary *_queuedConversions;
    _Bool _conversionIsSending;
    _Bool _invalidAdClickForOrganicConversion;
    unsigned long long _delayFlow;
    long long _adClickExpirationWindow;
    _Bool _advertiserIDEnabled;
    _Bool _optimizedEventEnabled;
    NSArray *_clickInfo;
    _Bool _clickInfosFetchedWithValidAdDestination;
    _Bool _crossDomainEnabled;
    NSString *_clickIDToken;
    NSString *_AEMPayload;
    long long _debugCustomConsumptionDelay;
    _Bool _browserIsVisible;
    _Bool _userIsInScopeOfCCPA;
    IABPCMEventCounters *_eventCounters;
    NSString *_adDestination;
    NSNumber *_campaignId;
    NSString *_securityToken;
}

+ (id)supportedMessageNames;
- (void).cxx_destruct;
@property(nonatomic) _Bool userIsInScopeOfCCPA; // @synthesize userIsInScopeOfCCPA=_userIsInScopeOfCCPA;
@property(readonly, copy, nonatomic) NSString *securityToken; // @synthesize securityToken=_securityToken;
@property(readonly, nonatomic) NSNumber *campaignId; // @synthesize campaignId=_campaignId;
@property(readonly, copy, nonatomic) NSString *adDestination; // @synthesize adDestination=_adDestination;
@property(nonatomic) _Bool browserIsVisible; // @synthesize browserIsVisible=_browserIsVisible;
@property(readonly, nonatomic) IABPCMEventCounters *eventCounters; // @synthesize eventCounters=_eventCounters;
- (void)_sendClickIDDataIfNeeded;
- (id)_generateClickInfoForKeys:(id)arg1;
- (id)_generateClickInfo;
- (id)_earliestClickForDomain:(id)arg1;
- (void)_logPixelIDForImgPixelJSBridge:(id)arg1;
- (void)_logEvent:(id)arg1;
- (void)_saveConversion:(id)arg1 forKey:(id)arg2;
- (void)_saveConversion:(id)arg1 forAdDestination:(id)arg2;
- (id)_conversionForAdDestination:(id)arg1 advertiserID:(id)arg2;
- (void)_handleConversionSending:(id)arg1 result:(unsigned long long)arg2;
- (_Bool)_sendConversion:(id)arg1;
- (void)_processQueuedConversionIfNeeded;
- (void)_handleFetchedConversionData:(id)arg1;
- (_Bool)_isOrganicCase;
- (_Bool)_adDataIsFetched;
- (void)_fetchAdDataIfNeeded;
- (id)_tryGenerateCombinedToken;
- (_Bool)_shouldLogJSLocalComputation:(id)arg1;
- (_Bool)_shouldUseJSLocalComputation:(id)arg1;
- (unsigned long long)attributeConversionIfNeeded:(id)arg1;
- (void)jsMessageHandlerDidReceiveImgPixelData:(id)arg1 withCurrentWebsiteURL:(id)arg2;
- (void)_processPixelData:(id)arg1 withCurrentWebsiteURL:(id)arg2;
- (void)jsMessageHandlerDidReceivePixelData:(id)arg1 withCurrentWebsiteURL:(id)arg2;
- (void)jsMessageHandlerDidReceiveGetNonceMessageWithParams:(id)arg1 currentWebsiteURL:(id)arg2;
- (void)jsMessageHandlerDidReceiveInitializationMessageWithCallbackHandlerName:(id)arg1 currentWebsiteURL:(id)arg2;
- (void)jsMessageHandlerDidFailToProcessMessageWithReason:(unsigned long long)arg1 error:(id)arg2 currentWebsiteURL:(id)arg3;
- (_Bool)requireDelegateSetUp;
- (_Bool)supportsCallback;
- (_Bool)requireDomainToBeWhitelisted;
- (_Bool)requireHttps;
- (_Bool)requireAppId;
- (void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5;
- (id)clickIDTokenForDomain:(id)arg1;
- (void)setAEMPayload:(id)arg1;
- (id)supportedEvents;
- (void)maybeInjectJSScriptIntoWebView:(id)arg1 forURLDomain:(id)arg2;
- (id)initWithAdClientToken:(id)arg1 userClickTimestamp:(id)arg2 adClickExpirationWindow:(long long)arg3 delayFlow:(unsigned long long)arg4 delegate:(id)arg5 loggingCoordinator:(id)arg6 conversionsStorage:(id)arg7 adClickStash:(id)arg8 securityTokenProvider:(id)arg9 pixelEventsProcessor:(id)arg10 advertiserIDEnabled:(_Bool)arg11 optimizedEventEnabled:(_Bool)arg12 debugCustomConsumptionDelay:(long long)arg13 crossDomainEnabled:(_Bool)arg14;
- (id)initWithAdClientToken:(id)arg1 userClickTimestamp:(id)arg2 adClickExpirationWindow:(long long)arg3 delayFlow:(unsigned long long)arg4 delegate:(id)arg5 loggingCoordinator:(id)arg6 securityTokenProvider:(id)arg7 advertiserIDEnabled:(_Bool)arg8 optimizedEventEnabled:(_Bool)arg9 debugCustomConsumptionDelay:(long long)arg10 crossDomainEnabled:(_Bool)arg11 delayedConversionsProcessingEnabled:(_Bool)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
