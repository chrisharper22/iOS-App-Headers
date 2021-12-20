//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFriendStatusReceivedListener-Protocol.h>
#import <FBSharedFramework/IGUserSearchIndex-Protocol.h>
#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>
#import <FBSharedFramework/IGUserUpdatedListener-Protocol.h>

@class IGRecentSearchStore, IGUser, IGUserDefaults, IGUserStore, IGUserTrie, NSMutableOrderedSet, NSString;
@protocol IGAPIClient, IGAnalyticsEventLoggingProtocol;

@interface IGAutoCompleteUsersStore : NSObject <IGUserUpdatedListener, IGFriendStatusReceivedListener, IGUserSessionEndingObject, IGUserSearchIndex>
{
    IGUserTrie *_userTrie;
    IGUser *_currentUser;
    IGUserStore *_userStore;
    IGUserDefaults *_sessionUserDefaults;
    id <IGAPIClient> _networker;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGRecentSearchStore *_userSearchStore;
    NSMutableOrderedSet *_users;
}

- (void).cxx_destruct;
- (void)_logStoreLoaded;
- (void)userSessionWillEnd;
- (void)bulkFriendStatusesReceivedForUsers:(id)arg1;
- (void)friendStatusReceiverForUser:(id)arg1;
- (void)userWasUpdated:(id)arg1;
- (void)_updateUser:(id)arg1;
- (void)removeUser:(id)arg1;
- (id)_usersFromResponse:(id)arg1;
- (void)_loadFromNetwork;
- (void)archiveUsers;
- (void)clearHistory;
- (_Bool)addUser:(id)arg1 addToRecent:(_Bool)arg2;
- (_Bool)_addUser:(id)arg1 addToRecent:(_Bool)arg2;
- (id)recentUsers;
- (id)allUsers;
- (id)scoreForUser:(id)arg1 surface:(id)arg2;
- (id)usersInBucket:(id)arg1;
- (void)_onLoadUsers;
- (void)loadUsers;
- (id)initWithCurrentUser:(id)arg1 userStore:(id)arg2 diskManager:(id)arg3 sessionUserDefaults:(id)arg4 userUpdatedAnnouncer:(id)arg5 networker:(id)arg6 analyticsLogger:(id)arg7 friendStatusReceivedAnnouncer:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

