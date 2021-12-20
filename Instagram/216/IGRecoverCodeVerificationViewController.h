//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCodeConfirmationViewDelegate-Protocol.h"
#import "IGCodeVerificationViewDelegate-Protocol.h"
#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"
#import "IGTextFieldDelegate-Protocol.h"

@class IGAccessLoginCodeSendingManager, IGAuthenticator, IGCodeConfirmationViewModel, IGCodeVerificationView, IGNUXLayoutSpec, IGRecoverCodeVerificationContext, IGRegistrationLogger, NSString;
@protocol IGAPIClient, IGRecoverCodeVerificationViewControllerDelegate;

@interface IGRecoverCodeVerificationViewController : IGViewController <IGCoreTextLinkHandler, IGCodeConfirmationViewDelegate, IGTextFieldDelegate, IGCodeVerificationViewDelegate, IGKeyboardObserverShowDelegate>
{
    IGRecoverCodeVerificationContext *_context;
    IGRegistrationLogger *_logger;
    IGAuthenticator *_authenticator;
    IGNUXLayoutSpec *_layoutSpec;
    id <IGAPIClient> _networker;
    IGCodeVerificationView *_confirmationView;
    IGCodeConfirmationViewModel *_confirmationViewModel;
    IGAccessLoginCodeSendingManager *_codeSendingManager;
    _Bool _isResending;
    _Bool _isVerifying;
    _Bool _isRecoverAccountForMultipleUsers;
    NSString *_accessStep;
    NSString *_contactPoint;
    NSString *_contactType;
    id <IGRecoverCodeVerificationViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRecoverCodeVerificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)codeVerificationViewDidTapResendCodeButton:(id)arg1;
- (void)codeConfirmationViewDidTapNextButtonWithCode:(id)arg1 shouldConvert:(_Bool)arg2;
- (void)codeConfirmationViewDidTapBackButton;
- (void)_setVerifyState:(_Bool)arg1;
- (void)_handleVerifyMultipleUsers:(id)arg1;
- (void)_showVerifyErrorDialog;
- (id)_subTitleStyledTextForContactPoint:(id)arg1;
- (id)_subTitleStyledText;
- (void)_displayCodeResentSuccessMessage;
- (void)_resendCode;
- (void)_verifyCode:(id)arg1;
- (void)_verifyForMultipleUsersWithCode:(id)arg1;
- (void)_configureWithViewModel:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 authenticator:(id)arg2 logger:(id)arg3 layoutSpec:(id)arg4 networker:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

