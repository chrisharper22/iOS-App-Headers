//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface FBMQTTClientInfo : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_userId;
    NSString *__thrift_userAgent;
    long long __thrift_clientCapabilities;
    long long __thrift_endpointCapabilities;
    int __thrift_publishFormat;
    _Bool __thrift_noAutomaticForeground;
    _Bool __thrift_makeUserAvailableInForeground;
    NSString *__thrift_deviceId;
    _Bool __thrift_isInitiallyForeground;
    int __thrift_networkType;
    int __thrift_networkSubtype;
    long long __thrift_clientMqttSessionId;
    NSString *__thrift_clientIpAddress;
    NSMutableArray *__thrift_subscribeTopics;
    NSString *__thrift_clientType;
    long long __thrift_appId;
    _Bool __thrift_overrideNectarLogging;
    NSData *__thrift_connectTokenHash;
    NSString *__thrift_regionPreference;
    NSString *__thrift_deviceSecret;
    unsigned char __thrift_clientStack;
    long long __thrift_fbnsConnectionKey;
    NSString *__thrift_fbnsConnectionSecret;
    NSString *__thrift_fbnsDeviceId;
    NSString *__thrift_fbnsDeviceSecret;
    long long __thrift_luid;
    int __thrift_networkTypeInfo;
    NSString *__thrift_sslFingerprint;
    NSString *__thrift_tcpFingerprint;
    _Bool __thrift_userId_set;
    _Bool __thrift_userAgent_set;
    _Bool __thrift_clientCapabilities_set;
    _Bool __thrift_endpointCapabilities_set;
    _Bool __thrift_publishFormat_set;
    _Bool __thrift_noAutomaticForeground_set;
    _Bool __thrift_makeUserAvailableInForeground_set;
    _Bool __thrift_deviceId_set;
    _Bool __thrift_isInitiallyForeground_set;
    _Bool __thrift_networkType_set;
    _Bool __thrift_networkSubtype_set;
    _Bool __thrift_clientMqttSessionId_set;
    _Bool __thrift_clientIpAddress_set;
    _Bool __thrift_subscribeTopics_set;
    _Bool __thrift_clientType_set;
    _Bool __thrift_appId_set;
    _Bool __thrift_overrideNectarLogging_set;
    _Bool __thrift_connectTokenHash_set;
    _Bool __thrift_regionPreference_set;
    _Bool __thrift_deviceSecret_set;
    _Bool __thrift_clientStack_set;
    _Bool __thrift_fbnsConnectionKey_set;
    _Bool __thrift_fbnsConnectionSecret_set;
    _Bool __thrift_fbnsDeviceId_set;
    _Bool __thrift_fbnsDeviceSecret_set;
    _Bool __thrift_luid_set;
    _Bool __thrift_networkTypeInfo_set;
    _Bool __thrift_sslFingerprint_set;
    _Bool __thrift_tcpFingerprint_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetTcpFingerprint;
- (_Bool)tcpFingerprintIsSet;
@property(retain, nonatomic) NSString *tcpFingerprint;
- (void)unsetSslFingerprint;
- (_Bool)sslFingerprintIsSet;
@property(retain, nonatomic) NSString *sslFingerprint;
- (void)unsetNetworkTypeInfo;
- (_Bool)networkTypeInfoIsSet;
@property(nonatomic) int networkTypeInfo;
- (void)unsetLuid;
- (_Bool)luidIsSet;
@property(nonatomic) long long luid;
- (void)unsetFbnsDeviceSecret;
- (_Bool)fbnsDeviceSecretIsSet;
@property(retain, nonatomic) NSString *fbnsDeviceSecret;
- (void)unsetFbnsDeviceId;
- (_Bool)fbnsDeviceIdIsSet;
@property(retain, nonatomic) NSString *fbnsDeviceId;
- (void)unsetFbnsConnectionSecret;
- (_Bool)fbnsConnectionSecretIsSet;
@property(retain, nonatomic) NSString *fbnsConnectionSecret;
- (void)unsetFbnsConnectionKey;
- (_Bool)fbnsConnectionKeyIsSet;
@property(nonatomic) long long fbnsConnectionKey;
- (void)unsetClientStack;
- (_Bool)clientStackIsSet;
@property(nonatomic) unsigned char clientStack;
- (void)unsetDeviceSecret;
- (_Bool)deviceSecretIsSet;
@property(retain, nonatomic) NSString *deviceSecret;
- (void)unsetRegionPreference;
- (_Bool)regionPreferenceIsSet;
@property(retain, nonatomic) NSString *regionPreference;
- (void)unsetConnectTokenHash;
- (_Bool)connectTokenHashIsSet;
@property(retain, nonatomic) NSData *connectTokenHash;
- (void)unsetOverrideNectarLogging;
- (_Bool)overrideNectarLoggingIsSet;
@property(nonatomic) _Bool overrideNectarLogging;
- (void)unsetAppId;
- (_Bool)appIdIsSet;
@property(nonatomic) long long appId;
- (void)unsetClientType;
- (_Bool)clientTypeIsSet;
@property(retain, nonatomic) NSString *clientType;
- (void)unsetSubscribeTopics;
- (_Bool)subscribeTopicsIsSet;
@property(retain, nonatomic) NSMutableArray *subscribeTopics;
- (void)unsetClientIpAddress;
- (_Bool)clientIpAddressIsSet;
@property(retain, nonatomic) NSString *clientIpAddress;
- (void)unsetClientMqttSessionId;
- (_Bool)clientMqttSessionIdIsSet;
@property(nonatomic) long long clientMqttSessionId;
- (void)unsetNetworkSubtype;
- (_Bool)networkSubtypeIsSet;
@property(nonatomic) int networkSubtype;
- (void)unsetNetworkType;
- (_Bool)networkTypeIsSet;
@property(nonatomic) int networkType;
- (void)unsetIsInitiallyForeground;
- (_Bool)isInitiallyForegroundIsSet;
@property(nonatomic) _Bool isInitiallyForeground;
- (void)unsetDeviceId;
- (_Bool)deviceIdIsSet;
@property(retain, nonatomic) NSString *deviceId;
- (void)unsetMakeUserAvailableInForeground;
- (_Bool)makeUserAvailableInForegroundIsSet;
@property(nonatomic) _Bool makeUserAvailableInForeground;
- (void)unsetNoAutomaticForeground;
- (_Bool)noAutomaticForegroundIsSet;
@property(nonatomic) _Bool noAutomaticForeground;
- (void)unsetPublishFormat;
- (_Bool)publishFormatIsSet;
@property(nonatomic) int publishFormat;
- (void)unsetEndpointCapabilities;
- (_Bool)endpointCapabilitiesIsSet;
@property(nonatomic) long long endpointCapabilities;
- (void)unsetClientCapabilities;
- (_Bool)clientCapabilitiesIsSet;
@property(nonatomic) long long clientCapabilities;
- (void)unsetUserAgent;
- (_Bool)userAgentIsSet;
@property(retain, nonatomic) NSString *userAgent;
- (void)unsetUserId;
- (_Bool)userIdIsSet;
@property(nonatomic) long long userId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserId:(long long)arg1 userAgent:(id)arg2 clientCapabilities:(long long)arg3 endpointCapabilities:(long long)arg4 publishFormat:(int)arg5 noAutomaticForeground:(_Bool)arg6 makeUserAvailableInForeground:(_Bool)arg7 deviceId:(id)arg8 isInitiallyForeground:(_Bool)arg9 networkType:(int)arg10 networkSubtype:(int)arg11 clientMqttSessionId:(long long)arg12 clientIpAddress:(id)arg13 subscribeTopics:(id)arg14 clientType:(id)arg15 appId:(long long)arg16 overrideNectarLogging:(_Bool)arg17 connectTokenHash:(id)arg18 regionPreference:(id)arg19 deviceSecret:(id)arg20 clientStack:(unsigned char)arg21 fbnsConnectionKey:(long long)arg22 fbnsConnectionSecret:(id)arg23 fbnsDeviceId:(id)arg24 fbnsDeviceSecret:(id)arg25 luid:(long long)arg26 networkTypeInfo:(int)arg27 sslFingerprint:(id)arg28 tcpFingerprint:(id)arg29;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
