//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBMPFilter-Protocol.h"
#import "FBMPPermissiveOutput-Protocol.h"
#import "IGVideoProcessorControllerDelegate-Protocol.h"

@class FBMPBaseConsumerPort, FBMPBaseProducerPort, NSArray, NSString;
@protocol IGVideoProcessorControllerDelegate, IGVideoProcessorControlling;

@interface IGMPVideoProcessorController : NSObject <IGVideoProcessorControllerDelegate, FBMPFilter, FBMPPermissiveOutput>
{
    id <IGVideoProcessorControlling> _videoProcessorController;
    id <IGVideoProcessorControllerDelegate> _delegate;
    FBMPBaseConsumerPort *_videoConsumerPort;
    FBMPBaseProducerPort *_videoProducerPort;
    FBMPBaseConsumerPort *_audioConsumerPort;
    FBMPBaseProducerPort *_audioProducerPort;
    FBMPBaseConsumerPort *_platformAlgorithmDataConsumerPort;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGVideoProcessorControlling> videoProcessorController; // @synthesize videoProcessorController=_videoProcessorController;
- (struct CGSize)videoProcessorControllerOutputSize:(id)arg1;
- (void)videoProcessorController:(id)arg1 didUpdateRequestedCameraCapabilities:(unsigned long long)arg2;
- (void)videoProcessorController:(id)arg1 didFinishProcessingVideoBuffer:(struct opaqueCMSampleBuffer *)arg2 metadata:(id)arg3;
- (void)videoProcessorController:(id)arg1 didFinishProcessingAudioBuffer:(struct opaqueCMSampleBuffer *)arg2 volumeLevel:(float)arg3 forPreview:(_Bool)arg4 forCapture:(_Bool)arg5;
- (void)videoProcessorController:(id)arg1 willProcessVideoBuffer:(struct opaqueCMSampleBuffer *)arg2 metadata:(id)arg3;
- (_Bool)allowsConnectionsWithConsumerPortMapping:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *producerPorts;
- (id)consumerPorts;
- (void)invalidate;
- (void)sessionWillStop:(id)arg1;
- (void)sessionWillStart:(id)arg1;
- (void)sessionDisconnectedPort:(id)arg1 context:(id)arg2;
- (void)sessionConnectedPort:(id)arg1 context:(id)arg2;
- (id)initWithVideoProcessorController:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

