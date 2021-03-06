//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class IGThreadCopresenceContextMutation, NSString;

@interface InstagramContextualPresenceMutationArgs : TBaseStruct <TBase, NSCoding>
{
    IGThreadCopresenceContextMutation *__thrift_threadCopresenceMutation;
    _Bool __thrift_threadCopresenceMutation_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetThreadCopresenceMutation;
- (_Bool)threadCopresenceMutationIsSet;
@property(retain, nonatomic) IGThreadCopresenceContextMutation *threadCopresenceMutation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThreadCopresenceMutation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

