//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFAVPlayerLayerStateUpdate-Protocol.h>
#import <FBSharedFramework/FNFPlayerDisplayEngine-Protocol.h>

@class FNFRenderingThread, NSError, NSString;
@protocol FNFPlayerDisplayEngineDelegate, FNFPlayerDisplayEngineFrameDataDelegate, FNFPlayerHeaderDataDelegate, OS_dispatch_queue;

@interface FNFHeadlessDisplayEngine : NSObject <FNFPlayerDisplayEngine, FNFAVPlayerLayerStateUpdate>
{
    struct OpaqueCMTimebase *_controlTimeBase;
    NSError *_layerError;
    struct CGAffineTransform _preferredTransform;
    FNFRenderingThread *_renderingThread;
    CDUnknownBlockType _dataBlock;
    NSObject<OS_dispatch_queue> *_dataQueue;
    _Bool _requestingData;
    id <FNFPlayerDisplayEngineFrameDataDelegate> _displayEngineFrameDataDelegate;
    id <FNFPlayerDisplayEngineDelegate> _displayEngineDelegate;
    id <FNFPlayerHeaderDataDelegate> _headerDataDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FNFPlayerHeaderDataDelegate> headerDataDelegate; // @synthesize headerDataDelegate=_headerDataDelegate;
@property(nonatomic) __weak id <FNFPlayerDisplayEngineDelegate> displayEngineDelegate; // @synthesize displayEngineDelegate=_displayEngineDelegate;
@property(nonatomic) __weak id <FNFPlayerDisplayEngineFrameDataDelegate> displayEngineFrameDataDelegate; // @synthesize displayEngineFrameDataDelegate=_displayEngineFrameDataDelegate;
- (void)playerLayerIsReadyForDisplay:(_Bool)arg1;
- (void)setAllowInactivePlayback:(_Bool)arg1 drawingOn:(_Bool)arg2;
- (void)yieldDecompressedBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 presentationDuration:(CDStruct_1b6d18a9)arg3;
- (void)stopRequestingMediaData;
- (void)setShouldApplyRotationTransform:(_Bool)arg1;
- (void)setNeedsDisplayFrame;
- (void)setLoggingContext:(id)arg1;
- (_Bool)seekFrameUpdatesFinished;
- (void)resume;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_requestData;
- (void)requestLastDisplayedSampleBuffer:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)pauseDisplayLink;
- (void)pause:(int)arg1;
- (id)layer;
- (_Bool)isReadyForMoreMediaData;
- (void)invalidate;
- (_Bool)flushIfError;
- (_Bool)flushDisplayReadySampleBuffers;
- (void)flushAndRemoveImage;
- (void)flush;
- (void)bypassSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attributes:(unsigned int)arg2 codec:(unsigned long long)arg3 enqueueInfo:(id)arg4;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attributes:(unsigned int)arg2 codec:(unsigned long long)arg3 enqueueInfo:(id)arg4;
- (void)displayFrameAsApplicable;
- (void)willResignActive;
- (void)didBecomeActive;
- (_Bool)allowRenderingWhileApplicationInactive;
- (void)dispatchAsyncOnRenderingThread:(CDUnknownBlockType)arg1;
- (void)dispatchSyncOnRenderingThread:(CDUnknownBlockType)arg1;
- (void)setRenderingThreadPriority:(double)arg1;
@property(readonly, nonatomic) long long status;
@property(nonatomic) struct CGAffineTransform preferredTransform;
@property(readonly, nonatomic) NSError *error;
@property(retain) struct OpaqueCMTimebase *controlTimebase;
- (id)initWithConfig:(CDStruct_603cd4b3)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
