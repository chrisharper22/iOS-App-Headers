//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKAccessToken, IGAccountStoreCoordinator, IGAuthHeaderStore, IGAuthenticator, IGContactPointPrefillDataFetcher, IGDeviceSession, IGFacebookAuthHelper, IGMainAppSurfaceIntent, IGNUXFBContent, IGRegistrationFBContent, IGRegistrationFlowConfiguration, IGRegistrationIntentCollectionContext, IGRegistrationLogger, IGSSOFetcher, IGUser, IGUserSession, NSArray, NSDate, NSDictionary, NSString;
@protocol IGAPIClient, IGAuthenticationFlowDismissDelegate, IGConcurrentSessionHandling, IGProAccountCreationContextProtocol;

@interface IGRegistrationFlowContext : NSObject
{
    _Bool _isGDPRRequired;
    _Bool _isAgeRequired;
    _Bool _isToSAcceptanceNotRequired;
    _Bool _flowStartsDirectlyFromMAS;
    _Bool _isSMSConsent;
    _Bool _isSimpleSACEnabled;
    _Bool _simpleSacOptOut;
    _Bool _simpleSacInFlow;
    _Bool _isParentalConsentRequired;
    _Bool _isPhoneNumberTaken;
    _Bool _regWithSharedEmail;
    _Bool _requireEmailVerification;
    _Bool _wasLoginUpsellShown;
    _Bool _savePasswordEnabled;
    _Bool _fbCALAccepted;
    _Bool _forceCALStepWithContactPointClaiming;
    _Bool _isSeparateToSRequired;
    _Bool _nativeTokenExists;
    _Bool _fbSACCalUserConsentAccepted;
    _Bool _enableEmailConfirmationWithLink;
    _Bool _isSavePasswordInterstitialSurfaced;
    IGNUXFBContent *_igNUXFBContent;
    IGRegistrationFlowConfiguration *_configuration;
    id <IGAuthenticationFlowDismissDelegate> _flowDismissDelegate;
    id <IGAPIClient> _loggedOutNetworker;
    IGAuthenticator *_authenticator;
    IGAccountStoreCoordinator *_accountStoreCoordinator;
    id <IGConcurrentSessionHandling> _concurrentUserSessionHandler;
    IGFacebookAuthHelper *_fbAuthHelper;
    IGContactPointPrefillDataFetcher *_contactPointPrefillDataFetcher;
    IGSSOFetcher *_ssoFetcher;
    IGRegistrationLogger *_logger;
    IGAuthHeaderStore *_authHeaderStore;
    IGDeviceSession *_deviceSession;
    IGUserSession *_previouslyLoggedInUserSession_DO_NOT_USE_UNLESS_YOU_KNOW_WHAT_YOU_ARE_DOING;
    long long _flowType;
    NSDictionary *_facebookMeInfo;
    NSArray *_suggestedUsernames;
    IGRegistrationFBContent *_fbContent;
    FBSDKAccessToken *_facebookAccessToken;
    NSString *_calRegFlow;
    NSString *_phoneNumber;
    NSString *_email;
    NSString *_username;
    NSString *_fullName;
    NSString *_password;
    NSString *_tosVersion;
    NSString *_smsVerificationCode;
    NSString *_forceSignUpCode;
    NSString *_existingAccountPrefillEmail;
    NSDate *_dob;
    NSString *_chosenMainAccountUsername;
    NSString *_chosenMainAccountPK;
    IGUser *_actorAccount;
    NSString *_actorEmail;
    NSString *_actorPhoneNumber;
    NSArray *_persistentLoginAccounts;
    IGRegistrationIntentCollectionContext *_registrationIntentCollectionContext;
    IGMainAppSurfaceIntent *_cancelSwitchDestinationAppSurface;
    id <IGProAccountCreationContextProtocol> _proAccountCreationContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSavePasswordInterstitialSurfaced; // @synthesize isSavePasswordInterstitialSurfaced=_isSavePasswordInterstitialSurfaced;
@property(readonly, nonatomic) id <IGProAccountCreationContextProtocol> proAccountCreationContext; // @synthesize proAccountCreationContext=_proAccountCreationContext;
@property(readonly, nonatomic) IGMainAppSurfaceIntent *cancelSwitchDestinationAppSurface; // @synthesize cancelSwitchDestinationAppSurface=_cancelSwitchDestinationAppSurface;
@property(readonly, nonatomic) IGRegistrationIntentCollectionContext *registrationIntentCollectionContext; // @synthesize registrationIntentCollectionContext=_registrationIntentCollectionContext;
@property(readonly, nonatomic) NSArray *persistentLoginAccounts; // @synthesize persistentLoginAccounts=_persistentLoginAccounts;
@property(readonly, nonatomic) NSString *actorPhoneNumber; // @synthesize actorPhoneNumber=_actorPhoneNumber;
@property(readonly, nonatomic) NSString *actorEmail; // @synthesize actorEmail=_actorEmail;
@property(readonly, nonatomic) IGUser *actorAccount; // @synthesize actorAccount=_actorAccount;
@property(readonly, nonatomic) NSString *chosenMainAccountPK; // @synthesize chosenMainAccountPK=_chosenMainAccountPK;
@property(readonly, nonatomic) NSString *chosenMainAccountUsername; // @synthesize chosenMainAccountUsername=_chosenMainAccountUsername;
@property(readonly, nonatomic) _Bool enableEmailConfirmationWithLink; // @synthesize enableEmailConfirmationWithLink=_enableEmailConfirmationWithLink;
@property(readonly, copy, nonatomic) NSDate *dob; // @synthesize dob=_dob;
@property(readonly, copy, nonatomic) NSString *existingAccountPrefillEmail; // @synthesize existingAccountPrefillEmail=_existingAccountPrefillEmail;
@property(readonly, copy, nonatomic) NSString *forceSignUpCode; // @synthesize forceSignUpCode=_forceSignUpCode;
@property(readonly, copy, nonatomic) NSString *smsVerificationCode; // @synthesize smsVerificationCode=_smsVerificationCode;
@property(readonly, copy, nonatomic) NSString *tosVersion; // @synthesize tosVersion=_tosVersion;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) _Bool fbSACCalUserConsentAccepted; // @synthesize fbSACCalUserConsentAccepted=_fbSACCalUserConsentAccepted;
@property(readonly, nonatomic) NSString *calRegFlow; // @synthesize calRegFlow=_calRegFlow;
@property(readonly, nonatomic) FBSDKAccessToken *facebookAccessToken; // @synthesize facebookAccessToken=_facebookAccessToken;
@property(readonly, nonatomic) IGRegistrationFBContent *fbContent; // @synthesize fbContent=_fbContent;
@property(readonly, nonatomic) _Bool nativeTokenExists; // @synthesize nativeTokenExists=_nativeTokenExists;
@property(readonly, nonatomic) _Bool isSeparateToSRequired; // @synthesize isSeparateToSRequired=_isSeparateToSRequired;
@property(readonly, nonatomic) _Bool forceCALStepWithContactPointClaiming; // @synthesize forceCALStepWithContactPointClaiming=_forceCALStepWithContactPointClaiming;
@property(readonly, nonatomic) _Bool fbCALAccepted; // @synthesize fbCALAccepted=_fbCALAccepted;
@property(readonly, nonatomic) _Bool savePasswordEnabled; // @synthesize savePasswordEnabled=_savePasswordEnabled;
@property(readonly, nonatomic) _Bool wasLoginUpsellShown; // @synthesize wasLoginUpsellShown=_wasLoginUpsellShown;
@property(readonly, nonatomic) _Bool requireEmailVerification; // @synthesize requireEmailVerification=_requireEmailVerification;
@property(readonly, nonatomic) _Bool regWithSharedEmail; // @synthesize regWithSharedEmail=_regWithSharedEmail;
@property(readonly, nonatomic) _Bool isPhoneNumberTaken; // @synthesize isPhoneNumberTaken=_isPhoneNumberTaken;
@property(readonly, nonatomic) _Bool isParentalConsentRequired; // @synthesize isParentalConsentRequired=_isParentalConsentRequired;
@property(readonly, nonatomic) _Bool simpleSacInFlow; // @synthesize simpleSacInFlow=_simpleSacInFlow;
@property(readonly, nonatomic) _Bool simpleSacOptOut; // @synthesize simpleSacOptOut=_simpleSacOptOut;
@property(readonly, nonatomic) _Bool isSimpleSACEnabled; // @synthesize isSimpleSACEnabled=_isSimpleSACEnabled;
@property(readonly, nonatomic) _Bool isSMSConsent; // @synthesize isSMSConsent=_isSMSConsent;
@property(readonly, nonatomic) NSArray *suggestedUsernames; // @synthesize suggestedUsernames=_suggestedUsernames;
@property(readonly, nonatomic) NSDictionary *facebookMeInfo; // @synthesize facebookMeInfo=_facebookMeInfo;
@property(readonly, nonatomic) long long flowType; // @synthesize flowType=_flowType;
@property(readonly, nonatomic) IGUserSession *previouslyLoggedInUserSession_DO_NOT_USE_UNLESS_YOU_KNOW_WHAT_YOU_ARE_DOING; // @synthesize previouslyLoggedInUserSession_DO_NOT_USE_UNLESS_YOU_KNOW_WHAT_YOU_ARE_DOING=_previouslyLoggedInUserSession_DO_NOT_USE_UNLESS_YOU_KNOW_WHAT_YOU_ARE_DOING;
@property(readonly, nonatomic) IGDeviceSession *deviceSession; // @synthesize deviceSession=_deviceSession;
@property(readonly, nonatomic) IGAuthHeaderStore *authHeaderStore; // @synthesize authHeaderStore=_authHeaderStore;
@property(readonly, nonatomic) IGRegistrationLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) _Bool flowStartsDirectlyFromMAS; // @synthesize flowStartsDirectlyFromMAS=_flowStartsDirectlyFromMAS;
@property(readonly, nonatomic) IGSSOFetcher *ssoFetcher; // @synthesize ssoFetcher=_ssoFetcher;
@property(readonly, nonatomic) IGContactPointPrefillDataFetcher *contactPointPrefillDataFetcher; // @synthesize contactPointPrefillDataFetcher=_contactPointPrefillDataFetcher;
@property(readonly, nonatomic) IGFacebookAuthHelper *fbAuthHelper; // @synthesize fbAuthHelper=_fbAuthHelper;
@property(readonly, nonatomic) id <IGConcurrentSessionHandling> concurrentUserSessionHandler; // @synthesize concurrentUserSessionHandler=_concurrentUserSessionHandler;
@property(readonly, nonatomic) IGAccountStoreCoordinator *accountStoreCoordinator; // @synthesize accountStoreCoordinator=_accountStoreCoordinator;
@property(readonly, nonatomic) IGAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(readonly, nonatomic) id <IGAPIClient> loggedOutNetworker; // @synthesize loggedOutNetworker=_loggedOutNetworker;
@property(readonly, nonatomic) __weak id <IGAuthenticationFlowDismissDelegate> flowDismissDelegate; // @synthesize flowDismissDelegate=_flowDismissDelegate;
@property(readonly, nonatomic) IGRegistrationFlowConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) IGNUXFBContent *igNUXFBContent; // @synthesize igNUXFBContent=_igNUXFBContent;
- (void)updateWithCALRegFlow:(id)arg1;
- (void)updateContextWithSavedContextEncodedString:(id)arg1;
- (id)savedContextEncodedStringWithEmail:(id)arg1 regWithSharedEmail:(_Bool)arg2 flowType:(long long)arg3;
- (id)savedContextEncodedString;
- (void)updateIsSavePasswordInterstitialSurfaced:(_Bool)arg1;
- (void)updateEnableEmailConfirmationWithLink:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canEnterContactPoint;
- (void)updateFacebookInfo:(id)arg1;
- (void)updateWithIGNUXFBContent:(id)arg1;
- (void)updateFBContent:(id)arg1;
- (void)updateForceCALStepWithContactPointClaiming:(_Bool)arg1;
- (void)updateWithFbSACCalUserConsentAccepted:(_Bool)arg1;
- (void)updateFbCALAccepted:(_Bool)arg1;
- (void)updateWithNativeTokenExists:(_Bool)arg1;
- (void)updateWithIsSeparateToSRequired:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isToSAcceptanceNotRequired; // @synthesize isToSAcceptanceNotRequired=_isToSAcceptanceNotRequired;
@property(readonly, nonatomic) _Bool isAgeRequired; // @synthesize isAgeRequired=_isAgeRequired;
@property(readonly, nonatomic) _Bool isGDPRRequired; // @synthesize isGDPRRequired=_isGDPRRequired;
- (void)updateActorEmail:(id)arg1 phoneNumber:(id)arg2;
- (void)updateRegistrationIntentCollectionContext:(id)arg1;
- (void)updateDoB:(id)arg1;
- (void)updatePersistentLoginAccounts:(id)arg1;
- (void)updateChosenMainAccountPK:(id)arg1;
- (void)updateChosenMainAccountUsername:(id)arg1;
- (void)updateSavePasswordEnabled:(_Bool)arg1;
- (void)updateWithForceSignUpCode:(id)arg1;
- (void)updateWithSmsVerificationCode:(id)arg1;
- (void)updateWithTosVersion:(id)arg1;
- (void)updateWithPassword:(id)arg1;
- (void)updateWithFullName:(id)arg1;
- (void)updateWithUsername:(id)arg1;
- (void)updateExistingAccountPrefillEmail:(id)arg1;
- (void)updateWithEmail:(id)arg1 regWithSharedEmail:(_Bool)arg2 requireEmailVerification:(_Bool)arg3;
- (void)updateWithPhoneNumber:(id)arg1;
- (void)updateWithFacebookAccessToken:(id)arg1;
- (void)updateWithWasLoginUpsellShown:(_Bool)arg1;
- (void)updateWithIsPhoneNumberTaken:(_Bool)arg1;
- (void)updateWithIsParentalConsentRequired:(_Bool)arg1;
- (void)updateSimpleSacInFlow:(_Bool)arg1;
- (void)updateWithSimpleSacOptOut:(_Bool)arg1;
- (void)updateWithIsSimpleSACEnabled:(_Bool)arg1;
- (void)updateWithIsToSAcceptanceNotRequired:(_Bool)arg1;
- (void)updateWithIsAgeRequired:(_Bool)arg1;
- (void)updateWithIsGDPRRequired:(_Bool)arg1;
- (void)updateWithIsSMSConsent:(_Bool)arg1;
- (void)ingestSuggestedUsernames:(id)arg1;
- (void)updateWithFlowType:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *flowTypeString;
- (id)initWithConfiguration:(id)arg1 facebookMeInfo:(id)arg2 deviceSession:(id)arg3 loggedOutNetworker:(id)arg4 authenticator:(id)arg5 accountStoreCoordinator:(id)arg6 concurrentUserSessionHandler:(id)arg7 proAccountCreationContext:(id)arg8 actorAccount:(id)arg9 authHeaderStore:(id)arg10 fbAuthHelper:(id)arg11 contactPointPrefillDataFetcher:(id)arg12 ssoFetcher:(id)arg13 flowStartsDirectlyFromMAS:(_Bool)arg14 logger:(id)arg15 registrationIntentCollectionContext:(id)arg16 cancelSwitchDestinationAppSurface:(id)arg17 flowDismissDelegate:(id)arg18 calRegFlow:(id)arg19 previouslyLoggedInUserSession_DO_NOT_USE_UNLESS_YOU_KNOW_WHAT_YOU_ARE_DOING:(id)arg20;

@end

