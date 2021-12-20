//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectOutgoingMsysUpdateSending-Protocol.h"

@class IGDirectMsysMessagingMailbox, NSString;

@interface IGDirectOutgoingMsysSecureUpdateService : NSObject <IGDirectOutgoingMsysUpdateSending>
{
    IGDirectMsysMessagingMailbox *_mailboxProvider;
}

- (void).cxx_destruct;
- (id)sendThreadUpdate:(id)arg1 threadIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendMessageUpdate:(id)arg1 messageId:(id)arg2 threadIdentifier:(id)arg3 originalMessageClientContext:(id)arg4 sentDate:(id)arg5;
- (id)initWithMailboxProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

