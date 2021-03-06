//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGTwoFactorAddEmailViewDelegate-Protocol.h"
#import "IGTwoFactorConfirmationCodeViewControllerDelegate-Protocol.h"

@class IGTwoFactorAddEmailView, IGTwoFactorSetupFlowContext, IGTwoFactorSetupLogger, IGUserSession, NSString;
@protocol IGTwoFactorAddEmailViewControllerDelegate;

@interface IGTwoFactorAddEmailViewController : IGViewController <IGTwoFactorAddEmailViewDelegate, IGTwoFactorConfirmationCodeViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGTwoFactorAddEmailView *_addEmailView;
    IGTwoFactorSetupFlowContext *_setupFlowContext;
    IGTwoFactorSetupLogger *_setupLogger;
    id <IGTwoFactorAddEmailViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTwoFactorAddEmailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_pushCodeConfirmationViewControllerWithEmail:(id)arg1;
- (_Bool)_isInSMSSetupFlow;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)twoFactorConfirmationCodeViewControllerRequestChangePhoneNumber:(id)arg1;
- (void)twoFactorConfirmationCodeViewControllerDidConfirmCode:(id)arg1;
- (void)twoFactorAddEmailView:(id)arg1 didTapOnLinkWithURL:(id)arg2;
- (void)twoFactorAddEmailViewDidTapOnSkipButton:(id)arg1;
- (void)twoFactorAddEmailViewDidTapOnSubmitButton:(id)arg1;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (long long)preferredTabBarBehavior;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 setupFlowContext:(id)arg2 setupLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

