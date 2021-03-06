//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGSavableObject-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGPhoto, IGUser, NSString;

@interface IGUnavailableProductItem : FBValueObject <IGSavableObject, NSCopying, NSCoding>
{
    NSString *_pk;
    IGUser *_merchant;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGUser *merchant; // @synthesize merchant=_merchant;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPk:(id)arg1 merchant:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) IGPhoto *savePhoto;
@property(readonly, copy) NSString *saveId;
@property(readonly) long long saveItemType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

