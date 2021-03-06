//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class FacebookContextualPresenceMutationArgs, InstagramContextualPresenceMutationArgs, NSString;

@interface ContextualPresenceMutationArgs : TBaseStruct <TBase, NSCoding>
{
    FacebookContextualPresenceMutationArgs *__thrift_facebookContext;
    InstagramContextualPresenceMutationArgs *__thrift_instagramContext;
    _Bool __thrift_facebookContext_set;
    _Bool __thrift_instagramContext_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetInstagramContext;
- (_Bool)instagramContextIsSet;
@property(retain, nonatomic) InstagramContextualPresenceMutationArgs *instagramContext;
- (void)unsetFacebookContext;
- (_Bool)facebookContextIsSet;
@property(retain, nonatomic) FacebookContextualPresenceMutationArgs *facebookContext;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFacebookContext:(id)arg1 instagramContext:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

