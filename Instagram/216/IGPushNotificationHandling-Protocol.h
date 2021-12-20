//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGPushNotificationHandlerIntent, IGPushNotificationInfo, IGUserSession, NSDictionary, NSString;

@protocol IGPushNotificationHandling <NSObject>
- (IGPushNotificationHandlerIntent *)handleNotification:(IGPushNotificationInfo *)arg1 forUserSession:(IGUserSession *)arg2 userSessionIsPresented:(_Bool)arg3;
- (void)handleBackgroundPushNotification:(NSDictionary *)arg1 userSession:(IGUserSession *)arg2 channel:(NSString *)arg3 completion:(void (^)(unsigned long long))arg4;
@end

