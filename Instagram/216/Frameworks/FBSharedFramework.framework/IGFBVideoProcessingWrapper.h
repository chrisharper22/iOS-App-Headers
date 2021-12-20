//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBVideoProcessing-Protocol.h>

@class NSString;
@protocol FBVideoProcessing;

@interface IGFBVideoProcessingWrapper : NSObject <FBVideoProcessing>
{
    id <FBVideoProcessing> _videoProcessor;
}

- (void).cxx_destruct;
- (id)latestProcessingSoftException;
- (struct __CVBuffer *)createPixelBuffer:(struct opaqueCMSampleBuffer *)arg1 withPixelBufferPool:(struct __CVPixelBufferPool *)arg2 error:(id *)arg3;
- (id)initWithVideoProcessor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
