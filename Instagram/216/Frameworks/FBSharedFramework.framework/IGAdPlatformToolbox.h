//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAdPlatformCurrentUserInfoModel, IGAdPlatformExperimentConfigs, IGAdPlatformLevers, IGModuleResourceGraph, IGObjectStores, IGQuantumSignalsManager, IGQuantumSignalsService, IGStoryReelPendingSeenStateStore, IGUser;
@protocol IGAPIClient, IGAnalyticsEventLoggingProtocol, IGPrefetchManaging, IGUserFeatureSets;

@interface IGAdPlatformToolbox : NSObject
{
    IGUser *_user;
    id <IGAPIClient> _networker;
    IGObjectStores *_objectStores;
    id <IGUserFeatureSets> _featureSets;
    IGAdPlatformLevers *_adPlatformLevers;
    IGAdPlatformExperimentConfigs *_adPlatformExperimentConfigs;
    unsigned long long _adInsertionBaseType;
    unsigned long long _adInsertionSurface;
    IGModuleResourceGraph *_moduleResourceGraph;
    id <IGPrefetchManaging> _prefetchManager;
    IGStoryReelPendingSeenStateStore *_reelPendingSeenStateStore;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGAdPlatformCurrentUserInfoModel *_currentUserInfo;
    IGQuantumSignalsService *_quantumSignalsService;
    IGQuantumSignalsManager *_quantumSignalsManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGQuantumSignalsManager *quantumSignalsManager; // @synthesize quantumSignalsManager=_quantumSignalsManager;
@property(readonly, nonatomic) IGQuantumSignalsService *quantumSignalsService; // @synthesize quantumSignalsService=_quantumSignalsService;
@property(readonly, nonatomic) IGAdPlatformCurrentUserInfoModel *currentUserInfo; // @synthesize currentUserInfo=_currentUserInfo;
@property(readonly, nonatomic) id <IGAnalyticsEventLoggingProtocol> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) IGStoryReelPendingSeenStateStore *reelPendingSeenStateStore; // @synthesize reelPendingSeenStateStore=_reelPendingSeenStateStore;
@property(readonly, nonatomic) id <IGPrefetchManaging> prefetchManager; // @synthesize prefetchManager=_prefetchManager;
@property(readonly, nonatomic) IGModuleResourceGraph *moduleResourceGraph; // @synthesize moduleResourceGraph=_moduleResourceGraph;
@property(readonly, nonatomic) unsigned long long adInsertionSurface; // @synthesize adInsertionSurface=_adInsertionSurface;
@property(readonly, nonatomic) unsigned long long adInsertionBaseType; // @synthesize adInsertionBaseType=_adInsertionBaseType;
@property(readonly, nonatomic) IGAdPlatformExperimentConfigs *adPlatformExperimentConfigs; // @synthesize adPlatformExperimentConfigs=_adPlatformExperimentConfigs;
@property(readonly, nonatomic) IGAdPlatformLevers *adPlatformLevers; // @synthesize adPlatformLevers=_adPlatformLevers;
@property(readonly, nonatomic) id <IGUserFeatureSets> featureSets; // @synthesize featureSets=_featureSets;
@property(readonly, nonatomic) IGObjectStores *objectStores; // @synthesize objectStores=_objectStores;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (_Bool)isTargetPositionInsertion;
- (id)initWithUserScopedObjects:(id)arg1 adPlatformLevers:(id)arg2 adPlatformExperimentConfigs:(id)arg3 adInsertionBaseType:(unsigned long long)arg4 adInsertionSurface:(unsigned long long)arg5;

@end

