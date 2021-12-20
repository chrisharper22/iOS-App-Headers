//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBVideoSegmentedResumeTranscoding-Protocol.h>

@class AVAsset, AVAudioMix, AVVideoComposition, FBVideoEdits, FBVideoSegmentedEncoder, FBVideoTranscoderConfig, FBVideoTranscoderTracer, NSDictionary, NSMutableArray, NSString, NSURL;
@protocol FBVideoProcessing, FBVideoTranscoderOutputAdapter, OS_dispatch_queue;

@interface FBVideoSegmentedTranscoder : NSObject <FBVideoSegmentedResumeTranscoding>
{
    AVAsset *_asset;
    NSURL *_assetURL;
    id <FBVideoTranscoderOutputAdapter> _outputAdapter;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    FBVideoTranscoderConfig *_config;
    NSDictionary *_optionalConfig;
    NSObject<OS_dispatch_queue> *_audioExportQueue;
    NSObject<OS_dispatch_queue> *_videoExportQueue;
    NSObject<OS_dispatch_queue> *_assetWriterQueue;
    unsigned long long _currentSegment;
    struct FBMediaTranscodingKitVideoAssetExportParams _segmentParams;
    struct FBMediaTranscodingKitVideoAssetExportParams _currentVideoSegmentParams;
    struct FBMediaTranscodingKitVideoAssetExportParams _currentAudioSegmentParams;
    CDStruct_1b6d18a9 _nextSegmentPresentationTime;
    CDUnknownBlockType _segmentStartedBlock;
    CDUnknownBlockType _segmentFinishedBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _imageSampleBlock;
    NSObject<OS_dispatch_queue> *_progressQueue;
    double _totalProgress;
    id <FBVideoProcessing> _videoProcessor;
    FBVideoEdits *_videoEdits;
    FBVideoSegmentedEncoder *_audioEncoder;
    FBVideoSegmentedEncoder *_videoEncoder;
    CDUnknownBlockType _discreteVideoEncoderProvider;
    CDUnknownBlockType _discreteAudioEncoderProvider;
    CDUnknownBlockType _assetWriterProvider;
    CDUnknownBlockType _applicationStateProvider;
    _Bool _shouldSegmentOutput;
    _Bool _shouldSkipEncodeAudio;
    _Bool _enforceMaxSegmentDuration;
    _Bool _suspendTranscoderWhenStartingInBG;
    _Bool _shouldWriteMoovAtomAtBeginningOfFile;
    CDStruct_1b6d18a9 _videoStartPresentationTime;
    CDStruct_1b6d18a9 _videoFinishPresentationTime;
    CDStruct_1b6d18a9 _audioStartPresentationTime;
    CDStruct_1b6d18a9 _audioFinishPresentationTime;
    struct FBVideoSegmentedResult _audioSegmentedResult;
    NSMutableArray *_timeStamps;
    struct atomic<bool> _audioWriterInProgress;
    struct atomic<bool> _videoWriterInProgress;
    long long _numberOfSegments;
    long long _estimatedOutputFileSize;
    unsigned long long _state;
    FBVideoTranscoderTracer *_transcodeTracer;
    struct CGSize _outputSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBVideoTranscoderTracer *transcodeTracer; // @synthesize transcodeTracer=_transcodeTracer;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) long long estimatedOutputFileSize; // @synthesize estimatedOutputFileSize=_estimatedOutputFileSize;
@property(readonly, nonatomic) long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
@property(readonly, nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_onVideoSegmentCompleted:(id)arg1 error:(id)arg2 segmentedResult:(struct FBVideoSegmentedResult)arg3 callback:(CDUnknownBlockType)arg4;
- (_Bool)_startVideoEncodingWithCompletionCallback:(CDUnknownBlockType)arg1;
- (_Bool)_startAudioEncodingWithCompletionCallback:(CDUnknownBlockType)arg1;
- (void)_encodeAudioThenVideo;
- (void)_encodeConcurrently;
- (void)_onComplete:(id)arg1 suspend:(_Bool)arg2;
- (void)_onSegmentFinishedWithURL:(id)arg1 type:(unsigned long long)arg2 endTime:(CDStruct_1b6d18a9)arg3;
- (void)_onSegmentStartedWithURL:(id)arg1 type:(unsigned long long)arg2 endTime:(CDStruct_1b6d18a9)arg3;
- (void)_didUpdateEncodeProgress:(double)arg1 withSegmentDuration:(CDStruct_1b6d18a9)arg2;
- (void)suspendTranscoderWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelExportWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_cancelWriters;
- (CDStruct_1b6d18a9)_nextVideoSegmentDuration;
- (_Bool)_prepareNextVideoSegment:(id *)arg1;
- (id)currentVideoProcessorFilterConfigs;
- (void)protocolForVideoSegmentedResumeTranscoding;
- (void)transcodeWithStartPresentationTime:(CDStruct_1b6d18a9)arg1 segmentIdx:(unsigned long long)arg2 shouldSkipEncodeAudio:(_Bool)arg3 progress:(CDUnknownBlockType)arg4 onSegmentStarted:(CDUnknownBlockType)arg5 onSegmentFinished:(CDUnknownBlockType)arg6 onImageSample:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8 progressQueue:(id)arg9;
- (void)transcodeWithProgress:(CDUnknownBlockType)arg1 onSegmentStarted:(CDUnknownBlockType)arg2 onSegmentFinished:(CDUnknownBlockType)arg3 onImageSample:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)prepareWithProcessor:(CDUnknownBlockType)arg1;
- (id)latestTranscodingSoftException;
- (id)initWithEVVideo:(id)arg1 outputAdapter:(id)arg2 videoEdits:(id)arg3 config:(id)arg4 videoProcessor:(id)arg5 discreteVideoEncoderProvider:(CDUnknownBlockType)arg6 discreteAudioEncoderProvider:(CDUnknownBlockType)arg7 assetWriterProvider:(CDUnknownBlockType)arg8 applicationStateProvider:(CDUnknownBlockType)arg9 transcodeTracer:(id)arg10 optionalConfig:(id)arg11;
- (id)initWithAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 outputAdapter:(id)arg4 videoEdits:(id)arg5 config:(id)arg6 videoProcessor:(id)arg7 discreteVideoEncoderProvider:(CDUnknownBlockType)arg8 discreteAudioEncoderProvider:(CDUnknownBlockType)arg9 assetWriterProvider:(CDUnknownBlockType)arg10 applicationStateProvider:(CDUnknownBlockType)arg11 transcodeTracer:(id)arg12 optionalConfig:(id)arg13;
- (id)initWithAsset:(id)arg1 outputAdapter:(id)arg2 videoEdits:(id)arg3 config:(id)arg4 videoProcessor:(id)arg5 discreteVideoEncoderProvider:(CDUnknownBlockType)arg6 discreteAudioEncoderProvider:(CDUnknownBlockType)arg7 assetWriterProvider:(CDUnknownBlockType)arg8 applicationStateProvider:(CDUnknownBlockType)arg9 transcodeTracer:(id)arg10 optionalConfig:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

