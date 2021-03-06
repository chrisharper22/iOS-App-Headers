//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectRealtimeOperationListener-Protocol.h>

@class IGDirectCache, IGDirectThreadNotificationPresenter, IGUserSession, NSString;

@interface IGDirectRealtimeNotificationOperationHandler : NSObject <IGDirectRealtimeOperationListener>
{
    IGDirectCache *_directCache;
    IGDirectThreadNotificationPresenter *_notificationPresenter;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_handleItemNotificationOperationWithDictionary:(id)arg1 threadId:(id)arg2;
- (void)_handleRealtimeOperation:(id)arg1;
- (void)handleRealtimeOperations:(id)arg1 envelopeData:(id)arg2;
- (id)initWithDirectCache:(id)arg1 notificationPresenter:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

