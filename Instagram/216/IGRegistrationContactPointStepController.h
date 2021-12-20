//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRegistrationContactPointViewControllerDelegate-Protocol.h"
#import "IGRegistrationStepControllerProtocol-Protocol.h"

@class IGRegistrationContactPointViewController, IGRegistrationFlowContext, IGRegistrationSecondaryAccountRegistrar, NSString;
@protocol IGRegistrationCoordinatorProtocol;

@interface IGRegistrationContactPointStepController : NSObject <IGRegistrationContactPointViewControllerDelegate, IGRegistrationStepControllerProtocol>
{
    IGRegistrationContactPointViewController *_viewController;
    IGRegistrationFlowContext *_context;
    IGRegistrationSecondaryAccountRegistrar *_sacRegistrar;
    long long _continueWithFBAction;
    id <IGRegistrationCoordinatorProtocol> coordinator;
}

+ (_Bool)isValidForContext:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRegistrationCoordinatorProtocol> coordinator; // @synthesize coordinator;
- (_Bool)_showContinueWithFacebookButton;
- (long long)_flowTypeForEmailRegistration;
- (void)_updateContextIfMainAccountWithIsGDPRRequired:(_Bool)arg1 isAgeRequired:(_Bool)arg2 tosVersion:(id)arg3;
- (void)_logEventWithName:(id)arg1 extras:(id)arg2;
- (id)_title;
- (_Bool)_isAccountLinkingFlow;
- (id)_sacRegistrar;
- (void)registrationContactPointViewController:(id)arg1 resetPasswordWithBundle:(id)arg2;
- (void)registrationContactPointViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)registrationContactPointViewController:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 tosVersion:(id)arg4;
- (void)registrationContactPointViewControllerDidTapFacebookButton:(id)arg1;
- (void)registrationContactPointViewControllerDidSwitchToPhone:(id)arg1;
- (void)registrationContactPointViewControllerDidSwitchToEmail:(id)arg1;
- (id)registrationContactPointViewController:(id)arg1 convertEmailLinkContext:(id)arg2 regWithSharedEmail:(_Bool)arg3;
- (void)registrationContactPointViewControllerDidTapCreateForEmailTakenDialog:(id)arg1;
- (void)registrationContactPointViewControllerDidTapLogInForEmailTakenDialog:(id)arg1 enteredEmail:(id)arg2;
- (void)registrationContactPointViewControllerDidShowEmailTakenDialog:(id)arg1;
- (void)registrationContactPointViewControllerDidTapNOForSuggestedContactDialog:(id)arg1;
- (void)registrationContactPointViewControllerDidTapYesForSuggestedContactDialog:(id)arg1;
- (void)registrationContactPointViewControllerDidShowSuggestedContactDialog:(id)arg1;
- (void)registrationContactPointViewControllerDidFailEmailValidation:(id)arg1;
- (void)registrationContactPointViewControllerDidFailToAdvance:(id)arg1 reason:(id)arg2;
- (void)registrationContactPointViewController:(id)arg1 updateIsGDPRRequired:(_Bool)arg2 ageRequired:(_Bool)arg3 tosVersion:(id)arg4;
- (void)registrationContactPointViewController:(id)arg1 forceSignUpCode:(id)arg2 sentToEmail:(id)arg3 regWithSharedEmail:(_Bool)arg4;
- (void)registrationContactPointViewController:(id)arg1 SMSSentWithPhoneNumber:(id)arg2 smsConsent:(_Bool)arg3 smsVerificationCode:(id)arg4 isPhoneNumberTaken:(_Bool)arg5 wasLoginUpsellShown:(_Bool)arg6 isGDPRRequired:(_Bool)arg7 ageRequired:(_Bool)arg8 tosVersion:(id)arg9;
- (void)registrationContactPointViewControllerDidTapVettedPhoneLoginButton:(id)arg1;
- (void)registrationContactPointViewControllerDidLoginButton:(id)arg1;
- (void)registrationContactPointViewControllerDidCountryCodeButton:(id)arg1;
- (void)registrationContactPointViewController:(id)arg1 logPrefillPhoneAccepted:(_Bool)arg2;
- (void)registrationContactPointViewController:(id)arg1 logPrefillEmailAccepted:(_Bool)arg2;
- (void)registrationContactPointViewController:(id)arg1 didTapNextButtonWithEmail:(id)arg2;
- (void)registrationContactPointViewController:(id)arg1 didSelectEmailDomain:(id)arg2;
- (void)registrationContactPointViewController:(id)arg1 didTapContinueCreateAccountButtonWithType:(long long)arg2 allowSharedEmailRegistration:(_Bool)arg3;
- (void)registrationContactPointViewController:(id)arg1 didTapAutoLoginButtonWithType:(long long)arg2 allowSharedEmailRegistration:(_Bool)arg3;
- (void)registrationContactPointViewController:(id)arg1 didShowAutoLoginableAccountDialogWithType:(long long)arg2 allowSharedEmailRegistration:(_Bool)arg3;
- (void)registrationContactPointViewController:(id)arg1 didTapNextButtonWithPhoneNumber:(id)arg2;
- (void)registrationContactPointViewControllerDidTapDismissButton:(id)arg1;
- (void)registrationContactPointViewControllerDidTapBackButton:(id)arg1;
- (id)stepName;
- (id)viewController;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
