//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGBusinessConversionHelper : NSObject
{
}

+ (void)fetchAccountTypeQuickConversionSettingsWithActorAccount:(id)arg1 concurrentUserSessionHandler:(id)arg2 facebookAuthToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (id)fbIdentityProvisionerWithFacebookHelper:(id)arg1 launcherSet:(id)arg2;
+ (_Bool)checkPageInfoValidityOnClientOnlyWithInfo:(id)arg1 error:(id *)arg2;
+ (void)updateProfileDisplayOptionsWithCompletion:(CDUnknownBlockType)arg1 userSession:(id)arg2 shouldShowCategory:(_Bool)arg3 shouldShowPublicContacts:(_Bool)arg4;
+ (void)switchBackToPersonalAccountFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 userSession:(id)arg3;
+ (void)_finishConversionWithPageInfo:(id)arg1 skipStorePageToken:(_Bool)arg2 categoryID:(id)arg3 entryPoint:(id)arg4 completion:(CDUnknownBlockType)arg5 userSession:(id)arg6 shouldBypassContactCheck:(_Bool)arg7 toAccountType:(long long)arg8 shouldShowCategoryModel:(id)arg9 shouldShowPublicContactsModel:(id)arg10 shouldIgnoreServerConversionLog:(_Bool)arg11;
+ (void)finishConversionWithPageInfo:(id)arg1 skipStorePageToken:(_Bool)arg2 categoryID:(id)arg3 entryPoint:(id)arg4 completion:(CDUnknownBlockType)arg5 userSession:(id)arg6 shouldBypassContactCheck:(_Bool)arg7 toAccountType:(long long)arg8 shouldShowCategory:(_Bool)arg9 shouldShowPublicContacts:(_Bool)arg10 shouldIgnoreServerConversionLog:(_Bool)arg11;
+ (void)finishConversionWithPageInfo:(id)arg1 skipStorePageToken:(_Bool)arg2 categoryID:(id)arg3 entryPoint:(id)arg4 completion:(CDUnknownBlockType)arg5 userSession:(id)arg6 shouldBypassContactCheck:(_Bool)arg7 toAccountType:(long long)arg8 shouldIgnoreServerConversionLog:(_Bool)arg9;
+ (void)_configureBuilder:(id)arg1 withPageInfo:(id)arg2;
+ (void)_handleNewSwitchBackToPersonalWithCompletion:(CDUnknownBlockType)arg1 userSession:(id)arg2;
+ (void)_configureBuilderWithCurrentFacebookInfo:(id)arg1 facebookHelper:(id)arg2 launcherSet:(id)arg3 error:(id *)arg4;
+ (void)_configureBuilderWithCurrentFacebookInfo:(id)arg1 facebookAuthToken:(id)arg2 error:(id *)arg3;
+ (void)updateProfileWithPageInfo:(id)arg1 networker:(id)arg2 userUpdater:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)facebookPageImportText;
+ (id)cityPlaceholderText;
+ (id)addressPlaceholderTextWithUserSession:(id)arg1;
+ (id)pageImportField:(_Bool)arg1;
+ (id)profileActionButtonField;
+ (id)whatsAppField;
+ (id)addressField;
+ (id)emailFieldWithUserSession:(id)arg1;
+ (id)basicPhoneNumberFieldWithUserSession:(id)arg1;

@end

