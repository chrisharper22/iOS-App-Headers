//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC19IGNftDigitalWallets33IGNftDigitalWalletsViewController.h"

@interface _TtC19IGNftDigitalWallets33IGNftDigitalWalletsViewController (IGNftDigitalWallets)
- (void)userDidRejectWalletVerificationWithWalletAddress:(id)arg1 provider:(id)arg2 blockchain:(id)arg3;
- (void)didBeginVerifyingWalletWithTitle:(id)arg1;
- (void)didFailToVerifyWallet;
- (void)didFailToConnectWallet;
- (void)didVerifyWalletWithId:(id)arg1 signature:(id)arg2 walletAddress:(id)arg3 provider:(id)arg4 blockchain:(id)arg5;
- (void)didDisconnectSession;
- (void)didLoseConnectionToWallet;
- (void)didConnectWithWalletAddress:(id)arg1 provider:(id)arg2 blockchain:(id)arg3;
- (void)didBeginConnectingToExternalWalletWithTitle:(id)arg1;
@end

