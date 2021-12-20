//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBKeyValueDataStore-Protocol.h>
#import <FBSharedFramework/THDataStore-Protocol.h>

@class IGFiloWritableKeyedContainer, NSString, NSUserDefaults;

@interface IGUserDefaults : NSObject <THDataStore, FBKeyValueDataStore>
{
    NSString *_userPK;
    IGFiloWritableKeyedContainer *_accessTokenContainer;
    NSUserDefaults *_internalUserDefaults;
}

+ (id)threadsOnlyDefaults:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *internalUserDefaults; // @synthesize internalUserDefaults=_internalUserDefaults;
@property(retain, nonatomic) IGFiloWritableKeyedContainer *accessTokenContainer; // @synthesize accessTokenContainer=_accessTokenContainer;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (float)floatForKey:(id)arg1;
- (_Bool)synchronize;
- (id)dictionaryRepresentation;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 inUserInfoForService:(id)arg2;
- (void)deleteUserInfoForService:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 andService:(id)arg3;
- (void)setUserInfo:(id)arg1 forService:(id)arg2;
- (id)objectForKey:(id)arg1 andService:(id)arg2;
- (id)userInfoForService:(id)arg1;
- (_Bool)hasAccessTokenExpiredForService:(id)arg1;
- (void)deleteAccessTokenForService:(id)arg1;
- (void)setRefreshToken:(id)arg1 forService:(id)arg2;
- (void)setAccessToken:(id)arg1 forService:(id)arg2;
- (void)setAccessTokenExpiration:(int)arg1 forService:(id)arg2;
- (void)expireAccessTokenForService:(id)arg1;
- (void)setAccessTokenWithExpiration:(id)arg1 expirationInSeconds:(int)arg2 forService:(id)arg3;
- (id)refreshTokenForService:(id)arg1;
- (id)accessTokenForService:(id)arg1;
- (void)deletePasswordForUsername:(id)arg1 andService:(id)arg2;
- (void)setUsername:(id)arg1 andPassword:(id)arg2 forService:(id)arg3;
- (id)passwordForUsername:(id)arg1 andService:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)_userInfoKeyForService:(id)arg1;
- (id)_doubleUserPrefixedKey:(id)arg1;
- (id)_userPrefixedKey:(id)arg1;
- (void)_migrateToSharedStorage;
- (id)userPK;
- (id)initWithUserPk:(id)arg1 userDefaults:(id)arg2;
- (id)initWithUserPK:(id)arg1;
- (void)removeDataForKey:(id)arg1 error:(id *)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)getDataForKey:(id)arg1 error:(id *)arg2;
- (long long)defaultTextAutocapitalizationType;
- (id)_userPrefix;
- (_Bool)_isKeyRelatedToCurrentUser:(id)arg1;
- (id)_settingNameForKey:(id)arg1;
- (id)userRelatedSettingKeys;
- (void)clearUserRelatedSettings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
