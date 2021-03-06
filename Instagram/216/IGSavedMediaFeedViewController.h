//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGContextualFeedBottomNuxControllerDelegate-Protocol.h"
#import "IGEmptyFeedViewDelegate-Protocol.h"
#import "IGFeedItemCollectionListener-Protocol.h"
#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGInfoViewDelegate-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGMediaDeletedListener-Protocol.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"
#import "IGPreferenceEdgeInsetsProtocol-Protocol.h"
#import "IGSaveCollectionBulkSelectable-Protocol.h"
#import "IGSaveCollectionTabSupporting-Protocol.h"
#import "IGSavedItemStatusListener-Protocol.h"
#import "IGSavedMediaCollectionBulkEditButtonViewDelegate-Protocol.h"
#import "IGSavedMediaCollectionContributorViewControllerDelegate-Protocol.h"
#import "IGSavedMediaCollectionHeaderSectionControllerDelegate-Protocol.h"
#import "IGSavedMediaCollectionListener-Protocol.h"
#import "IGStoryViewerDelegate-Protocol.h"
#import "IGTabControlSegment-Protocol.h"
#import "IGTransitionZoomFromCapable-Protocol.h"

@class IGContextualFeedBottomNuxController, IGFeedNetworkSource, IGFeedPreviewHandler, IGFeedScrollViewAnnouncer, IGGridCollectionViewLayout, IGGuideCreationFlowPresenter, IGInfoView, IGListAdapter, IGRefreshControl, IGSaveHomeLogger, IGSavedMediaCollection, IGSavedMediaCollectionBulkEditButtonView, IGSavedMediaFeedAdapterDataSource, IGUserSession, NSArray, NSMutableSet, NSSet, NSString, PreferredEdgeInsets, UICollectionView;
@protocol IGReshareHubDelegate, IGSavedMediaFeedContextualFeedPresenter, IGSavedMediaFeedViewControllerDelegate;

@interface IGSavedMediaFeedViewController : IGViewController <IGContextualFeedBottomNuxControllerDelegate, IGEmptyFeedViewDelegate, IGFeedNetworkSourceDelegate, IGFeedScrollViewListener, IGInfoViewDelegate, IGListAdapterDelegate, IGMediaThumbnailSectionControllerSelectionDelegate, IGSavedMediaCollectionHeaderSectionControllerDelegate, IGSavedMediaCollectionContributorViewControllerDelegate, IGSavedMediaCollectionListener, IGFeedItemCollectionListener, IGMediaDeletedListener, IGSavedItemStatusListener, IGSavedMediaCollectionBulkEditButtonViewDelegate, IGTransitionZoomFromCapable, IGStoryViewerDelegate, IGSaveCollectionTabSupporting, IGSaveCollectionBulkSelectable, IGTabControlSegment, IGPreferenceEdgeInsetsProtocol>
{
    _Bool _hasLoadedData;
    IGInfoView *_infoView;
    _Bool _isMediaCollection;
    IGSaveHomeLogger *_logger;
    _Bool _isDataFetchNeeded;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGContextualFeedBottomNuxController *_pillController;
    IGGridCollectionViewLayout *_feedLayout;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGRefreshControl *_refreshControl;
    IGFeedNetworkSource *_feedNetworkSource;
    IGUserSession *_userSession;
    IGSavedMediaFeedAdapterDataSource *_dataSource;
    IGFeedPreviewHandler *_previewHandler;
    NSMutableSet *_pendingDeletedItems;
    IGSavedMediaCollection *_collection;
    NSMutableSet *_loggedImpressions;
    _Bool _isSelectable;
    NSMutableSet *_selectedItems;
    _Bool _showPillController;
    IGSavedMediaCollectionBulkEditButtonView *_bulkEditButtonView;
    NSSet *_itemsBeingBulkRemoved;
    NSString *_priorModule;
    IGGuideCreationFlowPresenter *_guideCreationFlowPresenter;
    NSArray *_loadedPosts;
    _Bool _shouldRenderAsStories;
    PreferredEdgeInsets *_preferredEdgeInsets;
    _Bool _reelsTabEnabled;
    _Bool _disableFeedPreview;
    id <IGSavedMediaFeedViewControllerDelegate> _delegate;
    id <IGReshareHubDelegate> _reshareHubDelegate;
    id <IGSavedMediaFeedContextualFeedPresenter> _contextualFeedPresenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGSavedMediaFeedContextualFeedPresenter> contextualFeedPresenter; // @synthesize contextualFeedPresenter=_contextualFeedPresenter;
@property(nonatomic) __weak id <IGReshareHubDelegate> reshareHubDelegate; // @synthesize reshareHubDelegate=_reshareHubDelegate;
@property(nonatomic) _Bool disableFeedPreview; // @synthesize disableFeedPreview=_disableFeedPreview;
@property(nonatomic) _Bool reelsTabEnabled; // @synthesize reelsTabEnabled=_reelsTabEnabled;
@property(nonatomic) __weak id <IGSavedMediaFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateContentInsets:(id)arg1;
- (void)_renderCollectionOnStoryViewerWithStartingMedia:(id)arg1;
- (void)storyViewerDidUnfollow:(id)arg1;
- (void)storyViewerDidMute:(id)arg1 didMutePosts:(_Bool)arg2;
- (void)storyViewerDidTapViewDay:(id)arg1;
- (void)storyViewerDidTapTryItOn:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (_Bool)storyViewerShouldPresentCamera:(id)arg1;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 viewerExitContextDict:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storyViewer:(id)arg1 didNavigateToStoryItem:(id)arg2;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldZoomFromTransition;
- (void)deselectAll;
- (void)selectAll;
- (void)setSelectionState:(_Bool)arg1;
- (_Bool)isEmpty;
- (id)fallbackIcon;
- (void)_handleBulkRemoveFailureWithOriginalSavedMediaPosts:(id)arg1;
- (void)_optimisticallyRemoveSelectedItems;
- (CDUnknownBlockType)_createFailureHandlerWithOriginalSavedPosts:(id)arg1 selectedMediaPosts:(id)arg2 currentCollection:(id)arg3 userSession:(id)arg4 analyticsModule:(id)arg5;
- (void)_startNetworkRequestWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_createSuccessHandlerWithUserSession:(id)arg1 collectionTitle:(id)arg2 bannerImageURL:(id)arg3;
- (void)_didSelectBulkRemoveConfirmation;
- (void)savedMediaCollectionBulkEditButtonViewDidTapRemoveButton:(id)arg1;
- (void)_setMedia:(id)arg1 selected:(_Bool)arg2;
- (void)_updateSelectionState:(_Bool)arg1;
- (id)_titleString;
- (void)_reloadCollectionViewInsets;
- (void)_logReachedCollectionEndByScrolling:(_Bool)arg1;
- (void)_logClickForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2 index:(unsigned long long)arg3;
- (void)_logImpressionForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2 index:(unsigned long long)arg3;
- (id)_positionForIndex:(long long)arg1;
- (void)contextualFeedBottomNuxWasTapped:(id)arg1;
- (void)_pushPivotsViewController;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)analyticsModule;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)mediaItemDeleted:(id)arg1 storyReelPK:(id)arg2;
- (void)_showPill:(_Bool)arg1;
- (void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)contributorViewControllerDidSelectDone:(id)arg1;
- (void)savedCollectionHeaderSectionControllerDidRequestCreateGuide:(id)arg1;
- (void)_presentContextualFeedWithMedia:(id)arg1;
- (void)didSelectFeedItem:(id)arg1 usingForceTouch:(_Bool)arg2;
- (void)infoViewWasTapped:(id)arg1;
- (void)_showInfoView;
- (void)_setupInfoView;
- (_Bool)_loadNextPage;
- (_Bool)_fetchMore;
- (void)_fetch;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)_collectionCreated:(id)arg1;
- (void)_collectionUpdated:(id)arg1;
- (void)_collectionDeleted:(id)arg1;
- (void)savedMediaCollectionStatusChanged:(long long)arg1 collection:(id)arg2;
- (_Bool)_shouldFilterFeedItem:(id)arg1;
- (void)feedItemAddedToCollection:(id)arg1 withCollectionIds:(id)arg2;
- (void)_addSavedFeedItem:(id)arg1;
- (void)_savedItemRemoved:(id)arg1 changedCollectionIds:(id)arg2;
- (void)saveStatusChangedForItem:(id)arg1 withEvent:(long long)arg2 changedCollectionIds:(id)arg3;
- (struct UIEdgeInsets)preferredContentInsets;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_setupPill;
- (void)_setupPullToRefreshManager;
- (void)_setupDataSource;
- (void)_setupCollectionView;
- (void)_setupListAdapter;
- (void)_setupCommonInitializerValues;
- (void)_addListeners;
- (void)_setupHasLoadedData:(_Bool)arg1;
- (void)_commonInitWithUserSession:(id)arg1 collection:(id)arg2 priorModule:(id)arg3;
- (id)initWithTabbedCollection:(id)arg1 userSession:(id)arg2 tabbedCollectionDataModel:(id)arg3 priorModule:(id)arg4 loadedPosts:(id)arg5;
- (id)initWithUserSession:(id)arg1 collection:(id)arg2 priorModule:(id)arg3 preferredEdgeInsets:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

