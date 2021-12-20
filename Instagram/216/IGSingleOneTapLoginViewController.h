//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAnalyticsModule-Protocol.h"
#import "IGFacebookAuthHelperDelegate-Protocol.h"
#import "IGLoginResponseHandlerDelegate-Protocol.h"
#import "IGOneTapLoginManagerDelegate-Protocol.h"
#import "IGOneTapLoginViewControllerProtocol-Protocol.h"
#import "IGOneTapSingleAccountLoginViewDelegate-Protocol.h"

@class IGAuthenticator, IGDeviceSession, IGFXLoginManager, IGFacebookAuthHelper, IGLoginAccount, IGOneTapLoginManager, IGOneTapSingleAccountLoginView, IGRegistrationLogger, NSString;
@protocol IGAPIClient, IGAuthenticationFlowDismissDelegate, IGOneTapLoginViewControllerDelegate;

@interface IGSingleOneTapLoginViewController : IGViewController <IGFacebookAuthHelperDelegate, IGOneTapLoginManagerDelegate, IGOneTapSingleAccountLoginViewDelegate, IGLoginResponseHandlerDelegate, IGAnalyticsModule, IGOneTapLoginViewControllerProtocol>
{
    IGLoginAccount *_account;
    IGDeviceSession *_deviceSession;
    id <IGAPIClient> _networker;
    IGOneTapLoginManager *_loginManager;
    IGFXLoginManager *_fxLoginManager;
    IGAuthenticator *_authenticator;
    IGFacebookAuthHelper *_fbAuthHelper;
    IGRegistrationLogger *_logger;
    NSString *_step;
    _Bool _isSwitchingUsers;
    _Bool _isAuthenticating;
    _Bool _isAYMHAccountExperimentEnabled;
    _Bool _isCloudAYMHAccount;
    IGOneTapSingleAccountLoginView *_containerView;
    id <IGAuthenticationFlowDismissDelegate> _flowDismissDelegate;
    id <IGOneTapLoginViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGOneTapLoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeAccount;
- (void)_startPasswordLoginFlowForAccount:(id)arg1;
- (void)_loginWithFirstPartyToken;
- (void)_handleLoginErrors:(id)arg1 forAccount:(id)arg2 response:(id)arg3;
- (id)analyticsModule;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)facebookAuthHelper:(id)arg1 willShowAccountPickerForTokenResult:(id)arg2;
- (void)facebookAuthHelper:(id)arg1 willPrefillUsername:(id)arg2;
- (void)facebookAuthHelper:(id)arg1 willResetPasswordToken:(id)arg2 user:(id)arg3 facebookAccessToken:(id)arg4;
- (void)facebookAuthHelper:(id)arg1 willProceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)facebookAuthHelper:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 tosVersion:(id)arg4;
- (void)facebookAuthHelperDidTapActiveUser:(id)arg1;
- (void)facebookAuthHelperDidFailWithError:(id)arg1;
- (void)facebookAuthHelperDidTapDismissButton:(id)arg1;
- (void)facebookAuthHelperDidTapHelpButton:(id)arg1;
- (void)facebookAuthHelperDidTapSignUpButton:(id)arg1;
- (void)facebookAuthHelperDidTapLogInButton:(id)arg1;
- (void)stopFacebookButtonLoading;
- (void)startFacebookButtonLoading;
- (void)singleOneTapLoginViewDidTapSwitchAccountsButton:(id)arg1;
- (void)singleOneTapLoginViewDidTapSignUpButton:(id)arg1;
- (void)singleOneTapLoginView:(id)arg1 didClickURL:(id)arg2;
- (void)singleOneTapLoginViewDidTapDismissButton:(id)arg1;
- (void)singleOneTapLoginViewDidTapSecondaryButton:(id)arg1;
- (void)singleOneTapLoginViewDidTapLoginButton:(id)arg1;
- (void)loginResponseHandler:(id)arg1 didReactivateAccountWithStopDeletionToken:(id)arg2;
- (void)loginResponseHandlerDidHandleBadPassword:(id)arg1;
- (void)loginResponseHandlerDidFailOneTapLogin:(id)arg1;
- (void)loginResponseHandlerDidSwitchToSignUpAfterFailure:(id)arg1;
- (void)loginResponseHandlerDidTriggerAccountRecovery:(id)arg1;
- (void)loginResponseHandlerDidTriggerFbLogin:(id)arg1 forUser:(id)arg2;
- (void)loginResponseHandler:(id)arg1 didHandleTwoFactorInfo:(id)arg2;
- (void)loginResponseHandler:(id)arg1 didHandleResetPasswordWithBundle:(id)arg2;
- (_Bool)loginResponseHandler:(id)arg1 hasFirstPartyFBLoginTokenForUser:(id)arg2;
- (void)oneTapLoginManager:(id)arg1 didTriggerLoginForPersistentAccount:(id)arg2;
- (void)oneTapLoginManager:(id)arg1 didFinishAuthenticationWithResult:(id)arg2 account:(id)arg3;
- (void)oneTapLoginManagerDidSwitchToPasswordAfterBiometricsFailure:(id)arg1;
- (void)oneTapLoginManager:(id)arg1 didBeginAuthenticatingAccount:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNetworker:(id)arg1 deviceSession:(id)arg2 account:(id)arg3 authenticator:(id)arg4 accountStoreCoordinator:(id)arg5 isSwitchingUsers:(_Bool)arg6 fbAuthHelper:(id)arg7 persistentAccountStore:(id)arg8 cloudPersistentAccountStore:(id)arg9 fxLoginManager:(id)arg10 logger:(id)arg11 flowDismissDelegate:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

