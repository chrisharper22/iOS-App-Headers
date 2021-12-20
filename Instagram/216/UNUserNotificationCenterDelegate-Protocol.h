//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UNNotification, UNNotificationResponse, UNUserNotificationCenter;

@protocol UNUserNotificationCenterDelegate <NSObject>

@optional
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 openSettingsForNotification:(UNNotification *)arg2;
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 didReceiveNotificationResponse:(UNNotificationResponse *)arg2 withCompletionHandler:(void (^)(void))arg3;
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 willPresentNotification:(UNNotification *)arg2 withCompletionHandler:(void (^)(unsigned long long))arg3;
@end

