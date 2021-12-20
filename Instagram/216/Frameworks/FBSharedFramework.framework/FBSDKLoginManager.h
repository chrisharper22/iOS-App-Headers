//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKLoginProviding-Protocol.h>
#import <FBSharedFramework/FBSDKURLOpening-Protocol.h>

@class FBSDKLoginConfiguration, FBSDKLoginManagerLogger, NSSet, NSString, UIViewController;
@protocol FBSDKGraphRequestConnectionFactory, FBSDKKeychainStore, FBSDKLoginCompleterFactory, FBSDKSettings, FBSDKURLHosting><FBSDKAppURLSchemeProviding><FBSDKAppAvailabilityChecker, FBSDKURLOpener;

@interface FBSDKLoginManager : NSObject <FBSDKURLOpening, FBSDKLoginProviding>
{
    _Bool _usedSFAuthSession;
    unsigned long long _defaultAudience;
    CDUnknownBlockType _handler;
    FBSDKLoginConfiguration *_configuration;
    id <FBSDKKeychainStore> _keychainStore;
    Class _accessTokenWallet;
    Class _authenticationToken;
    Class _profile;
    id <FBSDKGraphRequestConnectionFactory> _graphRequestConnectionFactory;
    id <FBSDKURLHosting><FBSDKAppURLSchemeProviding><FBSDKAppAvailabilityChecker> _internalUtility;
    id <FBSDKURLOpener> _urlOpener;
    id <FBSDKSettings> _settings;
    id <FBSDKLoginCompleterFactory> _loginCompleterFactory;
    UIViewController *_fromViewController;
    NSSet *_requestedPermissions;
    FBSDKLoginManagerLogger *_logger;
    FBSDKLoginConfiguration *_config;
    long long _state;
}

+ (id)stringForChallenge;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool usedSFAuthSession; // @synthesize usedSFAuthSession=_usedSFAuthSession;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) FBSDKLoginConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) FBSDKLoginManagerLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSSet *requestedPermissions; // @synthesize requestedPermissions=_requestedPermissions;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(retain, nonatomic) id <FBSDKLoginCompleterFactory> loginCompleterFactory; // @synthesize loginCompleterFactory=_loginCompleterFactory;
@property(retain, nonatomic) id <FBSDKSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <FBSDKURLOpener> urlOpener; // @synthesize urlOpener=_urlOpener;
@property(retain, nonatomic) id <FBSDKURLHosting><FBSDKAppURLSchemeProviding><FBSDKAppAvailabilityChecker> internalUtility; // @synthesize internalUtility=_internalUtility;
@property(retain, nonatomic) id <FBSDKGraphRequestConnectionFactory> graphRequestConnectionFactory; // @synthesize graphRequestConnectionFactory=_graphRequestConnectionFactory;
@property(retain, nonatomic) Class profile; // @synthesize profile=_profile;
@property(retain, nonatomic) Class authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain, nonatomic) Class accessTokenWallet; // @synthesize accessTokenWallet=_accessTokenWallet;
@property(retain, nonatomic) id <FBSDKKeychainStore> keychainStore; // @synthesize keychainStore=_keychainStore;
@property(retain, nonatomic) FBSDKLoginConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) unsigned long long defaultAudience; // @synthesize defaultAudience=_defaultAudience;
- (_Bool)shouldStopPropagationOfURL:(id)arg1;
- (_Bool)isAuthenticationURL:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)canOpenURL:(id)arg1 forApplication:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)setRequestedPermissions:(id)arg1;
- (id)recentlyDeclinedPermissionsFromDeclinedPermissions:(id)arg1;
- (id)recentlyGrantedPermissionsFromGrantedPermissions:(id)arg1;
- (id)successResultFromParameters:(id)arg1;
- (id)cancelledResultFromParameters:(id)arg1;
- (void)performBrowserLogInWithHandler:(CDUnknownBlockType)arg1;
- (void)validateReauthentication:(id)arg1 withResult:(id)arg2;
- (void)storeExpectedNonce:(id)arg1;
- (void)storeExpectedChallenge:(id)arg1;
- (void)logIn;
- (id)logInParametersFromURL:(id)arg1;
- (void)logInWithPermissions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)logInParametersWithConfiguration:(id)arg1 loggingToken:(id)arg2 logger:(id)arg3 authMethod:(id)arg4;
@property(readonly, copy, nonatomic) NSString *loadExpectedNonce;
@property(readonly, copy, nonatomic) NSString *loadExpectedChallenge;
- (void)invokeHandler:(id)arg1 error:(id)arg2;
- (id)_verifyChallengeWithCompletionParameters:(id)arg1;
- (void)_setSharedAuthenticationToken:(id)arg1 accessToken:(id)arg2 profile:(id)arg3;
- (void)_setGlobalPropertiesWithParameters:(id)arg1 result:(id)arg2;
- (void)completeAuthentication:(id)arg1 expectChallenge:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isPerformingLogin;
- (_Bool)validateLoginStartState;
- (void)handleImplicitCancelOfLogIn;
- (void)logInWithURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)logOut;
- (void)reauthorizeDataAccess:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)logInWithPermissions:(id)arg1 fromViewController:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)logInFromViewControllerImpl:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)logInFromViewController:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithInternalUtility:(id)arg1 keychainStoreFactory:(id)arg2 accessTokenWallet:(Class)arg3 graphRequestConnectionFactory:(id)arg4 authenticationToken:(Class)arg5 profile:(Class)arg6 urlOpener:(id)arg7 settings:(id)arg8 loginCompleterFactory:(id)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
