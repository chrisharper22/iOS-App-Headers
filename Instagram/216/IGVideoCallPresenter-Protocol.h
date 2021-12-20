//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectThreadMetadata, IGDirectUIThread, IGRTCVideoCallCoWatchMediaInfo, IGRTCVideoCallJoinContext, IGRTCVideoCallJoinInfo, IGUserSession, IGVideoCallManager, IGVideoCallSession, IGVideoCallSourceIdentifier, NSArray, NSString;

@protocol IGVideoCallPresenter <NSObject>
- (_Bool)hasMaximizedVideoCallInUserSession:(IGUserSession *)arg1;
- (void)presentVideoCallWithJoinInfo:(IGRTCVideoCallJoinInfo *)arg1 joinContext:(IGRTCVideoCallJoinContext *)arg2 userSession:(IGUserSession *)arg3 videoCallManager:(IGVideoCallManager *)arg4 videoCallSourceIdentifier:(IGVideoCallSourceIdentifier *)arg5 trigger:(long long)arg6 fromFrame:(struct CGRect)arg7 threadName:(NSString *)arg8 threadUsers:(NSArray *)arg9 resumeCall:(_Bool)arg10;
- (void)presentVideoCallWithVideoCallSession:(IGVideoCallSession *)arg1 userSession:(IGUserSession *)arg2 videoCallManager:(IGVideoCallManager *)arg3 trigger:(long long)arg4 fromFrame:(struct CGRect)arg5 resumeCall:(_Bool)arg6;
- (void)presentVideoCallForThreadId:(NSString *)arg1 threadMetadata:(IGDirectThreadMetadata *)arg2 recentlyActiveUsers:(NSArray *)arg3 threadName:(NSString *)arg4 userSession:(IGUserSession *)arg5 trigger:(long long)arg6 fromFrame:(struct CGRect)arg7 resumeCall:(_Bool)arg8 isAudioCall:(_Bool)arg9 isE2eeMandated:(_Bool)arg10;
- (void)presentVideoCallForThreadId:(NSString *)arg1 thread:(IGDirectUIThread *)arg2 threadUsers:(NSArray *)arg3 threadDisplayName:(NSString *)arg4 userSession:(IGUserSession *)arg5 trigger:(long long)arg6 fromFrame:(struct CGRect)arg7 resumeCall:(_Bool)arg8 isAudioCall:(_Bool)arg9 initialCoWatchMedia:(IGRTCVideoCallCoWatchMediaInfo *)arg10 initialAREffectId:(NSString *)arg11 dialogWaterfallId:(NSString *)arg12 isE2eeMandated:(_Bool)arg13;
- (void)presentNativeRoomsCallForRoomURL:(NSString *)arg1 userSession:(IGUserSession *)arg2 videoCallManager:(IGVideoCallManager *)arg3 trigger:(long long)arg4 fromFrame:(struct CGRect)arg5 funnelSessionId:(NSString *)arg6 isE2eeMandated:(_Bool)arg7 resumeCall:(_Bool)arg8;
@end

