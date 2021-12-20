//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface FBMQTTForegroundState : TBaseStruct <TBase, NSCoding>
{
    _Bool __thrift_inForegroundApp;
    _Bool __thrift_inForegroundDevice;
    int __thrift_keepAliveTimeout;
    NSMutableArray *__thrift_subscribeTopics;
    NSMutableArray *__thrift_subscribeGenericTopics;
    NSMutableArray *__thrift_unsubscribeTopics;
    NSMutableArray *__thrift_unsubscribeGenericTopics;
    long long __thrift_requestId;
    NSString *__thrift_clientRequestId;
    _Bool __thrift_inForegroundApp_set;
    _Bool __thrift_inForegroundDevice_set;
    _Bool __thrift_keepAliveTimeout_set;
    _Bool __thrift_subscribeTopics_set;
    _Bool __thrift_subscribeGenericTopics_set;
    _Bool __thrift_unsubscribeTopics_set;
    _Bool __thrift_unsubscribeGenericTopics_set;
    _Bool __thrift_requestId_set;
    _Bool __thrift_clientRequestId_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetClientRequestId;
- (_Bool)clientRequestIdIsSet;
@property(retain, nonatomic) NSString *clientRequestId;
- (void)unsetRequestId;
- (_Bool)requestIdIsSet;
@property(nonatomic) long long requestId;
- (void)unsetUnsubscribeGenericTopics;
- (_Bool)unsubscribeGenericTopicsIsSet;
@property(retain, nonatomic) NSMutableArray *unsubscribeGenericTopics;
- (void)unsetUnsubscribeTopics;
- (_Bool)unsubscribeTopicsIsSet;
@property(retain, nonatomic) NSMutableArray *unsubscribeTopics;
- (void)unsetSubscribeGenericTopics;
- (_Bool)subscribeGenericTopicsIsSet;
@property(retain, nonatomic) NSMutableArray *subscribeGenericTopics;
- (void)unsetSubscribeTopics;
- (_Bool)subscribeTopicsIsSet;
@property(retain, nonatomic) NSMutableArray *subscribeTopics;
- (void)unsetKeepAliveTimeout;
- (_Bool)keepAliveTimeoutIsSet;
@property(nonatomic) int keepAliveTimeout;
- (void)unsetInForegroundDevice;
- (_Bool)inForegroundDeviceIsSet;
@property(nonatomic) _Bool inForegroundDevice;
- (void)unsetInForegroundApp;
- (_Bool)inForegroundAppIsSet;
@property(nonatomic) _Bool inForegroundApp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInForegroundApp:(_Bool)arg1 inForegroundDevice:(_Bool)arg2 keepAliveTimeout:(int)arg3 subscribeTopics:(id)arg4 subscribeGenericTopics:(id)arg5 unsubscribeTopics:(id)arg6 unsubscribeGenericTopics:(id)arg7 requestId:(long long)arg8 clientRequestId:(id)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
