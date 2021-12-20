//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGLiveShoppingPivotSectionControllerDelegate-Protocol.h"
#import "IGLiveShoppingViewerEndScreenContentDataSourceListener-Protocol.h"
#import "IGLiveShoppingViewerEndScreenContentViewAdapterDelegate-Protocol.h"
#import "IGLiveViewerPostLiveNotificationSectionControllerDelegate-Protocol.h"
#import "IGShoppingSessionTracking-Protocol.h"
#import "IGTransitionZoomFromCapable-Protocol.h"

@class IGListAdapter, IGLiveBroadcast, IGLiveShoppingViewerEndScreenContentDataSource, IGLiveShoppingViewerEndScreenContentViewAdapter, IGLiveViewerPostLiveEmptyView, IGSessionTracker, IGShoppingTagsListPerformanceLogger, IGUserSession, NSString, UICollectionView;

@interface IGLiveViewerShoppingPostLiveViewController : IGViewController <IGListAdapterDataSource, IGLiveShoppingViewerEndScreenContentViewAdapterDelegate, IGLiveViewerPostLiveNotificationSectionControllerDelegate, IGLiveShoppingViewerEndScreenContentDataSourceListener, IGLiveShoppingPivotSectionControllerDelegate, IGShoppingSessionTracking, IGTransitionZoomFromCapable, IGGestureHandler>
{
    IGUserSession *_userSession;
    NSString *_priorModule;
    IGLiveBroadcast *_broadcast;
    IGLiveShoppingViewerEndScreenContentDataSource *_dataSource;
    IGLiveShoppingViewerEndScreenContentViewAdapter *_viewAdapter;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGLiveViewerPostLiveEmptyView *_emptyView;
    IGShoppingTagsListPerformanceLogger *_perfLogger;
    _Bool _isInitialFetch;
    IGSessionTracker *_shoppingSessionTracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldZoomFromTransition;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)liveShoppingPivotSectionControllerDidTapPivotCell:(id)arg1 destination:(unsigned long long)arg2;
- (void)userDidTapOnNotificationCell:(id)arg1;
- (void)liveShoppingViewerEndScreenContentViewAdapter:(id)arg1 didUpdateProductFeedViewModels:(id)arg2;
- (void)liveShoppingViewerEndScreenContentDataSource:(id)arg1 didUpdateDataModel:(id)arg2;
- (void)liveShoppingViewerEndScreenContentDataSource:(id)arg1 didUpdateFetchState:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)isDisplayedInPopover;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 broadcast:(id)arg2 dataSource:(id)arg3 priorModule:(id)arg4 shoppingSessionTracker:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
