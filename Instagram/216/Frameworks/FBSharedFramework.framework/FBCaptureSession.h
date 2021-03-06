//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureSession, AVCaptureVideoPreviewLayer, NSArray, NSMutableDictionary, NSString;
@protocol FBCaptureSessionRuntimeErrorDelegate, FBCaptureSessionStateDelegate, OS_dispatch_queue;

@interface FBCaptureSession : NSObject
{
    AVCaptureSession *_captureSession;
    struct recursive_mutex _captureSessionLock;
    NSString *_sessionName;
    unsigned long long _retryCounter;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    NSMutableDictionary *_videoPreviewLayers;
    _Bool _captureSessionIsStopping;
    id <FBCaptureSessionStateDelegate> _stateDelegate;
    id <FBCaptureSessionRuntimeErrorDelegate> _runtimeErrorDelegate;
    NSObject<OS_dispatch_queue> *_restartSessionQueue;
}

+ (_Bool)isMultiCamSupported;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *restartSessionQueue; // @synthesize restartSessionQueue=_restartSessionQueue;
@property(nonatomic) __weak id <FBCaptureSessionRuntimeErrorDelegate> runtimeErrorDelegate; // @synthesize runtimeErrorDelegate=_runtimeErrorDelegate;
@property(nonatomic) __weak id <FBCaptureSessionStateDelegate> stateDelegate; // @synthesize stateDelegate=_stateDelegate;
- (void)_handleCaptureSessionRuntimeErrorNotification:(id)arg1;
- (void)_handleCaptureSessionRuntimeErrorNotificationSafe:(id)arg1;
- (void)_handleCaptureSessionDidResignInterruptedNotification:(id)arg1;
- (void)_handleCaptureSessionDidBecomeInterruptedNotification:(id)arg1;
- (void)_handleCaptureSessionNotification:(id)arg1;
- (void)_handleCaptureDidStopRunningNotification:(id)arg1;
- (void)_handleCaptureDidStartRunningNotification:(id)arg1;
- (void)_setupNotifications;
- (id)videoPreviewLayer;
- (id)videoPreviewLayerForCaptureDevice:(id)arg1;
- (_Bool)switchCaptureSession:(id)arg1 withRestartSessionQueue:(id)arg2 config:(struct FBCaptureSessionConfig)arg3;
- (_Bool)updateSessionPreset:(id)arg1;
- (void)updateCaptureSessionWithBlock:(CDUnknownBlockType)arg1;
- (void)restartSession;
- (void)stopSession;
- (void)pauseSession;
- (void)startSession;
- (void)_stopCaptureSession;
- (void)_startCaptureSession;
@property(nonatomic) _Bool automaticallyConfiguresCaptureDeviceForWideColor;
@property(readonly, copy, nonatomic) NSString *sessionPreset;
@property(readonly, nonatomic) struct OpaqueCMClock *clock;
@property(readonly, nonatomic, getter=isInterrupted) _Bool interrupted;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) unsigned long long mediaType;
- (void)removeConnections:(id)arg1;
- (void)removeOutputs:(id)arg1;
- (void)addOutputs:(id)arg1;
@property(readonly, nonatomic) _Bool isMulticamCaptureSession;
@property(readonly, copy, nonatomic) NSArray *outputs;
- (void)removeInputs:(id)arg1;
- (void)addInputs:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *inputs;
- (_Bool)connectVideoPreviewLayerConnection:(id)arg1;
- (_Bool)connectCaptureDeviceInput:(id)arg1 toVideoCaptureOutput:(id)arg2 videoCaptureConnection:(id)arg3 toPhotoCaptureOutput:(id)arg4 photoCaptureConnection:(id)arg5 previewLayerConnection:(id)arg6;
- (id)initWithSessionName:(id)arg1 withRestartSessionQueue:(id)arg2 config:(struct FBCaptureSessionConfig)arg3;
- (id)initWithSessionName:(id)arg1 withRestartSessionQueue:(id)arg2;

@end

