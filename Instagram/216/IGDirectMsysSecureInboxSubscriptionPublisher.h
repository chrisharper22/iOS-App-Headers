//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectBlendedInboxDataLoader-Protocol.h"
#import "IGDirectBlendedMessageRequestsDataLoader-Protocol.h"
#import "IGDirectDataSubscriptionPublishing-Protocol.h"
#import "IGDirectInboxDataLoader-Protocol.h"

@class IGDirectMsysMessagingMailbox, NSString;
@protocol FBCancelable, IGDirectDataSubscriptionPublishingDelegate;

@interface IGDirectMsysSecureInboxSubscriptionPublisher : NSObject <IGDirectDataSubscriptionPublishing, IGDirectInboxDataLoader, IGDirectBlendedInboxDataLoader, IGDirectBlendedMessageRequestsDataLoader>
{
    IGDirectMsysMessagingMailbox *_mailboxProvider;
    id <IGDirectDataSubscriptionPublishingDelegate> _delegate;
    id <FBCancelable> _cancelHandle;
    int _pageSize;
    unsigned long long _inboxType;
    int _overflowCount;
    long long _minLastActivityTimestampMs;
    _Bool _hasMoreLocal;
    _Bool _supportCutoverThreads;
}

- (void).cxx_destruct;
- (void)_processInboxMetadata:(id)arg1 threadList:(id)arg2 mailbox:(id)arg3;
- (void)_fetchThreadsFromDatabaseWithMailbox:(id)arg1;
- (void)_fetchThreadsFromDatabase;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)publisherInputsForDebugging;
- (void)stopListeningForUpdates;
- (void)startListeningForUpdatesWithDelegate:(id)arg1;
- (void)loadNextPageOfThreads;
- (void)loadWithDjangoPagingCursor:(id)arg1;
- (void)loadNextPageOfThreadsForBlendedInboxTab:(id)arg1;
- (void)loadNextPageOfThreadsForTab:(id)arg1;
- (id)initWithMailboxProvider:(id)arg1 supportCutoverThreads:(_Bool)arg2 inboxType:(unsigned long long)arg3 pageSize:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

