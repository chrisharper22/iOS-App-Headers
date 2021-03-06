//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectDataSubscriptionPublishing-Protocol.h"

@class IGDirectMsysMessagingMailbox, NSString;
@protocol FBCancelable, IGDirectDataSubscriptionPublishingDelegate;

@interface IGDirectMsysReadOnlyFeatureLimitSubscriptionPublisher : NSObject <IGDirectDataSubscriptionPublishing>
{
    id <IGDirectDataSubscriptionPublishingDelegate> _delegate;
    IGDirectMsysMessagingMailbox *_messagingMailbox;
    id <FBCancelable> _featureLimitSubscription;
}

- (void).cxx_destruct;
- (void)_triggerUpdateWithLatestValueForMailbox:(id)arg1;
- (id)publisherInputsForDebugging;
- (void)stopListeningForUpdates;
- (void)startListeningForUpdatesWithDelegate:(id)arg1;
- (id)initWithMessagingMailbox:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

