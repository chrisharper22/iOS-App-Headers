//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAccountRecoveryTriageViewController, IGRecoverCodeVerificationContext;

@protocol IGAccountRecoveryTriageViewControllerDelegate <NSObject>
- (void)accountRecoveryTriageViewControllerDidTapBackToLogin:(IGAccountRecoveryTriageViewController *)arg1;
- (void)accountRecoveryTriageViewController:(IGAccountRecoveryTriageViewController *)arg1 didRequestRecoverCodeWithContext:(IGRecoverCodeVerificationContext *)arg2;
@end
