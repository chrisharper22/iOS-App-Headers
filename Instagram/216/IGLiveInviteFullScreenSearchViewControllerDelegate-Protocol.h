//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveInviteFullScreenSearchViewController, IGUser;

@protocol IGLiveInviteFullScreenSearchViewControllerDelegate <NSObject>
- (void)liveInviteFullScreenSearchViewControllerDidDismiss:(IGLiveInviteFullScreenSearchViewController *)arg1;
- (void)liveInviteFullScreenSearchViewController:(IGLiveInviteFullScreenSearchViewController *)arg1 didTapUser:(IGUser *)arg2;
- (void)liveInviteFullScreenSearchViewController:(IGLiveInviteFullScreenSearchViewController *)arg1 didLoadUsersWithCount:(unsigned long long)arg2;
@end

