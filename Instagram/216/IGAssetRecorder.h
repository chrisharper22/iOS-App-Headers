//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, NSNumber, NSURL;
@protocol IGUserLauncherSet, OS_dispatch_queue;

@interface IGAssetRecorder : NSObject
{
    CDUnknownBlockType _startedRecordingCompletionHandler;
    id <IGUserLauncherSet> _launcherSet;
    NSURL *_outputFileURL;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInput *_audioWriterInput;
    long long _state;
    struct __CFArray *_savedAudioBuffers;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSNumber *_maxKeyFrameInterval;
    double _bitsPerPixelPerSecond;
    struct CGSize _videoSize;
    CDStruct_1b6d18a9 _startSessionTime;
    CDStruct_1b6d18a9 _endSessionTime;
    CDStruct_1b6d18a9 _lastVideoFrameSourceTime;
    CDStruct_1b6d18a9 _lastAudioFrameSourceTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double bitsPerPixelPerSecond; // @synthesize bitsPerPixelPerSecond=_bitsPerPixelPerSecond;
@property(readonly, nonatomic) NSNumber *maxKeyFrameInterval; // @synthesize maxKeyFrameInterval=_maxKeyFrameInterval;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(nonatomic) struct __CFArray *savedAudioBuffers; // @synthesize savedAudioBuffers=_savedAudioBuffers;
@property(nonatomic) CDStruct_1b6d18a9 lastAudioFrameSourceTime; // @synthesize lastAudioFrameSourceTime=_lastAudioFrameSourceTime;
@property(nonatomic) CDStruct_1b6d18a9 lastVideoFrameSourceTime; // @synthesize lastVideoFrameSourceTime=_lastVideoFrameSourceTime;
@property(nonatomic) CDStruct_1b6d18a9 endSessionTime; // @synthesize endSessionTime=_endSessionTime;
@property(nonatomic) CDStruct_1b6d18a9 startSessionTime; // @synthesize startSessionTime=_startSessionTime;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) AVAssetWriterInput *audioWriterInput; // @synthesize audioWriterInput=_audioWriterInput;
@property(retain, nonatomic) AVAssetWriterInput *videoWriterInput; // @synthesize videoWriterInput=_videoWriterInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
- (void)_writeAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)_writeVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_doStopRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (CDStruct_1b6d18a9)_lastSharedBufferTime;
- (_Bool)_canWriteAudioSample;
- (void)stopRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelRecording;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)startRecordingWithVideoTransform:(struct CGAffineTransform)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_relaseSavedAudioBuffers;
- (void)_releaseOldestAudioBuffer;
- (void)_saveAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
@property(readonly, nonatomic) double runningTime;
- (id)initWithOutputFileURL:(id)arg1 videoSize:(struct CGSize)arg2 maxKeyFrameInterval:(id)arg3 bitsPerPixelPerSecond:(double)arg4 launcherSet:(id)arg5;
- (void)dealloc;

@end
