//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveHeaderHostSheetViewController, IGUser;

@protocol IGLiveHeaderHostSheetViewControllerDelegate <NSObject>
- (void)hostSheetViewController:(IGLiveHeaderHostSheetViewController *)arg1 didRemoveModerator:(IGUser *)arg2;
- (void)hostSheetViewController:(IGLiveHeaderHostSheetViewController *)arg1 didAddModerator:(IGUser *)arg2;
- (void)hostSheetViewController:(IGLiveHeaderHostSheetViewController *)arg1 didTapActionButtonForGuest:(IGUser *)arg2 atState:(long long)arg3;
- (void)hostSheetViewControllerDidRequestInvite:(IGLiveHeaderHostSheetViewController *)arg1 forUser:(IGUser *)arg2;
- (void)hostSheetViewControllerDidRequestInvite:(IGLiveHeaderHostSheetViewController *)arg1;
@end

