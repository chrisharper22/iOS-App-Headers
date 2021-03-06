//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGRegistrationPhoneConfirmationViewController, NSString;

@protocol IGRegistrationPhoneConfirmationViewControllerDelegate <NSObject>
- (void)phoneConfirmationVCDidFocusTextField:(IGRegistrationPhoneConfirmationViewController *)arg1;
- (void)phoneConfirmationVCDidTapVettedPhoneLoginButton:(IGRegistrationPhoneConfirmationViewController *)arg1;
- (void)phoneConfirmationVCDidTapCreateAccountButton:(IGRegistrationPhoneConfirmationViewController *)arg1;
- (void)phoneConfirmationVCDidTapResend:(IGRegistrationPhoneConfirmationViewController *)arg1;
- (void)phoneConfirmationVCDidFailAdvance:(IGRegistrationPhoneConfirmationViewController *)arg1;
- (void)phoneConfirmationVCDidTapNextButton:(IGRegistrationPhoneConfirmationViewController *)arg1;
- (_Bool)phoneConfirmationVCIsSwitchingUsers;
- (void)didTapBackButton:(IGRegistrationPhoneConfirmationViewController *)arg1;
- (void)phoneConfirmationViewController:(IGRegistrationPhoneConfirmationViewController *)arg1 phoneNumber:(NSString *)arg2 isPhoneNumberTaken:(_Bool)arg3 didVerifyWithCode:(NSString *)arg4;
@end

