//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAccountLinkingLoginListener-Protocol.h>
#import <FBSharedFramework/IGMultipleAccountHandling-Protocol.h>

@class IGAccountLinkingInfoLookup, IGAccountStoreCoordinator, IGAuthService, IGLoginDeferredAccountManager, NSString;
@protocol IGConcurrentSessionHandling, IGMultipleAccountHandlingAnnouncer;

@interface IGMultipleAccountHandler : NSObject <IGMultipleAccountHandling, IGAccountLinkingLoginListener>
{
    IGAuthService *_authService;
    id <IGConcurrentSessionHandling> _concurrentSessionHandler;
    id <IGMultipleAccountHandlingAnnouncer> _multipleAccountHandlingAnnouncer;
    IGAccountLinkingInfoLookup *_accountLinkingInfoLookup;
    IGAccountStoreCoordinator *_accountStoreCoordinator;
    IGLoginDeferredAccountManager *_deferredAccountManager;
}

- (void).cxx_destruct;
- (id)_loggedInMainAccountsForNonIGUserAccountPK:(id)arg1;
- (id)_loggedInMainAccountsForAccount:(id)arg1;
- (id)_usernamesWithAccountGroupAcccountPKs:(id)arg1 loggedInAccountUsernameLookup:(id)arg2 loginDeferredAccountUsernameLookup:(id)arg3;
- (long long)_numberOfLoggedInAccountUnits;
- (void)didUpdateMultipleAccounts;
- (void)didLogInAccountGroup;
- (void)didUpdateLoginDeferredAccounts;
- (void)didLogInChildAccountsWithPKs:(id)arg1;
- (_Bool)startUserSessionOperation:(id)arg1 forUserSessionWithPk:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)loginDeferredChildAccountsForAccount:(id)arg1;
- (void)addMultipleAccountHandlingListener:(id)arg1;
- (long long)numberOfDistinctUsers;
- (_Bool)hasLoggedInAccountsAndOneTapLoginEnabledButLoggedOutAccounts;
- (id)accountGroupUsernamesForUser:(id)arg1;
- (id)loggedInChildAccountsForAccount:(id)arg1;
- (id)loggedInMainAccountsForAccountPK:(id)arg1;
- (_Bool)accountShouldBeLoggedOutIndividually:(id)arg1;
- (_Bool)hasMultipleLogoutUnits;
- (_Bool)hasMultipleLoggedInAccounts;
- (_Bool)hasMultipleAccounts;
- (_Bool)hasMaximumNumberOfAccounts;
- (void)markUserRecentlyUsed:(id)arg1;
- (id)currentUsersSortedByAccountLinkingMainAccountEligibility;
- (id)currentUsersSortedByUsernameExcludingActiveUser;
- (id)currentUsersSortedByAccessTimeExcludingActiveUser;
- (id)currentUsersSortedByUsername;
- (id)currentUsersSortedByAccessTime;
- (id)usernameMatchingAccountPK:(id)arg1;
- (id)deviceBasedLoginAccountMatchingAccountPK:(id)arg1;
- (id)loginDeferredAccountMatchingAccountPK:(id)arg1;
- (id)userMatchingUserPK:(id)arg1;
- (id)initWithAuthService:(id)arg1 concurrentSessionHandler:(id)arg2 accountLinkingInfoLookup:(id)arg3 accountStoreCoordinator:(id)arg4 loginDeferredAccountManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

