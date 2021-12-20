//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGOneTapUsersStore, IGUser;
@protocol IGAnalyticsEventLoggingProtocol, IGMultipleAccountHandling, IGUserProviding;

@protocol IGOneTapUsersStoreDelegate <NSObject>
- (void)usersStore:(IGOneTapUsersStore *)arg1 didFindEnabledUser:(IGUser<IGUserProviding> *)arg2 withMultipleAccountHandler:(id <IGMultipleAccountHandling>)arg3 surface:(long long)arg4 analyticsLogger:(id <IGAnalyticsEventLoggingProtocol>)arg5;
@end

