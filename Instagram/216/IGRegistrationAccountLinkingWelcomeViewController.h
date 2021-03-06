//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGParentalConsentCoordinatorDelegate-Protocol.h"
#import "IGRegistrationAccountLinkingWelcomeViewDelegate-Protocol.h"

@class IGNUXLayoutSpec, IGParentalConsentCoordinator, IGRegistrationAccountLinkingSignUpContext, IGRegistrationAccountLinkingWelcomeView, IGRegistrationSecondaryAccountRegistrar, IGUser, IGUserSession, NSDate, NSString;
@protocol IGAPIClient, IGRegistrationAccountLinkingWelcomeViewControllerDelegate;

@interface IGRegistrationAccountLinkingWelcomeViewController : IGViewController <IGParentalConsentCoordinatorDelegate, IGRegistrationAccountLinkingWelcomeViewDelegate>
{
    IGNUXLayoutSpec *_layoutSpec;
    IGRegistrationAccountLinkingWelcomeView *_view;
    IGRegistrationAccountLinkingSignUpContext *_signUpContext;
    IGUser *_actorAccount;
    IGUserSession *_userSession;
    NSString *_newAccountUsername;
    NSDate *_newAccountDob;
    _Bool _parentalConsentRequired;
    _Bool _showCheckmarkHeaderImage;
    IGParentalConsentCoordinator *_parentalConsentCoordinator;
    id <IGAPIClient> _networker;
    NSString *_tosVersion;
    IGRegistrationSecondaryAccountRegistrar *_registrar;
    id <IGRegistrationAccountLinkingWelcomeViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)parentalCoordinatorDidComplete:(id)arg1;
- (id)_checkmarkHeaderImageView;
- (void)_startParentalConsentFlowWithUserSession:(id)arg1;
- (void)_tryToRegisterAccount;
- (id)_specialTOSTextForContactPointSignUp;
- (id)_tosText;
- (id)_showContactPointsStringForSimpleSACEmail:(id)arg1 phoneNumber:(id)arg2 username:(id)arg3;
- (id)_defaultStringForSimpleSACEmail:(id)arg1 phoneNumber:(id)arg2 username:(id)arg3;
- (id)_descriptionString;
- (_Bool)_canEnterContactPoint;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)registrationAccountLinkingWelcomeViewDidTapContactPointButton:(id)arg1;
- (void)registrationAccountLinkingWelcomeViewDidTapNextButton:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (void)updateSignUpContext:(id)arg1;
- (void)viewDidLoad;
- (id)initWithLayoutSpec:(id)arg1 networker:(id)arg2 signUpContext:(id)arg3 actorAccount:(id)arg4 newAccountUsername:(id)arg5 newAccountDob:(id)arg6 parentalConsentRequired:(_Bool)arg7 showCheckmarkHeaderImage:(_Bool)arg8 tosVersion:(id)arg9 registrar:(id)arg10 delegate:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

