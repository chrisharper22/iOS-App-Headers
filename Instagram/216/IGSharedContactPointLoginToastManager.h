//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet, NSString;

@interface IGSharedContactPointLoginToastManager : NSObject
{
    NSString *_mainUserID;
    NSOrderedSet *_otherToastableAccounts;
    NSOrderedSet *_loggedInAccountsBeforeNewLogin;
}

- (void).cxx_destruct;
- (void)_resetToastManager;
- (id)toastableAccountsToastViewModelWithMultipleAccountHandler:(id)arg1;
- (void)updateToastableAccountsWithMultipleAccountHandler:(id)arg1;
- (void)storeToastableAccountsWithMainUser:(id)arg1 multipleAccountHandler:(id)arg2 loggedInUsers:(id)arg3;

@end

