//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGVideoRecorderOptions, NSArray, NSMutableArray, NSNumber;
@protocol IGUserLauncherSet;

@interface IGVideoRecorder : NSObject
{
    id <IGUserLauncherSet> _launcherSet;
    IGVideoRecorderOptions *_recorderOptions;
    long long _state;
    long long _position;
    NSArray *_captureDevices;
    NSMutableArray *_clipRecorders;
    NSNumber *_maxKeyFrameInterval;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *maxKeyFrameInterval; // @synthesize maxKeyFrameInterval=_maxKeyFrameInterval;
@property(retain, nonatomic) NSMutableArray *clipRecorders; // @synthesize clipRecorders=_clipRecorders;
@property(retain, nonatomic) NSArray *captureDevices; // @synthesize captureDevices=_captureDevices;
@property long long position; // @synthesize position=_position;
@property long long state; // @synthesize state=_state;
- (void)_prepareDummyAssetWriter;
- (void)stopRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startRecordingWithVideoTransform:(struct CGAffineTransform)arg1 mainCaptureDevice:(id)arg2 recorderOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 metadata:(id)arg2;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(readonly, nonatomic) double runningTime;
- (id)init;
- (id)initWithCameraPosition:(long long)arg1 maxKeyFrameInterval:(id)arg2 launcherSet:(id)arg3;

@end

