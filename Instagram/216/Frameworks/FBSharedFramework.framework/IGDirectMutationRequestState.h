//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGDirectMutationRequest, IGDirectMutationRequestExecutionState, NSObject;
@protocol NSCopying><NSCoding;

@interface IGDirectMutationRequestState : FBValueObject <NSCopying, NSCoding>
{
    IGDirectMutationRequest *_mutationRequest;
    IGDirectMutationRequestExecutionState *_executionState;
    unsigned long long _attemptedCount;
    NSObject<NSCopying><NSCoding> *_additionalData;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *additionalData; // @synthesize additionalData=_additionalData;
@property(readonly, nonatomic) unsigned long long attemptedCount; // @synthesize attemptedCount=_attemptedCount;
@property(readonly, copy, nonatomic) IGDirectMutationRequestExecutionState *executionState; // @synthesize executionState=_executionState;
@property(readonly, copy, nonatomic) IGDirectMutationRequest *mutationRequest; // @synthesize mutationRequest=_mutationRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMutationRequest:(id)arg1 executionState:(id)arg2 attemptedCount:(unsigned long long)arg3 additionalData:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end
