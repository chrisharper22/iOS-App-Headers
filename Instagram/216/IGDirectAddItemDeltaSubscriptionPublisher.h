//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectDataSubscriptionPublishing-Protocol.h"
#import "IGDirectRealtimeServiceListener-Protocol.h"

@class NSString;
@protocol IGDirectDataSubscriptionPublishingDelegate, IGDirectRealtimeServiceAnnouncer;

@interface IGDirectAddItemDeltaSubscriptionPublisher : NSObject <IGDirectRealtimeServiceListener, IGDirectDataSubscriptionPublishing>
{
    id <IGDirectRealtimeServiceAnnouncer> _realtimeServiceAnnouncer;
    id <IGDirectDataSubscriptionPublishingDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_updateWithDeltaPayload:(id)arg1;
- (void)realtimeServiceDidApplyDelta:(id)arg1;
- (id)publisherInputsForDebugging;
- (void)stopListeningForUpdates;
- (void)startListeningForUpdatesWithDelegate:(id)arg1;
- (id)initWithRealtimeServiceAnnouncer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
