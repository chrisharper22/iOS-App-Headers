//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSNumber, NSString;
@protocol FBVideoBroadcastSession, FBVideoBroadcastSessionResult;

@protocol FBVideoBroadcastSessionDelegate <NSObject>
- (void)broadcastSession:(id <FBVideoBroadcastSession>)arg1 didUpdateFlowState:(long long)arg2;
- (void)broadcastSession:(id <FBVideoBroadcastSession>)arg1 didUpdateStreamingInfo:(struct Info)arg2;
- (void)broadcastSession:(id <FBVideoBroadcastSession>)arg1 completedSpeedTestWithStatus:(struct FBNetworkSpeedTestStatus)arg2;
- (void)broadcastSessionDidProcessAudio:(id <FBVideoBroadcastSession>)arg1;
- (void)broadcastSession:(id <FBVideoBroadcastSession>)arg1 didChangeBaseTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)broadcastSession:(id <FBVideoBroadcastSession>)arg1 setAccumulatedStreamGapSeconds:(NSNumber *)arg2;
- (void)broadcastSession:(id <FBVideoBroadcastSession>)arg1 didDropFrameWithType:(NSString *)arg2 pts:(CDStruct_1b6d18a9)arg3 dropReason:(NSString *)arg4;
- (void)broadcastSession:(id <FBVideoBroadcastSession>)arg1 didDropPackets:(shared_ptr_95a834d4)arg2 dropReason:(NSString *)arg3;
- (void)broadcastSessionSendDidTimeout:(id <FBVideoBroadcastSession>)arg1;
- (void)broadcastSessionDidLoseConnection:(id <FBVideoBroadcastSession>)arg1 error:(NSError *)arg2;
- (void)broadcastSessionDidFail:(id <FBVideoBroadcastSession>)arg1 withLoggingInfo:(struct FBVideoBroadcastSessionLoggingInfo)arg2;
- (void)broadcastSessionDidDisconnectNetwork:(id <FBVideoBroadcastSession>)arg1 withEndOfStreamError:(NSError *)arg2;
- (void)broadcastSessionDidFinishRecording:(id <FBVideoBroadcastSession>)arg1 withResult:(id <FBVideoBroadcastSessionResult>)arg2;
- (void)broadcastSessionDidConnect:(id <FBVideoBroadcastSession>)arg1 withSpeedTestStatus:(struct FBNetworkSpeedTestStatus)arg2;
@end

