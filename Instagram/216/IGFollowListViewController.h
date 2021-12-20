//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAdsBottomCTAControllerDelegate-Protocol.h"
#import "IGAnonymousLikesSectionControllerDelegate-Protocol.h"
#import "IGDiscoverPeopleConnectionSectionControllerDelegate-Protocol.h"
#import "IGDiscoverPeopleSectionControllerDelegate-Protocol.h"
#import "IGFacebookXpostingLikeSheetAutoSharingUpsellSectionDelegate-Protocol.h"
#import "IGFacebookXpostingLikeSheetUpsellSectionDelegate-Protocol.h"
#import "IGFeaturedUserDismissedListener-Protocol.h"
#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGFeedStatusViewDelegate-Protocol.h"
#import "IGFindUsersViewDataSourceDelegate-Protocol.h"
#import "IGFollowListHashtagPreviewSectionControllerDelegate-Protocol.h"
#import "IGFollowListMoreUsersSectionControllerDelegate-Protocol.h"
#import "IGFollowListSortingSectionControllerDelegate-Protocol.h"
#import "IGFollowListSortingSelectionViewControllerDelegate-Protocol.h"
#import "IGFollowRequestSectionControllerDelegate-Protocol.h"
#import "IGFriendStatusChangedListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGPageViewControllerChildViewController-Protocol.h"
#import "IGReportUserListener-Protocol.h"
#import "IGSearchBarDelegate-Protocol.h"
#import "IGSeeAllSectionControllerDelegate-Protocol.h"
#import "IGTabControlSegment-Protocol.h"
#import "IGTitleAndActionSectionControllerDelegate-Protocol.h"
#import "IGUserActionsListener-Protocol.h"
#import "IGUserListDataSource-Protocol.h"
#import "IGUserListGroupSectionControllerDelegate-Protocol.h"
#import "IGUserListNetworkDataSourceDelegate-Protocol.h"
#import "IGUserListSectionControllerFiltersDelegate-Protocol.h"
#import "IGUserListSectionControllerFollowDelegate-Protocol.h"
#import "IGUserListSectionControllerStoryDelegate-Protocol.h"
#import "IGUserListSectionControllerTapDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGCTAPresenterContext, IGConnectContactsDismissManager, IGContactsUserStore, IGDiscoverAccountsDismissManager, IGFacebookXpostingLikeSheetUpsellEligibilityProvider, IGFeedNetworkSource, IGFeedScrollViewAnnouncer, IGFeedStatusView, IGFollowListNavigationPerfComponents, IGFollowListSortingModel, IGFollowListViewControllerConfiguration, IGListAdapter, IGRefreshControl, IGSearchBar, IGSearchBarConfig, IGStoryViewerPresentationController, IGSuggestedFindUsersViewDataSource, IGSuggestedUserLogger, IGTableLayoutSpec, IGUserListGroup, IGUserListNetworkDataSource, IGUserPreviewingHandler, IGUserSession, NSMutableArray, NSMutableOrderedSet, NSNumber, NSObject, NSString, UIBarButtonItem, UICollectionView;
@protocol IGAdsBottomCTAControlling, IGFacebookXpostingLikeSheetUpsellAnnouncer, IGFollowListViewControllerDelegate, IGFollowPeopleLoggerProtocol;

@interface IGFollowListViewController : IGViewController <IGFeedStatusViewDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGSearchBarDelegate, UICollectionViewDelegate, IGFeedScrollViewListener, IGFollowListHashtagPreviewSectionControllerDelegate, IGFollowListMoreUsersSectionControllerDelegate, IGUserListNetworkDataSourceDelegate, IGFeedNetworkSourceDelegate, IGAnonymousLikesSectionControllerDelegate, IGPageViewControllerChildViewController, IGDiscoverPeopleSectionControllerDelegate, IGSeeAllSectionControllerDelegate, IGUserListSectionControllerFollowDelegate, IGUserListSectionControllerStoryDelegate, IGFindUsersViewDataSourceDelegate, IGDiscoverPeopleConnectionSectionControllerDelegate, IGUserActionsListener, IGFollowListSortingSectionControllerDelegate, IGFollowListSortingSelectionViewControllerDelegate, IGReportUserListener, IGFriendStatusChangedListener, IGUserListSectionControllerFiltersDelegate, IGAdsBottomCTAControllerDelegate, IGUserListGroupSectionControllerDelegate, IGTitleAndActionSectionControllerDelegate, IGFollowRequestSectionControllerDelegate, IGUserListSectionControllerTapDelegate, IGFeaturedUserDismissedListener, IGFacebookXpostingLikeSheetUpsellSectionDelegate, IGFacebookXpostingLikeSheetAutoSharingUpsellSectionDelegate, IGUserListDataSource, IGTabControlSegment>
{
    IGFollowListViewControllerConfiguration *_configuration;
    NSString *_contextPK;
    NSString *_sourceAnalyticsModule;
    double _headerHeight;
    NSString *_contextUsername;
    _Bool _enableLikerListNullState;
    IGStoryViewerPresentationController *_storyViewerController;
    NSNumber *_followingUserCount;
    _Bool _userListEmptyAndUnfiltered;
    IGConnectContactsDismissManager *_connectContactsDismissManager;
    IGDiscoverAccountsDismissManager *_discoverAccountsDismissManager;
    NSObject<IGAdsBottomCTAControlling> *_bottomCTAController;
    _Bool _reachedUserListEnd;
    NSNumber *_followerUserCount;
    NSNumber *_mutualFollowerUserCount;
    IGFollowListNavigationPerfComponents *_navPerfComponents;
    NSString *_order;
    IGFollowListSortingModel *_sortingModel;
    IGContactsUserStore *_contactsUserStore;
    NSNumber *_showUserRelationshipSheet;
    IGCTAPresenterContext *_ctaPresenterContext;
    _Bool _shouldShowLikeListShimmerLoadingState;
    _Bool _isFetchingSU;
    IGUserPreviewingHandler *_previewHandler;
    IGUserListGroup *_userListGroup;
    id <IGFacebookXpostingLikeSheetUpsellAnnouncer> _xpostingUpsellAnnouncer;
    IGFacebookXpostingLikeSheetUpsellEligibilityProvider *_xpostingUpsellEligibilityProvider;
    _Bool _useDynamicLayout;
    _Bool _loading;
    _Bool _dataFetchNeeded;
    _Bool _shouldShowSeeAllHeader;
    id <IGFollowListViewControllerDelegate> _delegate;
    long long _followListType;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    NSMutableOrderedSet *_userList;
    NSString *_headerDisclaimerText;
    NSMutableArray *_suggestions;
    IGFeedStatusView *_emptyStateView;
    IGRefreshControl *_refreshControl;
    IGUserSession *_userSession;
    NSString *_sessionId;
    id <IGFollowPeopleLoggerProtocol> _followListLogger;
    IGSuggestedUserLogger *_suggestedUserLogger;
    IGSearchBar *_searchBar;
    NSString *_searchString;
    IGSearchBarConfig *_searchBarConfig;
    IGUserListNetworkDataSource *_networkDataSource;
    IGSuggestedFindUsersViewDataSource *_suggestedUsersDataSource;
    UIBarButtonItem *_loadingButton;
    IGTableLayoutSpec *_tableInterface;
    IGFeedNetworkSource *_asyncFeedNetworkSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGFeedNetworkSource *asyncFeedNetworkSource; // @synthesize asyncFeedNetworkSource=_asyncFeedNetworkSource;
@property(readonly, nonatomic) IGTableLayoutSpec *tableInterface; // @synthesize tableInterface=_tableInterface;
@property(nonatomic) _Bool shouldShowSeeAllHeader; // @synthesize shouldShowSeeAllHeader=_shouldShowSeeAllHeader;
@property(retain, nonatomic) UIBarButtonItem *loadingButton; // @synthesize loadingButton=_loadingButton;
@property(retain, nonatomic) IGSuggestedFindUsersViewDataSource *suggestedUsersDataSource; // @synthesize suggestedUsersDataSource=_suggestedUsersDataSource;
@property(retain, nonatomic) IGUserListNetworkDataSource *networkDataSource; // @synthesize networkDataSource=_networkDataSource;
@property(retain, nonatomic) IGSearchBarConfig *searchBarConfig; // @synthesize searchBarConfig=_searchBarConfig;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) __weak IGSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) IGSuggestedUserLogger *suggestedUserLogger; // @synthesize suggestedUserLogger=_suggestedUserLogger;
@property(readonly, nonatomic) id <IGFollowPeopleLoggerProtocol> followListLogger; // @synthesize followListLogger=_followListLogger;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) IGFeedStatusView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
@property(retain, nonatomic) NSMutableArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) NSString *headerDisclaimerText; // @synthesize headerDisclaimerText=_headerDisclaimerText;
@property(retain, nonatomic) NSMutableOrderedSet *userList; // @synthesize userList=_userList;
@property(nonatomic) _Bool dataFetchNeeded; // @synthesize dataFetchNeeded=_dataFetchNeeded;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) IGFeedScrollViewAnnouncer *scrollViewAnnouncer; // @synthesize scrollViewAnnouncer=_scrollViewAnnouncer;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) long long followListType; // @synthesize followListType=_followListType;
@property(nonatomic) __weak id <IGFollowListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)likeSheetAutoSharingDidTurnOnWithSuccess:(_Bool)arg1;
- (void)likeSheetAutoSharingUpsellDidTapYesButton;
- (void)likeSheetAutoSharingUpsellDidTapNotNowButton;
- (void)likeSheetUpsellDidRequestRefresh;
- (void)likeSheetUpsellCrossPostingDidFinishWithSuccess:(_Bool)arg1;
- (void)likeSheetUpsellDidTapShareButton;
- (void)likeSheetUpsellDidTapCloseButton;
- (id)userListSectionControllerNavigationController:(id)arg1;
- (_Bool)userListSectionControllerShouldNavigateToProfileOnTap:(id)arg1;
- (void)userListSectionControllerCellWasTapped:(id)arg1;
- (id)trackingModel;
- (void)followRequestSectionController:(id)arg1 entrypointTappedAtPosition:(long long)arg2;
- (void)userListSectionController:(id)arg1 didRemoveUser:(id)arg2;
- (void)userListSectionController:(id)arg1 followButtonStatusDidChangeForAccount:(id)arg2 withAction:(long long)arg3;
- (void)userListSectionControllerFiltersButtonWasTapped:(id)arg1;
- (void)followListSortingSelectionViewController:(id)arg1 didSelectSortingOption:(id)arg2;
- (void)titleAndActionSectionController:(id)arg1 didSelectActionForViewModel:(id)arg2;
- (void)sectionController:(id)arg1 didSelectGroup:(id)arg2;
- (void)followListSectionControllerDidTapCell:(id)arg1;
- (void)userWasReported:(id)arg1;
- (void)didChangePrivacyFollowingAcceptRateLimit;
- (id)_titleForFollowListType;
- (void)_updateTitle;
- (id)analyticsExtras;
- (id)analyticsModule;
- (_Bool)disableNavigationEvent;
- (void)bottomCTAControllerDidShowCTA:(_Bool)arg1 withBottomOffset:(double)arg2;
- (void)bottomCTAControllerDidAddCTAView:(id)arg1 toScrollView:(id)arg2;
- (void)_logXpostingLikeSheetUpsellEventName:(id)arg1 upsellContext:(id)arg2;
- (void)_dismissXpostingLikeSheetUpsell;
- (_Bool)_supportsStoryRingsOnUserList;
- (_Bool)_hasContactPermissions;
- (id)_additionalRequestParams;
- (id)_suggestedUsersDataSourceRequestModule;
- (double)_unusableSpaceForEmptyStateWithSU;
- (void)_fetchSU;
- (id)_emptyFeedModelForSelfFollowersFollowing;
- (id)_emptyFeedModelForLikerList;
- (id)_emptyFeedModelForPendingFollows;
- (_Bool)_shouldShowDiscoverPeopleEntryPoint;
- (_Bool)_shouldShowConnectContactsOptionInSelfFollowing;
- (_Bool)_shouldShowConnectContactsOption;
- (_Bool)_shouldShowEmptyStateInLikerList;
- (_Bool)_shouldShowEmptyStateInPendingFollows;
- (_Bool)_shouldShowSUUnitInFollowList;
- (_Bool)_shouldShowSUUnitInNonSelfFollowersFollowingList;
- (_Bool)_shouldShowSUUnitInSelfFollowersFollowingList;
- (_Bool)_shouldShowEmptyStateInSelfFollowersFollowing;
- (_Bool)_supportsMessageButton;
- (_Bool)_supportsUserRelationshipSheet;
- (id)_suggestionsWithHeader;
- (void)_finishLoading;
- (void)_reloadDataWithCompletion:(CDUnknownBlockType)arg1;
- (long long)_userListSectionControllerType;
- (void)followListMoreUsersSectionControllerDidTapRow:(id)arg1;
- (void)hashtagPreviewSectionControllerDidTapHashtagRow:(id)arg1;
- (void)discoverPeopleConnectionSectionControllerDidExposeToCALControlGroup:(id)arg1;
- (void)discoverPeopleConnectionSectionController:(id)arg1 didLoginToFacebookWithSDKAccessToken:(id)arg2;
- (void)discoverPeopleConnectionSectionController:(id)arg1 didLoginToFacebookWithAccessToken:(id)arg2;
- (void)discoverPeopleConnectionSectionControllerDidTapDismissButton:(id)arg1 forType:(long long)arg2;
- (void)discoverPeopleConnectionSectionControllerAuthorizedWithFailure:(id)arg1;
- (void)discoverPeopleConnectionSectionControllerAuthorizedWithSuccess:(id)arg1;
- (void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3;
- (void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserListFromCache:(id)arg2;
- (void)findUsersViewDataSourceWillLoadUserList:(id)arg1;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2 andNearbyBusinesses:(id)arg3;
- (void)userListSectionControllerDidTapStoryForReelPk:(id)arg1 onProfileView:(id)arg2;
- (void)userListSectionControllerDidTapStoryFromReelOwner:(id)arg1 onStoryEntryView:(id)arg2;
- (void)didTapSeeAllSectionControllerWithItemConfiguration:(id)arg1;
- (void)discoverPeopleSectionController:(id)arg1 didTapCustomButtonWithFeatureUserInfo:(id)arg2;
- (void)featuredUserDismissed:(id)arg1;
- (void)didResignCurrentInPageViewController:(id)arg1;
- (_Bool)isEmpty;
- (void)removeUserFromList:(id)arg1;
- (void)feedStatusEmptyStateButtonWasTapped:(id)arg1;
- (void)feedStatusViewDidTap:(id)arg1;
- (void)friendStatusChangedForUser:(id)arg1 withUserAction:(long long)arg2;
- (void)_handleEmptyStateViewTap;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didTapAnonymousLikesSectionController:(id)arg1;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)dataSourceDidFailLoad:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)dataSourceDidStartLoading:(id)arg1;
- (id)_headerInfoDisplayLabelItemConfig;
- (void)_authorizeAndFetchUsers;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFollowListType:(long long)arg1 configuration:(id)arg2 contextPK:(id)arg3 contextUsername:(id)arg4 ctaPresenterContext:(id)arg5 sourceAnalyticsModule:(id)arg6 userSession:(id)arg7 rankByMutualFollowers:(_Bool)arg8 headerHeight:(double)arg9 forcedUserId:(id)arg10 followingUserCount:(id)arg11 followerUserCount:(id)arg12 mutualFollowerUserCount:(id)arg13 order:(id)arg14 enableLikerListNullState:(_Bool)arg15 userListGroup:(id)arg16 filters:(id)arg17;
- (id)initWithFollowListType:(long long)arg1 configuration:(id)arg2 contextPK:(id)arg3 contextUsername:(id)arg4 ctaPresenterContext:(id)arg5 sourceAnalyticsModule:(id)arg6 userSession:(id)arg7 headerHeight:(double)arg8 followingUserCount:(id)arg9 followerUserCount:(id)arg10 mutualFollowerUserCount:(id)arg11 order:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

