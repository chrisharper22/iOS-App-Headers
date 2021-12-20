//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAudioSessionRouteDescription, FB_RTCAudioSession, NSError;

@protocol FB_RTCAudioSessionDelegate <NSObject>

@optional
- (void)audioSession:(FB_RTCAudioSession *)arg1 failedToSetActive:(_Bool)arg2 error:(NSError *)arg3;
- (void)audioSession:(FB_RTCAudioSession *)arg1 didSetActive:(_Bool)arg2;
- (void)audioSession:(FB_RTCAudioSession *)arg1 willSetActive:(_Bool)arg2;
- (void)audioSession:(FB_RTCAudioSession *)arg1 didDetectPlayoutGlitch:(long long)arg2;
- (void)audioSession:(FB_RTCAudioSession *)arg1 didChangeOutputVolume:(float)arg2;
- (void)audioSessionDidStopPlayOrRecord:(FB_RTCAudioSession *)arg1;
- (void)audioSessionDidStartPlayOrRecord:(FB_RTCAudioSession *)arg1;
- (void)audioSession:(FB_RTCAudioSession *)arg1 didChangeCanPlayOrRecord:(_Bool)arg2;
- (void)audioSessionMediaServerReset:(FB_RTCAudioSession *)arg1;
- (void)audioSessionMediaServerTerminated:(FB_RTCAudioSession *)arg1;
- (void)audioSessionDidChangeRoute:(FB_RTCAudioSession *)arg1 reason:(unsigned long long)arg2 previousRoute:(AVAudioSessionRouteDescription *)arg3;
- (void)audioSessionDidEndInterruption:(FB_RTCAudioSession *)arg1 shouldResumeSession:(_Bool)arg2;
- (void)audioSessionDidBeginInterruption:(FB_RTCAudioSession *)arg1;
@end
