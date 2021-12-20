//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSDKAccessToken, IGFXLoginManager, IGLoginViewController, IGResetPasswordBundle, IGSSOTokenResult, IGTwoFactorInfo, NSDictionary, NSString;

@protocol IGLoginViewControllerDelegate <NSObject>
- (void)loginViewController:(IGLoginViewController *)arg1 proceedAccountPickerWithTokenResult:(IGSSOTokenResult *)arg2 loginManager:(IGFXLoginManager *)arg3;
- (void)loginViewController:(IGLoginViewController *)arg1 didTapOnLoginHelperButtonWithUsername:(NSString *)arg2;
- (void)loginViewControllerWantsToDismiss:(IGLoginViewController *)arg1;
- (void)loginViewController:(IGLoginViewController *)arg1 proceedTwoFactorWithInfo:(IGTwoFactorInfo *)arg2 facebookAccessToken:(FBSDKAccessToken *)arg3;
- (void)loginViewController:(IGLoginViewController *)arg1 resetPasswordWithBundle:(IGResetPasswordBundle *)arg2;
- (void)loginViewController:(IGLoginViewController *)arg1 proceedRegistrationWithFBInfo:(NSDictionary *)arg2 facebookAccessToken:(FBSDKAccessToken *)arg3 tosVersion:(NSString *)arg4;
- (void)loginViewController:(IGLoginViewController *)arg1 didTapSignUpButtonWithSkipLandingPage:(_Bool)arg2;
- (void)loginViewControllerDidTapGoBackButton:(IGLoginViewController *)arg1;
@end

