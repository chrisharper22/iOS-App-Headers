//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAccessibilityFeedAggregationDelegate-Protocol.h"
#import "IGAdInsertionBrandSafetyDataSource-Protocol.h"
#import "IGAdInsertionDataSource-Protocol.h"
#import "IGAdInsertionDelegate-Protocol.h"
#import "IGAdInsertionEntryPointDataSource-Protocol.h"
#import "IGAnalyticsModule-Protocol.h"
#import "IGChainingFeedDataSourceDelegate-Protocol.h"
#import "IGContextualAdPivotCarouselSectionControllerDelegate-Protocol.h"
#import "IGContextualFeedBottomNuxControllerDelegate-Protocol.h"
#import "IGDiscoveryFeedPresentationSupporting-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGFeedSectionControllerActionDelegate-Protocol.h"
#import "IGFeedSectionControllerRowVisibilityDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGPaginatedFeedControllerDelegate-Protocol.h"
#import "IGPivotControllerDelegate-Protocol.h"
#import "IGScrollViewDrivenPanDelegate-Protocol.h"
#import "IGScrollableViewControllerProtocol-Protocol.h"
#import "IGTransitionZoomFromCapable-Protocol.h"
#import "IGTransitionZoomToCapable-Protocol.h"

@class IGAccessibilityFeedAggregationController, IGAdItemMapper, IGChainingAdsConfig, IGChainingFeedDataSource, IGChainingFeedItemLogger, IGCollectionViewVisibility, IGContextualFeedBottomNuxController, IGDiscoveryTopicModel, IGFeedScrollViewAnnouncer, IGListAdapter, IGMedia, IGMediaPreloader, IGPaginatedFeedController, IGScrollViewDrivenPanHandler, IGSessionTracker, IGUserSession, NSIndexPath, NSString, UICollectionView, UIWindow;
@protocol IGChainingFeedViewControllerDelegate, IGChainingFeedViewControllerEventHandler, IGChainingFeedViewControllerItemVisibilityDelegate, IGDiscoveryFeedPresentationContext, IGFeedConfigurationType, IGFeedItemConfigurationType, IGFeedSectionControllerComponentsType, IGListDiffable;

@interface IGChainingFeedViewController : IGViewController <IGListAdapterDataSource, IGContextualFeedBottomNuxControllerDelegate, IGFeedScrollViewListener, IGFeedSectionControllerRowVisibilityDelegate, IGAccessibilityFeedAggregationDelegate, IGPivotControllerDelegate, IGContextualAdPivotCarouselSectionControllerDelegate, IGPaginatedFeedControllerDelegate, IGScrollViewDrivenPanDelegate, IGTransitionZoomFromCapable, IGTransitionZoomToCapable, IGAdInsertionEntryPointDataSource, IGAdInsertionDataSource, IGAdInsertionBrandSafetyDataSource, IGAdInsertionDelegate, IGFeedSectionControllerActionDelegate, IGAnalyticsModule, IGChainingFeedDataSourceDelegate, IGDiscoveryFeedPresentationSupporting, IGScrollableViewControllerProtocol>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    IGSessionTracker *_exploreSessionTracker;
    IGSessionTracker *_shoppingSessionTracker;
    UICollectionView *_collectionView;
    IGFeedScrollViewAnnouncer *_feedScrollAnnouncer;
    IGChainingFeedDataSource *_dataSource;
    IGCollectionViewVisibility *_collectionViewVisibility;
    IGContextualFeedBottomNuxController *_nuxController;
    NSString *_chainingSessionID;
    IGAdItemMapper *_adItemMapper;
    IGMedia *_lastFocusedFeedItem;
    IGAccessibilityFeedAggregationController *_feedAggregationController;
    IGMediaPreloader *_mediaPreloader;
    unsigned long long _scrollState;
    NSIndexPath *_focusedIndexPath;
    id <IGListDiffable> _focusedFeedItem;
    IGPaginatedFeedController *_paginationController;
    IGDiscoveryTopicModel *_topic;
    IGScrollViewDrivenPanHandler *_scrollPanHandler;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    id <IGFeedConfigurationType> _feedConfiguration;
    id <IGFeedSectionControllerComponentsType> _feedSectionControllerComponents;
    double _lastUsedScrollOffsetForVisibleFeedItemBroadcast;
    long long _pendingUpdateCount;
    _Bool _viewHasAppearedOnce;
    _Bool _hasScrolledOnce;
    _Bool _enableShimmeringPostPlaceholders;
    _Bool _enablePaginatedAutoAdvance;
    _Bool _unifyProximityAnnouncements;
    _Bool _isUserInteracting;
    _Bool _hasScrolledToSelectedIndex;
    _Bool _hasScrolledToFocusedMedia;
    IGChainingAdsConfig *_chainingAdsConfig;
    UIWindow *_flexWindow;
    id <IGDiscoveryFeedPresentationContext> _presentationContext;
    id <IGChainingFeedViewControllerDelegate> _delegate;
    id <IGChainingFeedViewControllerItemVisibilityDelegate> _visibilityDelegate;
    id <IGChainingFeedViewControllerEventHandler> _eventHandler;
    IGChainingFeedItemLogger *_chainingFeedItemLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGChainingFeedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) IGChainingFeedItemLogger *chainingFeedItemLogger; // @synthesize chainingFeedItemLogger=_chainingFeedItemLogger;
@property(retain, nonatomic) id <IGChainingFeedViewControllerEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) __weak id <IGChainingFeedViewControllerItemVisibilityDelegate> visibilityDelegate; // @synthesize visibilityDelegate=_visibilityDelegate;
@property(nonatomic) __weak id <IGChainingFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <IGDiscoveryFeedPresentationContext> presentationContext; // @synthesize presentationContext=_presentationContext;
- (id)adPlatformSurfaceLoggingExtraForSponsoredItem:(id)arg1;
- (long long)lastAvailableItemIndex;
- (id)organicItemPkAtIndex:(long long)arg1;
- (id)allSurfaceDataSourceItems;
- (id)createSurfaceAdRequestParams;
- (id)adPlatformAnalyticsModule;
- (long long)lastFirstAdPodAdInsertionIndex;
- (long long)lastSeenSponsoredItemIndexWithItemType:(unsigned long long)arg1 currentIndex:(long long)arg2;
- (long long)adInsertionCurrentPageIndex;
- (long long)focusedIndexforInsertion;
- (long long)adInsertionSurfaceEntryIndex;
- (void)optimisticPrefetchMediaForSponsoredItem:(id)arg1;
- (void)adPlatformDidDeliverSponsoredItem:(id)arg1 atAdRequestIndex:(long long)arg2;
- (void)adInsertionHandler:(id)arg1 shouldTryToInsertSponsoredItem:(id)arg2 atInsertionIndex:(long long)arg3 focusedIndex:(long long)arg4 validationResultString:(id)arg5 insertionContext:(id)arg6;
- (_Bool)surfaceSupportsAd;
- (void)didCompleteAnimationTransition;
- (id)transitionZoomItemOverrideOnExit;
- (id)transitionZoomViewToItem:(id)arg1;
- (_Bool)shouldZoomToTransition;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldZoomFromTransition;
- (void)scrollView:(id)arg1 didEndTranslatingBeyondBoundsWithVelocity:(struct CGPoint)arg2;
- (void)scrollView:(id)arg1 didTranslateBeyondBoundsWithTranslation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)scrollViewWillBeginTranslatingBeyondBounds:(id)arg1;
- (_Bool)scrollView:(id)arg1 shouldBeginTranslatingBeyondBoundsAtEdge:(long long)arg2;
- (void)preloadChainMedia;
- (void)scrollViewAccessibilityNearBottom:(id)arg1;
- (_Bool)accessibilityPerformMagicTap;
- (id)scrollViewAnnouncer;
- (id)scrollView;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)feedSectionControllerDidBeginWYTSurvey:(id)arg1;
- (void)feedSectionControllerDidLoop:(id)arg1;
- (void)feedSectionControllerDidEndUserInteraction:(id)arg1;
- (void)feedSectionControllerDidBeginUserInteraction:(id)arg1;
- (void)feedSectionController:(id)arg1 showDetailsForMedia:(id)arg2;
- (_Bool)feedSectionControllerIsInOverviewMode:(id)arg1;
- (void)feedSectionController:(id)arg1 showRelatedPostsForMedia:(id)arg2;
- (void)feedSectionControllerDidTapDismissButton:(id)arg1;
- (void)feedSectionController:(id)arg1 didLikeFeedItem:(id)arg2 mediaView:(id)arg3;
- (void)feedSectionControllerDidDismissFeedItem:(id)arg1;
- (_Bool)feedSectionControllerShouldExpandFeedItemOnMoreTapped:(id)arg1;
- (_Bool)feedSectionController:(id)arg1 shouldNavigateToCommentsWithEntryPoint:(long long)arg2;
- (void)feedSectionController:(id)arg1 didUnfollowHashtag:(id)arg2;
- (void)feedSectionController:(id)arg1 changedMuteStatusForUser:(id)arg2 changedPostsMuteStatus:(_Bool)arg3 changedStoryMuteStatus:(_Bool)arg4;
- (void)feedSectionController:(id)arg1 didUnfollowUser:(id)arg2;
- (void)feedSectionControllerDidSwipePageCell:(id)arg1 toIndex:(long long)arg2;
- (void)feedSectionControllerDidTapCommentEntryPoint:(id)arg1 replyText:(id)arg2;
- (void)feedSectionControllerDidTapCustomizableButton:(id)arg1;
- (void)feedSectionController:(id)arg1 didUpdateAYMFRowVisibility:(_Bool)arg2;
- (void)contextualFeedBottomNuxWasTapped:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)paginatedFeedController:(id)arg1 allowsAutoAdvance:(id)arg2;
- (void)paginatedFeedController:(id)arg1 didObserveFocusedVideoStateUpdate:(CDStruct_c3b9c2ee)arg2;
- (void)paginatedFeedController:(id)arg1 didObserveFocusChange:(id)arg2;
- (void)chainingFeedDataSource:(id)arg1 didFailToLoadMoreWithErrorMessage:(id)arg2;
- (void)chainingFeedDataSourceDidLoadMore:(id)arg1 chainingPaginationToken:(id)arg2 newItems:(id)arg3 brandSafetyInfo:(id)arg4;
- (void)_tryFetchingAdsIfNeeded;
- (void)_handleChainExit;
- (void)_setupAdInsertionHandler;
- (double)_loadDistance;
- (unsigned long long)_currentScrollState;
- (void)_performStateAwareListUpdatesAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadMorePostsWithTrigger:(long long)arg1;
- (_Bool)_canLoadMorePosts;
- (_Bool)_hasLoadedPosts;
- (void)_hidePill;
- (void)_showPillIfNeeded;
- (long long)_visibleMaximumIndex;
- (id)_mostVisibleFeedItemCell;
- (id)_buildPlaceholderItems;
- (void)_openAtPreviousPosition:(long long)arg1;
- (void)_performInitialListUpdate;
- (void)didExitChainingFeed;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (id)mostVisibleFeedItem;
- (void)prepareForReuse;
- (_Bool)disableNavigationEvent;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_setupFeedSectionControllerComponents;
- (void)didMoveToParentViewController:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)contextualAdPivotCarouselRemovePivot:(id)arg1;
- (void)removePivot:(id)arg1;
- (id)initWithUserSession:(id)arg1 focusedFeedItem:(id)arg2 analyticsModule:(id)arg3 exploreSessionTracker:(id)arg4 enablePagedScrollExperience:(_Bool)arg5 enableShimmeringPostPlaceholders:(_Bool)arg6 enablePaginatedAutoAdvance:(_Bool)arg7 itemConfiguration:(id)arg8 feedConfiguration:(id)arg9 chainingAdsConfig:(id)arg10 loggingProvider:(id)arg11 chainingSessionID:(id)arg12 topic:(id)arg13 shoppingSessionTracker:(id)arg14 lastActionTracker:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

