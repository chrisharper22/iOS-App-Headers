//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRestrictListAdapterDataSourceDelegate-Protocol.h"
#import "IGRestrictedUserControllerDelegate-Protocol.h"
#import "IGUserListNetworkDataSourceDelegate-Protocol.h"
#import "IGUserListSectionControllerSelectionDelegate-Protocol.h"
#import "IGUserListSectionControllerTapDelegate-Protocol.h"

@class IGRestrictListRestrictedUserAdapterDataSource, IGRestrictListSearchAdapterDataSource, IGRestrictedUserController, IGUserListLocalDataSource, IGUserListNetworkDataSource, IGUserSession, NSMutableOrderedSet, NSString;
@protocol IGRestrictListDataSourceDelegate;

@interface IGRestrictListDataSource : NSObject <IGUserListNetworkDataSourceDelegate, IGRestrictedUserControllerDelegate, IGRestrictListAdapterDataSourceDelegate, IGUserListSectionControllerTapDelegate, IGUserListSectionControllerSelectionDelegate>
{
    IGUserSession *_userSession;
    IGUserListNetworkDataSource *_searchDataSource;
    IGRestrictedUserController *_restrictedUserController;
    IGUserListLocalDataSource *_localSearchDataSource;
    NSMutableOrderedSet *_selectedUsers;
    NSString *_analyticsModule;
    IGRestrictListRestrictedUserAdapterDataSource *_restrictedUserListAdapterDataSource;
    IGRestrictListSearchAdapterDataSource *_searchListAdapterDataSource;
    id <IGRestrictListDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRestrictListDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGRestrictListSearchAdapterDataSource *searchListAdapterDataSource; // @synthesize searchListAdapterDataSource=_searchListAdapterDataSource;
@property(retain, nonatomic) IGRestrictListRestrictedUserAdapterDataSource *restrictedUserListAdapterDataSource; // @synthesize restrictedUserListAdapterDataSource=_restrictedUserListAdapterDataSource;
- (_Bool)canShowEmptyView;
- (id)sectionControllerForObject:(id)arg1;
- (id)userListSectionControllerNavigationController:(id)arg1;
- (_Bool)userListSectionControllerShouldNavigateToProfileOnTap:(id)arg1;
- (void)userListSectionControllerCellWasTapped:(id)arg1;
- (void)_toggleRestrictStatusForUser:(id)arg1;
- (void)userListSectionControllerDidDeselectUser:(id)arg1;
- (void)userListSectionControllerDidSelectUser:(id)arg1;
- (void)restrictedUserControllerDidUpdateRestrictedStatusForUser:(id)arg1 user:(id)arg2;
- (void)restrictedUserControllerFailedSync:(id)arg1 withError:(id)arg2;
- (void)restrictedUserControllerDidSyncWithServer:(id)arg1;
- (void)dataSourceDidFailLoad:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)dataSourceDidStartLoading:(id)arg1;
- (void)_updateRestrictedUsers;
- (void)_updateDisplayedSearchUsersForSearchText:(id)arg1;
- (void)_setUpRestrictedDataSource;
- (void)_setUpLocalSearchDataSource;
- (void)_setUpSearchDataSource;
- (void)clearSearchResults;
- (void)searchBarDidChangeSearchText:(id)arg1;
- (void)setUpDataSources;
- (id)_initializeNetworkDataSource;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

