//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFeedScrollViewListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGScrollableViewControllerProtocol-Protocol.h"
#import "IGSwitchUsersControllerDelegate-Protocol.h"
#import "IGTVCreationFlowViewControllerDelegate-Protocol.h"
#import "IGTVCreatorHScrollSectionControllerDelegate-Protocol.h"
#import "IGTVDestinationNavigationBarControllerDelegate-Protocol.h"
#import "IGTVDraftsEntryPointSectionControllerDelegate-Protocol.h"
#import "IGTVDraftsManagerEventListener-Protocol.h"
#import "IGTVProfileDataSourceDelegate-Protocol.h"
#import "IGTVProfileEmptySelfSectionControllerDelegate-Protocol.h"
#import "IGTVProfileRefreshUserDetailsSectionControllerDelegate-Protocol.h"
#import "IGTVProfileSortAndFilterContainerViewControllerDelegate-Protocol.h"
#import "IGTVProfileSortAndFilterSectionControllerDelegate-Protocol.h"
#import "IGTVProfileUserDetailsSectionControllerDelegate-Protocol.h"
#import "IGTVSendAddToSeriesRequestDelegate-Protocol.h"
#import "IGTVSeriesFeedItemActionSheetControllerDelegate-Protocol.h"
#import "IGTVSeriesListViewControllerDelegate-Protocol.h"
#import "IGTVSuggestedUsersDataSourceDelegate-Protocol.h"
#import "IGTVThumbnailSectionControllerDelegate-Protocol.h"

@class IGFeedScrollViewAnnouncer, IGListAdapter, IGMedia, IGRefreshControl, IGSwitchUsersController, IGTVDestinationLoggingContext, IGTVDestinationNavigationBarController, IGTVDestinationNavigationPerfComponents, IGTVHackyCollectionView, IGTVPendingUploadSectionCoordinator, IGTVProfileDataSource, IGTVSettingsDependencies, IGTVSuggestedUsersDataSource, IGTVThumbnailSectionModel, IGUser, IGUserSession, NSString;

@interface IGTVProfileViewController : IGViewController <IGTVSeriesFeedItemActionSheetControllerDelegate, IGTVSeriesListViewControllerDelegate, IGFeedScrollViewListener, IGListAdapterDataSource, IGScrollableViewControllerProtocol, IGTVCreationFlowViewControllerDelegate, IGTVDestinationNavigationBarControllerDelegate, IGTVProfileDataSourceDelegate, IGTVProfileEmptySelfSectionControllerDelegate, IGTVProfileUserDetailsSectionControllerDelegate, IGTVProfileRefreshUserDetailsSectionControllerDelegate, IGTVProfileSortAndFilterSectionControllerDelegate, IGTVThumbnailSectionControllerDelegate, IGSwitchUsersControllerDelegate, IGTVSendAddToSeriesRequestDelegate, IGTVDraftsEntryPointSectionControllerDelegate, IGTVDraftsManagerEventListener, IGTVProfileSortAndFilterContainerViewControllerDelegate, IGTVSuggestedUsersDataSourceDelegate, IGTVCreatorHScrollSectionControllerDelegate>
{
    IGUser *_user;
    IGUserSession *_userSession;
    IGMedia *_selectedMedia;
    IGTVSuggestedUsersDataSource *_suggestedUsersDataSource;
    _Bool _showSuggestedUsers;
    IGTVProfileDataSource *_dataSource;
    _Bool _isAccountSwitchingEnabled;
    IGTVDestinationLoggingContext *_loggingContext;
    IGTVHackyCollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGFeedScrollViewAnnouncer *_feedScrollAnnouncer;
    IGRefreshControl *_refreshControl;
    IGTVDestinationNavigationPerfComponents *_perfComponents;
    IGTVSettingsDependencies *_settingsDependencies;
    IGTVPendingUploadSectionCoordinator *_pendingUploadCoordinator;
    IGTVThumbnailSectionModel *_firstThumbnailObject;
    IGTVDestinationNavigationBarController *_navController;
    IGSwitchUsersController *_switchUsersController;
    unsigned long long _sortType;
    _Bool _isSelfProfile;
    NSString *_impressionBroadcastPk;
    _Bool _feedIntegrationEnabled;
}

- (void).cxx_destruct;
- (void)_suggestedUsersShowSpinner:(_Bool)arg1 requestFailed:(_Bool)arg2;
- (void)_handleSortForType;
- (void)_profileDidTapBroadcast:(id)arg1 fromView:(id)arg2;
- (void)_profileDidTapEditProfileButton;
- (void)_updateContentInsets;
- (void)creatorHScrollSectionControllerDidTapSeeAllButton:(id)arg1;
- (void)creatorHScrollSectionController:(id)arg1 didTapProfileImageOrNameForUser:(id)arg2;
- (void)suggestedUsersDataSourceDidFail:(id)arg1;
- (void)suggestedUsersDataSourceDidUpdate:(id)arg1;
- (void)profileSortAndFilterContainerViewController:(id)arg1 didTapSortType:(unsigned long long)arg2;
- (void)switchUsersControllerDidSelectAddAccountRow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)switchUsersController:(id)arg1 tableViewDidSelectRowWithOneTapLoginSwitchAccount:(id)arg2;
- (void)switchUsersController:(id)arg1 tableViewDidSelectRowWithUser:(id)arg2;
- (void)switchUsersControllerDidSelectRowWithCurrentUser:(id)arg1;
- (void)igtvDraftsManagerDidRemoveDraft;
- (void)igtvDraftsManagerDidSaveDraft;
- (void)igtvDraftsDidTapEntryPoint:(id)arg1;
- (void)profileSortAndFilterSectionControllerDidTapSortAndFilterButton:(id)arg1;
- (void)profileRefreshUserDetailsSectionController:(id)arg1 didTapSuggestedUsersWithIsSelected:(_Bool)arg2;
- (void)profileRefreshUserDetailsSectionController:(id)arg1 didTapBroadcast:(id)arg2 fromView:(id)arg3;
- (void)profileRefreshUserDetailsSectionControllerDidTapEditProfileButton:(id)arg1;
- (void)profileUserDetailsSectionController:(id)arg1 didTapBroadcast:(id)arg2 fromView:(id)arg3;
- (void)profileUserDetailsSectionControllerDidTapEditProfileButton:(id)arg1;
- (void)profileEmptySelfSectionControllerDidTapUploadButton:(id)arg1;
- (void)profileDataSourceDidUpdateState:(long long)arg1 withError:(id)arg2;
- (void)profileDataSourceDidUpdateChannelDataSource;
- (void)profileDataSourceDidUpdateUser:(id)arg1;
- (void)profileDataSourceWillFetchForFirstTime;
- (void)tvSeriesUploadMetadataHandlerDidFail;
- (void)tvSeriesUploadMetadataHandlerDidComplete;
- (void)seriesListViewController:(id)arg1 didSelectSeriesDataModel:(id)arg2;
- (void)actionsControllerDidSelectAddToSeriesItem:(id)arg1 withMedia:(id)arg2;
- (void)actionsControllerDidFinish:(id)arg1;
- (void)destinationNavigationControllerDidTapUsername:(id)arg1;
- (void)destinationNavigationControllerDidTapBackButton:(id)arg1;
- (void)destinationNavigationControllerDidTapSearchButton:(id)arg1;
- (void)destinationNavigationControllerDidTapNotificationsButton:(id)arg1 turnNotificationsOn:(_Bool)arg2;
- (void)destinationNavigationControllerDidTapSettingsButton:(id)arg1;
- (void)destinationNavigationControllerDidTapUploadButton:(id)arg1;
- (void)tvCreationFlowViewControllerDidSaveAsDraft:(id)arg1;
- (void)tvCreationFlowViewControllerDidShare:(id)arg1;
- (void)tvCreationFlowViewControllerDidCancel:(id)arg1;
- (void)thumbnailSectionController:(id)arg1 didShowSectionModel:(id)arg2 fromCell:(id)arg3;
- (void)thumbnailSectionControllerDidLongPressStoryTray:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3;
- (void)thumbnailSectionControllerDidTapTrayItem:(id)arg1 availableTrayItems:(id)arg2 withSourceChannelType:(id)arg3 videoPosition:(id)arg4;
- (void)thumbnailSectionControllerDidLongPressFeedItem:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3;
- (void)thumbnailSectionControllerDidTapFeedItem:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3 fromView:(id)arg4;
- (_Bool)thumbnailSectionControllerShouldBeginLongPress;
- (long long)loggingPositionOffsetForThumbnailSectionController;
- (id)scrollViewAnnouncer;
- (id)scrollView;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (long long)preferredStatusBarStyle;
- (struct UIEdgeInsets)preferredContentInsets;
- (_Bool)prefersNavigationBarHidden;
- (id)analyticsModule;
- (void)_handleRefreshControlTriggered:(id)arg1;
- (void)_didTapSortAndFilterButton;
- (void)_didTapSettingsButton;
- (void)_didTapUploadButtonWithStartAction:(long long)arg1;
- (void)_didTapUploadButton;
- (void)_didTapNotificationsButton:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 channelDataSource:(id)arg2 accountSwitchingEnabled:(_Bool)arg3 loggingContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

