//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGUserListNetworkDataSourceDelegate-Protocol.h"
#import "IGUserListSectionControllerSelectionDelegate-Protocol.h"

@class IGUser, IGUserListLocalDataSource, IGUserListNetworkDataSource, IGUserSession, NSArray, NSString;
@protocol IGReportingSelectVictimCelebritySearchDataSourceDelegate;

@interface IGReportingSelectVictimCelebritySearchDataSource : NSObject <IGUserListNetworkDataSourceDelegate, IGUserListSectionControllerSelectionDelegate, IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    IGUserListNetworkDataSource *_networkDataSource;
    IGUserListLocalDataSource *_localDataSource;
    NSArray *_filteredUsers;
    IGUser *_selectedUser;
    id <IGReportingSelectVictimCelebritySearchDataSourceDelegate> _delegate;
    NSString *_queryString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(nonatomic) __weak id <IGReportingSelectVictimCelebritySearchDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateUserResults;
- (void)userListSectionControllerDidDeselectUser:(id)arg1;
- (void)userListSectionControllerDidSelectUser:(id)arg1;
- (void)dataSourceDidFailLoad:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)dataSourceDidStartLoading:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

