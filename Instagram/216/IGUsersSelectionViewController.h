//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGTokenFieldDelegate-Protocol.h"
#import "IGUserListNetworkDataSourceDelegate-Protocol.h"
#import "IGUserSelectionSectionControllerDelegate-Protocol.h"

@class IGListAdapter, IGTokenField, IGUserListLocalDataSource, IGUserListNetworkDataSource, IGUserSession, NSMutableOrderedSet, NSOrderedSet, NSString, UIBarButtonItem, UICollectionView;
@protocol IGUsersSelectionViewControllerDelegate;

@interface IGUsersSelectionViewController : IGViewController <IGTokenFieldDelegate, IGListAdapterDataSource, IGUserSelectionSectionControllerDelegate, IGUserListNetworkDataSourceDelegate>
{
    IGUserSession *_userSession;
    NSString *_priorModule;
    NSOrderedSet *_originalSelectedUsers;
    NSOrderedSet *_searchResultUsers;
    NSMutableOrderedSet *_selectedUsers;
    IGTokenField *_searchField;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    UIBarButtonItem *_doneButton;
    IGUserListNetworkDataSource *_userListNetworkDataSource;
    IGUserListLocalDataSource *_localUsersDataSource;
    IGUserListLocalDataSource *_recentUsersDataStore;
    _Bool _viewHasAppeared;
    id <IGUsersSelectionViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGUsersSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)analyticsModule;
- (_Bool)tokenField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)tokenField:(id)arg1 didChangeHeight:(double)arg2;
- (void)tokenField:(id)arg1 didPressReturnWithQuery:(id)arg2;
- (void)tokenField:(id)arg1 didTypeExistingQuery:(id)arg2;
- (void)tokenField:(id)arg1 triedTypingQuery:(id)arg2;
- (void)tokenFieldWillBeginEditing:(id)arg1;
- (void)tokenField:(id)arg1 didDeleteToken:(id)arg2;
- (void)_setUpNullState;
- (void)tokenField:(id)arg1 didChangeQuery:(id)arg2;
- (_Bool)tokenFieldCanFinishEditing:(id)arg1;
- (void)tokenFieldDidBeginEditing:(id)arg1;
- (void)tokenField:(id)arg1 willFocusTokenView:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)userSelectionSectionController:(id)arg1 didSelect:(_Bool)arg2 user:(id)arg3;
- (_Bool)_shouldShowCancelButton;
- (void)_updateDoneButton;
- (void)_setupCollectionViewAndListAdapter;
- (void)_cancelButtonTapped;
- (void)_doneButtonTapped;
- (void)_setupSearchField;
- (void)_setupDoneButton;
- (void)_setupCancelButtonIfNeeded;
- (void)_setUpDataSource;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 selectedUsers:(id)arg2 priorModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

