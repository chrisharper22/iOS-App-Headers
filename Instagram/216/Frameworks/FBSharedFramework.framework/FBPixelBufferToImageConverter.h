//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext;
@protocol OS_dispatch_queue;

@interface FBPixelBufferToImageConverter : NSObject
{
    NSObject<OS_dispatch_queue> *_coreImageConversionQueue;
    CIContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CIContext *context; // @synthesize context=_context;
- (void)convertPixelBuffer:(struct __CVBuffer *)arg1 toImageWithOrientation:(long long)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

