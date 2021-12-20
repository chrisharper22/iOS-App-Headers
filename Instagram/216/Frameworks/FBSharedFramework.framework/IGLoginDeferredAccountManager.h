//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAccountStoreCoordinator, NSOrderedSet;
@protocol IGAccountLinkingLoginAnnouncer;

@interface IGLoginDeferredAccountManager : NSObject
{
    IGAccountStoreCoordinator *_accountStoreCoordinator;
    NSOrderedSet *_loginDeferredAccounts;
    id <IGAccountLinkingLoginAnnouncer> _announcer;
}

- (void).cxx_destruct;
- (void)_updateLoginDeferredAccountsByRemovingAccountsWithPKs:(id)arg1;
- (void)didLoginAndUpdateDeferredAccounts;
- (void)clearAllLoginDeferredAccounts;
- (void)removeLoginDeferredAccountsWithPKs:(id)arg1;
- (void)storeLoginDeferredAccountsWithAccountInfoDicts:(id)arg1;
- (id)loginDeferredAccounts;
- (void)loadLoginDeferredAccounts;
- (void)addListener:(id)arg1;
- (id)initWithAccountStoreCoordinator:(id)arg1;

@end
