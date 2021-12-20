//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectCachePendingInboxListener-Protocol.h"
#import "IGDirectDataSubscriptionPublishing-Protocol.h"

@class IGDirectCache, NSString;
@protocol IGDirectDataSubscriptionPublishingDelegate;

@interface IGDirectPendingInboxRequestsSubscriptionPublisher : NSObject <IGDirectCachePendingInboxListener, IGDirectDataSubscriptionPublishing>
{
    id <IGDirectDataSubscriptionPublishingDelegate> _delegate;
    IGDirectCache *_directCache;
}

- (void).cxx_destruct;
- (id)publisherInputsForDebugging;
- (void)stopListeningForUpdates;
- (void)startListeningForUpdatesWithDelegate:(id)arg1;
- (void)directCacheDidUpdatePendingRequests:(id)arg1;
- (void)directCacheDidUpdatePendingInboxMetadata:(id)arg1;
- (id)initWithDirectCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

