//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface FBMQTTSubscribeMessage : TBaseStruct <TBase, NSCoding>
{
    NSMutableArray *__thrift_subscribeTopics;
    NSMutableArray *__thrift_subscribeGenericTopics;
    _Bool __thrift_subscribeTopics_set;
    _Bool __thrift_subscribeGenericTopics_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSubscribeGenericTopics;
- (_Bool)subscribeGenericTopicsIsSet;
@property(retain, nonatomic) NSMutableArray *subscribeGenericTopics;
- (void)unsetSubscribeTopics;
- (_Bool)subscribeTopicsIsSet;
@property(retain, nonatomic) NSMutableArray *subscribeTopics;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscribeTopics:(id)arg1 subscribeGenericTopics:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

