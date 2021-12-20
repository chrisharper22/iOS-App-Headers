//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGLiveAddonConforming-Protocol.h"
#import "IGLiveBroadcastCaptureManagerDelegate-Protocol.h"
#import "IGLiveBroadcastVideoGeneratorDelegate-Protocol.h"

@class IGCameraViewController, IGLiveBroadcastCaptureManager, IGLiveBroadcastController, IGLiveBroadcastLogger, IGLiveBroadcastProductionManager, IGLiveBroadcastVideoGenerator, IGLiveDebugInfoVideoProcessor, IGUserSession, NSString;
@protocol IGLiveAddonCoordinating;

@interface IGLiveVideoStateManager : NSObject <IGLiveBroadcastCaptureManagerDelegate, IGLiveBroadcastVideoGeneratorDelegate, IGLiveAddonConforming>
{
    IGUserSession *_userSession;
    NSString *_analyticModule;
    NSString *_broadcastId;
    NSString *_viewMode;
    IGLiveBroadcastLogger *_logger;
    IGCameraViewController *_cameraViewController;
    IGLiveBroadcastCaptureManager *_captureManager;
    IGLiveBroadcastController *_broadcastController;
    _Bool _videoToggledOff;
    IGLiveBroadcastProductionManager *_productionManager;
    IGLiveDebugInfoVideoProcessor *_debugVideoProcessor;
    IGLiveBroadcastVideoGenerator *_videoGenerator;
    _Bool _disabled;
    _Bool _addonLifeCycleEventEnabled;
    id <IGLiveAddonCoordinating> _coordinator;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool addonLifeCycleEventEnabled; // @synthesize addonLifeCycleEventEnabled=_addonLifeCycleEventEnabled;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <IGLiveAddonCoordinating> coordinator; // @synthesize coordinator=_coordinator;
- (id)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)receiveEvent:(unsigned long long)arg1 from:(id)arg2 payload:(id)arg3;
- (void)captureManagerIsReadyToProcessNewAREffect:(id)arg1;
- (void)captureManagerDidEndInterruption:(id)arg1;
- (void)captureManagerWasInterrupted:(id)arg1;
- (void)captureManagerDidStartRunning:(id)arg1;
- (void)captureManagerDidChangeCamera:(id)arg1 toPosition:(long long)arg2;
- (void)captureManagerWillChangeCamera:(id)arg1;
- (void)captureManager:(id)arg1 activatingAudioSessionDidError:(id)arg2;
- (void)captureManager:(id)arg1 didCaptureVideoBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureManager:(id)arg1 didCaptureAudioBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)liveBroadcastVideoGeneratorDidStopGeneratingVideo:(id)arg1;
- (void)liveBroadcastVideoGeneratorFailedGenerateVideo:(id)arg1;
- (void)liveBroadcastVideoGenerator:(id)arg1 didGenerateSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)liveBroadcastVideoGeneratorDidStartGeneratingVideo:(id)arg1;
- (void)liveBroadcastVideoGeneratorWillStartGeneratingVideo:(id)arg1;
- (void)_toggleVideoOff:(_Bool)arg1;
- (id)broadcastController;
- (id)initWithUserSession:(id)arg1 analyticModule:(id)arg2 broadcastId:(id)arg3 initialVideoOff:(_Bool)arg4 viewMode:(id)arg5 captureManager:(id)arg6 broadcastController:(id)arg7 logger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
