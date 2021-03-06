//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFavoritesErrorEmptyStateViewDelegate-Protocol.h"
#import "IGFavoritesHomeHeaderViewDelegate-Protocol.h"
#import "IGFavoritesListSectionControllerActionButtonDelegate-Protocol.h"
#import "IGFriendStatusChangedListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGRefreshControlDelegate-Protocol.h"
#import "IGSearchBarDelegate-Protocol.h"
#import "IGUserBlockingActionListener-Protocol.h"
#import "IGUserFavoritesActionListener-Protocol.h"
#import "IGUserListNetworkDataSourceDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGActionableConfirmationToastController, IGBasicListViewController, IGBottomButtonsView, IGFavoritesEmptyStateView, IGFavoritesErrorEmptyStateView, IGFavoritesManagementLoggingContext, IGFullscreenSearchTransitionController, IGFullscreenSearchViewController, IGRefreshControl, IGSearchBar, IGUserListLocalDataSource, IGUserListNetworkDataSource, IGUserSession, NSArray, NSMutableOrderedSet, NSMutableSet, NSString, UIActivityIndicatorView, UIView;
@protocol IGAlertHUDHandling, IGFavoritesHomeViewControllerDelegate;

@interface IGFavoritesHomeViewController : IGViewController <IGSearchBarDelegate, IGListAdapterDataSource, IGUserListNetworkDataSourceDelegate, IGListAdapterDelegate, IGFavoritesHomeHeaderViewDelegate, IGFavoritesListSectionControllerActionButtonDelegate, UIScrollViewDelegate, IGRefreshControlDelegate, IGFavoritesErrorEmptyStateViewDelegate, IGUserBlockingActionListener, IGUserFavoritesActionListener, IGFriendStatusChangedListener>
{
    UIView *_headerView;
    IGSearchBar *_searchBar;
    UIView *_searchBarBottomBorder;
    IGBottomButtonsView *_bottomButton;
    IGRefreshControl *_refreshControl;
    NSMutableOrderedSet *_selectedUsers;
    NSMutableSet *_pendingAddedPks;
    NSMutableSet *_pendingRemovedPks;
    CDUnknownBlockType _scheduledUpdateBlock;
    IGBasicListViewController *_mainListViewController;
    UIActivityIndicatorView *_activityIndicatorView;
    IGFavoritesErrorEmptyStateView *_errorEmptyStateView;
    IGFavoritesEmptyStateView *_emptyStateView;
    UIView *_membersEmptyStateView;
    IGUserSession *_userSession;
    IGUserListNetworkDataSource *_closeFriendsDataSource;
    IGUserListNetworkDataSource *_searchDataSource;
    IGUserListLocalDataSource *_localSearchDataSource;
    NSArray *_localSuggestions;
    NSString *_localSuggestionsRankToken;
    NSArray *_displayedSuggestedUsers;
    NSArray *_displayedMemberUsers;
    NSArray *_displayedSearchUsers;
    IGFullscreenSearchViewController *_searchViewController;
    IGFullscreenSearchTransitionController *_searchTransitionController;
    IGFavoritesManagementLoggingContext *_loggingContext;
    NSString *_searchStringForDisplayedResults;
    IGActionableConfirmationToastController *_toastController;
    id <IGAlertHUDHandling> _alertHandler;
    long long _entryPoint;
    _Bool _loadedFavoritesOnce;
    _Bool _didFailLoad;
    _Bool _inNewListExperience;
    id <IGFavoritesHomeViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFavoritesHomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateSearchBarBottomBorderAlpha;
- (void)_configureAddButton;
- (void)_optionallyAddBottomButton;
- (struct UIEdgeInsets)preferredMinimizableInsets;
- (long long)preferredStatusBarStyle;
- (long long)preferredTabBarBehavior;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)_notifySelectionForSectionController:(id)arg1;
- (void)_logWaterfallWithExitPoint:(long long)arg1;
- (void)_showAlertWithText:(id)arg1;
- (void)_handleSaveResponseWithSuccess:(_Bool)arg1;
- (void)_addTapped;
- (void)_dismiss;
- (void)_dismissSearchAndSwitchToMembers;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_fetchLocalSuggestions;
- (void)user:(id)arg1 favoritesStatusDidChange:(_Bool)arg2;
- (void)user:(id)arg1 blocked:(_Bool)arg2 messagingOnlyBlocked:(_Bool)arg3;
- (void)friendStatusChangedForUser:(id)arg1 withUserAction:(long long)arg2;
- (void)refreshControl:(id)arg1 didUpdateAppearingProgress:(double)arg2;
- (void)refreshControlDidEndFinishLoadingAnimation:(id)arg1;
- (void)refreshControl:(id)arg1 didReleaseWithRefreshControlState:(long long)arg2;
- (void)favoritesHomeHeaderViewDidTapInfoLabel:(id)arg1;
- (void)emptyStateViewDidTapRetry;
- (void)_presentIntroductionViewControllerAnimated:(_Bool)arg1;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)_updateDisplayedSearchUsers;
- (void)_updateUserListSectionControllersWithUser:(id)arg1 toType:(long long)arg2;
- (void)_notifyAddedUsers:(id)arg1;
- (void)_revertOptimisticUpdatesForAddedUsers:(id)arg1 removedUsers:(id)arg2;
- (void)_cancelScheduledUpdate;
- (void)_tryScheduleUpdate;
- (void)_handleBatchedUpdatesWithUsersToAdd:(id)arg1 usersToRemove:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)userListSectionControllerShouldUseCheckmarks:(id)arg1;
- (void)userListSectionControllerDidTapButton:(id)arg1;
- (void)dataSourceDidFailLoad:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)dataSourceDidStartLoading:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)_showUndoToastWithClearedCloseFriends:(id)arg1;
- (void)_removeAllCloseFriends;
- (void)_didTapRemoveAll;
- (id)_rightViewCTAForCloseFriendsSectionHeader;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_fetchCloseFriendsForCurrentUser;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updateMembersWithServerUsers:(id)arg1;
- (void)_updateDisplayedUsersWithSelectedUsersAnimated:(_Bool)arg1;
- (id)_networkDataSourceWithFetchPath:(id)arg1;
- (id)initWithUserSession:(id)arg1 prefetchedFavorites:(id)arg2 entryPoint:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

