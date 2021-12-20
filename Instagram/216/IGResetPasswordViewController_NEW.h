//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGResetPasswordViewDelegate-Protocol.h"

@class IGFXCALResetPasswordView, IGResetPasswordView_NEW, IGUserSession, NSString, UIBarButtonItem, UINavigationController;

@interface IGResetPasswordViewController_NEW : IGViewController <IGResetPasswordViewDelegate>
{
    IGResetPasswordView_NEW *_newResetPasswordView;
    UIBarButtonItem *_saveBarButtonItem;
    IGUserSession *_userSession;
    NSString *_token;
    _Bool _isSubmitting;
    _Bool _isFXCAL;
    IGFXCALResetPasswordView *_fxcalResetPasswordView;
    UINavigationController *_presenterNavigationController;
}

- (void).cxx_destruct;
- (void)_logResetPasswordFailedWithReason:(id)arg1;
- (void)_logResetPasswordSucceeded;
- (void)_logBarButtonTappedIsLeftButton:(_Bool)arg1;
- (void)_logPasswordResetFieldPwdConfFocus;
- (void)_logPasswordResetFieldPwdFocus;
- (void)_logPasswordResetAttempt;
- (void)_closeScreen;
- (void)_didTapCancelButton;
- (void)_openSSOSettings;
- (void)_resetPassword;
- (id)_resetPasswordView;
- (void)_setupFXCALView;
- (void)_setupView;
- (void)resetPasswordViewDidFocusVerifyPasswordTextField;
- (void)resetPasswordViewDidFocusNewPasswordTextField;
- (void)didTapSaveButton;
- (void)enableSaveButton:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 token:(id)arg2 isFXCAL:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
