//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDiskManager, IGLegacyDiskPaths, IGObjectCacheConsolidator, IGObjectStores, IGPostCreationManager, IGStoriesMediaRequestQPLogger, IGStoriesTrayRequestQPLogger, IGStoryReelSeenStateStore, IGUser, IGUserDefaults, IGValues;
@protocol IGAPIClient, IGAnalyticsEventLoggingProtocol, IGLiveBroadcastAnnouncer, IGMediaDeletedAnnouncer, IGMediaHiddenAnnouncer, IGMediaUpdatedForAllAnnouncer, IGStorySharePostAnnouncer, IGStoryUploadAnnouncer, IGUploadsUnarchiveAnnouncer, IGUserFeatureSets;

@interface IGStoryDataControllerSessionDeps : NSObject
{
    IGUser *_user;
    id <IGAPIClient> _networker;
    IGObjectStores *_objectStores;
    IGStoryReelSeenStateStore *_storyReelSeenStateStore;
    IGPostCreationManager *_postCreationManager;
    IGLegacyDiskPaths *_legacyDiskPaths;
    IGDiskManager *_diskManager;
    id <IGStoryUploadAnnouncer> _storyUploadAnnouncer;
    id <IGStorySharePostAnnouncer> _storySharePostAnnouncer;
    id <IGUploadsUnarchiveAnnouncer> _uploadsUnarchiveAnnouncer;
    id <IGLiveBroadcastAnnouncer> _liveBroadcastAnnouncer;
    id <IGMediaHiddenAnnouncer> _mediaHiddenAnnouncer;
    id <IGMediaDeletedAnnouncer> _mediaDeletedAnnouncer;
    id <IGMediaUpdatedForAllAnnouncer> _mediaUpdatedForAllAnnouncer;
    IGStoriesTrayRequestQPLogger *_homeSurfaceStoriesTrayQPLogger;
    IGStoriesMediaRequestQPLogger *_homeSurfaceStoriesMediaQPLogger;
    IGValues *_liveBroadcastValues;
    IGUserDefaults *_sessionUserDefaults;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGObjectCacheConsolidator *_objectCacheConsolidator;
    id <IGUserFeatureSets> _featureSets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGUserFeatureSets> featureSets; // @synthesize featureSets=_featureSets;
@property(readonly, nonatomic) IGObjectCacheConsolidator *objectCacheConsolidator; // @synthesize objectCacheConsolidator=_objectCacheConsolidator;
@property(readonly, nonatomic) id <IGAnalyticsEventLoggingProtocol> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(readonly, nonatomic) IGValues *liveBroadcastValues; // @synthesize liveBroadcastValues=_liveBroadcastValues;
@property(readonly, nonatomic) IGStoriesMediaRequestQPLogger *homeSurfaceStoriesMediaQPLogger; // @synthesize homeSurfaceStoriesMediaQPLogger=_homeSurfaceStoriesMediaQPLogger;
@property(readonly, nonatomic) IGStoriesTrayRequestQPLogger *homeSurfaceStoriesTrayQPLogger; // @synthesize homeSurfaceStoriesTrayQPLogger=_homeSurfaceStoriesTrayQPLogger;
@property(readonly, nonatomic) id <IGMediaUpdatedForAllAnnouncer> mediaUpdatedForAllAnnouncer; // @synthesize mediaUpdatedForAllAnnouncer=_mediaUpdatedForAllAnnouncer;
@property(readonly, nonatomic) id <IGMediaDeletedAnnouncer> mediaDeletedAnnouncer; // @synthesize mediaDeletedAnnouncer=_mediaDeletedAnnouncer;
@property(readonly, nonatomic) id <IGMediaHiddenAnnouncer> mediaHiddenAnnouncer; // @synthesize mediaHiddenAnnouncer=_mediaHiddenAnnouncer;
@property(readonly, nonatomic) id <IGLiveBroadcastAnnouncer> liveBroadcastAnnouncer; // @synthesize liveBroadcastAnnouncer=_liveBroadcastAnnouncer;
@property(readonly, nonatomic) id <IGUploadsUnarchiveAnnouncer> uploadsUnarchiveAnnouncer; // @synthesize uploadsUnarchiveAnnouncer=_uploadsUnarchiveAnnouncer;
@property(readonly, nonatomic) id <IGStorySharePostAnnouncer> storySharePostAnnouncer; // @synthesize storySharePostAnnouncer=_storySharePostAnnouncer;
@property(readonly, nonatomic) id <IGStoryUploadAnnouncer> storyUploadAnnouncer; // @synthesize storyUploadAnnouncer=_storyUploadAnnouncer;
@property(readonly, nonatomic) IGDiskManager *diskManager; // @synthesize diskManager=_diskManager;
@property(readonly, nonatomic) IGLegacyDiskPaths *legacyDiskPaths; // @synthesize legacyDiskPaths=_legacyDiskPaths;
@property(readonly, nonatomic) IGPostCreationManager *postCreationManager; // @synthesize postCreationManager=_postCreationManager;
@property(readonly, nonatomic) IGStoryReelSeenStateStore *storyReelSeenStateStore; // @synthesize storyReelSeenStateStore=_storyReelSeenStateStore;
@property(readonly, nonatomic) IGObjectStores *objectStores; // @synthesize objectStores=_objectStores;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (id)initWithUser:(id)arg1 networker:(id)arg2 objectStores:(id)arg3 storyReelSeenStateStore:(id)arg4 postCreationManager:(id)arg5 legacyDiskPaths:(id)arg6 diskManager:(id)arg7 storyUploadAnnouncer:(id)arg8 storySharePostAnnouncer:(id)arg9 uploadsUnarchiveAnnouncer:(id)arg10 liveBroadcastAnnouncer:(id)arg11 mediaHiddenAnnouncer:(id)arg12 mediaDeletedAnnouncer:(id)arg13 mediaUpdatedForAllAnnouncer:(id)arg14 homeSurfaceStoriesTrayQPLogger:(id)arg15 homeSurfaceStoriesMediaQPLogger:(id)arg16 liveBroadcastValues:(id)arg17 sessionUserDefaults:(id)arg18 analyticsLogger:(id)arg19 objectCacheConsolidator:(id)arg20 featureSets:(id)arg21;

@end

