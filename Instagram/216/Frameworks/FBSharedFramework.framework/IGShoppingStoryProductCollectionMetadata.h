//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGShoppingStorySellerProductCollectionMetadata;

@interface IGShoppingStoryProductCollectionMetadata : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGShoppingStorySellerProductCollectionMetadata *_sellerProductCollection;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (id)sellerProductCollection:(id)arg1;
- (void).cxx_destruct;
- (void)matchSellerProductCollection:(CDUnknownBlockType)arg1;
- (long long)matchIntegerSellerProductCollection:(CDUnknownBlockType)arg1;
- (_Bool)matchBooleanSellerProductCollection:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

