//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDecompressionSession-Protocol.h>

@class NSString;
@protocol FNFDecompressionSessionDelegate, OS_dispatch_queue;

@interface FNFDecompressionSessionForVP9X : NSObject <FNFDecompressionSession>
{
    id <FNFDecompressionSessionDelegate> _delegate;
    _Bool _async;
    struct vpx_codec_ctx _decoder;
    _Bool _decoderInitialized;
    struct CGSize _videoSize;
    struct opaqueCMFormatDescription *_format;
    struct __CVPixelBufferPool *_pixelBufferPool;
    struct __CVPixelBufferPool *_pixelBufferPoolHighBD;
    NSObject<OS_dispatch_queue> *_queue;
    struct FNFDecompressionConfig _config;
}

+ (id)errorDomain;
- (void).cxx_destruct;
- (id)_decompressionQueue;
- (void)_closeVP9Decoder;
- (id)_copyVpxImage:(const struct vpx_image *)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
- (void)_dropFrameAsApplicable:(unsigned long long)arg1;
- (void)setCVBufferAttachment:(struct opaqueCMFormatDescription *)arg1 pixelBuffer:(struct __CVBuffer *)arg2;
- (void)_decodeVP9SampleBuffer:(struct opaqueCMSampleBuffer *)arg1 iFrame:(unsigned long long)arg2 enqueueInfo:(id)arg3;
- (void)_delegateErrorOut:(id)arg1 enqueueInfo:(id)arg2;
- (void)setEnablePlayThroughDecodingErrors:(_Bool)arg1;
- (struct CGSize)inputSize;
- (unsigned char)canAcceptFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 iFrame:(unsigned long long)arg2 enqueueInfo:(id)arg3;
- (void)closeSession;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *format;
- (id)initWithDelegate:(id)arg1 sampleBufferFormatDescription:(struct opaqueCMFormatDescription *)arg2 videoSize:(struct CGSize)arg3 numOfDecoderThreads:(unsigned int)arg4 async:(_Bool)arg5 config:(struct FNFDecompressionConfig)arg6 pixelBufferPool:(struct __CVPixelBufferPool *)arg7;
- (id)initWithDelegate:(id)arg1 sampleBufferFormatDescription:(struct opaqueCMFormatDescription *)arg2 videoSize:(struct CGSize)arg3 async:(_Bool)arg4 config:(struct FNFDecompressionConfig)arg5 pixelBufferPool:(struct __CVPixelBufferPool *)arg6;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
