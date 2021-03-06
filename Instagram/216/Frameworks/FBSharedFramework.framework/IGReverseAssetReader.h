//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGSampleBufferProvider-Protocol.h>

@class AVAssetReaderOutput, NSMutableArray, NSString;

@interface IGReverseAssetReader : NSObject <IGSampleBufferProvider>
{
    NSMutableArray *_frameChunk;
    AVAssetReaderOutput *_output;
    CDStruct_1b6d18a9 _lastPresentationTime;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_e83c9415 _chunkTimeRange;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AVAssetReaderOutput *output; // @synthesize output=_output;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) CDStruct_1b6d18a9 lastPresentationTime; // @synthesize lastPresentationTime=_lastPresentationTime;
@property(nonatomic) CDStruct_e83c9415 chunkTimeRange; // @synthesize chunkTimeRange=_chunkTimeRange;
@property(retain, nonatomic) NSMutableArray *frameChunk; // @synthesize frameChunk=_frameChunk;
- (void)resetForTime:(id)arg1;
- (_Bool)attachAssetReader:(id)arg1;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (void)_loadNextChunk;
- (_Bool)_didReadAllChunks;
- (_Bool)_didFinishReadingCurrentChunk;
- (id)initWithOutput:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

