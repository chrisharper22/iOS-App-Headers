//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGVideoCallNotificationsHandler : NSObject
{
}

+ (void)handleMwsMqttDismissReceived:(id)arg1 sessionId:(id)arg2 serverInfoData:(id)arg3 userSession:(id)arg4 reason:(id)arg5 presentNotificationInForeground:(CDUnknownBlockType)arg6;
+ (void)handleMwsMqttRingReceived:(id)arg1 sessionId:(id)arg2 conferenceType:(long long)arg3 serverInfoData:(id)arg4 transactionId:(id)arg5 userSession:(id)arg6 presentNotificationInForeground:(CDUnknownBlockType)arg7;
+ (void)handlePushNotification:(id)arg1 resolvedSession:(id)arg2 userTappedNotification:(_Bool)arg3 channel:(id)arg4 displayType:(long long)arg5 navigateToThreadHandler:(CDUnknownBlockType)arg6 presentNotificationInForeground:(CDUnknownBlockType)arg7;

@end
