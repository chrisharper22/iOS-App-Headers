//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGShoppingHomeSellerBadge, IGShoppingTextDataModel, IGUser, NSArray, NSString;

@interface IGShoppingMerchantTileDataModel : FBValueObject <NSCopying, NSCoding>
{
    IGUser *_merchant;
    NSString *_contextInfo;
    IGShoppingTextDataModel *_subtitle;
    IGShoppingHomeSellerBadge *_sellerBadge;
    NSArray *_productItems;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *productItems; // @synthesize productItems=_productItems;
@property(readonly, copy, nonatomic) IGShoppingHomeSellerBadge *sellerBadge; // @synthesize sellerBadge=_sellerBadge;
@property(readonly, copy, nonatomic) IGShoppingTextDataModel *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(readonly, copy, nonatomic) IGUser *merchant; // @synthesize merchant=_merchant;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMerchant:(id)arg1 contextInfo:(id)arg2 subtitle:(id)arg3 sellerBadge:(id)arg4 productItems:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end
