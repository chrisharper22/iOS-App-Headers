//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetReader, AVAssetWriter;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface IGLivePhotoMetadataWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_videoWriteQueue;
    NSObject<OS_dispatch_group> *_videoWriteGroup;
    AVAssetWriter *_writer;
    AVAssetReader *_reader;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AVAssetReader *reader; // @synthesize reader=_reader;
@property(readonly, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
- (void)_finishWritingTracksWithVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_writeTrack:(long long)arg1;
- (void)_addMetadataToVideoWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)addToLivePhotoStillImageMetadata:(id)arg1 identifier:(id)arg2;
- (void)addMetadataToLivePhotoPairedVideoWithURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

