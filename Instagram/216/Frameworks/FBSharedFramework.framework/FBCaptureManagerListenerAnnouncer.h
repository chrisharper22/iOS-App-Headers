//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBAnnouncerBase.h>

#import <FBSharedFramework/FBCaptureManagerListener-Protocol.h>

@class NSString;

@interface FBCaptureManagerListenerAnnouncer : FBAnnouncerBase <FBCaptureManagerListener>
{
}

- (void)captureManagerDidStopRunningSessionType:(unsigned long long)arg1;
- (void)captureManagerWillStopCaptureSessionType:(unsigned long long)arg1;
- (void)captureManagerDidStartRunningSessionType:(unsigned long long)arg1;
- (void)captureManagerWillStartRunningSessionType:(unsigned long long)arg1;
- (void)captureManagerDidEncounterRuntimeError:(id)arg1 willRetry:(_Bool)arg2 sessionType:(unsigned long long)arg3;
- (void)captureManagerDidResignInterruptedSessionType:(unsigned long long)arg1;
- (void)captureManagerDidBecomeInterruptedWithReason:(unsigned char)arg1 sessionType:(unsigned long long)arg2;
- (void)captureManagerUpdatedPreviousCaptureDevice:(id)arg1 toCurrentCaptureDevice:(id)arg2;
- (void)captureManagerHasEndedCaptureSession;
- (void)captureManagerDidReceiveFirstVideoFrameFromCaptureSessionAtTime:(double)arg1;
- (void)captureManagerHasFinishedLoadingCaptureSession;
- (void)captureManagerDidFailToLoadAudioSessionWithError:(id)arg1;
- (void)captureManagerHasFinishedLoadingAudioSession;
- (void)captureManagerPreviewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

