//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGRegistrationEmailConfirmationViewController, NSString;

@protocol IGRegistrationEmailConfirmationViewControllerDelegate <NSObject>
- (void)emailConfirmationViewControllerDidTapErrorDialogCancelButton:(IGRegistrationEmailConfirmationViewController *)arg1 errorMessage:(NSString *)arg2;
- (void)emailConfirmationViewControllerDidTapRetryRegistrationDialogButton:(IGRegistrationEmailConfirmationViewController *)arg1 errorMessage:(NSString *)arg2;
- (void)emailConfirmationViewController:(IGRegistrationEmailConfirmationViewController *)arg1 confirmLinkDidSucceed:(_Bool)arg2 errorMessage:(NSString *)arg3;
- (void)emailConfirmationViewController:(IGRegistrationEmailConfirmationViewController *)arg1 didVerifyEmailAndReturnForceSignUpCode:(NSString *)arg2;
- (void)emailConfirmationViewController:(IGRegistrationEmailConfirmationViewController *)arg1 verificationCodeResentToEmail:(NSString *)arg2;
- (void)emailConfirmationViewControllerDidFailAdvance:(IGRegistrationEmailConfirmationViewController *)arg1;
- (void)emailConfirmationViewControllerDidTapResendButton:(IGRegistrationEmailConfirmationViewController *)arg1;
- (void)emailConfirmationViewControllerDidTapNextButton:(IGRegistrationEmailConfirmationViewController *)arg1;
- (void)emailConfirmationViewControllerDidTapBackButton:(IGRegistrationEmailConfirmationViewController *)arg1;
@end
