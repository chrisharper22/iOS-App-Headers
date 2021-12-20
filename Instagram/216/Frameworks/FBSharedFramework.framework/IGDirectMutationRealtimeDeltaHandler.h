//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectMutationRealtimeDeltaHandling-Protocol.h>

@class IGDirectMutationRequestStateStore, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IGDirectMutationRealtimeDeltaHandler : NSObject <IGDirectMutationRealtimeDeltaHandling>
{
    IGDirectMutationRequestStateStore *_requestStateStore;
    NSMutableDictionary *_mutationTrackingIdToMutationId;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_performCleanupForSyncedRequestState:(id)arg1;
- (_Bool)isListeningForMutationTrackingIds;
- (void)_performCleanupForMutationTrackingId:(id)arg1;
- (void)handleReceivedAndStoredMutationTrackingIds:(id)arg1;
- (void)listenForMutationRealtimeSyncForMutationId:(id)arg1 withMutationTrackingId:(id)arg2;
- (id)initWithRequestStateStore:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
