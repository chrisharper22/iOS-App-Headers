//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBAssetWriter-Protocol.h>
#import <FBSharedFramework/FBMediaEncodingDelegate-Protocol.h>

@class NSString;
@protocol FBAssetWriter, FBMediaEncodingProtocol;

@interface FBMediaEncodingAssetWriter : NSObject <FBMediaEncodingDelegate, FBAssetWriter>
{
    id <FBAssetWriter> _assetWriter;
    id <FBMediaEncodingProtocol> _mediaEncoder;
    CDUnknownBlockType _failureListener;
}

- (void).cxx_destruct;
- (void)mediaEncoder:(id)arg1 didFailToEncodeSampleBuffer:(id)arg2;
- (void)mediaEncoder:(id)arg1 didEncodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (id)currentPassDescription;
- (void)markCurrentPassAsFinished;
- (void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setFailureListener:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool;
- (long long)status;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)markAsFinished:(id *)arg1;
- (_Bool)isReadyForMoreMediaData;
- (void)prepareToWrite:(id *)arg1;
- (_Bool)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 presentationTime:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;
- (id)initWithAssetWriter:(id)arg1 mediaEncoder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
