//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserSessionEndingObject-Protocol.h"

@class IGDirectInboxSubscriptionService, IGDirectUIThreadSet, IGUser, IGUserDefaults;
@protocol IGDirectThreadUnsendMitigationInboxServiceListenerDelegate, IGSubscriptionToken;

@interface IGDirectThreadUnsendMitigationInboxServiceListener : NSObject <IGUserSessionEndingObject>
{
    IGDirectInboxSubscriptionService *_inboxSubscriptionService;
    IGUser *_currentUser;
    IGUserDefaults *_sessionUserDefaults;
    id <IGSubscriptionToken> _inboxSubscriptionToken;
    IGDirectUIThreadSet *_threadSet;
    id <IGDirectThreadUnsendMitigationInboxServiceListenerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectThreadUnsendMitigationInboxServiceListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleRemoveMessage:(id)arg1 threadId:(id)arg2;
- (void)_handleInboxUpdate:(id)arg1;
- (void)userSessionWillEnd;
- (void)stopListening;
- (void)startListening;
- (id)initWithSubscriptionService:(id)arg1 currentUser:(id)arg2 sessionUserDefaults:(id)arg3;

@end

