//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectInteropGatingStatusProvider-Protocol.h>

@class IGUserDefaults, NSString;
@protocol IGAPIClient, IGAnalyticsEventLoggingProtocol, IGDirectInteropStatusAnnouncer, IGUserFeatureSets;

@interface IGDirectInteropGatingManager : NSObject <IGDirectInteropGatingStatusProvider>
{
    id <IGUserFeatureSets> _featureSets;
    id <IGAPIClient> _networker;
    _Bool _hasInteropUpgraded;
    id <IGDirectInteropStatusAnnouncer> _interopStatusAnnouncer;
    IGUserDefaults *_userDefaults;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    long long _interopGatingStatus;
    long long _groupInteropGatingStatus;
}

- (void).cxx_destruct;
@property long long groupInteropGatingStatus; // @synthesize groupInteropGatingStatus=_groupInteropGatingStatus;
@property long long interopGatingStatus; // @synthesize interopGatingStatus=_interopGatingStatus;
- (void)_logInteropEventWithUpgradeSource:(id)arg1 upsellImpressionDuration:(id)arg2 totalVideosSeen:(id)arg3 interstitialType:(id)arg4 eventType:(id)arg5 eventName:(id)arg6;
- (void)_logInteropUpgradeWithUpgradeSource:(id)arg1 upsellImpressionDuration:(double)arg2 totalVideosSeen:(id)arg3 interstitialType:(id)arg4 eventName:(id)arg5 enableInterop:(_Bool)arg6;
- (void)_fireInteropUpgradeAnnouncementIfNeededWithPreviousStatus:(long long)arg1;
- (void)_updateGroupInteropGatingStatus:(_Bool)arg1;
- (void)_updateCurrentStatus;
- (_Bool)_isEligibleForGroupInteropGating:(_Bool)arg1;
- (void)logInteropEventWithUpgradeSource:(id)arg1 upsellImpressionDuration:(id)arg2 totalVideosSeen:(id)arg3 interstitialType:(id)arg4 eventName:(id)arg5 isUpsellEvent:(_Bool)arg6;
- (void)_updateInteropEnabledSetting:(_Bool)arg1 upsellImpressionDuration:(double)arg2 totalVideosSeen:(id)arg3 interstitialType:(id)arg4 sourceIdentifier:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)_handleInteropStatusSyncResponse:(id)arg1;
- (void)_handleInteropAutoUpgradeStatusSyncResponse:(id)arg1;
- (_Bool)hasInteropUpgradedFromUserDefaults;
- (void)upgradeWithSourceIdentifier:(id)arg1 upsellImpressionDuration:(double)arg2 totalVideosSeen:(id)arg3 interstitialType:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)disableInteropWithDowngradeSource:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_updateCurrentInteropAutoUpgradeStatusIfNeeded;
- (void)_updateCurrentInteropUpgradeStatusIfNeeded;
- (void)updateCurrentInteropUpgradeStatusIfNeeded;
- (void)removeInteropUpgradeStatusListener:(id)arg1;
- (void)addInteropUpgradeStatusListener:(id)arg1;
- (id)initWithFeatureSets:(id)arg1 networker:(id)arg2 interopStatusAnnouncer:(id)arg3 userDefaults:(id)arg4 analyticsLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
