//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSNumber;

@interface IGDirectRealtimeIrisSyncErrorState : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    _Bool _awaitingDeltas_lastSnapshotWasManualFetch;
    NSNumber *_awaitingDeltas_latestServerSequenceId;
}

+ (id)none;
+ (id)canNotSubscribeToIris;
+ (id)awaitingDeltasWithLastSnapshotWasManualFetch:(_Bool)arg1 latestServerSequenceId:(id)arg2;
- (void).cxx_destruct;
- (void)matchNone:(CDUnknownBlockType)arg1 canNotSubscribeToIris:(CDUnknownBlockType)arg2 awaitingDeltas:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanNone:(CDUnknownBlockType)arg1 canNotSubscribeToIris:(CDUnknownBlockType)arg2 awaitingDeltas:(CDUnknownBlockType)arg3;

@end

