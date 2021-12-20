//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGKeyboardObserverHideDelegate-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGSearchBarDelegate-Protocol.h"
#import "IGSearchNetworkDataProviderDelegate-Protocol.h"
#import "IGShoppingPermissionsAddAccountSectionControllerDelegate-Protocol.h"

@class IGEmptyFeedView, IGKeyboardObserver, IGListAdapter, IGSearchBar, IGSearchNetworkDataSource, IGShoppingPermissionsLogger, IGShoppingPermissionsNetworker, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGShoppingPermissionsAddApprovedPartnersViewControllerDelegate;

@interface IGShoppingPermissionsAddApprovedPartnersViewController : IGViewController <IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, IGSearchBarDelegate, IGListAdapterDataSource, IGSearchNetworkDataProviderDelegate, IGShoppingPermissionsAddAccountSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGSearchNetworkDataSource *_searchDataSource;
    IGShoppingPermissionsNetworker *_permissionsNetworker;
    IGShoppingPermissionsLogger *_logger;
    IGSearchBar *_searchBar;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGEmptyFeedView *_emptyFeedView;
    IGKeyboardObserver *_keyboardObserver;
    NSArray *_searchResults;
    id <IGShoppingPermissionsAddApprovedPartnersViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPermissionsAddApprovedPartnersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateCollectionViewFrame;
- (void)_animateKeyboardChangeWithDuration:(double)arg1 curve:(long long)arg2;
- (void)_fetchSearchResultsWithSearchText:(id)arg1;
- (void)_updateAddedUsers:(id)arg1 removedUsers:(id)arg2;
- (void)_updateSearchResults:(id)arg1;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)shoppingPermissionsAddAccountSectionController:(id)arg1 didSelectDismissUserSearchResult:(id)arg2;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)networkDataSourceDidThrottleNetworkRequest:(id)arg1 searchText:(id)arg2;
- (void)networkDataSource:(id)arg1 didFailForSearchText:(id)arg2;
- (void)networkDataSource:(id)arg1 cachedResultsForSearchText:(id)arg2 resultsResponse:(id)arg3 serverResultsLoaded:(_Bool)arg4;
- (void)networkDataSource:(id)arg1 didFinishFetchForSearchTextAfterSearchQueryChanged:(id)arg2 results:(id)arg3 rankToken:(id)arg4;
- (void)networkDataSource:(id)arg1 didFinishFetchForSearchText:(id)arg2 resultsResponse:(id)arg3 isFromPagination:(_Bool)arg4 clearClientCache:(_Bool)arg5;
- (void)networkDataSource:(id)arg1 didBeginFetchForSearchText:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (long long)preferredTabBarBehavior;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
