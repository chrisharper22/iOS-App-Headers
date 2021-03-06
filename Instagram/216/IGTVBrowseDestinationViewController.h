//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCollectionViewFocusListener-Protocol.h"
#import "IGFeedItemLoggingProviderDelegate-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterUpdateListener-Protocol.h"
#import "IGRefreshControlContentInsetDataSource-Protocol.h"
#import "IGScrollableViewControllerProtocol-Protocol.h"
#import "IGStoryViewerDelegate-Protocol.h"
#import "IGTVDestinationDataSourceDelegate-Protocol.h"
#import "IGTVDestinationHScrollSectionControllerDelegate-Protocol.h"
#import "IGTVEmptySectionControllerDelegate-Protocol.h"
#import "IGTVPreviewCellActionControllerDelegate-Protocol.h"
#import "IGTVThumbnailSectionControllerDelegate-Protocol.h"

@class IGActionableConfirmationToastController, IGBloksAsyncActionHandler, IGCollectionViewFocusController, IGFeedScrollViewAnnouncer, IGListAdapter, IGRefreshControl, IGScrollPerfManualLogger, IGTVDestinationDataSource, IGTVDestinationLoggingContext, IGTVDestinationNavigationPerfComponents, IGTVDestinationVideoPosition, IGTVPendingUploadSectionCoordinator, IGTVPreviewCellActionController, IGTVViewerEntryPoint, IGUserSession, NSString, UICollectionView;
@protocol IGTVBrowseDestinationViewControllerDelegate;

@interface IGTVBrowseDestinationViewController : IGViewController <IGCollectionViewFocusListener, IGFeedItemLoggingProviderDelegate, IGFeedScrollViewListener, IGListAdapterDataSource, IGListAdapterUpdateListener, IGRefreshControlContentInsetDataSource, IGStoryViewerDelegate, IGTVDestinationDataSourceDelegate, IGTVDestinationHScrollSectionControllerDelegate, IGTVEmptySectionControllerDelegate, IGTVPreviewCellActionControllerDelegate, IGTVThumbnailSectionControllerDelegate, IGScrollableViewControllerProtocol>
{
    IGUserSession *_userSession;
    IGTVDestinationDataSource *_dataSource;
    IGTVDestinationLoggingContext *_loggingContext;
    IGTVViewerEntryPoint *_viewerEntryPoint;
    id <IGTVBrowseDestinationViewControllerDelegate> _delegate;
    IGTVPendingUploadSectionCoordinator *_pendingUploadCoordinator;
    IGTVPreviewCellActionController *_cellActionController;
    long long _cellActionComponent;
    IGTVDestinationVideoPosition *_cellActionVideoPosition;
    NSString *_cellActionSourceChannelType;
    IGActionableConfirmationToastController *_toastController;
    IGBloksAsyncActionHandler *_bloksAsyncActionHandler;
    IGTVDestinationNavigationPerfComponents *_perfComponents;
    IGScrollPerfManualLogger *_scrollPerfLogger;
    IGCollectionViewFocusController *_focusController;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGRefreshControl *_refreshControl;
    IGFeedScrollViewAnnouncer *_feedScrollAnnouncer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGFeedScrollViewAnnouncer *feedScrollAnnouncer; // @synthesize feedScrollAnnouncer=_feedScrollAnnouncer;
@property(readonly, nonatomic) IGRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_launchBloksAppWithBloksAppId:(id)arg1 params:(id)arg2;
- (double)_toastBottomInset;
- (struct UIEdgeInsets)_scrollIndicatorInsetsForBaseInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_contentInsetsForBaseInsets:(struct UIEdgeInsets)arg1;
- (double)_topContentInsetForBaseInsets:(struct UIEdgeInsets)arg1;
- (void)_updateContentInsetsIncludingTopInset:(_Bool)arg1;
- (void)_updateCollectionViewLayoutIfNeeded;
- (void)updateScrollIndicatorInsets;
- (void)updateContentInsets;
- (_Bool)accessibilityScroll:(long long)arg1;
- (id)surfaceCategoryId;
- (id)mediaIndexForMedia:(id)arg1;
- (id)exploreInfo;
- (id)chainingInfoForMedia:(id)arg1;
- (id)carouselInfoForMedia:(id)arg1;
- (id)followControllerContextStringForMedia:(id)arg1;
- (id)customModuleForMedia:(id)arg1;
- (id)extraDictionaryForMedia:(id)arg1;
@property(readonly, copy, nonatomic) NSString *initialSessionId;
@property(readonly, copy, nonatomic) NSString *sessionId;
- (void)collectionViewFocusContext:(id)arg1 didChangeToFocusedSection:(long long)arg2;
- (id)scrollViewAnnouncer;
- (id)scrollView;
- (void)storyViewerDidUnfollow:(id)arg1;
- (void)storyViewerDidMute:(id)arg1 didMutePosts:(_Bool)arg2;
- (void)storyViewerDidTapViewDay:(id)arg1;
- (void)storyViewerDidTapTryItOn:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (_Bool)storyViewerShouldPresentCamera:(id)arg1;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 viewerExitContextDict:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storyViewer:(id)arg1 didNavigateToStoryItem:(id)arg2;
- (double)idleTopContentInsetForRefreshControl:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (long long)preferredTabBarBehavior;
- (id)analyticsModule;
- (void)_handleLearnMoreTapWithMedia:(id)arg1;
- (void)_showActionsForMedia:(id)arg1 fromComponent:(long long)arg2 withSourceChannelType:(id)arg3 videoPosition:(id)arg4;
- (void)_handleRefreshControlTriggered:(id)arg1;
- (void)_presentAddToCollectionViewController:(id)arg1;
- (void)_presentSaveToCollectionNotificationForMedia:(id)arg1;
- (void)_presentProfileForUser:(id)arg1 fromFeedItem:(id)arg2;
- (void)_presentViewerForMedia:(id)arg1 fromComponent:(long long)arg2 withDataSource:(id)arg3 sourceChannelType:(id)arg4 videoPosition:(id)arg5 initialSeekTime:(id)arg6 collectionInfo:(id)arg7;
- (void)_presentViewerForMedia:(id)arg1 fromComponent:(long long)arg2 withDataSource:(id)arg3 sourceChannelType:(id)arg4 videoPosition:(id)arg5;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)igtvEmptySectionControllerDidTapRetry;
- (void)thumbnailSectionController:(id)arg1 didShowSectionModel:(id)arg2 fromCell:(id)arg3;
- (void)thumbnailSectionControllerDidLongPressStoryTray:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3;
- (void)thumbnailSectionControllerDidTapTrayItem:(id)arg1 availableTrayItems:(id)arg2 withSourceChannelType:(id)arg3 videoPosition:(id)arg4;
- (void)thumbnailSectionControllerDidLongPressFeedItem:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3;
- (void)thumbnailSectionControllerDidTapFeedItem:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3 fromView:(id)arg4;
- (_Bool)thumbnailSectionControllerShouldBeginLongPress;
- (long long)loggingPositionOffsetForThumbnailSectionController;
- (void)destinationHScrollSectionController:(id)arg1 didTapChannelDataSource:(id)arg2 fromComponent:(long long)arg3;
- (void)destinationHScrollSectionController:(id)arg1 didTapTrayItem:(id)arg2 availableTrayItems:(id)arg3 fromComponent:(long long)arg4 withChannelDataSource:(id)arg5 videoPosition:(id)arg6;
- (void)destinationHScrollSectionController:(id)arg1 didLongPressFeedItem:(id)arg2 fromComponent:(long long)arg3 withSourceChannelType:(id)arg4 videoPosition:(id)arg5;
- (void)destinationHScrollSectionController:(id)arg1 didTapFeedItem:(id)arg2 fromComponent:(long long)arg3 withChannelDataSource:(id)arg4 videoPosition:(id)arg5;
- (void)listAdapter:(id)arg1 didFinishUpdate:(long long)arg2 animated:(_Bool)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)destinationDataSourceDidUpdate:(id)arg1 action:(long long)arg2 error:(id)arg3;
- (void)destinationDataSourceWillFetchForFirstTime:(id)arg1;
- (void)previewCellActionController:(id)arg1 showCaptionSettingsForMedia:(id)arg2;
- (void)previewCellActionController:(id)arg1 didSaveFeedItem:(id)arg2;
- (void)previewCellActionController:(id)arg1 didTapGoToUserProfile:(id)arg2 fromFeedItem:(id)arg3;
- (void)previewCellActionController:(id)arg1 didSelectAddToSeriesItem:(id)arg2;
- (void)previewCellActionController:(id)arg1 didUnhideFeedItem:(id)arg2;
- (void)previewCellActionController:(id)arg1 didHideFeedItem:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 dataSource:(id)arg2 loggingContext:(id)arg3 viewerEntryPoint:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

