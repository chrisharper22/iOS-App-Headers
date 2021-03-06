//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FB_RTCVideoCapturer.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureSession, AVCaptureVideoDataOutput, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface FB_RTCCameraVideoCapturer : FB_RTCVideoCapturer <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureVideoDataOutput *_videoDataOutput;
    AVCaptureSession *_captureSession;
    unsigned int _preferredOutputPixelFormat;
    unsigned int _outputPixelFormat;
    long long _rotation;
    long long _orientation;
    _Bool _hasRetriedOnFatalError;
    _Bool _isRunning;
    _Bool _willBeRunning;
    NSObject<OS_dispatch_queue> *_frameQueue;
    AVCaptureDevice *_currentDevice;
}

+ (id)supportedFormatsForDevice:(id)arg1;
+ (id)captureDevices;
- (void).cxx_destruct;
@property(nonatomic) _Bool willBeRunning; // @synthesize willBeRunning=_willBeRunning;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) _Bool hasRetriedOnFatalError; // @synthesize hasRetriedOnFatalError=_hasRetriedOnFatalError;
@property(retain, nonatomic) AVCaptureDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(readonly, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
- (void)updateOrientation;
- (void)reconfigureCaptureSessionInput;
- (void)updateDeviceCaptureFormat:(id)arg1 fps:(long long)arg2;
- (void)updateVideoDataOutputPixelFormat:(id)arg1;
- (void)setupVideoDataOutput;
- (_Bool)setupCaptureSession:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *frameQueue; // @synthesize frameQueue=_frameQueue;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)handleNonFatalError;
- (void)handleFatalError;
- (void)handleCaptureSessionDidStopRunning:(id)arg1;
- (void)handleCaptureSessionDidStartRunning:(id)arg1;
- (void)handleCaptureSessionRuntimeError:(id)arg1;
- (void)handleCaptureSessionInterruptionEnded:(id)arg1;
- (void)handleCaptureSessionInterruption:(id)arg1;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)stopCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startCaptureWithDevice:(id)arg1 format:(id)arg2 fps:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stopCapture;
- (void)startCaptureWithDevice:(id)arg1 format:(id)arg2 fps:(long long)arg3;
- (unsigned int)preferredOutputPixelFormat;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 captureSession:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

