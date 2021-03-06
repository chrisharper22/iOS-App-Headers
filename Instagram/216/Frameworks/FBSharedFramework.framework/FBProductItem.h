//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGGenericProductItem-Protocol.h>
#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGProductMerchantProfileImageProviding-Protocol.h>
#import <FBSharedFramework/IGSavableObject-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGGenericProductItemMerchantInfo, IGPhoto, IGShoppingCheckoutProperties, IGShoppingProductAffiliateInformation, IGShoppingProductAggregatedRating, IGShoppingProductLaunchInformation, IGUser, NSString;

@interface FBProductItem : FBValueObject <IGProductMerchantProfileImageProviding, IGGenericProductItem, IGSavableObject, IGListDiffable, NSCopying, NSCoding>
{
    _Bool _hasSaved_UNSAFE_DO_NOT_USE;
    NSString *_pk;
    NSString *_productName;
    NSString *_listingPrice;
    NSString *_listingPriceStripped;
    NSString *_strikethroughPrice;
    NSString *_strikethroughPriceStripped;
    NSString *_pagePk;
    NSString *_pageName;
    NSString *_pageProfilePic;
    long long _reviewStatus;
    IGPhoto *_thumbnailImage;
    IGPhoto *_mainImage;
    IGShoppingCheckoutProperties *_checkoutProperties;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGShoppingCheckoutProperties *checkoutProperties; // @synthesize checkoutProperties=_checkoutProperties;
@property(readonly, copy, nonatomic) IGPhoto *mainImage; // @synthesize mainImage=_mainImage;
@property(readonly, copy, nonatomic) IGPhoto *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, nonatomic) long long reviewStatus; // @synthesize reviewStatus=_reviewStatus;
@property(readonly, copy, nonatomic) NSString *pageProfilePic; // @synthesize pageProfilePic=_pageProfilePic;
@property(readonly, copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(readonly, copy, nonatomic) NSString *pagePk; // @synthesize pagePk=_pagePk;
@property(readonly, copy, nonatomic) NSString *strikethroughPriceStripped; // @synthesize strikethroughPriceStripped=_strikethroughPriceStripped;
@property(readonly, copy, nonatomic) NSString *strikethroughPrice; // @synthesize strikethroughPrice=_strikethroughPrice;
@property(readonly, copy, nonatomic) NSString *listingPriceStripped; // @synthesize listingPriceStripped=_listingPriceStripped;
@property(readonly, copy, nonatomic) NSString *listingPrice; // @synthesize listingPrice=_listingPrice;
@property(readonly, nonatomic) _Bool hasSaved_UNSAFE_DO_NOT_USE; // @synthesize hasSaved_UNSAFE_DO_NOT_USE=_hasSaved_UNSAFE_DO_NOT_USE;
@property(readonly, copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPk:(id)arg1 productName:(id)arg2 hasSaved_UNSAFE_DO_NOT_USE:(_Bool)arg3 listingPrice:(id)arg4 listingPriceStripped:(id)arg5 strikethroughPrice:(id)arg6 strikethroughPriceStripped:(id)arg7 pagePk:(id)arg8 pageName:(id)arg9 pageProfilePic:(id)arg10 reviewStatus:(long long)arg11 thumbnailImage:(id)arg12 mainImage:(id)arg13 checkoutProperties:(id)arg14;
- (id)initWithCoder:(id)arg1;
- (id)merchantProfileImageWithAnalyticsModule:(id)arg1 imageFetchPriority:(long long)arg2;
@property(readonly, nonatomic) long long imageCount;
@property(readonly, nonatomic) _Bool isOnSale;
@property(readonly, nonatomic) IGGenericProductItemMerchantInfo *merchantInfo;
- (id)productMerchantExtras;
@property(readonly, nonatomic) NSString *merchantName;
@property(readonly, nonatomic) IGUser *merchant;
@property(readonly, nonatomic) _Bool isOnPreOrder;
@property(readonly, nonatomic) _Bool isSoldOutCheckoutProduct;
@property(readonly, nonatomic) IGShoppingProductAffiliateInformation *affiliateInformation;
@property(readonly, nonatomic) IGShoppingProductLaunchInformation *launchInformation;
@property(readonly, nonatomic) long long checkoutStyle;
@property(readonly, nonatomic) NSString *perUnitPrice;
@property(readonly, nonatomic) IGShoppingProductAggregatedRating *aggregatedRating;
@property(readonly, nonatomic) NSString *fullPriceStripped;
@property(readonly, nonatomic) NSString *fullPrice;
@property(readonly, nonatomic) NSString *currentPriceStripped;
@property(readonly, nonatomic) NSString *currentPrice;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) IGPhoto *savePhoto;
@property(readonly, copy) NSString *saveId;
@property(readonly) long long saveItemType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

