//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTwoFactorConnectedDevicesViewController, IGTwoFactorSetupFlowContext;

@protocol IGTwoFactorConnectedDevicesViewControllerDelegate <NSObject>
- (void)connectedDevicesViewController:(IGTwoFactorConnectedDevicesViewController *)arg1 didUpdateSetupFlowContext:(IGTwoFactorSetupFlowContext *)arg2;
- (void)connectedDevicesViewControllerDidDisableAuthApp:(IGTwoFactorConnectedDevicesViewController *)arg1;
@end
