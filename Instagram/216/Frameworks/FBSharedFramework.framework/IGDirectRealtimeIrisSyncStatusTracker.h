//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectRealtimeIrisDeltaListener-Protocol.h>
#import <FBSharedFramework/IGDirectRealtimeIrisSubscriptionHandlerListener-Protocol.h>
#import <FBSharedFramework/IGDirectRealtimeIrisSyncStatusQuerying-Protocol.h>

@class IGDirectRealtimeIrisSyncStatus, NSNumber, NSString;
@protocol IGDirectRealtimeIrisSyncStatusAnnouncer;

@interface IGDirectRealtimeIrisSyncStatusTracker : NSObject <IGDirectRealtimeIrisDeltaListener, IGDirectRealtimeIrisSubscriptionHandlerListener, IGDirectRealtimeIrisSyncStatusQuerying>
{
    IGDirectRealtimeIrisSyncStatus *_status;
    id <IGDirectRealtimeIrisSyncStatusAnnouncer> _listenerAnnouncer;
    NSNumber *_latestServerSequenceId;
    NSNumber *_latestLocallyAppliedSequenceId;
}

- (void).cxx_destruct;
- (void)_setAndAnnounceStatus:(id)arg1;
- (void)_updateStatusIfReceivedSequenceIdMatchesLatestSequenceIdWithMetadata:(id)arg1;
- (void)irisDeltaHandlerDroppedDeltaSilently:(id)arg1;
- (void)irisDeltaHandlerDidApplyDelta:(id)arg1;
- (void)irisDeltaHandlerDidReceiveDelta:(id)arg1;
- (void)irisSubscriptionHandlerRequiresResnapshot;
- (void)irisSubscriptionHandlerDidConnectAtSequenceId:(id)arg1 latestServerSequenceId:(id)arg2;
- (void)irisSubscriptionHandlerWillConnectAtSequenceId:(id)arg1 reason:(id)arg2 isAutoSubscribeOnConnect:(_Bool)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)irisSyncStatus;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

