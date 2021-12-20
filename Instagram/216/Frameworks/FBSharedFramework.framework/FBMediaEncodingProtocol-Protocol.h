//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@protocol FBMediaEncodingDelegate;

@protocol FBMediaEncodingProtocol <NSObject>
@property(nonatomic) __weak id <FBMediaEncodingDelegate> delegate;
@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool;
- (_Bool)finishEncodingMedia:(id *)arg1;
- (_Bool)encodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (_Bool)prepareToEncodeMedia:(id *)arg1;
@end
