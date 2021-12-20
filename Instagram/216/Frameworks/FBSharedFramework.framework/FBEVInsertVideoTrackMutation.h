//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBEVMutation.h>

#import <FBSharedFramework/FBEVVideoMutationMetadataProvider-Protocol.h>

@class NSMutableArray, NSString;

@interface FBEVInsertVideoTrackMutation : FBEVMutation <FBEVVideoMutationMetadataProvider>
{
    NSMutableArray *_segments;
    NSMutableArray *_transformBehaviors;
}

- (void).cxx_destruct;
- (void)_setTransformInstructionOnLayerInstruction:(id)arg1 forTrack:(id)arg2 insertedAtTime:(CDStruct_1b6d18a9)arg3 transformBehavior:(id)arg4 state:(id)arg5;
- (id)_videoTrackInstructionForSourceTrack:(id)arg1 compositionTrack:(id)arg2 timeRange:(CDStruct_e83c9415)arg3 insertedAtTime:(CDStruct_1b6d18a9)arg4 transformBehavior:(id)arg5 state:(id)arg6;
- (CDStruct_e83c9415)videoMutationScaledTimeRange;
- (id)mutationDescription;
- (_Bool)applyMutationOntoState:(id)arg1 error:(id *)arg2;
- (struct CGSize)trackSizeForConfig:(id)arg1;
- (void)appendSegment:(id)arg1 transformBehavior:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
