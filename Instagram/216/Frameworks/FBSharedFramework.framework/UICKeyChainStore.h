//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface UICKeyChainStore : NSObject
{
    _Bool _synchronizable;
    long long _itemClass;
    NSString *_service;
    NSString *_accessGroup;
    NSURL *_server;
    long long _protocolType;
    long long _authenticationType;
    long long _accessibility;
    long long _authenticationPolicy;
    NSString *_authenticationPrompt;
    long long _remainingRetryTime;
}

+ (id)unexpectedError:(id)arg1;
+ (id)securityError:(int)arg1;
+ (id)conversionError:(id)arg1;
+ (id)argumentError:(id)arg1;
+ (id)generatePassword;
+ (void)requestSharedWebCredentialForDomain:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestSharedWebCredentialWithCompletion:(CDUnknownBlockType)arg1;
+ (id)prettify:(void *)arg1 items:(id)arg2;
+ (id)allItemsWithItemClass:(long long)arg1;
+ (id)allKeysWithItemClass:(long long)arg1;
+ (_Bool)removeAllItemsForService:(id)arg1 accessGroup:(id)arg2 error:(id *)arg3;
+ (_Bool)removeAllItemsForService:(id)arg1 accessGroup:(id)arg2;
+ (_Bool)removeAllItemsForService:(id)arg1 error:(id *)arg2;
+ (_Bool)removeAllItemsForService:(id)arg1;
+ (_Bool)removeAllItemsWithError:(id *)arg1;
+ (_Bool)removeAllItems;
+ (_Bool)removeItemForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 error:(id *)arg4;
+ (_Bool)removeItemForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (_Bool)removeItemForKey:(id)arg1 service:(id)arg2 error:(id *)arg3;
+ (_Bool)removeItemForKey:(id)arg1 service:(id)arg2;
+ (_Bool)removeItemForKey:(id)arg1 error:(id *)arg2;
+ (_Bool)removeItemForKey:(id)arg1;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 genericAttribute:(id)arg5 error:(id *)arg6;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 genericAttribute:(id)arg5;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 error:(id *)arg5;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 genericAttribute:(id)arg4 error:(id *)arg5;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 genericAttribute:(id)arg4;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 error:(id *)arg4;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 error:(id *)arg4;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2;
+ (id)dataForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 error:(id *)arg4;
+ (id)dataForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (id)dataForKey:(id)arg1 service:(id)arg2 error:(id *)arg3;
+ (id)dataForKey:(id)arg1 service:(id)arg2;
+ (id)dataForKey:(id)arg1 error:(id *)arg2;
+ (id)dataForKey:(id)arg1;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 genericAttribute:(id)arg5 error:(id *)arg6;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 genericAttribute:(id)arg5;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 error:(id *)arg5;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 genericAttribute:(id)arg4 error:(id *)arg5;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 genericAttribute:(id)arg4;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 error:(id *)arg4;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 error:(id *)arg4;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2;
+ (id)stringForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 error:(id *)arg4;
+ (id)stringForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (id)stringForKey:(id)arg1 service:(id)arg2 error:(id *)arg3;
+ (id)stringForKey:(id)arg1 service:(id)arg2;
+ (id)stringForKey:(id)arg1 error:(id *)arg2;
+ (id)stringForKey:(id)arg1;
+ (id)keyChainStoreWithServer:(id)arg1 protocolType:(long long)arg2 authenticationType:(long long)arg3;
+ (id)keyChainStoreWithServer:(id)arg1 protocolType:(long long)arg2;
+ (id)keyChainStoreWithService:(id)arg1 accessGroup:(id)arg2;
+ (id)keyChainStoreWithService:(id)arg1;
+ (id)keyChainStore;
+ (void)setDefaultService:(id)arg1;
+ (id)defaultService;
- (void).cxx_destruct;
@property(nonatomic) long long remainingRetryTime; // @synthesize remainingRetryTime=_remainingRetryTime;
@property(retain, nonatomic) NSString *authenticationPrompt; // @synthesize authenticationPrompt=_authenticationPrompt;
@property(nonatomic) _Bool synchronizable; // @synthesize synchronizable=_synchronizable;
@property(readonly, nonatomic) long long authenticationPolicy; // @synthesize authenticationPolicy=_authenticationPolicy;
@property(nonatomic) long long accessibility; // @synthesize accessibility=_accessibility;
@property(readonly, nonatomic) long long authenticationType; // @synthesize authenticationType=_authenticationType;
@property(readonly, nonatomic) long long protocolType; // @synthesize protocolType=_protocolType;
@property(readonly, nonatomic) NSURL *server; // @synthesize server=_server;
@property(readonly, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, nonatomic) long long itemClass; // @synthesize itemClass=_itemClass;
- (void *)accessibilityObject;
- (void *)authenticationTypeObject;
- (void *)protocolTypeObject;
- (void *)itemClassObject;
- (id)attributesWithKey:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (id)query;
- (id)debugDescription;
- (id)description;
- (_Bool)synchronizeWithError:(id *)arg1;
- (void)synchronize;
- (void)removeSharedPasswordForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSharedPassword:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sharedPasswordForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sharedPasswordWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAccessibility:(long long)arg1 authenticationPolicy:(long long)arg2;
- (id)items;
@property(readonly, nonatomic) NSArray *allItems;
@property(readonly, nonatomic) NSArray *allKeys;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (_Bool)removeAllItemsWithError:(id *)arg1;
- (_Bool)removeAllItems;
- (_Bool)removeItemForKey:(id)arg1 error:(id *)arg2;
- (_Bool)removeItemForKey:(id)arg1;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 label:(id)arg4 comment:(id)arg5 error:(id *)arg6;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 label:(id)arg3 comment:(id)arg4 error:(id *)arg5;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 label:(id)arg3 comment:(id)arg4;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 error:(id *)arg4;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)setData:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (id)dataForKey:(id)arg1;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 label:(id)arg4 comment:(id)arg5 error:(id *)arg6;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 label:(id)arg3 comment:(id)arg4 error:(id *)arg5;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 label:(id)arg3 comment:(id)arg4;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 error:(id *)arg4;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1 error:(id *)arg2;
- (id)stringForKey:(id)arg1;
- (_Bool)contains:(id)arg1;
- (void)commonInit;
- (id)initWithServer:(id)arg1 protocolType:(long long)arg2 authenticationType:(long long)arg3;
- (id)initWithServer:(id)arg1 protocolType:(long long)arg2;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2;
- (id)initWithService:(id)arg1;
- (id)init;

@end

