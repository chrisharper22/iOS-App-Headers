//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGContactPermissionListener-Protocol.h"
#import "IGEmptyFeedViewDelegate-Protocol.h"
#import "IGFacebookPermissionListener-Protocol.h"
#import "IGFeedItemPreviewProviding-Protocol.h"
#import "IGFindFriendsHelperDelegate-Protocol.h"
#import "IGFindUsersEmptyFeedViewDelegate-Protocol.h"
#import "IGFindUsersViewDataSourceDelegate-Protocol.h"
#import "IGFriendCenterViewControllerProtocol-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"

@class IGContactsUserStore, IGEmptyFeedView, IGFacebookHelper, IGFindUsersViewDataSource, IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGContactPermissionAnnouncer, IGFindFriendsHelperProtocol, IGFollowPeopleLoggerProtocol, IGFriendCenterViewControllerDelegate;

@interface IGFindUsersViewController2 : IGViewController <IGEmptyFeedViewDelegate, IGFindFriendsHelperDelegate, IGFindUsersEmptyFeedViewDelegate, IGFindUsersViewDataSourceDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGFacebookPermissionListener, IGContactPermissionListener, IGFeedItemPreviewProviding, IGFriendCenterViewControllerProtocol>
{
    IGContactsUserStore *_contactsUserStore;
    _Bool _loading;
    _Bool _didAuthorize;
    _Bool _displayModal;
    IGViewController *containingViewController;
    long long friendCenterNavigationTab;
    id <IGFriendCenterViewControllerDelegate> _delegate;
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGFindUsersViewDataSource *_dataSource;
    IGEmptyFeedView *_emptyFeedView;
    IGEmptyFeedView *_errorStateView;
    long long _entryPoint;
    unsigned long long _findUsersType;
    id <IGFindFriendsHelperProtocol> _helper;
    id <IGFollowPeopleLoggerProtocol> _logger;
    NSString *_statusText;
    NSArray *_userList;
    NSArray *_nearbyBusinessesList;
    IGFacebookHelper *_facebookHelper;
    id <IGContactPermissionAnnouncer> _contactPermissionAnnouncer;
    long long _similarAccountSource;
    NSString *_socialContextForConnectContactsEmptyState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *socialContextForConnectContactsEmptyState; // @synthesize socialContextForConnectContactsEmptyState=_socialContextForConnectContactsEmptyState;
@property(nonatomic) long long similarAccountSource; // @synthesize similarAccountSource=_similarAccountSource;
@property(nonatomic) _Bool displayModal; // @synthesize displayModal=_displayModal;
@property(readonly, nonatomic) id <IGContactPermissionAnnouncer> contactPermissionAnnouncer; // @synthesize contactPermissionAnnouncer=_contactPermissionAnnouncer;
@property(readonly, nonatomic) IGFacebookHelper *facebookHelper; // @synthesize facebookHelper=_facebookHelper;
@property(copy, nonatomic) NSArray *nearbyBusinessesList; // @synthesize nearbyBusinessesList=_nearbyBusinessesList;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(readonly, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(readonly, nonatomic) id <IGFollowPeopleLoggerProtocol> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <IGFindFriendsHelperProtocol> helper; // @synthesize helper=_helper;
@property(readonly, nonatomic) unsigned long long findUsersType; // @synthesize findUsersType=_findUsersType;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(retain, nonatomic) IGEmptyFeedView *errorStateView; // @synthesize errorStateView=_errorStateView;
@property(readonly, nonatomic) IGEmptyFeedView *emptyFeedView; // @synthesize emptyFeedView=_emptyFeedView;
@property(nonatomic) _Bool didAuthorize; // @synthesize didAuthorize=_didAuthorize;
@property(readonly, nonatomic) IGFindUsersViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGFriendCenterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long friendCenterNavigationTab; // @synthesize friendCenterNavigationTab;
@property(nonatomic) __weak IGViewController *containingViewController; // @synthesize containingViewController;
- (id)analyticsModule;
- (void)_fetchSocialContextForConnectContactsEmptyState;
- (void)_setupErrorStateView;
- (void)_setupEmptyFeedView;
- (_Bool)_hasContactPermission;
- (_Bool)_hasFacebookPermission;
- (id)_indexPathForPoint:(struct CGPoint)arg1;
- (id)objectForPreviewAtPoint:(struct CGPoint)arg1;
- (id)cellForPreviewAtPoint:(struct CGPoint)arg1;
- (id)scrollView;
- (id)_emptyFeedModelWithSocialContext:(id)arg1;
- (void)_fetchFollowStatusForUsers:(id)arg1;
- (void)_finishLoading;
- (void)_continueAuthorizeAndFetchUsers;
- (void)_authorizeAndFetchUsers;
- (void)contactPermissionDenied;
- (void)contactPermissionAcquired;
- (void)facebookPermissionRemoved;
- (void)facebookPermissionAcquired;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserListFromCache:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3;
- (void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2 andNearbyBusinesses:(id)arg3;
- (void)findUsersViewDataSourceWillLoadUserList:(id)arg1;
- (void)connectButtonWasTapped:(id)arg1;
- (void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2;
- (void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithDataSource:(id)arg1 logger:(id)arg2 findUsersType:(unsigned long long)arg3 statusText:(id)arg4 title:(id)arg5 userSession:(id)arg6 entryPoint:(long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
