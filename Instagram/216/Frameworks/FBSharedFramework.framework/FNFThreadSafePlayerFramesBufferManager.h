//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFFramesBufferManaging-Protocol.h>

@class FNFListFramesBuffer, NSString;

@interface FNFThreadSafePlayerFramesBufferManager : NSObject <FNFFramesBufferManaging>
{
    unsigned long long _sampleBufferRequestThreshold;
    unsigned long long _dataRequestCounter;
    FNFListFramesBuffer *_listFrameBuffer;
    unsigned long long _framesEnqueued;
    unsigned long long _framesConsumed;
    unsigned long long _decompressionSessionIndexStart;
    unsigned long long _framesStale;
    unsigned long long _framesFlushed;
    unsigned long long _framesDisplayed;
    unsigned long long _frameToClose;
    struct mutex _framesBufferMutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 decompressionSession:(id)arg2 enqueueInfo:(id)arg3;
- (CDUnknownBlockType)_unsafe_addBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 iFrameEnqueued:(unsigned long long)arg3;
- (CDUnknownBlockType)addBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 iFrameEnqueued:(unsigned long long)arg3;
- (CDUnknownBlockType)addBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2;
- (void)dropFrame:(unsigned long long)arg1;
- (CDUnknownBlockType)prepareFlush;
- (void)clear;
- (_Bool)isFrameOnClose:(unsigned long long)arg1;
- (void)setFrameOnClose;
- (void)_advanceDataRequestCounter;
- (struct FNFFrameBufferData)findNextFrame:(CDStruct_1b6d18a9)arg1 withDrawingOn:(_Bool)arg2 isFirstFrame:(_Bool)arg3 shouldDropStaleFrame:(_Bool)arg4 staleFrameThreshold:(int)arg5;
- (_Bool)seekFrameUpdatesFinished;
- (_Bool)isFull;
- (void)setSampleBufferRequestThreshold:(int)arg1;
- (_Bool)_isIFrameEnqueuedLessThanFramesRead:(unsigned long long)arg1;
- (_Bool)doesIFrameBelongsToDecompressionSession:(unsigned long long)arg1;
- (void)resetDecompressionSessionIndex;
- (_Bool)shouldRequestData;
- (void)dealloc;
- (id)initWithSampleBufferRequestThreshold:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

