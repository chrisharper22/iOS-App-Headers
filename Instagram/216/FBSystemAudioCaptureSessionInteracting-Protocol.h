//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol FBSystemAudioCaptureSessionInteractingDelegate;

@protocol FBSystemAudioCaptureSessionInteracting <NSObject>
@property(readonly, nonatomic) _Bool isAudioSessionActive;
@property(nonatomic) __weak id <FBSystemAudioCaptureSessionInteractingDelegate> delegate;
- (void)setShouldEnableStereoCapture:(_Bool)arg1;
- (void)setAudioSessionOrientation:(NSString *)arg1;
- (_Bool)isStereoCaptureEnabled;
- (NSArray *)currentOutputPorts;
- (void)updateAVAudioSessionWithCategory:(NSString *)arg1 mode:(NSString *)arg2 options:(unsigned long long)arg3 completion:(void (^)(_Bool))arg4;
- (_Bool)hasRTCClient;
- (void)deactivateAudioSession;
- (void)activateAudioSessionCompletion:(void (^)(_Bool))arg1;
@end
