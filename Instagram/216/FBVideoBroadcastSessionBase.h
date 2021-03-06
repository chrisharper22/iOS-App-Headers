//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBVideoBroadcastSession-Protocol.h"

@class FBVideoBroadcastSessionTimingDataModel, NSSet, NSString;
@protocol FBVideoBroadcastSessionConnectionSetupDelegate, FBVideoBroadcastSessionDelegate;

@interface FBVideoBroadcastSessionBase : NSObject <FBVideoBroadcastSession>
{
    struct shared_ptr<FB::Functional::PromiseEither<NSError *, FBDiskVideoRecorderDiskResults *>> _dvrFinishRecordingPromise;
    struct atomic<FBVideoBroadcastSessionReadyState> _readyState;
    long long _preInterruptionReadyState;
    struct atomic<int> _connectedToServer;
    struct atomic<int> _reportedFinishedResult;
    struct atomic<CMTime> _lastAudioSampleBufferPts;
    struct atomic<CMTime> _lastVideoSampleBufferPts;
    struct FBVideoBroadcastSessionTimestampConfig _timestampConfig;
    FBVideoBroadcastSessionTimingDataModel *_timingDataModel;
    struct FBVideoBroadcastStreamTimestampGapDetector _gapDetector;
    CDStruct_1b6d18a9 _baseTimestampAdjustment;
    id <FBVideoBroadcastSessionDelegate> delegate;
    id <FBVideoBroadcastSessionConnectionSetupDelegate> connectionSetupDelegate;
}

+ (CDStruct_1b6d18a9)convertDeviceTimestamp:(CDStruct_1b6d18a9)arg1 toStreamTimestampWithBaseTimestamp:(CDStruct_1b6d18a9)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property __weak id <FBVideoBroadcastSessionConnectionSetupDelegate> connectionSetupDelegate; // @synthesize connectionSetupDelegate;
@property __weak id <FBVideoBroadcastSessionDelegate> delegate; // @synthesize delegate;
- (PromiseEither_b6de66b0)_finishDiskRecording:(id)arg1;
- (struct CMSampleBufferSmartPtr)_adjustSampleBufferTimestamps:(struct opaqueCMSampleBuffer *)arg1 isAudio:(_Bool)arg2;
- (void)switchToRTMPWithTimeout:(unsigned long long)arg1;
- (CDStruct_1b6d18a9)lastRecordedAudioTimestamp;
- (CDStruct_1b6d18a9)convertDeviceTimestampToStreamTimestamp:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)lastVideoSampleBufferPts;
- (CDStruct_1b6d18a9)lastAudioSampleBufferPts;
- (CDStruct_1b6d18a9)baseTimestamp;
- (void)setBaseTimestamp:(CDStruct_1b6d18a9)arg1;
- (Class)videoEncoderClass;
- (struct FBVideoBroadcastSessionStats)stats;
- (void)setDiskRecorder:(id)arg1;
- (_Bool)supportOfflineStreaming;
- (_Bool)hasSentMediaDataToServer;
- (_Bool)isConnectedToServer;
- (long long)readyState;
- (void)swapVideoWidthAndHeightAfterOrientationChange;
- (void)removeForceDisableGuestInviteReason:(unsigned long long)arg1;
- (void)addForceDisableGuestInviteReason:(unsigned long long)arg1;
- (long long)maxNumberOfParticipants;
- (_Bool)isBroadcastFull;
- (_Bool)hostRequiresUpgradeForCompatibleStack;
- (_Bool)hostIsOmnigrid;
- (_Bool)isInvitable:(id)arg1 eligibility:(id)arg2 byBroadcasterID:(id)arg3;
- (_Bool)isInvitable:(id)arg1 byBroadcasterID:(id)arg2;
- (void)declineInvitation;
- (void)leave;
- (void)join;
- (void)cancelInvitationForGuest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeGuest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startCall;
- (void)addUsers:(id)arg1 withLayout:(unsigned long long)arg2;
- (void)ringUsers:(id)arg1 withLayout:(unsigned long long)arg2;
- (void)processEventMessage:(unsigned long long)arg1 duration:(CDStruct_1b6d18a9)arg2 delay:(CDStruct_1b6d18a9)arg3 payload:(id)arg4;
- (void)processEventMessage:(unsigned long long)arg1 duration:(CDStruct_1b6d18a9)arg2 payload:(id)arg3;
- (void)processEventMessage:(unsigned long long)arg1 payload:(id)arg2;
- (void)processVideo:(struct opaqueCMSampleBuffer *)arg1;
- (void)processAudio:(struct opaqueCMSampleBuffer *)arg1;
- (void)resumeAndUpload:(_Bool)arg1;
- (void)pause:(_Bool)arg1;
- (void)onInterruptionEnded;
- (void)onInterruptionForReasonBackground:(_Bool)arg1;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (void)stop:(_Bool)arg1;
- (void)_returnSessionResultWithLoggingInfo:(struct FBVideoBroadcastSessionLoggingInfo)arg1;
- (void)updateRtmpConfig:(CDStruct_b3f291cd)arg1;
- (void)finallyFetchedBroadcastID:(id)arg1 withRTCSessionConfig:(CDStruct_49b515e3)arg2 rtmpConfig:(CDStruct_b3f291cd)arg3 rtmpMessageChannel:(id)arg4;
- (void)connectAndImmediatelyAllowStreaming:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSSet *currentOrInvitedGuests;
- (id)initWithBaseParams:(struct FBVideoBroadcastBaseSessionParameters)arg1;
- (void)broadcastSessionDidConnectWithSpeedTestStatus:(struct FBNetworkSpeedTestStatus)arg1;
- (void)broadcastSessionDidFail:(struct FBVideoBroadcastSessionLoggingInfo)arg1;
- (void)broadcastSessionDidLoseConnection:(id)arg1;
- (void)broadcastSessionDidDisconnectNetwork:(id)arg1 withEndOfStreamError:(id)arg2;
- (void)broadcastSessionDidFinishRecording:(id)arg1 loggingInfo:(struct FBVideoBroadcastSessionLoggingInfo)arg2;
- (struct DiskVideoRecorderConfig)diskVideoRecorderConfig;
- (id)diskRecorder;
- (id)newDiskRecorder;
- (struct CMSampleBufferSmartPtr)processVideoForDiskRecordingAndTimestampAdjustment:(struct opaqueCMSampleBuffer *)arg1;
- (struct CMSampleBufferSmartPtr)processAudioForDiskRecordingAndTimestampAdjustment:(struct opaqueCMSampleBuffer *)arg1;
- (void)readyToStream;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

