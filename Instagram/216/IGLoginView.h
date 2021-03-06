//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGAccessFooterViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGAccessFooterView, IGCoreTextView, IGFacebookButton, IGLabel, IGLoginViewModel, IGPassthroughView, IGRegistrationFacebookButtonSeparator, IGTextField, NSString, UIActivityIndicatorView, UIButton, UIImageView;
@protocol IGLoginViewDelegate><IGTextFieldDelegate><IGCoreTextLinkHandler;

@interface IGLoginView : UIView <UIGestureRecognizerDelegate, IGAccessFooterViewDelegate>
{
    IGPassthroughView *_containerView;
    IGRegistrationFacebookButtonSeparator *_facebookButtonSeparator;
    IGFacebookButton *_facebookButton;
    IGTextField *_usernameField;
    IGTextField *_passwordField;
    IGCoreTextView *_termView;
    UIButton *_gearButton;
    UIActivityIndicatorView *_loadingIndicator;
    UIView *_shaderView;
    UIImageView *_logoView;
    UIButton *_recoveryButton;
    UIButton *_dismissButton;
    UIButton *_backButton;
    UIButton *_loginButton;
    IGAccessFooterView *_footerView;
    IGLabel *_inlineErrorLabel;
    double _largeVerticalPadding;
    double _mediumVerticalPadding;
    double _minimumVerticalPadding;
    IGLoginViewModel *_viewModel;
    _Bool _useMinimalVerticalPadding;
    _Bool _isAlternativeRecoveryEnabled;
    _Bool _isSignUpButtonTapped;
    id <IGLoginViewDelegate><IGTextFieldDelegate><IGCoreTextLinkHandler> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSignUpButtonTapped; // @synthesize isSignUpButtonTapped=_isSignUpButtonTapped;
@property(nonatomic) _Bool isAlternativeRecoveryEnabled; // @synthesize isAlternativeRecoveryEnabled=_isAlternativeRecoveryEnabled;
@property(nonatomic) __weak id <IGLoginViewDelegate><IGTextFieldDelegate><IGCoreTextLinkHandler> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)configureWithViewModel:(id)arg1;
- (void)_didTapLoginAnotherWayButton;
- (void)_didTapForgotPasswordButton;
- (void)_didTapLoginButton;
- (void)_didTapDismissButton;
- (void)_didTapFacebookButton;
- (void)_updateAccountRecoveryButton;
- (void)_togglePassword:(id)arg1;
- (void)_updateShaderViewWithAlpha:(double)arg1;
- (CDUnknownBlockType)_keyboardAnimationBlockWithShowKeyboard:(_Bool)arg1;
- (void)_hideKeyboardWithDuration:(double)arg1 curve:(long long)arg2;
- (void)_showKeyboardWithEndFrame:(struct CGRect)arg1 duration:(double)arg2 curve:(long long)arg3;
- (void)_updateFBLoginButtonWithTitle:(id)arg1 backgroundRedesignEnabled:(_Bool)arg2;
- (void)_updateLoginButtonIsLoading:(_Bool)arg1;
- (void)_updateFacebookButtonIsLoading:(_Bool)arg1;
- (void)_adjustContainerViewWithHeight:(double)arg1;
- (double)_yOffsetToCenterAlignContainerView;
- (void)_didTapBackgroundView;
- (void)_createTermView;
- (void)_didTapGearButton;
- (void)_didTapBackButton;
- (void)_createDismissButton;
- (void)_createFacebookButton;
- (void)_createFacebookButtonSeparator;
- (void)_createLoginButton;
- (void)_createRecoveryButton;
- (void)_didTapShaderView;
- (void)_createShaderView;
- (void)_createInlineErrorLabel;
- (void)_createPasswordField;
- (void)_createUsernameField;
- (void)_createLogoView;
- (void)_createContainerView;
- (void)accessFooterViewDidTapSecondaryButton:(id)arg1;
- (void)accessFooterViewDidTapPrimaryButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

