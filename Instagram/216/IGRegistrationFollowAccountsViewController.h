//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "IGRegistrationFollowAccountsDataSourceDelegate-Protocol.h"
#import "IGRegistrationFollowAccountsDelegating-Protocol.h"
#import "IGRegistrationFollowAccountsSeeMoreSectionControllerDelegate-Protocol.h"
#import "IGRegistrationFollowAccountsViewDelegate-Protocol.h"
#import "IGSearchBarDelegate-Protocol.h"
#import "IGUserListSectionControllerFollowDelegate-Protocol.h"

@class IGListAdapter, IGRegistrationFollowAccountsDataSource, IGRegistrationFollowAccountsView, IGUserSession, NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol IGFollowPeopleLoggerProtocol, IGRegistrationFollowAccountsViewControllerDelegate;

@interface IGRegistrationFollowAccountsViewController : IGViewController <IGListAdapterDataSource, IGListDisplayDelegate, IGRegistrationFollowAccountsDataSourceDelegate, IGRegistrationFollowAccountsViewDelegate, IGRegistrationFollowAccountsSeeMoreSectionControllerDelegate, IGSearchBarDelegate, IGUserListSectionControllerFollowDelegate, IGRegistrationFollowAccountsDelegating>
{
    IGUserSession *_userSession;
    long long _entryPoint;
    id <IGFollowPeopleLoggerProtocol> _followListLogger;
    IGRegistrationFollowAccountsView *_followAccountsView;
    NSMutableOrderedSet *_newlyFollowedAccountPKs;
    NSMutableDictionary *_usernameToFollowAccountsDictionary;
    NSMutableDictionary *_usernameToNumberUsersShouldShowDictionary;
    IGListAdapter *_listAdapter;
    IGRegistrationFollowAccountsDataSource *_dataSource;
    NSString *_searchString;
    NSMutableOrderedSet *_searchResultList;
    NSMutableOrderedSet *_fetchedUsernamesForFollowingList;
    NSMutableOrderedSet *_fetchedUsernamesForSearch;
    NSMutableDictionary *_usernameToMaxIDDictionary;
    NSMutableDictionary *_usernameToUserPKDictionary;
    NSMutableDictionary *_usernameToPendingAccountCountDictionary;
    NSString *_titleText;
    NSString *_subtitleText;
    id <IGRegistrationFollowAccountsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRegistrationFollowAccountsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setUpSubtitleText;
- (void)_setUpTitleText;
- (void)_updateNewlyFollowedAccountListWithUser:(id)arg1;
- (void)_setUpUsernameToUserPKDictionary;
- (_Bool)_hasFetchedSearchResultForAllLoggedInAccounts;
- (_Bool)_hasFetchedFollowListForAllLoggedInAccounts;
- (unsigned long long)_initialNumberOfAccountsToShow;
- (void)_updateNextButtonText;
- (id)_subtitleLabelModel;
- (id)_titleLabelModel;
- (id)_emptyResultLabelModel;
- (id)_loadingLabelModel;
- (void)_fetchFollowingListForAllAccounts;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)seeMoreSectionController:(id)arg1 didTapSeeMoreForUsername:(id)arg2 withCount:(unsigned long long)arg3;
- (void)userListSectionController:(id)arg1 didRemoveUser:(id)arg2;
- (void)userListSectionController:(id)arg1 followButtonStatusDidChangeForAccount:(id)arg2 withAction:(long long)arg3;
- (void)followAccountsViewDidTapCancelButton:(id)arg1;
- (void)followAccountsViewDidTapNextButton:(id)arg1;
- (void)requestFailedWithError:(id)arg1;
- (void)updateOverallSearchResultWithSearchResult:(id)arg1 forUsername:(id)arg2 searchString:(id)arg3;
- (void)updateFollowListsWithFollowList:(id)arg1 forUsername:(id)arg2 maxID:(id)arg3;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)analyticsModule;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredTabBarBehavior;
- (_Bool)prefersNavigationBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 entryPoint:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

