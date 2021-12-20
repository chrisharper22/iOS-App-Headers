//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectDataSubscriptionPipe, IGDirectInboxSubscriptionService, IGUserSession;

@interface IGDirectInAppNotificationSubscriptionService : NSObject
{
    IGDirectInboxSubscriptionService *_inboxSubscriptionService;
    IGUserSession *_userSession;
    IGDirectDataSubscriptionPipe *_inAppNotificationPipe;
}

- (void).cxx_destruct;
- (id)addSubscriberWithUpdateBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)_setupInAppNotificationSubscriptionIfNeeded;
- (id)initWithInboxSubscriptionService:(id)arg1 tab:(id)arg2 userSession:(id)arg3;

@end

