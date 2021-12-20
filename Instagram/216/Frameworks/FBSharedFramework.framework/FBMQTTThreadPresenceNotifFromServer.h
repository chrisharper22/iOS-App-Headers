//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class FBMQTTThreadKey, NSString;

@interface FBMQTTThreadPresenceNotifFromServer : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_sender;
    int __thrift_state;
    NSString *__thrift_deviceId;
    NSString *__thrift_appId;
    FBMQTTThreadKey *__thrift_threadKey;
    _Bool __thrift_sender_set;
    _Bool __thrift_state_set;
    _Bool __thrift_deviceId_set;
    _Bool __thrift_appId_set;
    _Bool __thrift_threadKey_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetThreadKey;
- (_Bool)threadKeyIsSet;
@property(retain, nonatomic) FBMQTTThreadKey *threadKey;
- (void)unsetAppId;
- (_Bool)appIdIsSet;
@property(retain, nonatomic) NSString *appId;
- (void)unsetDeviceId;
- (_Bool)deviceIdIsSet;
@property(retain, nonatomic) NSString *deviceId;
- (void)unsetState;
- (_Bool)stateIsSet;
@property(nonatomic) int state;
- (void)unsetSender;
- (_Bool)senderIsSet;
@property(nonatomic) long long sender;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSender:(long long)arg1 state:(int)arg2 deviceId:(id)arg3 appId:(id)arg4 threadKey:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

