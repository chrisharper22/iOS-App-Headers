//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, UICKeyChainStore;
@protocol IGScheduler;

@interface IGPersistentAccountStore : NSObject
{
    UICKeyChainStore *_keychainStore;
    NSDate *_currentDate;
    NSArray *_inMemoryCachedAccounts;
    id <IGScheduler> _scheduler;
}

+ (id)newCloudPersistentAccountStore;
+ (id)newPersistentAccountStore;
- (void).cxx_destruct;
- (void)clearStore;
- (_Bool)_accountIsExpired:(id)arg1;
- (void)_purgeExpiredAccountsWithKeychainAccounts:(id)arg1;
- (void)retrieveLastLoggedInUserPkWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateLastLoggedInUserPK:(id)arg1;
- (void)removeUserPk:(id)arg1;
- (_Bool)containsUserPk:(id)arg1;
- (id)persistentLoginAccounts;
- (void)purgeExpiredAccounts;
- (void)retrievePersistedAccountsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addAccounts:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithKeychainStore:(id)arg1 scheduler:(id)arg2 currentDate:(id)arg3;

@end

