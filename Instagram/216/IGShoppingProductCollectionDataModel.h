//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGShoppingProductCollectionAdFooterDataModel, IGShoppingProductCollectionHeaderDataModel, IGShoppingProductCollectionPivotDataModel, IGShoppingProductFeedResponse;

@interface IGShoppingProductCollectionDataModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isFromContentTile;
    IGShoppingProductCollectionHeaderDataModel *_headerDataModel;
    IGShoppingProductFeedResponse *_productFeedResponse;
    IGShoppingProductCollectionPivotDataModel *_pivotDataModel;
    IGShoppingProductCollectionAdFooterDataModel *_footerDataModel;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGShoppingProductCollectionAdFooterDataModel *footerDataModel; // @synthesize footerDataModel=_footerDataModel;
@property(readonly, nonatomic) _Bool isFromContentTile; // @synthesize isFromContentTile=_isFromContentTile;
@property(readonly, copy, nonatomic) IGShoppingProductCollectionPivotDataModel *pivotDataModel; // @synthesize pivotDataModel=_pivotDataModel;
@property(readonly, copy, nonatomic) IGShoppingProductFeedResponse *productFeedResponse; // @synthesize productFeedResponse=_productFeedResponse;
@property(readonly, copy, nonatomic) IGShoppingProductCollectionHeaderDataModel *headerDataModel; // @synthesize headerDataModel=_headerDataModel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithHeaderDataModel:(id)arg1 productFeedResponse:(id)arg2 pivotDataModel:(id)arg3 isFromContentTile:(_Bool)arg4 footerDataModel:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end

