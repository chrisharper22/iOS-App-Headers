//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRealtimeInAppNotificationHandlerDelegate-Protocol.h"
#import "IGUserSessionEndingObject-Protocol.h"

@class IGRealtimeInAppNotificationHandler, IGUserSession, NSMutableDictionary, NSString;

@interface IGRealtimeInAppNotificationService : NSObject <IGRealtimeInAppNotificationHandlerDelegate, IGUserSessionEndingObject>
{
    IGRealtimeInAppNotificationHandler *_handler;
    IGUserSession *_session;
    NSMutableDictionary *_notificationTypeToHanderMap;
}

- (void).cxx_destruct;
- (void)realtimeInAppNotificationHandler:(id)arg1 generateViewModel:(id)arg2;
- (void)userSessionWillEnd;
- (void)_teardown;
- (void)registerNotificationType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)start;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
