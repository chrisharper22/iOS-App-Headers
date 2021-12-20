//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBCapturePOIProcessingDelegate-Protocol.h>

@class NSDate;
@protocol FBCapturePOIProcessing, OS_dispatch_queue;

@interface FBCapturePOIDetector : NSObject <FBCapturePOIProcessingDelegate>
{
    CDUnknownBlockType _detectionBlock;
    id <FBCapturePOIProcessing> _processor;
    NSObject<OS_dispatch_queue> *_processQueue;
    _Bool _isProcessing;
    NSDate *_lastExecutionTime;
    struct CGRect _lastBounds;
    struct FBCapturePOIDetectorConfiguration _configuration;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct FBCapturePOIDetectorConfiguration configuration; // @synthesize configuration=_configuration;
- (void)processObject:(id)arg1;
- (void)detectPOIInSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(unsigned int)arg2 devicePosition:(long long)arg3;
- (_Bool)shouldProcessNextObject;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)configureWithCaptureSession:(id)arg1 detectionType:(long long)arg2 enableAfterDelay:(double)arg3;
- (id)initWithConfiguration:(const struct FBCapturePOIDetectorConfiguration *)arg1 detectionBlock:(CDUnknownBlockType)arg2;

@end

