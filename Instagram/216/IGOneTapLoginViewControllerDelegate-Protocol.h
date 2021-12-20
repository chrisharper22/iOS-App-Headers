//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSDKAccessToken, IGLoginAccount, IGResetPasswordBundle, IGTwoFactorInfo, NSDictionary, NSString;
@protocol IGOneTapLoginViewControllerProtocol;

@protocol IGOneTapLoginViewControllerDelegate <NSObject>
- (void)oneTapLoginViewController:(id <IGOneTapLoginViewControllerProtocol>)arg1 didTriggerPasswordLoginForAccount:(IGLoginAccount *)arg2 showFacebookButton:(_Bool)arg3;
- (void)oneTapLoginViewController:(id <IGOneTapLoginViewControllerProtocol>)arg1 didTriggerAccountRecoveryForUsername:(NSString *)arg2;
- (void)oneTapLoginViewController:(id <IGOneTapLoginViewControllerProtocol>)arg1 proceedTwoFactorWithInfo:(IGTwoFactorInfo *)arg2 facebookAccessToken:(FBSDKAccessToken *)arg3;
- (void)oneTapLoginViewController:(id <IGOneTapLoginViewControllerProtocol>)arg1 resetPasswordWithBundle:(IGResetPasswordBundle *)arg2;
- (void)oneTapLoginViewController:(id <IGOneTapLoginViewControllerProtocol>)arg1 willProceedRegistrationWithFBInfo:(NSDictionary *)arg2 facebookAccessToken:(FBSDKAccessToken *)arg3 tosVersion:(NSString *)arg4;
- (void)oneTapLoginViewControllerProceedTwoFactorWithInfo:(IGTwoFactorInfo *)arg1 facebookAccessToken:(FBSDKAccessToken *)arg2;
- (void)oneTapLoginViewControllerResetPasswordWithBundle:(IGResetPasswordBundle *)arg1;
- (void)oneTapLoginViewControllerDidTapSignUpButton:(id <IGOneTapLoginViewControllerProtocol>)arg1;
- (void)oneTapLoginViewControllerDidTapSwitchAccountButton:(id <IGOneTapLoginViewControllerProtocol>)arg1 withBackButton:(_Bool)arg2;
- (void)oneTapLoginViewControllerWantsToDismiss:(id <IGOneTapLoginViewControllerProtocol>)arg1;
@end
