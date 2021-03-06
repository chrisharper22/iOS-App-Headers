//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDictionary;
@protocol FNFDecompressionSession;

@protocol FNFFramesBufferManaging <NSObject>
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 decompressionSession:(id <FNFDecompressionSession>)arg2 enqueueInfo:(NSDictionary *)arg3;
- (void)resetDecompressionSessionIndex;
- (void (^)(void))addBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 iFrameEnqueued:(unsigned long long)arg3;
- (void (^)(void))addBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2;
- (void)dropFrame:(unsigned long long)arg1;
- (void (^)(void))prepareFlush;
- (_Bool)isFull;
- (void)setSampleBufferRequestThreshold:(int)arg1;
- (void)clear;
- (_Bool)seekFrameUpdatesFinished;
- (_Bool)isFrameOnClose:(unsigned long long)arg1;
- (void)setFrameOnClose;
- (_Bool)shouldRequestData;
- (struct FNFFrameBufferData)findNextFrame:(CDStruct_1b6d18a9)arg1 withDrawingOn:(_Bool)arg2 isFirstFrame:(_Bool)arg3 shouldDropStaleFrame:(_Bool)arg4 staleFrameThreshold:(int)arg5;
- (_Bool)doesIFrameBelongsToDecompressionSession:(unsigned long long)arg1;
@end

