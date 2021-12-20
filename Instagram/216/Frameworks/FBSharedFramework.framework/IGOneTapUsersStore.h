//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol IGOneTapUsersStoreDelegate;

@interface IGOneTapUsersStore : NSObject
{
    NSString *_accountsKey;
    id <IGOneTapUsersStoreDelegate> _delegate;
    NSArray *_enabledAccounts;
}

+ (id)_updateGroup:(id)arg1 byRemovingUser:(id)arg2;
+ (id)_updateGroup:(id)arg1 byAddingUser:(id)arg2;
+ (id)_userPKsInGroup:(id)arg1;
+ (_Bool)_isUser:(id)arg1 partOfGroup:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *enabledAccounts; // @synthesize enabledAccounts=_enabledAccounts;
@property(nonatomic) __weak id <IGOneTapUsersStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeUser:(id)arg1;
- (void)_addUsers:(id)arg1;
- (void)_logEnableOneTapLoginForUserPK:(id)arg1 toEnable:(_Bool)arg2 surface:(long long)arg3 analyticsLogger:(id)arg4;
- (void)sendOneTapLoginStatusForUserSession:(id)arg1;
- (void)removeUserPkFromOneTapLoginEnabledUserPK:(id)arg1 surface:(long long)arg2 analyticsLogger:(id)arg3;
- (void)addUserPksToOneTapLoginEnabledUserPKs:(id)arg1 surface:(long long)arg2 analyticsLogger:(id)arg3 multipleAccountHandler:(id)arg4;
- (id)oneTapLoginEnabledUserPKs;
- (_Bool)isOneTapLoginEnabledForUserWithPK:(id)arg1;
- (void)resetStore;
- (id)initWithAccountsKey:(id)arg1;

@end

