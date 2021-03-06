//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBAssetWriter-Protocol.h>

@class AVAssetWriterInputPixelBufferAdaptor, NSString;
@protocol FBAssetWriterInputProtocol, FBAssetWritingProtocol;

@interface FBVideoAssetWriter : NSObject <FBAssetWriter>
{
    id <FBAssetWritingProtocol> _writer;
    id <FBAssetWriterInputProtocol> _assetInput;
    AVAssetWriterInputPixelBufferAdaptor *_adaptor;
}

- (void).cxx_destruct;
- (id)currentPassDescription;
- (void)markCurrentPassAsFinished;
- (void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool;
- (void)setFailureListener:(CDUnknownBlockType)arg1;
- (void)markAsFinished:(id *)arg1;
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 presentationTime:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;
- (_Bool)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (long long)status;
- (_Bool)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)prepareToWrite:(id *)arg1;
- (id)initWithAssetWriter:(id)arg1 assetInput:(id)arg2 pixelAdaptor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

