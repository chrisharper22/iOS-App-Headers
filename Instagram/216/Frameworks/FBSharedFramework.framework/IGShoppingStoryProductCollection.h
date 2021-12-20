//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGShoppingFormatsProductCollectionCoverMedia, IGShoppingProductCollectionDropsMetadata, IGShoppingStoryProductCollectionMetadata, IGUser, NSString;

@interface IGShoppingStoryProductCollection : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_title;
    IGShoppingStoryProductCollectionMetadata *_destinationMetadata;
    IGShoppingProductCollectionDropsMetadata *_dropsCollectionMetadata;
    IGShoppingFormatsProductCollectionCoverMedia *_coverMedia;
    IGUser *_merchant;
    NSString *_collectionId;
    NSString *_collectionType;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *collectionType; // @synthesize collectionType=_collectionType;
@property(readonly, copy, nonatomic) NSString *collectionId; // @synthesize collectionId=_collectionId;
@property(readonly, copy, nonatomic) IGUser *merchant; // @synthesize merchant=_merchant;
@property(readonly, copy, nonatomic) IGShoppingFormatsProductCollectionCoverMedia *coverMedia; // @synthesize coverMedia=_coverMedia;
@property(readonly, copy, nonatomic) IGShoppingProductCollectionDropsMetadata *dropsCollectionMetadata; // @synthesize dropsCollectionMetadata=_dropsCollectionMetadata;
@property(readonly, copy, nonatomic) IGShoppingStoryProductCollectionMetadata *destinationMetadata; // @synthesize destinationMetadata=_destinationMetadata;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTitle:(id)arg1 destinationMetadata:(id)arg2 dropsCollectionMetadata:(id)arg3 coverMedia:(id)arg4 merchant:(id)arg5 collectionId:(id)arg6 collectionType:(id)arg7;
- (id)initWithCoder:(id)arg1;

@end
