//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"
#import "IGRegistrationSignUpViewDelegate-Protocol.h"
#import "IGTextFieldDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGContactPointPrefillLocalDataStore, IGKeyboardObserver, IGNUXLayoutSpec, IGRegistrationSignUpView, NSDictionary, NSString, UITapGestureRecognizer;
@protocol IGAPIClient, IGRegistrationSignUpViewControllerDelegate;

@interface IGRegistrationSignUpViewController : IGViewController <IGTextFieldDelegate, UIGestureRecognizerDelegate, IGKeyboardObserverShowDelegate, IGRegistrationSignUpViewDelegate, IGCoreTextLinkHandler>
{
    _Bool _hideSavePasswordCheckbox;
    _Bool _showBackButton;
    _Bool _showFooterView;
    _Bool _showSavePasswordDialog;
    IGNUXLayoutSpec *_layoutSpec;
    unsigned long long _type;
    IGContactPointPrefillLocalDataStore *_contactPointLocalDataStore;
    _Bool _isPasswordErrorMessageSticky;
    _Bool _isFullnameErrorMessageSticky;
    id <IGRegistrationSignUpViewControllerDelegate> _delegate;
    IGRegistrationSignUpView *_signUpView;
    NSDictionary *_facebookUserInfo;
    UITapGestureRecognizer *_tapGesture;
    id <IGAPIClient> _networker;
    NSString *_userDisplayName;
    IGKeyboardObserver *_keyboardObserver;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(copy, nonatomic) NSString *userDisplayName; // @synthesize userDisplayName=_userDisplayName;
@property(nonatomic) _Bool isFullnameErrorMessageSticky; // @synthesize isFullnameErrorMessageSticky=_isFullnameErrorMessageSticky;
@property(nonatomic) _Bool isPasswordErrorMessageSticky; // @synthesize isPasswordErrorMessageSticky=_isPasswordErrorMessageSticky;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) NSDictionary *facebookUserInfo; // @synthesize facebookUserInfo=_facebookUserInfo;
@property(retain, nonatomic) IGRegistrationSignUpView *signUpView; // @synthesize signUpView=_signUpView;
@property(nonatomic) __weak id <IGRegistrationSignUpViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_subHeaderTitle;
- (id)_headerTitle;
- (_Bool)_shouldEnableNextButton;
- (_Bool)_shouldShowFullNameField;
- (_Bool)_shouldShowPasswordField;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)_pasteFacebookUserInfo;
- (_Bool)_isPasswordFieldsValid;
- (void)_backgroundTapped;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_backButtonTapped;
- (void)_savePasswordButtonTapped;
- (void)_nextButtonTapped;
- (id)_placeholderTextForNameField;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)signUpViewViewDidTapFooterSignInButton:(id)arg1;
- (void)setIsLoading:(_Bool)arg1;
- (void)hideInlineErrorForFieldType:(long long)arg1;
- (void)showInlineErrorForFieldType:(long long)arg1 message:(id)arg2 isSticky:(_Bool)arg3;
- (void)_triggerFirstResponder;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFacebookInfo:(id)arg1 networker:(id)arg2 showBackButton:(_Bool)arg3 showFooterView:(_Bool)arg4 hideSavePasswordCheckbox:(_Bool)arg5 layoutSpec:(id)arg6 type:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

