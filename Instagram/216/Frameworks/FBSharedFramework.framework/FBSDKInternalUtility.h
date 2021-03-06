//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKAppAvailabilityChecker-Protocol.h>
#import <FBSharedFramework/FBSDKAppURLSchemeProviding-Protocol.h>
#import <FBSharedFramework/FBSDKInternalUtility-Protocol.h>
#import <FBSharedFramework/FBSDKURLHosting-Protocol.h>

@class NSBundle;
@protocol FBSDKInfoDictionaryProviding, __FBSDKLoggerCreating;

@interface FBSDKInternalUtility : NSObject <FBSDKAppAvailabilityChecker, FBSDKAppURLSchemeProviding, FBSDKInternalUtility, FBSDKURLHosting>
{
    _Bool _isConfigured;
    id <__FBSDKLoggerCreating> _loggerFactory;
    id <FBSDKInfoDictionaryProviding> _infoDictionaryProvider;
}

+ (id)sharedUtility;
- (void).cxx_destruct;
@property(retain, nonatomic) id <FBSDKInfoDictionaryProviding> infoDictionaryProvider; // @synthesize infoDictionaryProvider=_infoDictionaryProvider;
@property(nonatomic) _Bool isConfigured; // @synthesize isConfigured=_isConfigured;
@property(retain, nonatomic) id <__FBSDKLoggerCreating> loggerFactory; // @synthesize loggerFactory=_loggerFactory;
- (void)validateConfiguration;
- (_Bool)isUnity;
- (_Bool)isPublishPermission:(id)arg1;
- (_Bool)isRegisteredCanOpenURLScheme:(id)arg1;
- (void)checkRegisteredCanOpenURLScheme:(id)arg1;
- (_Bool)isRegisteredURLScheme:(id)arg1;
- (id)hexadecimalStringFromData:(id)arg1;
- (long long)statusBarOrientation;
- (id)topMostViewController;
- (id)findWindow;
- (void)extendDictionaryWithDataProcessingOptions:(id)arg1;
- (void)validateFacebookReservedURLSchemes;
- (void)validateURLSchemes;
- (id)validateRequiredClientAccessToken;
- (void)validateAppID;
- (_Bool)_canOpenURLScheme:(id)arg1;
@property(readonly, nonatomic) _Bool isMessengerAppInstalled;
@property(readonly, nonatomic) _Bool isFacebookAppInstalled;
- (id)viewControllerForView:(id)arg1;
- (void)unregisterTransientObject:(id)arg1;
- (void)registerTransientObject:(id)arg1;
- (void)deleteFacebookCookies;
- (id)URLWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 queryParameters:(id)arg4 error:(id *)arg5;
- (CDStruct_2ec95fd7)operatingSystemVersion;
- (_Bool)object:(id)arg1 isEqualToObject:(id)arg2;
- (_Bool)isSafariBundleIdentifier:(id)arg1;
- (_Bool)isFacebookBundleIdentifier:(id)arg1;
- (_Bool)isBrowserURL:(id)arg1;
- (id)_facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 defaultVersion:(id)arg4 error:(id *)arg5;
- (id)unversionedFacebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id *)arg4;
- (id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 defaultVersion:(id)arg4 error:(id *)arg5;
- (id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id *)arg4;
- (void)extractPermissionsFromResponse:(id)arg1 grantedPermissions:(id)arg2 declinedPermissions:(id)arg3 expiredPermissions:(id)arg4;
- (unsigned long long)currentTimeInMilliseconds;
@property(readonly, nonatomic) NSBundle *bundleForStrings;
- (id)parametersFromFBURL:(id)arg1;
- (id)appURLWithHost:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id *)arg4;
- (id)appURLScheme;
- (void)configureWithInfoDictionaryProvider:(id)arg1 loggerFactory:(id)arg2;

@end

