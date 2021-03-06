//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCallRemoteMessageHandlerDelegate-Protocol.h"
#import "IGRTCSessionIntf-Protocol.h"
#import "IGRTCSessionStateMachineDelegate-Protocol.h"
#import "IGRTCTrackStateManagerDataProvider-Protocol.h"
#import "IGRTCTrackStateManagerDelegate-Protocol.h"
#import "IGRTCVideoCallSignalingServiceDelegate-Protocol.h"
#import "IGRTCVideoCallSignalingServiceLoggingDelegate-Protocol.h"
#import "IGWebRTCAudioStallSentryDelegate-Protocol.h"
#import "IGWebRTCPeerConnectionControllerDelegate-Protocol.h"
#import "IGWebRTCPeerConnectionControllerPerfLoggingDelegate-Protocol.h"

@class FBTimer, IGAudioSessionClient, IGCallRemoteMessageHandler, IGMwsRealtimeTopicHandlingService, IGRTCCommonBatchedSessionHelper, IGRTCJoinInfo, IGRTCSessionConfiguration, IGRTCSessionStateMachine, IGRTCStatsWaterfallLoggingAdapter, IGRTCTrackStateManager, IGRTCVideoCallDebugOverlayManager, IGRTCVideoCallSignalingService, IGRTCVideoCallVideoConfigurationManager, IGRealtimeMqttClient, IGVideoCallRTCStatsManager, IGVideoCallTimeSeriesLogger, IGWebRTCAudioStallSentry, IGWebRTCPeerConnectionController, NSArray, NSMutableDictionary, NSString;
@protocol IGMwsRealtimeSubscriptionToken, IGRTCSessionDelegate, IGRTCStatsAnnouncer, IGRTCVideoCallSessionLogger, StallRecoveryAudioDeviceLoggingDelegate;

@interface IGRTCVideoCallSession : NSObject <IGRTCSessionStateMachineDelegate, IGCallRemoteMessageHandlerDelegate, IGRTCVideoCallSignalingServiceDelegate, IGRTCVideoCallSignalingServiceLoggingDelegate, IGWebRTCPeerConnectionControllerDelegate, IGRTCTrackStateManagerDelegate, IGRTCTrackStateManagerDataProvider, IGWebRTCAudioStallSentryDelegate, IGWebRTCPeerConnectionControllerPerfLoggingDelegate, IGRTCSessionIntf>
{
    NSString *_userPk;
    IGRealtimeMqttClient *_mqttClient;
    IGMwsRealtimeTopicHandlingService *_mwsRealtimeTopicHandlingService;
    id <IGMwsRealtimeSubscriptionToken> _subscriptionToken;
    IGRTCJoinInfo *_joinInfo;
    IGWebRTCPeerConnectionController *_peerConnectionController;
    IGRTCCommonBatchedSessionHelper *_batchedSessionHelper;
    IGRTCVideoCallSignalingService *_signalingService;
    IGCallRemoteMessageHandler *_remoteCallMessageHandler;
    IGRTCSessionStateMachine *_stateMachine;
    IGRTCVideoCallVideoConfigurationManager *_videoConfigurationManager;
    IGAudioSessionClient *_audioClient;
    id <IGRTCSessionDelegate> _delegate;
    IGRTCTrackStateManager *_trackStateManager;
    IGRTCVideoCallDebugOverlayManager *_debugOverlayManager;
    FBTimer *_fetchStatsTimer;
    NSMutableDictionary *_activeStreamIds;
    id <IGRTCStatsAnnouncer> _rtcStatsAnnouncer;
    IGRTCStatsWaterfallLoggingAdapter *_rtcStatsWaterfallLoggingAdapter;
    IGVideoCallTimeSeriesLogger *_tsLogger;
    IGVideoCallRTCStatsManager *_statsManager;
    IGWebRTCAudioStallSentry *_audioSentry;
    _Bool _notifiedFirstParticipantJoined;
    _Bool _isInitiatingCall;
    id <StallRecoveryAudioDeviceLoggingDelegate> _audioDeviceLogger;
    double _joinInitiatedTimestamp;
    IGRTCSessionConfiguration *_sessionConfiguration;
    id <IGRTCVideoCallSessionLogger> _callSessionLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGRTCVideoCallSessionLogger> callSessionLogger; // @synthesize callSessionLogger=_callSessionLogger;
- (void)signalingServiceReceivedJoinResult:(id)arg1 result:(_Bool)arg2 error:(id)arg3;
- (void)signalingServiceDidAttemptJoin:(id)arg1;
- (void)logSetLocalSdpEnd;
- (void)logSetLocalSdpBegin;
- (void)logSetRemoteSdpEnd;
- (void)logSetRemoteSdpBegin;
- (void)logOfferSdpCreateEndWithSuccess:(_Bool)arg1;
- (void)logOfferSdpCreateBegin;
- (void)audioStallSentry:(id)arg1 detectedAudioStallWithAudioBytes:(unsigned long long)arg2 afterInterval:(double)arg3;
- (id)trackStateManager:(id)arg1 trackInfoForTrackId:(id)arg2;
- (void)trackStateManager:(id)arg1 didUpdateStreamId:(id)arg2 oldStreamState:(id)arg3 newStreamState:(id)arg4;
- (void)sessionStateMachine:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3;
- (void)messageHandlerDidServerMediaUpdate:(id)arg1 versionNumber:(id)arg2 mediaUpdates:(id)arg3;
- (void)messageHandlerDidDismiss:(id)arg1 reason:(id)arg2 sessionId:(id)arg3 serverInfoData:(id)arg4;
- (void)messageHandler:(id)arg1 didStateTransitionForParticipant:(id)arg2 fromState:(long long)arg3 toState:(long long)arg4 capabilities:(id)arg5;
- (void)messageHandler:(id)arg1 didRingForSessionId:(id)arg2 serverInfoData:(id)arg3 transactionId:(id)arg4 withMessage:(id)arg5 conferenceType:(long long)arg6;
- (void)messageHandler:(id)arg1 didReceiveServerInfoData:(id)arg2;
- (void)signalingService:(id)arg1 didUpdateSessionId:(id)arg2 serverInfoData:(id)arg3;
- (void)peerConnectionController:(id)arg1 didEndWithError:(id)arg2;
- (void)peerConnectionControllerDidDisconnect:(id)arg1;
- (void)peerConnectionControllerDidConnect:(id)arg1;
- (void)peerConnectionController:(id)arg1 didStallVideoForStreamId:(id)arg2;
- (void)peerConnectionController:(id)arg1 didResumeVideoForStreamId:(id)arg2;
- (void)peerConnectionController:(id)arg1 didRemoveStreamId:(id)arg2;
- (void)peerConnectionController:(id)arg1 didRemoveVideoViewForStreamId:(id)arg2;
- (void)peerConnectionController:(id)arg1 didAddVideoInView:(id)arg2 streamId:(id)arg3;
- (void)peerConnectionController:(id)arg1 didAddStreamId:(id)arg2;
- (void)_reachabilityDidChange:(id)arg1;
- (void)_applicationWasBackgrounded:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_audioSessionInterruption:(id)arg1;
- (id)_serverInfoData;
- (id)_sessionId;
- (void)_handleDismissMessage:(id)arg1;
- (id)_createRTCStatsTimerWithInterval:(double)arg1;
- (_Bool)isValidStreamId:(id)arg1;
- (void)_updateObservedStallTime;
- (void)_closePeerConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchStreamStats;
- (void)_checkParticipantVideoState;
- (void)_logVideoShouldStartForStreamId:(id)arg1;
- (void)_logParticipantStatusUpdate;
- (void)_detachMwsMessageHandlerWithSessionId:(id)arg1;
- (void)_attachMwsMessageHandlerWithSessionId:(id)arg1;
- (void)_endCallAndCleanup:(CDUnknownBlockType)arg1;
- (void)_setupConnectionWithOptions:(unsigned long long)arg1 productInfo:(id)arg2 startedHandler:(CDUnknownBlockType)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)_restartSessionWithOptions:(unsigned long long)arg1;
- (void)callKitDidDeactivateAudioSession:(id)arg1;
- (void)callKitDidActivateAudioSession:(id)arg1;
- (void)handleDismissSignalFromSource:(long long)arg1;
- (void)endSessionImmediatelyAndLeave:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *currentParticipantInfos;
- (void)removeRTCStatsListener:(id)arg1;
- (void)addRTCStatsListener:(id)arg1 withMaximumInterval:(double)arg2;
- (void)setCameraView:(id)arg1;
@property(readonly, nonatomic) _Bool hasLeftSession;
- (_Bool)isConnected;
- (void)onInterruptionEnded;
- (void)onInterruption;
- (void)setAudioDeviceEnabled:(_Bool)arg1;
- (_Bool)audioDeviceEnabled;
@property(nonatomic) _Bool videoEnabled;
@property(nonatomic) _Bool audioEnabled;
- (void)leaveWithReason:(long long)arg1 productInfo:(CDStruct_ba60184c)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)processAudio:(struct opaqueCMSampleBuffer *)arg1;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cropRect:(struct CGRect)arg2 scaleSize:(struct CGSize)arg3;
- (void)processVideo:(struct opaqueCMSampleBuffer *)arg1;
- (void)joinCall:(id)arg1 configuration:(id)arg2 productInfo:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithUserPk:(id)arg1 sessionConfiguration:(id)arg2 joinResponseParser:(CDUnknownBlockType)arg3 mqttClient:(id)arg4 mwsRealtimeTopicHandlingService:(id)arg5 networker:(id)arg6 callSessionLogger:(id)arg7 delegate:(id)arg8 audioDeviceLogger:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

