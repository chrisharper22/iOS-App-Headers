//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class NSString;

@interface FBMQTTTypingAttribution : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_inThreadAppId;
    long long __thrift_pageId;
    NSString *__thrift_extensionType;
    NSString *__thrift_genericAttributionType;
    _Bool __thrift_inThreadAppId_set;
    _Bool __thrift_pageId_set;
    _Bool __thrift_extensionType_set;
    _Bool __thrift_genericAttributionType_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetGenericAttributionType;
- (_Bool)genericAttributionTypeIsSet;
@property(retain, nonatomic) NSString *genericAttributionType;
- (void)unsetExtensionType;
- (_Bool)extensionTypeIsSet;
@property(retain, nonatomic) NSString *extensionType;
- (void)unsetPageId;
- (_Bool)pageIdIsSet;
@property(nonatomic) long long pageId;
- (void)unsetInThreadAppId;
- (_Bool)inThreadAppIdIsSet;
@property(nonatomic) long long inThreadAppId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInThreadAppId:(long long)arg1 pageId:(long long)arg2 extensionType:(id)arg3 genericAttributionType:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
