//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class FBMQTTTokenBindingID, NSData, NSString;

@interface FBMQTTTokenBinding : TBaseStruct <TBase, NSCoding>
{
    _Bool __thrift_fbnsTokenBindingVerified;
    int __thrift_tokenbinding_type;
    FBMQTTTokenBindingID *__thrift_tokenbindingid;
    NSData *__thrift_signature;
    NSData *__thrift_extensions;
    _Bool __thrift_fbnsTokenBindingVerified_set;
    _Bool __thrift_tokenbinding_type_set;
    _Bool __thrift_tokenbindingid_set;
    _Bool __thrift_signature_set;
    _Bool __thrift_extensions_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetExtensions;
- (_Bool)extensionsIsSet;
@property(retain, nonatomic) NSData *extensions;
- (void)unsetSignature;
- (_Bool)signatureIsSet;
@property(retain, nonatomic) NSData *signature;
- (void)unsetTokenbindingid;
- (_Bool)tokenbindingidIsSet;
@property(retain, nonatomic) FBMQTTTokenBindingID *tokenbindingid;
- (void)unsetTokenbinding_type;
- (_Bool)tokenbinding_typeIsSet;
@property(nonatomic) int tokenbinding_type;
- (void)unsetFbnsTokenBindingVerified;
- (_Bool)fbnsTokenBindingVerifiedIsSet;
@property(nonatomic) _Bool fbnsTokenBindingVerified;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFbnsTokenBindingVerified:(_Bool)arg1 tokenbinding_type:(int)arg2 tokenbindingid:(id)arg3 signature:(id)arg4 extensions:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

