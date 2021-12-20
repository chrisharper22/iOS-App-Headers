//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFeedScrollViewListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGTVBulkEditButtonViewDelegate-Protocol.h"
#import "IGTVChannelDataSourceListener-Protocol.h"
#import "IGTVEmptySectionControllerDelegate-Protocol.h"
#import "IGTVPreviewCellActionControllerDelegate-Protocol.h"
#import "IGTVThumbnailSectionControllerDelegate-Protocol.h"

@class IGEmptyFeedView, IGFeedScrollViewAnnouncer, IGListAdapter, IGRefreshControl, IGTVBulkEditButtonView, IGTVDestinationNavigationPerfComponents, IGTVDestinationVideoPosition, IGTVHackyCollectionView, IGTVPreviewCellActionController, IGTVSavedLoggingContext, IGUserSession, NSMutableSet, NSString;
@protocol IGTVChannelDataSourceType;

@interface IGTVSavedViewController : IGViewController <IGFeedScrollViewListener, IGListAdapterDataSource, IGTVThumbnailSectionControllerDelegate, IGTVChannelDataSourceListener, IGTVEmptySectionControllerDelegate, IGTVBulkEditButtonViewDelegate, IGTVPreviewCellActionControllerDelegate>
{
    IGUserSession *_userSession;
    id <IGTVChannelDataSourceType> _channelDataSource;
    IGTVHackyCollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGRefreshControl *_refreshControl;
    IGFeedScrollViewAnnouncer *_feedScrollAnnouncer;
    IGTVSavedLoggingContext *_loggingContext;
    IGEmptyFeedView *_emptyView;
    IGTVDestinationNavigationPerfComponents *_perfComponents;
    _Bool _isInSelectionMode;
    NSMutableSet *_selectedFeedItems;
    IGTVBulkEditButtonView *_bulkEditButtonView;
    IGTVPreviewCellActionController *_cellActionController;
    IGTVDestinationVideoPosition *_cellActionVideoPosition;
    NSString *_cellActionSourceChannelType;
    _Bool _feedIntegrationEnabled;
}

- (void).cxx_destruct;
- (void)_loadMoreIfNeeded;
- (void)_updateBulkEditButtonView;
- (void)_updateContentInsets;
- (void)_updateNavigationItems;
- (void)_updateSelectionMode:(_Bool)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)_resaveSelectedItems:(id)arg1;
- (void)_optimisticallyUnsaveSelectedItems:(id)arg1;
- (void)_handleBulkUnsaveFailureWithIgnoreSaveDataSource:(id)arg1;
- (CDUnknownBlockType)_createFailureHandlerWithIgnoreSaveDataSource:(id)arg1 selectedItems:(id)arg2;
- (CDUnknownBlockType)_createSuccessHandler;
- (void)igtvBulkEditButtonViewDidTapEdit:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)channelDataSourceDidUpdate:(id)arg1 fromAction:(long long)arg2 error:(id)arg3;
- (void)channelDataSourceWillUpdate:(id)arg1;
- (void)_backButtonPressed;
- (void)_cancelEditPressed;
- (void)_actionControllerDidTapSelect;
- (void)_showActionOptions;
- (void)_handleRefreshControlTriggered:(id)arg1;
- (void)previewCellActionController:(id)arg1 showCaptionSettingsForMedia:(id)arg2;
- (void)previewCellActionController:(id)arg1 didSaveFeedItem:(id)arg2;
- (void)previewCellActionController:(id)arg1 didTapGoToUserProfile:(id)arg2 fromFeedItem:(id)arg3;
- (void)previewCellActionController:(id)arg1 didUnhideFeedItem:(id)arg2;
- (void)previewCellActionController:(id)arg1 didSelectAddToSeriesItem:(id)arg2;
- (void)previewCellActionController:(id)arg1 didHideFeedItem:(id)arg2;
- (void)thumbnailSectionController:(id)arg1 didShowSectionModel:(id)arg2 fromCell:(id)arg3;
- (void)thumbnailSectionControllerDidLongPressStoryTray:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3;
- (void)thumbnailSectionControllerDidTapTrayItem:(id)arg1 availableTrayItems:(id)arg2 withSourceChannelType:(id)arg3 videoPosition:(id)arg4;
- (void)thumbnailSectionControllerDidLongPressFeedItem:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3;
- (void)thumbnailSectionControllerDidTapFeedItem:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3 fromView:(id)arg4;
- (_Bool)thumbnailSectionControllerShouldBeginLongPress;
- (long long)loggingPositionOffsetForThumbnailSectionController;
- (void)igtvEmptySectionControllerDidTapRetry;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (long long)preferredTabBarBehavior;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 loggingContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

