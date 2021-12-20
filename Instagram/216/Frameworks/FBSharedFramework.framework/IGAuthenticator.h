//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGOneTapSwitching-Protocol.h>
#import <FBSharedFramework/IGURLHandlingLoginListener-Protocol.h>

@class IGAccountLinkingLoginManager, IGAccountStoreCoordinator, IGAccountSwitcher, IGAuthService, IGFacebookAuthHelper, IGLoginDeferredAccountManager, IGMainAppSurfaceIntent, IGSSOFetcher, NSString;
@protocol IGAPIClient, IGLoginManaging, IGMultipleAccountHandling;

@interface IGAuthenticator : NSObject <IGURLHandlingLoginListener, IGOneTapSwitching>
{
    id <IGAPIClient> _loggedOutNetworker;
    id <IGLoginManaging> _loginManager;
    IGAccountLinkingLoginManager *_accountLinkingLoginManager;
    IGAccountStoreCoordinator *_accountStoreCoordinator;
    IGAccountSwitcher *_accountSwitching;
    id <IGMultipleAccountHandling> _multipleAccountHandler;
    IGAuthService *_authService;
    IGLoginDeferredAccountManager *_deferredAccountManager;
    IGFacebookAuthHelper *_fbAuthHelper;
    IGSSOFetcher *_ssoFetcher;
    CDUnknownBlockType _fetchFBAccessTokenCompletionHandler;
    IGMainAppSurfaceIntent *_destinationAppSurface;
}

- (void).cxx_destruct;
- (void)_logLoginDeferredAccountLoginFinishEventWithAccountPK:(id)arg1 succeeded:(_Bool)arg2 reason:(id)arg3;
- (void)_oneTapLogInToAccountWithPK:(id)arg1 loginNonce:(id)arg2 cloudID:(id)arg3 cloudNonce:(id)arg4 isSwitchingAccounts:(_Bool)arg5 regStep:(id)arg6 surface:(long long)arg7 stopDeletionToken:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)_logOneTapLoginTwoFacRequiredForUser:(id)arg1 regStep:(id)arg2 surface:(long long)arg3 isSwitchingAccounts:(_Bool)arg4;
- (id)_submitProSignUpRequest:(id)arg1 isPhoneReg:(_Bool)arg2 networker:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (id)_submitSignUpRequest:(id)arg1 isPhoneReg:(_Bool)arg2 smsVerificationCode:(id)arg3 doNotAutoLoginIfCredentialsMatch:(_Bool)arg4 shouldForceCreate:(_Bool)arg5 actorPK:(id)arg6 authHeaderStore:(id)arg7 networker:(id)arg8 successHandler:(CDUnknownBlockType)arg9 failureHandler:(CDUnknownBlockType)arg10;
- (void)_handleSignUpOrLoginWithResponse:(id)arg1 signUpInfoDict:(id)arg2 authHeader:(id)arg3 routingHeaders:(id)arg4 isSwitchingUsers:(_Bool)arg5 facebookAccessToken:(id)arg6 successHandler:(CDUnknownBlockType)arg7;
- (void)_fetchFBAccessTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_autoFBLoginFetchSSOAccountsWithToken:(id)arg1 stepName:(id)arg2 tokenType:(id)arg3 logger:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_autoFBLoginDidFetchFirstPartyToken:(id)arg1 stepName:(id)arg2 logger:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_autoFBLoginWithDestinationURL:(id)arg1 stepName:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)_logInWithRequest:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)_storeLoginDeferredAccounts:(id)arg1;
- (void)_removeDeferredAccountIfNeededForUserPk:(id)arg1;
- (void)_resolveChildAccountsWithNonce:(id)arg1 userSession:(id)arg2;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)autoFBLoginWithDestinationURL:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)currentLoggedInUserPKsWithLoginDeferredAccounts;
- (id)currentUsersSortedByAccountLinkingMainAccountEligibility;
- (id)currentUsersSortedByAccessTime;
- (_Bool)hasMaximumNumberOfAccounts;
- (_Bool)hasLoggedInAccountsAndOneTapLoginEnabledButLoggedOutAccounts;
- (id)parseAuthenticatedUserDict:(id)arg1;
- (id)authenticatedUserForPK:(id)arg1;
- (id)authHeaderForUser:(id)arg1;
- (id)continueAsUser;
- (void)switchSSOAccount:(id)arg1 surface:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)switchToLoginDeferredAccount:(id)arg1 surface:(long long)arg2 stopDeletionToken:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)switchToAccount:(id)arg1 surface:(long long)arg2 stopDeletionToken:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)attemptToLoginDeferredAccountsWithAccountInfoDicts:(id)arg1;
- (void)loginFromKeychainWithUserPk:(id)arg1 authHeader:(id)arg2;
- (void)switchToLastLoggedInUserWithDestinationAppSurface:(id)arg1;
- (_Bool)switchToLoggedInUserPk:(id)arg1 destinationAppSurface:(id)arg2 entryPoint:(unsigned long long)arg3;
- (id)submitSignUpRequestWithMainAccountPK:(id)arg1 signUpInfoDict:(id)arg2 shouldCopyConsentAndBirthdayFromMainAccount:(_Bool)arg3 shouldCALLinkToMain:(_Bool)arg4 authHeaderStore:(id)arg5 networker:(id)arg6 successHandler:(CDUnknownBlockType)arg7 failureHandler:(CDUnknownBlockType)arg8;
- (id)submitSignUpRequestWithFacebookAuthHelper:(id)arg1 username:(id)arg2 fbAccessTokenString:(id)arg3 tosVersion:(id)arg4 signUpInfoDict:(id)arg5 proSignUpInfoDict:(id)arg6 isPhoneReg:(_Bool)arg7 smsVerificationCode:(id)arg8 isSwitchingUsers:(_Bool)arg9 fbCALAccepted:(_Bool)arg10 forceCALStepWithFBContactPointClaiming:(_Bool)arg11 doNotAutoLoginIfCredentialsMatch:(_Bool)arg12 shouldForceCreate:(_Bool)arg13 facebookAccessToken:(id)arg14 actorPK:(id)arg15 authHeaderStore:(id)arg16 networker:(id)arg17 successHandler:(CDUnknownBlockType)arg18 failureHandler:(CDUnknownBlockType)arg19;
- (void)oneTapLogInToUserPk:(id)arg1 cloudIdentifier:(id)arg2 cloudNonce:(id)arg3 isSwitchingAccounts:(_Bool)arg4 regStep:(id)arg5 surface:(long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)oneTapLogInToLoginDeferredAccount:(id)arg1 isSwitchingAccounts:(_Bool)arg2 regStep:(id)arg3 surface:(long long)arg4 stopDeletionToken:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)oneTapLogInToAccountPK:(id)arg1 isSwitchingAccounts:(_Bool)arg2 regStep:(id)arg3 surface:(long long)arg4 stopDeletionToken:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)oneTapLogInToAccountPK:(id)arg1 isSwitchingAccounts:(_Bool)arg2 regStep:(id)arg3 surface:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)loginWithUserDict:(id)arg1 macLoginNonce:(id)arg2 authHeader:(id)arg3 headers:(id)arg4 authLoginType:(long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)loginWithRequest:(id)arg1 authLoginType:(long long)arg2 facebookAccessToken:(id)arg3 notification:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)loginWithRequest:(id)arg1 authLoginType:(long long)arg2 facebookAccessToken:(id)arg3 notification:(id)arg4 beforeNavigationBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)completeFBLogInWithUserDictionary:(id)arg1 authHeader:(id)arg2 routingHeaders:(id)arg3 facebookAccessToken:(id)arg4 authLoginType:(long long)arg5 destinationURL:(id)arg6 macLoginNonce:(id)arg7 sessionBeganBlock:(CDUnknownBlockType)arg8;
- (id)initWithLoggedOutNetworker:(id)arg1 loginManager:(id)arg2 accountLinkingLoginManager:(id)arg3 accountSwitcher:(id)arg4 multipleAccountHandler:(id)arg5 authService:(id)arg6 destinationAppSurface:(id)arg7 accountStoreCoordinator:(id)arg8 loginDeferredAccountManager:(id)arg9 fbAuthHelper:(id)arg10 ssoFetcher:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
