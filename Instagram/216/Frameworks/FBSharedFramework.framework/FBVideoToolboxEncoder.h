//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMediaEncodingProtocol-Protocol.h>

@class FBVideoConfig, NSDictionary, NSSet, NSString;
@protocol FBMediaEncodingDelegate, OS_dispatch_queue;

@interface FBVideoToolboxEncoder : NSObject <FBMediaEncodingProtocol>
{
    FBVideoConfig *_config;
    NSDictionary *_sourcePixelBufferAttributes;
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_keyframeTimestamps;
    struct OpaqueVTCompressionSession *_compressionSession;
    id <FBMediaEncodingDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_invalidate;
@property(nonatomic) __weak id <FBMediaEncodingDelegate> delegate;
@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool;
- (_Bool)finishEncodingMedia:(id *)arg1;
- (_Bool)encodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (_Bool)_setProperty:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (_Bool)_prepareToEncodeMedia:(id *)arg1;
- (_Bool)prepareToEncodeMedia:(id *)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 sourcePixelBufferAttributes:(id)arg2 queue:(id)arg3 keyframeTimestamps:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

