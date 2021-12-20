//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "FBContentRectProviding-Protocol.h"
#import "IGAccessibilityFeedAggregationDelegate-Protocol.h"
#import "IGAdInsertionEntryPointDataSource-Protocol.h"
#import "IGAlertBarPresenter-Protocol.h"
#import "IGBugReportingProtocol-Protocol.h"
#import "IGChainingContainerDelegate-Protocol.h"
#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGFacebookAuthListener-Protocol.h"
#import "IGFeedFavoritesViewControllerDelegate-Protocol.h"
#import "IGFeedItemBannerSectionControllerDelegate-Protocol.h"
#import "IGFeedItemPostedListener-Protocol.h"
#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGFeedPickerChildViewControllerType-Protocol.h"
#import "IGFeedPreviewingType-Protocol.h"
#import "IGFeedScrollViewAccessibilityDelegate-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGFeedScrollableClipsSectionControllerDelegate-Protocol.h"
#import "IGFeedStatusViewDelegate-Protocol.h"
#import "IGFilteredFeedViewControllerType-Protocol.h"
#import "IGFlingHandlerDelegate-Protocol.h"
#import "IGHScrollActivatorsSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGMainFeedAppHeaderControllerDelegate-Protocol.h"
#import "IGMainFeedListAdapterDataSourceDelegate-Protocol.h"
#import "IGMainFeedNetworkSourceControllerDelegate-Protocol.h"
#import "IGMainFeedReloadManagerDelegate-Protocol.h"
#import "IGMainFeedStoryTrayLoggingContextProvider-Protocol.h"
#import "IGMainFeedViewControllerType-Protocol.h"
#import "IGMultipleAccountHandlingListener-Protocol.h"
#import "IGNewPostsIndicatorControllerDelegate-Protocol.h"
#import "IGPaginatedFeedControllerDelegate-Protocol.h"
#import "IGProConversionFlowPresentingDelegate-Protocol.h"
#import "IGQPMegaphoneSectionControllerPresenterDelegate-Protocol.h"
#import "IGRefreshControlContentInsetDataSource-Protocol.h"
#import "IGRefreshControlDelegate-Protocol.h"
#import "IGRequestParameterConfigurable-Protocol.h"
#import "IGScreenshotObserverDelegate-Protocol.h"
#import "IGStoriesInteractionManagerDelegate-Protocol.h"
#import "IGStoryDataControllerListener-Protocol.h"
#import "IGStoryDataControllerStoryPreloadListener-Protocol.h"
#import "IGStoryTrayPrefetchControllerDelegate-Protocol.h"
#import "IGStoryTraySectionControllerActionDelegate-Protocol.h"
#import "IGStoryTraySectionControllerViewerDelegate-Protocol.h"
#import "IGStoryUploadListener-Protocol.h"
#import "IGTVUploadStatusListener-Protocol.h"
#import "IGTransitionZoomFromCapable-Protocol.h"
#import "IGWarmStartListener-Protocol.h"
#import "UINavigationBarDelegate-Protocol.h"

@class IGAccessibilityFeedAggregationController, IGAdItemMapper, IGChainingContext, IGCollectionViewVisibility, IGFeedGroupHeaderSectionController, IGFeedItemLogger, IGFeedNudgeHelper, IGFeedPlaybackEventRelay, IGFeedPosition, IGFeedPreviewingHandler, IGFeedScrollViewAnnouncer, IGFlingHandler, IGListAdapter, IGMainFeedAdInsertionDataSource, IGMainFeedAppHeaderController, IGMainFeedCollapsingDemarcatorController, IGMainFeedConfiguration, IGMainFeedGroupHelper, IGMainFeedItemConfiguration, IGMainFeedListAdapterDataSource, IGMainFeedLogger, IGMainFeedNetworkSourceController, IGMainFeedRefreshFeedParameters, IGMainFeedRenderManager, IGMainFeedToastController, IGNetegoImpressionLogger, IGNewPostsIndicatorController, IGPaginatedFeedController, IGPerformanceTailFetchLogger, IGQuickPromotionCoordinator, IGRUXCoordinator, IGRapidFeedbackController, IGSponsoredSupportConfiguration, IGStoryTrayLoggingContext, IGStoryTrayPrefetchController, IGStoryTraySectionController, IGSundialVideoUploadEventBroadcaster, IGTailFetchSignalsModel, IGTailFetchSignalsProductProvider, IGUserSession, NSArray, NSMutableArray, NSMutableSet, NSString, UICollectionView, UIControl, UIViewController, UIWindow;
@protocol IGAdInsertionProtocol, IGFeedFilterType, IGFeedPickerChildViewControllerDelegate, IGFeedRefreshControlType, IGFilteredFeedViewControllerDelegate;

@interface IGMainFeedViewController : IGViewController <IGCoreTextLinkHandler, IGAccessibilityFeedAggregationDelegate, IGAlertBarPresenter, IGChainingContainerDelegate, IGFeedFavoritesViewControllerDelegate, IGFeedItemBannerSectionControllerDelegate, IGFeedItemPostedListener, IGFeedNetworkSourceDelegate, IGFeedScrollViewAccessibilityDelegate, IGFeedStatusViewDelegate, IGFacebookAuthListener, IGFeedScrollViewListener, IGFeedPreviewingType, IGFlingHandlerDelegate, IGHScrollActivatorsSectionControllerDelegate, IGListAdapterDelegate, IGMainFeedAppHeaderControllerDelegate, IGMainFeedListAdapterDataSourceDelegate, IGMainFeedNetworkSourceControllerDelegate, IGMainFeedReloadManagerDelegate, IGMainFeedStoryTrayLoggingContextProvider, IGNewPostsIndicatorControllerDelegate, IGQPMegaphoneSectionControllerPresenterDelegate, IGRefreshControlContentInsetDataSource, IGRefreshControlDelegate, IGRequestParameterConfigurable, IGScreenshotObserverDelegate, IGStoriesInteractionManagerDelegate, IGStoryUploadListener, IGStoryDataControllerListener, IGStoryDataControllerStoryPreloadListener, IGStoryTraySectionControllerActionDelegate, IGStoryTraySectionControllerViewerDelegate, IGFeedScrollableClipsSectionControllerDelegate, IGTransitionZoomFromCapable, IGTVUploadStatusListener, IGWarmStartListener, IGStoryTrayPrefetchControllerDelegate, IGAdInsertionEntryPointDataSource, UINavigationBarDelegate, FBContentRectProviding, IGPaginatedFeedControllerDelegate, IGMainFeedViewControllerType, IGBugReportingProtocol, IGFeedPickerChildViewControllerType, IGFilteredFeedViewControllerType, IGProConversionFlowPresentingDelegate, IGMultipleAccountHandlingListener>
{
    IGMainFeedAppHeaderController *_headerController;
    _Bool _isStoriesTrayVisible;
    _Bool _isDirectShareSheetVisibile;
    IGMainFeedLogger *_logger;
    IGFeedItemLogger *_feedItemLogger;
    UIControl<IGFeedRefreshControlType> *_refreshControl;
    IGNewPostsIndicatorController *_newPostsIndicatorController;
    IGQuickPromotionCoordinator *_qpCoordinator;
    UICollectionView *_collectionView;
    double _defaultLoadDistance;
    double _cachedFeedLoadDistance;
    _Bool _allowCachedPagination;
    double _feedScrollDistance;
    double _dragBeginScrollDistance;
    IGMainFeedGroupHelper *_groupHelper;
    IGMainFeedConfiguration *_feedConfiguration;
    IGMainFeedItemConfiguration *_itemConfiguration;
    IGAdItemMapper *_adItemMapper;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    IGChainingContext *_chainingContext;
    IGFeedPosition *_scrollPosition;
    IGFlingHandler *_flingHandler;
    IGPaginatedFeedController *_paginationController;
    IGFeedPlaybackEventRelay *_playbackEventRelay;
    _Bool _restoreStateOnColdStart;
    _Bool _needsToRestoreState;
    IGAccessibilityFeedAggregationController *_feedAggregationController;
    IGMainFeedRenderManager *_reloadManager;
    _Bool _managesHeader;
    _Bool _isVisible;
    _Bool _isNetworkReachable;
    IGMainFeedToastController *_toastController;
    id <IGAdInsertionProtocol> _igtvAdInsertionHandler;
    IGSundialVideoUploadEventBroadcaster *_sundialVideoUploadEventBroadcaster;
    NSMutableArray *_inFeedStoryReelPKsToFetch;
    NSString *_currentlyPrefetchingStoryTrayPk;
    NSMutableSet *_prefetchedInFeedStoryTrayPKs;
    IGStoryTrayPrefetchController *_inFeedStoryTrayPrefetchController;
    _Bool _hidesStoriesTray;
    _Bool _didLogFirstRenderForDelivery;
    _Bool _shouldAvoidNextAttemptToShowUnseen;
    _Bool _shouldFetchStoryTrayOnNextScrollToTopFinish;
    _Bool _shouldResortStoriesTrayOnNextScrollToTop;
    _Bool _shouldShowNppOnScrollStart;
    IGMainFeedViewController *_secondaryMainFeedViewController;
    IGMainFeedViewController *_primaryMainFeedViewController;
    IGFeedPosition *_initialScrollPosition;
    UIWindow *_flexWindow;
    IGMainFeedRefreshFeedParameters *_pendingRefreshFeedParameters;
    IGFeedGroupHeaderSectionController *_floatingGroupHeaderSectionController;
    IGPerformanceTailFetchLogger *_tailFetchLogger;
    _Bool _isACPFeedSyncDeliveryEnabled;
    IGMainFeedAdInsertionDataSource *_feedAdInsertionDataSource;
    _Bool _shouldAlertForRetainedStoryViewerViewControllerDebugOnly;
    _Bool _shouldDelayDismissSpinnerForClientPrefetch;
    _Bool _hasFetchedIntentAwareAds;
    NSArray *_taggedProducts;
    _Bool _mediaItemWillPost;
    UIViewController *_appCoPresenceViewController;
    IGTailFetchSignalsProductProvider *_tailFetchSignalsProductProvider;
    IGTailFetchSignalsModel *_tailFetchSignalsModel;
    long long _signalsModelStartPageIndex;
    long long _signalsModelCurrentPage;
    _Bool _isAggressiveFirstTailLoadFetchEnabled;
    _Bool _didAttemptAggressiveTailFetch;
    IGMainFeedCollapsingDemarcatorController *_collapsingDemarcatorController;
    _Bool _isReloadingDueToPTR;
    IGCollectionViewVisibility *_collectionViewVisibility;
    _Bool allowPostAnother;
    _Bool _hasQueuedUpdate;
    id _proConversionFlow;
    NSString *_seedAdTrackingToken;
    id <IGFilteredFeedViewControllerDelegate> _filteredFeedViewControllerDelegate;
    id <IGFeedPickerChildViewControllerDelegate> _feedPickerChildViewControllerDelegate;
    IGListAdapter *_listAdapter;
    IGFeedPreviewingHandler *_previewingHandler;
    IGFeedScrollViewAnnouncer *_feedScrollAnnouncer;
    IGFeedNudgeHelper *_nudgeHelper;
    IGMainFeedNetworkSourceController *_networkSourceController;
    IGMainFeedListAdapterDataSource *_dataSource;
    IGRUXCoordinator *_ruxCoordinator;
    IGNetegoImpressionLogger *_netegoImpressionLogger;
    IGRapidFeedbackController *_rapidFeedbackController;
    IGStoryTrayLoggingContext *_storyTrayLoggingContext;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasQueuedUpdate; // @synthesize hasQueuedUpdate=_hasQueuedUpdate;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGStoryTrayLoggingContext *storyTrayLoggingContext; // @synthesize storyTrayLoggingContext=_storyTrayLoggingContext;
@property(readonly, nonatomic) IGRapidFeedbackController *rapidFeedbackController; // @synthesize rapidFeedbackController=_rapidFeedbackController;
@property(readonly, nonatomic) IGNetegoImpressionLogger *netegoImpressionLogger; // @synthesize netegoImpressionLogger=_netegoImpressionLogger;
@property(readonly, nonatomic) IGRUXCoordinator *ruxCoordinator; // @synthesize ruxCoordinator=_ruxCoordinator;
@property(readonly, nonatomic) IGMainFeedListAdapterDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) IGMainFeedNetworkSourceController *networkSourceController; // @synthesize networkSourceController=_networkSourceController;
@property(readonly, nonatomic) IGFeedNudgeHelper *nudgeHelper; // @synthesize nudgeHelper=_nudgeHelper;
@property(readonly, nonatomic) IGFeedScrollViewAnnouncer *feedScrollAnnouncer; // @synthesize feedScrollAnnouncer=_feedScrollAnnouncer;
@property(readonly, nonatomic) IGFeedPreviewingHandler *previewingHandler; // @synthesize previewingHandler=_previewingHandler;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(nonatomic) __weak id <IGFeedPickerChildViewControllerDelegate> feedPickerChildViewControllerDelegate; // @synthesize feedPickerChildViewControllerDelegate=_feedPickerChildViewControllerDelegate;
@property(nonatomic) __weak id <IGFilteredFeedViewControllerDelegate> filteredFeedViewControllerDelegate; // @synthesize filteredFeedViewControllerDelegate=_filteredFeedViewControllerDelegate;
@property(retain, nonatomic) NSString *seedAdTrackingToken; // @synthesize seedAdTrackingToken=_seedAdTrackingToken;
@property(retain, nonatomic) id proConversionFlow; // @synthesize proConversionFlow=_proConversionFlow;
@property(nonatomic) _Bool allowPostAnother; // @synthesize allowPostAnother;
- (_Bool)allowsEnterNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)_updateCollapsingTopOfFeedDemarcatorHeight;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_logPostFrictionEvent:(id)arg1 event:(int)arg2;
- (void)_showPostFrictionAlertForUser:(id)arg1;
- (_Bool)paginatedFeedController:(id)arg1 allowsAutoAdvance:(id)arg2;
- (void)paginatedFeedController:(id)arg1 didObserveFocusedVideoStateUpdate:(CDStruct_c3b9c2ee)arg2;
- (void)paginatedFeedController:(id)arg1 didObserveFocusChange:(id)arg2;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldZoomFromTransition;
- (_Bool)surfaceSupportsAd;
- (void)intentAwareAdsPivotCarouselSectionControllerDidInsertPivot;
- (void)hScrollAYMFSectionController:(id)arg1 didUpdateWithModel:(id)arg2;
- (void)feedGroupHeaderSectionController:(id)arg1 didTapAccessoryButtonWithAccessoryType:(id)arg2;
- (void)feedGroupHeaderSectionController:(id)arg1 headerDidChangeAttachmentToViewport:(_Bool)arg2;
- (void)feedGroupSetHeaderSectionController:(id)arg1 groupWasSelectedWithIdentifier:(id)arg2 isAttachedToViewPort:(_Bool)arg3 feedPosition:(id)arg4;
- (void)prefetchFinishedForAllPrefetchingReelPKs;
- (void)prefetchFinishedForStoryItem:(id)arg1;
- (id)feedSnapshot;
- (void)_updateScrollPositionForInitialTopOffset;
- (void)prepareForReuse;
- (void)willResignSelectedPageInDynamicPageViewController;
- (void)didBecomeSelectedPageInDynamicPageViewController;
- (void)_secondaryFeedViewController:(id)arg1 willDismissWithFeedItems:(id)arg2 nextMaxID:(id)arg3 feedPosition:(id)arg4 paginationSource:(id)arg5;
- (void)_navigateToGroup:(id)arg1 analyticsModule:(id)arg2;
- (void)feedFavoritesViewControllerDidFinishOnboarding:(id)arg1;
- (void)sectionControllerDidTapButton:(id)arg1;
- (void)_handleOpenGroupTappedWithDemarcatorModel:(id)arg1;
- (void)endOfFeedDemarcatorSectionController:(id)arg1 didTriggerAction:(long long)arg2;
- (void)endOfFeedDemarcatorSectionControllerDidAnimate:(id)arg1;
- (void)endOfFeedDemarcatorSectionControllerWillStartAnimating:(id)arg1;
- (void)endOfFeedDemarcatorSectionControllerWasSeen:(id)arg1;
- (void)scrollViewAccessibilityNearBottom:(id)arg1;
- (_Bool)accessibilityPerformMagicTap;
- (void)screenshotObserverDidSeeActiveScreenCapture:(id)arg1 event:(long long)arg2;
- (void)screenshotObserverDidSeeScreenshotTaken:(id)arg1;
- (id)_loadScrollPosition;
- (void)_restoreScrollPosition:(id)arg1;
- (void)_restoreStateIfNeeded;
- (void)_savePosition;
- (void)flingHandlerDidActivate:(id)arg1;
- (void)flingHandlerDidDeactivate:(id)arg1;
@property(retain, nonatomic) id <IGFeedFilterType> filter;
- (struct UIEdgeInsets)contentInsetsForAlertBar;
- (void)chainingContainer:(id)arg1 didTapSendButtonForMedia:(id)arg2;
- (void)chainingContainer:(id)arg1 didRetrieveChainingPaginationToken:(id)arg2;
- (_Bool)shouldShowPillForChainingController:(id)arg1;
- (void)chainingContainerDidShowPill:(id)arg1;
- (double)chainingContainerAdditionalBottomInsetForPill:(id)arg1;
- (void)_doLightweightCheckOnHomeOrIconTap;
- (void)_scrollToTopOnHomeButtonOrIconTap;
- (long long)positionForBar:(id)arg1;
- (id)scrollViewAnnouncer;
- (id)scrollView;
- (double)idleTopContentInsetForRefreshControl:(id)arg1;
- (void)refreshControl:(id)arg1 didUpdateAppearingProgress:(double)arg2;
- (void)refreshControl:(id)arg1 didReleaseWithRefreshControlState:(long long)arg2;
- (void)refreshControlDidEndFinishLoadingAnimation:(id)arg1;
- (_Bool)newPostsIndicatorControllerDelegateCanShowIndicator:(id)arg1;
- (void)newPostsIndicatorControllerDelegateIndicatorWasTapped:(id)arg1;
- (void)_fetchAggressiveFirstTailLoadOnFeedIfNeeded;
- (double)_getStoryTrayVisibleHeight;
- (double)_newPostsIndicatorTopInsetAdjustment;
- (void)_updateLoadDistance;
- (void)_loadDeferredPostsWithAnimated:(_Bool)arg1;
- (void)_updateNewPostsIndicator;
- (_Bool)_attemptToShowUnseenItemsWithReason:(unsigned long long)arg1;
- (_Bool)_showNewPostsIndicator;
- (void)mainFeedNeworkSourceControllerDidClearOutNewReportedPosts:(id)arg1;
- (void)mainFeedNeworkSourceController:(id)arg1 hasReportedNewPostsAvailable:(_Bool)arg2;
- (void)mainFeedNetworkSourceController:(id)arg1 didDeferLoadingObjects:(id)arg2 message:(id)arg3;
- (void)_fetchLightweightResponseIfNeededAfterOnlineSwitch;
- (void)_updateMediaDepth;
- (void)updateRequestParameter:(id)arg1;
- (void)_logRefreshedSponsoredFeedItems:(id)arg1;
- (struct CGRect)createButtonFrame;
- (struct CGRect)searchButtonFrame;
- (struct CGRect)activityButtonFrame;
@property(readonly, nonatomic) _Bool isSecondary;
- (void)handleTapOnHomeTab;
@property(nonatomic) unsigned long long activityBadgeCount;
- (struct CGRect)navigationHeaderSecondaryRightNavigationButtonFrame;
- (struct CGRect)navigationHeaderRightNavigationButtonFrame;
- (struct CGRect)navigationHeaderFrame;
- (void)reloadStoryTray;
- (id)directBarButtonDestinationView;
- (id)directBarButton;
- (void)_scrollToTopAndRefreshAnimated:(_Bool)arg1 isCheckFromHomeOrIconTap:(_Bool)arg2 additionalParamters:(id)arg3;
- (void)scrollTrayToFrontAnimated:(_Bool)arg1;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)scrollToTopOnTappedTabBar;
- (void)feedSectionControllerDidInsertIntentAwareAds:(id)arg1;
- (_Bool)feedSectionControllerIsEligibleToFetchIntentAwareAds;
- (_Bool)feedSectionControllerShouldAttemptToFetchIntentAwareAds;
- (void)feedSectionControllerDidDismissDirectShareSheet;
- (void)feedSectionController:(id)arg1 willPresentDirectShareSheet:(id)arg2;
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
- (void)feedSectionController:(id)arg1 changedMuteStatusForUser:(id)arg2 changedPostsMuteStatus:(_Bool)arg3 changedStoryMuteStatus:(_Bool)arg4;
- (void)feedSectionController:(id)arg1 didUnfollowHashtag:(id)arg2;
- (void)feedSectionController:(id)arg1 didUnfollowUser:(id)arg2;
- (void)feedSectionControllerDidSwipePageCell:(id)arg1 toIndex:(long long)arg2;
- (void)feedSectionControllerDidTapCommentEntryPoint:(id)arg1 replyText:(id)arg2;
- (void)feedSectionControllerDidTapCustomizableButton:(id)arg1;
- (void)mainFeedNetworkSourceControllerDidPrepareForNewFeedSession:(id)arg1;
- (void)mainFeedNetworkSourceControllerDidDiscardDeferredResponse:(id)arg1;
- (_Bool)mainFeedNetworkSourceController:(id)arg1 shouldDeferResponseProcessingForFetchReason:(long long)arg2 hasNewObjects:(_Bool)arg3 isFirstItemInTopOfNewFeed:(_Bool)arg4;
- (void)mainFeedNetworkSourceControllerDidTriggerForegroundLightweightCheck:(id)arg1;
- (void)mainFeedNetworkSourceControllerDidTriggerForegroundFetchFeed:(id)arg1;
- (void)_dismissSecondaryMainFeedViewControllerIfNecessary;
- (id)additionalBugReportMetadata;
- (id)bugReportDescription;
- (void)feedStatusEmptyStateButtonWasTapped:(id)arg1;
- (void)feedStatusViewDidTap:(id)arg1;
- (void)didDismissHScrollActivatorsSectionController:(id)arg1;
- (void)megaphoneSectionController:(id)arg1 logButtonClickIfNeeded:(id)arg2;
- (void)megaphoneSectionController:(id)arg1 didSelectButton:(id)arg2;
- (void)didDismissMegaphoneSectionController:(id)arg1;
- (void)storyDataControllerDidFinishPrefetchDelay;
- (void)storyDataController:(id)arg1 didStartPrefetchOnHeadloadWithReelPks:(id)arg2;
- (void)storyDataController:(id)arg1 fetchTrayDidFailWithError:(id)arg2 errorMessageToDisplay:(id)arg3 httpStatusCode:(long long)arg4 refreshType:(long long)arg5 updateDuration:(double)arg6;
- (void)storyDataController:(id)arg1 didUpdateWithRefreshType:(long long)arg2 updateDuration:(double)arg3 storyRankToken:(id)arg4 deliveryLoggingKey:(id)arg5;
- (void)feedNetworkSource:(id)arg1 willStartNewFeedSessionWithId:(id)arg2 previousSessionId:(id)arg3;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2;
- (void)_updateForRefreshBeganForFetchReason:(long long)arg1;
- (void)_updateForRefreshFinished:(long long)arg1 isCachedResult:(_Bool)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)feedNetworkSource:(id)arg1 didStartLoadingWithConfig:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)_updateHeaderSeparatorAlpha;
@property(readonly, nonatomic) IGStoryTraySectionController *storyTraySectionController;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_scrollingEnded;
- (void)_appWillTerminate:(id)arg1;
- (void)_onTapTabButtons:(id)arg1;
- (void)applicationWillEnterForegroundWithTimeIntervalSinceBackground:(double)arg1 warmStartInitializedFromNotification:(_Bool)arg2;
- (void)_onAppDidEnterBackground:(id)arg1;
- (void)_onAppDidBecomeActive:(id)arg1;
- (void)_networkingReachabilityDidChange:(id)arg1;
- (void)igtvUploadStatusDidChangePendingUploadItems:(id)arg1;
- (void)igtvUploadStatusDidChange:(long long)arg1 postShare:(id)arg2;
- (void)igtvUploadStatusDidSucceedWithMedia:(id)arg1 sharedPreviewToFeed:(_Bool)arg2;
- (void)storyUploadRemovedFromReelOwner:(id)arg1;
- (void)storyUploadStartedWithReelOwner:(id)arg1;
- (void)storyUploadStartedWithTaggedProducts:(id)arg1 localMediaIdentifiers:(id)arg2 entryPoint:(long long)arg3;
- (void)feedItemWillPost:(id)arg1;
- (void)_presentPostAnotherPostIfNeeded:(id)arg1;
- (void)feedItemPostFailed;
- (void)feedItemPosted:(id)arg1 postId:(id)arg2;
- (void)showFacebookLoginToast;
- (void)didDismissFeedItemBanner:(id)arg1;
- (id)loggingExtras;
- (id)loggingContext;
- (void)_clearLoadingStateAnimated:(_Bool)arg1;
- (void)_showLoadingStateForFetchReason:(long long)arg1 animated:(_Bool)arg2;
- (void)storiesInteractionManagerDidUpdateStoriesUsageState:(id)arg1;
- (void)storyTraySectionController:(id)arg1 markedNotInterestedForUser:(id)arg2;
- (void)storyTraySectionControllerScrollViewWillBeginDragging:(id)arg1;
- (void)storyTraySectionController:(id)arg1 unfollowedUser:(id)arg2;
- (void)storyTraySectionController:(id)arg1 changedMuteStatusForUser:(id)arg2 changedPostsMuteStatus:(_Bool)arg3 changedStoryMuteStatus:(_Bool)arg4;
- (void)storyTraySectionControllerDidShowShimmer:(id)arg1;
- (void)storyTraySectionController:(id)arg1 didPublishHighlightNavigationAction:(long long)arg2;
- (void)storyTraySectionControllerScrollViewWillScrollNearRight:(id)arg1;
- (void)storyTraySectionController:(id)arg1 willShowViewerWithItem:(id)arg2;
- (void)storyTraySectionController:(id)arg1 didDismissViewerWithAddToStoryNUXModel:(id)arg2;
- (void)didDismissSuggestedClipsSectionController:(id)arg1;
- (void)didDismissQpMegaphoneSectionControllerPresenter:(id)arg1;
- (void)didUpdateMultipleAccounts;
- (void)_showMultiAccountSurveyIfNecessary;
- (void)mainFeedAppHeaderControllerDidRequestEndEditing:(id)arg1 withNavigationTarget:(long long)arg2;
- (void)mainFeedAppHeaderControllerRefreshTapped:(id)arg1;
- (void)mainFeedAppHeaderControllerLogoTapped:(id)arg1;
- (_Bool)performViewControllerCommitForPreviewedItem:(id)arg1;
- (id)collectionView;
- (void)renderFeedAnimated:(_Bool)arg1 finishRefreshing:(_Bool)arg2 type:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_showStoryVCNotDeallocatedAlertIfNecessaryAndOnDebugBuild;
- (void)_reportIfShowedFeedRecAboveEOF:(id)arg1 atIndex:(long long)arg2;
- (void)_presentMultipleAccountLoginToast;
- (void)_fetchNextPageIfNearBottom;
- (void)_fetchNextPage;
- (void)_refreshWhenPTR;
- (void)_fetchFeedBannerData;
- (void)_checkQPEligibility;
- (void)_fetchQuickPromotionData;
- (void)_updateModuleGraphWithInFeedUnitItems:(id)arg1;
- (void)_prefetchMetadataAndUpdateModuleGraphWithStoriesInFeedUnitItemsIfNeeded;
- (void)_refreshFeedWithFetchReason:(long long)arg1 additionalParameters:(id)arg2 animated:(_Bool)arg3;
- (void)_processPendingRefreshFeedIfNeeded;
- (void)_loadFeedIfNecessaryForDisplay;
- (id)_traySizeAtStartupRenderEnd;
- (id)_feedSizeAtStartupRenderEnd;
- (_Bool)_shouldAttemptToVendCachedItemsOnItemDisplay;
- (void)_showAffiliateShopAutoOnboardingDialogIfNecessary;
- (unsigned long long)_currentAdInsertionEntryPoint;
- (void)_setCurrentPageAsFeedAdsDestination;
- (_Bool)accessibilityPerformEscape;
- (void)_setupCollectionViewAndAdapter;
- (void)_setupNavigationBar;
- (void)dealloc;
- (void)_adjustCollectionViewContentInsetsIfNeeded;
- (_Bool)prefersNavigationBarHidden;
- (struct UIEdgeInsets)preferredMinimizableInsets;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;
- (id)_resolveLastSeenItem;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (struct CGRect)fb_visibleContentRect;
- (void)_initializeSignalsModelIfNeeded;
- (id)initWithUserSession:(id)arg1 networkSourceController:(id)arg2 managesHeader:(_Bool)arg3 hidesStoriesTray:(_Bool)arg4 primaryFeedViewController:(id)arg5 initialScrollPosition:(id)arg6 analyticsModule:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

