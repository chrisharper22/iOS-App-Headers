//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface FBMQTTGroupCreationMutationReponse : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_threadId;
    NSMutableArray *__thrift_blockedParticiants;
    NSString *__thrift_threadInfo;
    _Bool __thrift_isRetryable;
    int __thrift_errorCode;
    NSString *__thrift_errorMessage;
    NSMutableDictionary *__thrift_extra;
    _Bool __thrift_threadId_set;
    _Bool __thrift_blockedParticiants_set;
    _Bool __thrift_threadInfo_set;
    _Bool __thrift_isRetryable_set;
    _Bool __thrift_errorCode_set;
    _Bool __thrift_errorMessage_set;
    _Bool __thrift_extra_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetExtra;
- (_Bool)extraIsSet;
@property(retain, nonatomic) NSMutableDictionary *extra;
- (void)unsetErrorMessage;
- (_Bool)errorMessageIsSet;
@property(retain, nonatomic) NSString *errorMessage;
- (void)unsetErrorCode;
- (_Bool)errorCodeIsSet;
@property(nonatomic) int errorCode;
- (void)unsetIsRetryable;
- (_Bool)isRetryableIsSet;
@property(nonatomic) _Bool isRetryable;
- (void)unsetThreadInfo;
- (_Bool)threadInfoIsSet;
@property(retain, nonatomic) NSString *threadInfo;
- (void)unsetBlockedParticiants;
- (_Bool)blockedParticiantsIsSet;
@property(retain, nonatomic) NSMutableArray *blockedParticiants;
- (void)unsetThreadId;
- (_Bool)threadIdIsSet;
@property(nonatomic) long long threadId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThreadId:(long long)arg1 blockedParticiants:(id)arg2 threadInfo:(id)arg3 isRetryable:(_Bool)arg4 errorCode:(int)arg5 errorMessage:(id)arg6 extra:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

