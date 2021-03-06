//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol OS_dispatch_queue;

@interface MediaStreamingAppleVideoEncoder : NSObject
{
    struct OpaqueVTCompressionSession *_compressionSession;
    NSObject<OS_dispatch_queue> *_encodingQueue;
    struct unique_ptr<mediastreaming::VideoEncoderConfig, std::default_delete<mediastreaming::VideoEncoderConfig>> _config;
    int _dataProcessingMode;
    function_2a3b6814 _writeEncodedData;
    function_fe88d664 _fireError;
    struct WeakHolder *_weakHolder;
    _Bool _isInErrorState;
    struct atomic<bool> _isTearedDown;
    NSError *_encoderError;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setVideoConfig:(const void *)arg1;
- (void)_teardownCompressionSession;
- (void)vtCallBackWithStatus:(int)arg1 infoFlags:(unsigned int)arg2 buffer:(struct opaqueCMSampleBuffer *)arg3;
- (void)encodeVideo:(struct CMSampleBufferSmartPtr)arg1;
- (_Bool)createCompressionSession;
- (_Bool)setupCompressionSessionImpl;
- (_Bool)setupCompressionSession;
- (void)stopWithEncoderError;
- (void)raiseEncoderError:(int)arg1 description:(id)arg2 reason:(id)arg3;
- (void)performOnEncodingQueue:(CDUnknownBlockType)arg1;
- (void)performOnEncodingQueueSync:(CDUnknownBlockType)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithConfig:(const void *)arg1 dataProcessingMode:(const int *)arg2 encodingQueue:(id)arg3 writeDataCallback:(function_2a3b6814)arg4 errorCallback:(function_fe88d664)arg5;

@end

