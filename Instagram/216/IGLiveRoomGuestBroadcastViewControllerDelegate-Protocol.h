//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveRoomGuestBroadcastViewController, IGLiveUserKey, NSError, NSString;

@protocol IGLiveRoomGuestBroadcastViewControllerDelegate <NSObject>
- (void)liveRoomGuestBroadcastViewControllerDidUpdateAREffects:(IGLiveRoomGuestBroadcastViewController *)arg1;
- (void)liveRoomGuestBroadcastViewController:(IGLiveRoomGuestBroadcastViewController *)arg1 didUpdateAREffectTouchSupportedStatus:(_Bool)arg2;
- (void)liveRoomGuestBroadcastViewController:(IGLiveRoomGuestBroadcastViewController *)arg1 showAREffectInstructions:(NSString *)arg2 forDuration:(double)arg3;
- (void)liveRoomGuestBroadcastViewControllerDidHideAREffectInstructions:(IGLiveRoomGuestBroadcastViewController *)arg1;
- (void)liveRoomGuestBroadcastViewControllerDidApplyAREffect:(IGLiveRoomGuestBroadcastViewController *)arg1;
- (void)liveRoomGuestBroadcastViewControllerAREffectDidBecomeAvailable:(IGLiveRoomGuestBroadcastViewController *)arg1;
- (void)liveRoomGuestBroadcastViewControllerDidTurnOffAREffect:(IGLiveRoomGuestBroadcastViewController *)arg1;
- (void)liveRoomGuestBroadcastViewControllerDidToggleAREffect:(IGLiveRoomGuestBroadcastViewController *)arg1;
- (void)liveRoomGuestBroadcastViewController:(IGLiveRoomGuestBroadcastViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)liveRoomGuestBroadcastViewControllerDidDismissFromCall:(IGLiveRoomGuestBroadcastViewController *)arg1 reason:(long long)arg2;
- (void)liveRoomGuestBroadcastViewControllerWillDismiss:(IGLiveRoomGuestBroadcastViewController *)arg1;
- (void)liveRoomGuestBroadcastViewControllerDidReceiveInvitation:(IGLiveRoomGuestBroadcastViewController *)arg1;
- (void)liveRoomGuestBroadcastViewController:(IGLiveRoomGuestBroadcastViewController *)arg1 didRemoveGuest:(IGLiveUserKey *)arg2;
- (void)liveRoomGuestBroadcastViewController:(IGLiveRoomGuestBroadcastViewController *)arg1 didJoinWithGuest:(IGLiveUserKey *)arg2;
- (void)liveRoomGuestBroadcastViewControllerDidJoinRoom:(IGLiveRoomGuestBroadcastViewController *)arg1;
@end

