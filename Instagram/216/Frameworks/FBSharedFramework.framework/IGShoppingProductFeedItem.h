//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGMedia, IGProductItem, IGShoppingCheckerTileDataModel, IGShoppingProductTileDataModel, IGUnavailableProductItem;

@interface IGShoppingProductFeedItem : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGProductItem *_product;
    IGUnavailableProductItem *_unavailableProduct;
    IGShoppingCheckerTileDataModel *_checkerTile;
    IGShoppingProductTileDataModel *_productTile;
    IGMedia *_media;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
+ (id)unavailableProduct:(id)arg1;
+ (id)productTile:(id)arg1;
+ (id)product:(id)arg1;
+ (id)media:(id)arg1;
+ (id)checkerTile:(id)arg1;
- (void).cxx_destruct;
- (void)matchProduct:(CDUnknownBlockType)arg1 unavailableProduct:(CDUnknownBlockType)arg2 checkerTile:(CDUnknownBlockType)arg3 productTile:(CDUnknownBlockType)arg4 media:(CDUnknownBlockType)arg5;
- (_Bool)matchBooleanProduct:(CDUnknownBlockType)arg1 unavailableProduct:(CDUnknownBlockType)arg2 checkerTile:(CDUnknownBlockType)arg3 productTile:(CDUnknownBlockType)arg4 media:(CDUnknownBlockType)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)productTile;
- (id)productRepresentation;
- (id)productItem;
- (id)productItemPk;

@end

