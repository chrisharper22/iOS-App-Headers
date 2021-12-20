//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSDKAccessToken, IGRegistrationFlowCoordinator, IGResetPasswordBundle, IGTwoFactorInfo, NSString;

@protocol IGRegistrationFlowCoordinatorDelegate <NSObject>
- (void)registrationCoordinator:(IGRegistrationFlowCoordinator *)arg1 resetPasswordWithBundle:(IGResetPasswordBundle *)arg2;
- (void)registrationCoordinator:(IGRegistrationFlowCoordinator *)arg1 proceedTwoFactorWithInfo:(IGTwoFactorInfo *)arg2 facebookAccessToken:(FBSDKAccessToken *)arg3;
- (void)registrationCoordinator:(IGRegistrationFlowCoordinator *)arg1 didRequestLoginWithUsername:(NSString *)arg2 password:(NSString *)arg3;
- (void)registrationCoordinatorDidAttemptUnderageSignUp:(IGRegistrationFlowCoordinator *)arg1;
- (void)registrationCoordinatorDidGetBlockedByGDPR:(IGRegistrationFlowCoordinator *)arg1;
- (void)registrationCoordinatorDidContinueAsProfessional:(IGRegistrationFlowCoordinator *)arg1;
- (void)registrationCoordinatorDidContinueAsPersonal:(IGRegistrationFlowCoordinator *)arg1;
- (void)registrationCoordinatorDidBackOutRegistrationFlow:(IGRegistrationFlowCoordinator *)arg1;
- (void)registrationCoordinatorDidQuitRegistrationFlow:(IGRegistrationFlowCoordinator *)arg1;
@end

