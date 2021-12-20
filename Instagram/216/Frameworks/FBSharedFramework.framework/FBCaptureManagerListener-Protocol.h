//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class FBCaptureDevice, NSError;

@protocol FBCaptureManagerListener <NSObject>
- (void)captureManagerDidStopRunningSessionType:(unsigned long long)arg1;
- (void)captureManagerWillStopCaptureSessionType:(unsigned long long)arg1;
- (void)captureManagerDidStartRunningSessionType:(unsigned long long)arg1;
- (void)captureManagerWillStartRunningSessionType:(unsigned long long)arg1;
- (void)captureManagerDidEncounterRuntimeError:(NSError *)arg1 willRetry:(_Bool)arg2 sessionType:(unsigned long long)arg3;
- (void)captureManagerDidResignInterruptedSessionType:(unsigned long long)arg1;
- (void)captureManagerDidBecomeInterruptedWithReason:(unsigned char)arg1 sessionType:(unsigned long long)arg2;
- (void)captureManagerUpdatedPreviousCaptureDevice:(FBCaptureDevice *)arg1 toCurrentCaptureDevice:(FBCaptureDevice *)arg2;
- (void)captureManagerHasEndedCaptureSession;
- (void)captureManagerDidReceiveFirstVideoFrameFromCaptureSessionAtTime:(double)arg1;
- (void)captureManagerHasFinishedLoadingCaptureSession;
- (void)captureManagerDidFailToLoadAudioSessionWithError:(NSError *)arg1;
- (void)captureManagerHasFinishedLoadingAudioSession;
- (void)captureManagerPreviewDidLoad;
@end

