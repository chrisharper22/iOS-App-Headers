//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class FBMQTTThreadKey, FBMQTTTypingAttribution, NSString;

@interface FBMQTTTypingFromClientThrift : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_recipient;
    long long __thrift_sender;
    int __thrift_state;
    FBMQTTTypingAttribution *__thrift_attribution;
    FBMQTTThreadKey *__thrift_threadKey;
    _Bool __thrift_recipient_set;
    _Bool __thrift_sender_set;
    _Bool __thrift_state_set;
    _Bool __thrift_attribution_set;
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
- (void)unsetAttribution;
- (_Bool)attributionIsSet;
@property(retain, nonatomic) FBMQTTTypingAttribution *attribution;
- (void)unsetState;
- (_Bool)stateIsSet;
@property(nonatomic) int state;
- (void)unsetSender;
- (_Bool)senderIsSet;
@property(nonatomic) long long sender;
- (void)unsetRecipient;
- (_Bool)recipientIsSet;
@property(nonatomic) long long recipient;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipient:(long long)arg1 sender:(long long)arg2 state:(int)arg3 attribution:(id)arg4 threadKey:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

