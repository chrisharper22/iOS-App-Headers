//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRTCSessionDelegate-Protocol.h"

@class IGLiveBroadcastLogger, IGMwsRealtimeTopicHandlingService, IGRealtimeMqttClient, NSMutableDictionary, NSString;
@protocol IGAPIClient, IGRTCSessionIntf, IGRTCVideoCallSessionLogger, IGSubscriptionToken, IGUserLauncherSet, StallRecoveryAudioDeviceLoggingDelegate;

@interface IGRTCMultiParticipantLiveGuestBroadcastSession : NSObject <IGRTCSessionDelegate>
{
    id <IGRTCSessionIntf> _rtcSession;
    id <StallRecoveryAudioDeviceLoggingDelegate> _audioDeviceLogger;
    CDUnknownBlockType _updateBlock;
    NSMutableDictionary *_participants;
    NSMutableDictionary *_participantViews;
    struct CGSize _aspectRatio;
    NSString *_userPk;
    id <IGUserLauncherSet> _launcherSet;
    IGRealtimeMqttClient *_mqttClient;
    IGMwsRealtimeTopicHandlingService *_mwsRealtimeTopicHandlingService;
    id <IGAPIClient> _networker;
    id <IGRTCVideoCallSessionLogger> _callSessionLogger;
    IGLiveBroadcastLogger *_liveBroadcastLogger;
    id <IGSubscriptionToken> _muteStateSubscriptionToken;
}

- (void).cxx_destruct;
- (void)rtcSession:(id)arg1 didUpdateUserId:(id)arg2 fromState:(long long)arg3 toState:(long long)arg4 capabilities:(id)arg5;
- (void)rtcSession:(id)arg1 callEnded:(id)arg2 mqttConnected:(_Bool)arg3 tsLogString:(id)arg4;
- (void)rtcSessionWillDismiss:(id)arg1 joinCallResult:(id)arg2;
- (void)rtcSessionDidReconnect:(id)arg1;
- (void)rtcSessionDidDisconnect:(id)arg1;
- (void)rtcSessionDidConnect:(id)arg1 withSessionId:(id)arg2 serverInfoData:(id)arg3;
- (void)rtcSession:(id)arg1 didRemoveParticipantId:(id)arg2;
- (void)rtcSession:(id)arg1 didUpdateParticipant:(id)arg2;
- (void)rtcSession:(id)arg1 didAddParticipant:(id)arg2;
- (_Bool)isConnected;
- (void)onInterruptionEnded;
- (void)onInterruption;
- (void)processVideo:(struct opaqueCMSampleBuffer *)arg1;
- (id)viewForUserKey:(id)arg1;
- (void)leaveWithReason:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)joinWithBroadcastId:(id)arg1 encodedServerInfo:(id)arg2 muteStateSubscription:(id)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (id)initWithUserPk:(id)arg1 aspectRatio:(struct CGSize)arg2 liveBroadcastLogger:(id)arg3 mqttClient:(id)arg4 mwsRealtimeTopicHandlingService:(id)arg5 networker:(id)arg6 launcherSet:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

