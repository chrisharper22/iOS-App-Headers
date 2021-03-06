//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGShoppingCartItemCount, IGShoppingIGFundedIncentive, NSArray, NSDictionary, NSOrderedSet;

@interface IGShoppingCartStore : NSObject <NSCopying>
{
    NSOrderedSet *_merchantPks;
    NSDictionary *_merchantPkToBagMap;
    int _prefetchAttemptCount;
    NSArray *_allCarts;
    NSArray *_productCollections;
    IGShoppingIGFundedIncentive *_igFundedIncentive;
    IGShoppingCartItemCount *_totalItemCountDescriptor;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGShoppingCartItemCount *totalItemCountDescriptor; // @synthesize totalItemCountDescriptor=_totalItemCountDescriptor;
@property(nonatomic) int prefetchAttemptCount; // @synthesize prefetchAttemptCount=_prefetchAttemptCount;
@property(readonly, copy, nonatomic) IGShoppingIGFundedIncentive *igFundedIncentive; // @synthesize igFundedIncentive=_igFundedIncentive;
@property(readonly, copy, nonatomic) NSArray *productCollections; // @synthesize productCollections=_productCollections;
@property(readonly, copy, nonatomic) NSArray *allCarts; // @synthesize allCarts=_allCarts;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)containsProductItemInSameProductGroup:(id)arg1 fromMerchantWithPk:(id)arg2 visualVariantMatching:(_Bool)arg3;
- (_Bool)containsProductItemWithPk:(id)arg1 fromMerchantWithPk:(id)arg2;
- (id)allCartMerchantPks;
- (long long)indexOfCartWithMerchantPk:(id)arg1;
- (id)cartForMerchantPk:(id)arg1;
- (unsigned long long)totalItemCount;
- (id)initWithBags:(id)arg1 productCollections:(id)arg2 igFundedIncentive:(id)arg3 totalItemCount:(id)arg4;

@end

