//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGShoppingFormatsProductCollectionDataModel, NSArray;

@interface IGTVShoppingUploadMetadataProductInfo : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    NSArray *_products;
    IGShoppingFormatsProductCollectionDataModel *_collection;
}

+ (id)products:(id)arg1;
+ (id)collection:(id)arg1;
- (void).cxx_destruct;
- (void)matchProducts:(CDUnknownBlockType)arg1 collection:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)collection;
- (id)productItems;

@end

