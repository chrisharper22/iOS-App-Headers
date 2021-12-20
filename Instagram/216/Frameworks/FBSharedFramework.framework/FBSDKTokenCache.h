//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKTokenCaching-Protocol.h>

@class FBSDKAccessToken, FBSDKAuthenticationToken, NSString;
@protocol FBSDKKeychainStore, FBSDKSettings;

@interface FBSDKTokenCache : NSObject <FBSDKTokenCaching>
{
    id <FBSDKSettings> _settings;
    id <FBSDKKeychainStore> _keychainStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FBSDKKeychainStore> keychainStore; // @synthesize keychainStore=_keychainStore;
@property(retain, nonatomic) id <FBSDKSettings> settings; // @synthesize settings=_settings;
- (void)clearAccessTokenCache;
- (void)clearAuthenticationTokenCache;
@property(copy, nonatomic) FBSDKAuthenticationToken *authenticationToken;
@property(copy, nonatomic) FBSDKAccessToken *accessToken;
- (id)initWithSettings:(id)arg1 keychainStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

