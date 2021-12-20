//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFlashFeedAdsCache, IGFlashFeedEventLogger, IGObjectCacheConsolidator, IGQuantumSignalsChecker, NSString;
@protocol IGScheduler><IGSynchronousScheduler, IGUserFeatureSets;

@interface IGFlashFeedBackfillAdsCacheController : NSObject
{
    NSString *_userPk;
    IGQuantumSignalsChecker *_quantumSignalsChecker;
    IGObjectCacheConsolidator *_objectCacheConsolidator;
    id <IGUserFeatureSets> _featureSets;
    _Bool _hasStartedCacheLoadOnce;
    IGFlashFeedEventLogger *_eventLogger;
    id <IGScheduler><IGSynchronousScheduler> _scheduler;
    IGFlashFeedAdsCache *_cache;
}

- (void).cxx_destruct;
- (void)_loadCache;
- (void)_loadCacheAsynchronously;
- (void)_persistToDisk;
- (id)_unseenItemSatisfyingPredicate:(CDUnknownBlockType)arg1;
- (void)_updateWithLatestItems:(id)arg1;
- (void)persistToDisk;
- (id)unseenItemSatisfyingPredicate:(CDUnknownBlockType)arg1;
- (void)updateWithLatestItems:(id)arg1;
- (id)initWithUserPk:(id)arg1 quantumSignalsChecker:(id)arg2 objectCacheConsolidator:(id)arg3 featureSets:(id)arg4 eventLogger:(id)arg5 scheduler:(id)arg6;

@end

