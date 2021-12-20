//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBMPPermissiveOutput-Protocol.h>
#import <FBSharedFramework/NSObject-Protocol.h>

@class NSObject;
@protocol FBMPConsumerPort, OS_dispatch_queue;

@protocol FBMPVideoRecorderProtocol <NSObject, FBMPPermissiveOutput>
@property(readonly, nonatomic) id <FBMPConsumerPort> audioConsumerPort;
@property(readonly, nonatomic) CDStruct_1b6d18a9 recordingDuration;
- (void)cancelRecording;
- (void)stopRecordingWithCompletionHandler:(void (^)(AVURLAsset *))arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (_Bool)startRecordingWithAudioTimeConverter:(struct (^)(struct))arg1 startCompletion:(void (^)(NSError *))arg2;
- (_Bool)prepareRecordingWithConfiguration:(struct FBMPVideoRecorderConfiguration)arg1;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (double)videoBitratePerPixel;
@end
