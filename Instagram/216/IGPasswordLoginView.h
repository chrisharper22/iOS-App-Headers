//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGTextFieldDelegate-Protocol.h"

@class IGFacebookButton, IGImageView, IGTextField, NSString, UIActivityIndicatorView, UIButton, UILabel;
@protocol IGPasswordLoginViewDelegate;

@interface IGPasswordLoginView : UIView <IGTextFieldDelegate>
{
    IGImageView *_profilePictureView;
    UILabel *_usernameLabel;
    UIButton *_forgotPasswordButton;
    UIButton *_loginButton;
    IGFacebookButton *_facebookButton;
    IGTextField *_passwordField;
    UIButton *_backButton;
    UIButton *_dismissButton;
    UIActivityIndicatorView *_loadingIndicator;
    _Bool _showFacebookButton;
    id <IGPasswordLoginViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPasswordLoginViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateButtonStateForEnabled:(_Bool)arg1;
- (void)_didTapForgotPasswordButton;
- (void)_didTapDismissButton;
- (void)_didTapBackButton;
- (void)_didTapFacebookButton;
- (void)_didTapLoginButton;
- (void)_configureBackButton;
- (void)_configureFacebookButton;
- (void)_configureLoginButton;
- (void)_configureForgotPasswordButton;
- (void)_configurePasswordField;
- (void)_configureUsernameLabel;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setFBButtonLoading:(_Bool)arg1;
- (void)updateFBLoginButtonWithTitle:(id)arg1 hasFacebookUsername:(_Bool)arg2;
- (void)updateLoginInProgress:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithUsername:(id)arg1 profilePhotoURL:(id)arg2 showFacebookButton:(_Bool)arg3 replaceBackButtonWithClose:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
