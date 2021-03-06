//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGAdInsertionDataSource-Protocol.h"
#import "IGAdInsertionEntryPointDataSource-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGAdItemMapper, IGMedia, IGPerformanceLoadingIndicatorAnnouncer, IGSundialCaughtUpToastPresenter, IGSundialRealtimeEventStore, IGSundialVideoLogger, IGSundialViewerInteractionCoordinator, IGSundialViewerMediaPrefetchManager, IGUnifiedVideoCollectionView, IGUserSession, NSMutableArray, NSString, UIImage;
@protocol IGPlaybackCoordinating, IGSundialFeedDataSourceDelegate, IGSundialFeedSource;

@interface IGSundialFeedDataSource : NSObject <IGListAdapterDataSource, IGAdInsertionEntryPointDataSource, IGAdInsertionDataSource>
{
    id <IGSundialFeedSource> _networkSource;
    NSString *_analyticsModule;
    IGUserSession *_userSession;
    IGUnifiedVideoCollectionView *_collectionView;
    id <IGSundialFeedDataSourceDelegate> _delegate;
    id <IGPlaybackCoordinating> _playbackCoordinator;
    IGSundialRealtimeEventStore *_realtimeEventStore;
    long long _tabType;
    unsigned long long _presentationContext;
    IGSundialCaughtUpToastPresenter *_caughtUpToastPresenter;
    IGSundialViewerInteractionCoordinator *_interactionCoordinator;
    IGSundialViewerMediaPrefetchManager *_mediaPrefetchManager;
    _Bool _tabBarHidden;
    _Bool _initiallyShowMoreOptionsMenu;
    _Bool _initiallyShowCommentSheet;
    _Bool _initiallyShowInsightsSheet;
    NSString *_initiallyFocusedCommentId;
    double _initialStartTime;
    IGMedia *_initialVideo;
    IGSundialVideoLogger *_sundialLogger;
    NSMutableArray *_mediaList;
    IGPerformanceLoadingIndicatorAnnouncer *_tailLoadingIndicatorAnnouncer;
    UIImage *_initialPresentationFrame;
    long long _initialShowShareToWatchTogetherNuxType;
    IGAdItemMapper *_adItemMapper;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGAdItemMapper *adItemMapper; // @synthesize adItemMapper=_adItemMapper;
@property(nonatomic) long long initialShowShareToWatchTogetherNuxType; // @synthesize initialShowShareToWatchTogetherNuxType=_initialShowShareToWatchTogetherNuxType;
@property(retain, nonatomic) UIImage *initialPresentationFrame; // @synthesize initialPresentationFrame=_initialPresentationFrame;
@property(nonatomic) _Bool initiallyShowInsightsSheet; // @synthesize initiallyShowInsightsSheet=_initiallyShowInsightsSheet;
@property(nonatomic) _Bool initiallyShowCommentSheet; // @synthesize initiallyShowCommentSheet=_initiallyShowCommentSheet;
@property(nonatomic) _Bool initiallyShowMoreOptionsMenu; // @synthesize initiallyShowMoreOptionsMenu=_initiallyShowMoreOptionsMenu;
@property(readonly, nonatomic) IGPerformanceLoadingIndicatorAnnouncer *tailLoadingIndicatorAnnouncer; // @synthesize tailLoadingIndicatorAnnouncer=_tailLoadingIndicatorAnnouncer;
@property(copy, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList=_mediaList;
@property(retain, nonatomic) IGSundialVideoLogger *sundialLogger; // @synthesize sundialLogger=_sundialLogger;
@property(retain, nonatomic) IGMedia *initialVideo; // @synthesize initialVideo=_initialVideo;
@property(nonatomic) double initialStartTime; // @synthesize initialStartTime=_initialStartTime;
@property(copy, nonatomic) NSString *initiallyFocusedCommentId; // @synthesize initiallyFocusedCommentId=_initiallyFocusedCommentId;
@property(nonatomic) _Bool tabBarHidden; // @synthesize tabBarHidden=_tabBarHidden;
- (id)_determineParentMediaOwnerPk;
- (id)_determineParentMPk;
- (id)_initialMedia;
- (id)adPlatformSurfaceLoggingExtraForSponsoredItem:(id)arg1;
- (id)allSurfaceDataSourceItems;
- (id)createSurfaceAdRequestParams;
- (id)adPlatformAnalyticsModule;
- (long long)lastFirstAdPodAdInsertionIndex;
- (long long)lastSeenSponsoredItemIndexWithItemType:(unsigned long long)arg1 currentIndex:(long long)arg2;
- (long long)adInsertionCurrentPageIndex;
- (long long)focusedIndexforInsertion;
- (long long)adInsertionSurfaceEntryIndex;
- (_Bool)surfaceSupportsAd;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)initWithUserSession:(id)arg1 networkSource:(id)arg2 collectionView:(id)arg3 delegate:(id)arg4 playbackCoordinator:(id)arg5 interactionCoordinator:(id)arg6 mediaPrefetchManager:(id)arg7 realtimeEventStore:(id)arg8 tabType:(long long)arg9 presentationContext:(unsigned long long)arg10 caughtUpToastPresenter:(id)arg11 analyticsModule:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

