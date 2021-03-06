//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectOutgoingUpdateListener-Protocol.h"

@class IGDirectDjangoThreadSubscriptionService, IGDirectThreadNotificationPresenter, IGUserSession, NSString;

@interface IGDirectOutgoingUpdateAlertService : NSObject <IGDirectOutgoingUpdateListener>
{
    IGUserSession *_userSession;
    IGDirectThreadNotificationPresenter *_notificationPresenter;
    IGDirectDjangoThreadSubscriptionService *_threadSubscriptionService;
}

- (void).cxx_destruct;
- (void)_presentErrorNotificationWithText:(id)arg1 thread:(id)arg2;
- (void)_presentErrorNotificationWithText:(id)arg1 threadId:(id)arg2;
- (void)_presentAlertViewForAction:(id)arg1;
- (void)directThreadOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directMessageOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directThreadOutgoingUpdateDidSucceed:(id)arg1;
- (void)directMessageOutgoingUpdateDidSucceed:(id)arg1;
- (void)startListening;
- (id)initWithUserSession:(id)arg1 threadSubscriptionService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

