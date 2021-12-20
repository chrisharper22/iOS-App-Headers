//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAnalyticsModule-Protocol.h"
#import "IGCodeConfirmationViewDelegate-Protocol.h"
#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGTextFieldDelegate-Protocol.h"

@class FBTimer, IGAuthenticator, IGCodeConfirmationView, IGCodeConfirmationViewModel, IGNUXLayoutSpec, NSString;
@protocol IGAPIClient, IGRegistrationPhoneConfirmationViewControllerDelegate;

@interface IGRegistrationPhoneConfirmationViewController : IGViewController <IGAnalyticsModule, IGCoreTextLinkHandler, IGCodeConfirmationViewDelegate, IGTextFieldDelegate>
{
    IGNUXLayoutSpec *_layoutSpec;
    IGAuthenticator *_authenticator;
    FBTimer *_resendSMSTimer;
    _Bool _isEligibleForAutoSubmit;
    _Bool _showBackButton;
    _Bool _tryToLogin;
    _Bool _isSACFlow;
    IGCodeConfirmationView *_codeConfirmationView;
    IGCodeConfirmationViewModel *_codeConfirmationViewModel;
    id <IGRegistrationPhoneConfirmationViewControllerDelegate> _delegate;
    id <IGAPIClient> _networker;
    NSString *_phoneNumber;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(nonatomic) __weak id <IGRegistrationPhoneConfirmationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)codeConfirmationViewDidTapNextButtonWithCode:(id)arg1 shouldConvert:(_Bool)arg2;
- (void)codeConfirmationViewDidTapBackButton;
- (void)_logSMSCodePastedFromClipboard;
- (void)_invalidateTimer:(id)arg1;
- (void)_initiateResendTimer;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)_handleCodeResend;
- (id)_subTitleStyledText;
- (id)_titleText;
- (void)_configureWithViewModel:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_loginVettedPhoneUserWithUserID:(id)arg1 token:(id)arg2;
- (void)_handleValidSMSCodeWithResponse:(id)arg1 confirmationCode:(id)arg2;
- (void)_verifyCode:(id)arg1;
- (void)_resendCode;
- (void)_keyboardWillHide;
- (void)_backToPhoneNumberButtonTapped;
- (void)setIsLoading:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPhoneNumber:(id)arg1 layoutSpec:(id)arg2 authenticator:(id)arg3 networker:(id)arg4 showBackButton:(_Bool)arg5 tryToLogin:(_Bool)arg6 isSACFlow:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

