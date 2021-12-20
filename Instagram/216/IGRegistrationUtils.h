//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGRegistrationUtils : NSObject
{
}

+ (void)parseAndSaveFbInfoTFlowoContextWithFBInfo:(id)arg1 context:(id)arg2;
+ (void)accountCreatedWithSignUpResult:(id)arg1 isSwitchingUsers:(_Bool)arg2 isMultipleUsersOnDevice:(_Bool)arg3;
+ (void)accountRegistrationFailedHandlerWithResponse:(id)arg1 error:(id)arg2 existingAccountErrorCancelBlock:(CDUnknownBlockType)arg3 existingAccountErrorOtherBlock:(CDUnknownBlockType)arg4 passwordErrorOtherBlock:(CDUnknownBlockType)arg5 networkErrorBlock:(CDUnknownBlockType)arg6 unkownErrorBlock:(CDUnknownBlockType)arg7;
+ (void)showExistingAccountAlertForUsername:(id)arg1 errorMessage:(id)arg2 existingAccountErrorCancelBlock:(CDUnknownBlockType)arg3 existingAccountOtherBlock:(CDUnknownBlockType)arg4;
+ (void)signUpRequestfailureHandler:(id)arg1;
+ (_Bool)isUsernameFieldEmptyAndShowEmptyError:(id)arg1 usernameStepView:(id)arg2;
+ (id)createProSignUpFormWithSourceAccountId:(id)arg1 businessFullName:(id)arg2 forceSignUpCode:(id)arg3 username:(id)arg4 password:(id)arg5 email:(id)arg6 phoneNumber:(id)arg7 inferredAccountType:(long long)arg8 categoryID:(id)arg9 entryPoint:(id)arg10 shouldShowCategory:(_Bool)arg11 SMSSignUpCode:(id)arg12 pageId:(id)arg13 gdprState:(id)arg14 tosVersion:(id)arg15 dob:(id)arg16 fbAccessTokenString:(id)arg17 facebookAccessToken:(id)arg18 sourceAccountType:(id)arg19;
+ (id)createSecondaryAccountSignUpFormWithUsername:(id)arg1 password:(id)arg2 dob:(id)arg3 intentCollectionContext:(id)arg4;
+ (id)createAccountLinkingSignUpFormWithUsername:(id)arg1 tosVersion:(id)arg2 intentCollectionContext:(id)arg3;
+ (id)createSignUpFormWithEmail:(id)arg1 isPhoneReg:(_Bool)arg2 forceSignUpCode:(id)arg3 username:(id)arg4 password:(id)arg5 fullName:(id)arg6 skipEmail:(_Bool)arg7 SMSSignUpCode:(id)arg8 phoneNumber:(id)arg9 isSMSEnabled:(_Bool)arg10 fbAccessTokenString:(id)arg11 facebookAccessToken:(id)arg12 isFBSignUp:(_Bool)arg13 gdprState:(id)arg14 tosVersion:(id)arg15 dob:(id)arg16 isSecondaryAccountCreation:(_Bool)arg17 intentCollectionContext:(id)arg18;
+ (id)validateUsernameField:(id)arg1 usernameStepView:(id)arg2 password:(id)arg3 isEligibleForUsernameSuggestions:(_Bool)arg4 networker:(id)arg5 failureBlock:(CDUnknownBlockType)arg6 successBlock:(CDUnknownBlockType)arg7;

@end

