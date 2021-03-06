//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectBlendedMessageRequestsDataLoader-Protocol.h"

@class IGDirectDataSubscriptionPipe, IGDirectMsysMessagingMailbox, IGDirectMsysSecureInboxSubscriptionPublisher, NSString;

@interface IGDirectMsysSecureMessageRequestsSubscriptionService : NSObject <IGDirectBlendedMessageRequestsDataLoader>
{
    IGDirectMsysMessagingMailbox *_mailbox;
    IGDirectDataSubscriptionPipe *_pipe;
    IGDirectMsysSecureInboxSubscriptionPublisher *_publisher;
}

- (void).cxx_destruct;
- (void)loadNextPageOfThreads;
- (void)loadWithDjangoPagingCursor:(id)arg1;
- (id)registerSubscriptionWithUpdateBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)initWithMessagingMailbox:(id)arg1;
- (id)secureMessageRequestsSubscriptionPipe;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

