//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFeedScrollViewListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGSaveCollectionTabSupporting-Protocol.h"
#import "IGTVChannelDataSourceListener-Protocol.h"
#import "IGTVEmptySectionControllerDelegate-Protocol.h"
#import "IGTVPreviewCellActionControllerDelegate-Protocol.h"
#import "IGTVThumbnailSectionControllerDelegate-Protocol.h"
#import "IGTabControlSegment-Protocol.h"

@class IGFeedScrollViewAnnouncer, IGListAdapter, IGRefreshControl, IGSavedIGTVCollectionLoggingContext, IGTVDestinationNavigationPerfComponents, IGTVPreviewCellActionController, IGTVThumbnailSectionModel, IGUserSession, NSString, UICollectionView;
@protocol IGTVChannelDataSourceType;

@interface IGSavedIGTVCollectionViewController : IGViewController <IGFeedScrollViewListener, IGListAdapterDataSource, IGTVChannelDataSourceListener, IGTVPreviewCellActionControllerDelegate, IGTVThumbnailSectionControllerDelegate, IGTVEmptySectionControllerDelegate, IGSaveCollectionTabSupporting, IGTabControlSegment>
{
    IGUserSession *_userSession;
    id <IGTVChannelDataSourceType> _channelDataSource;
    IGSavedIGTVCollectionLoggingContext *_loggingContext;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGRefreshControl *_refreshControl;
    IGFeedScrollViewAnnouncer *_feedScrollAnnouncer;
    _Bool _isLoading;
    IGTVPreviewCellActionController *_cellActionController;
    NSString *_collectionID;
    IGTVDestinationNavigationPerfComponents *_perfComponents;
    IGTVThumbnailSectionModel *_firstThumbnailObject;
}

- (void).cxx_destruct;
- (void)setSelectionState:(_Bool)arg1;
- (_Bool)isEmpty;
- (id)title;
- (id)accessibilityIdentifier;
- (id)fallbackIcon;
- (void)_updateContentInsets;
- (void)_updateTitle;
- (void)_loadMoreIfNeeded;
- (void)_handleRefreshControlTriggered:(id)arg1;
- (void)_navigateToProfileForUser:(id)arg1 fromFeedItem:(id)arg2;
- (void)_showActionsForMedia:(id)arg1;
- (void)previewCellActionController:(id)arg1 showCaptionSettingsForMedia:(id)arg2;
- (void)previewCellActionController:(id)arg1 didSaveFeedItem:(id)arg2;
- (void)previewCellActionController:(id)arg1 didTapGoToUserProfile:(id)arg2 fromFeedItem:(id)arg3;
- (void)previewCellActionController:(id)arg1 didSelectAddToSeriesItem:(id)arg2;
- (void)previewCellActionController:(id)arg1 didUnhideFeedItem:(id)arg2;
- (void)previewCellActionController:(id)arg1 didHideFeedItem:(id)arg2;
- (void)channelDataSourceDidUpdate:(id)arg1 fromAction:(long long)arg2 error:(id)arg3;
- (void)channelDataSourceWillUpdate:(id)arg1;
- (id)_determineChannelDataSourceWithMedia:(id)arg1;
- (void)igtvEmptySectionControllerDidTapRetry;
- (void)thumbnailSectionController:(id)arg1 didShowSectionModel:(id)arg2 fromCell:(id)arg3;
- (void)thumbnailSectionControllerDidLongPressStoryTray:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3;
- (void)thumbnailSectionControllerDidTapTrayItem:(id)arg1 availableTrayItems:(id)arg2 withSourceChannelType:(id)arg3 videoPosition:(id)arg4;
- (void)thumbnailSectionControllerDidLongPressFeedItem:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3;
- (void)thumbnailSectionControllerDidTapFeedItem:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3 fromView:(id)arg4;
- (_Bool)thumbnailSectionControllerShouldBeginLongPress;
- (long long)loggingPositionOffsetForThumbnailSectionController;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)analyticsModule;
- (struct UIEdgeInsets)preferredContentInsets;
- (long long)preferredTabBarBehavior;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 channelDataSource:(id)arg2 collectionID:(id)arg3 loggingContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

