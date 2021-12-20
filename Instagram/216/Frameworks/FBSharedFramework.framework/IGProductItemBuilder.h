//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPhoto, IGShoppingAmplifiedReasonsToShopDataModel, IGShoppingCheckoutProperties, IGShoppingProductAffiliateInformation, IGShoppingProductAggregatedRating, IGShoppingProductDiscountInformation, IGShoppingProductDrawingInformation, IGShoppingProductLaunchInformation, IGShoppingProductLoyaltyInformation, IGShoppingProductTaggingFeedSessionInformation, IGShoppingSellerBadge, IGShoppingUntaggableReason, IGUser, NSArray, NSString, NSURL;

@interface IGProductItemBuilder : NSObject
{
    NSString *_pk;
    NSString *_productDescription;
    NSArray *_richProductDescription;
    NSString *_currentPrice;
    NSString *_fullPrice;
    NSString *_currentPriceStripped;
    NSString *_fullPriceStripped;
    NSString *_currentPriceAmount;
    NSString *_fullPriceAmount;
    NSString *_perUnitPrice;
    NSString *_name;
    NSString *_retailerId;
    NSString *_productPlatform;
    IGPhoto *_mainImage;
    NSString *_mainImageId;
    IGPhoto *_thumbnailImage;
    NSArray *_allImages;
    NSURL *_externalURL;
    long long _reviewStatus;
    long long _checkoutStyle;
    _Bool _hasVariants;
    NSArray *_variantValues;
    IGShoppingCheckoutProperties *_checkoutProperties;
    IGShoppingSellerBadge *_sellerBadge;
    _Bool _hasSaved_UNSAFE_DO_NOT_USE;
    IGShoppingProductLoyaltyInformation *_loyaltyInfo;
    IGUser *_merchant;
    _Bool _canShareToStory;
    IGShoppingProductLaunchInformation *_launchInformation;
    IGShoppingProductDiscountInformation *_discountInformation;
    _Bool _canSeeInsightsForViewer;
    _Bool _isEditable;
    IGShoppingUntaggableReason *_untaggableReason;
    NSString *_debugInfo;
    IGShoppingProductAffiliateInformation *_affiliateInformation;
    IGShoppingProductTaggingFeedSessionInformation *_taggingSessionInformation;
    _Bool _canSeeRatingsAndReviews;
    IGShoppingProductAggregatedRating *_aggregatedRating;
    _Bool _isInStock;
    _Bool _isUserEnteredInDrawing_DO_NOT_USE;
    IGShoppingProductDrawingInformation *_drawingInformation;
    IGShoppingAmplifiedReasonsToShopDataModel *_amplifiedReasonsToShopDataModel;
}

+ (id)productItemFromExistingProductItem:(id)arg1;
+ (id)productItem;
- (void).cxx_destruct;
- (id)withAmplifiedReasonsToShopDataModel:(id)arg1;
- (id)withDrawingInformation:(id)arg1;
- (id)withIsUserEnteredInDrawing_DO_NOT_USE:(_Bool)arg1;
- (id)withIsInStock:(_Bool)arg1;
- (id)withAggregatedRating:(id)arg1;
- (id)withCanSeeRatingsAndReviews:(_Bool)arg1;
- (id)withTaggingSessionInformation:(id)arg1;
- (id)withAffiliateInformation:(id)arg1;
- (id)withDebugInfo:(id)arg1;
- (id)withUntaggableReason:(id)arg1;
- (id)withIsEditable:(_Bool)arg1;
- (id)withCanSeeInsightsForViewer:(_Bool)arg1;
- (id)withDiscountInformation:(id)arg1;
- (id)withLaunchInformation:(id)arg1;
- (id)withCanShareToStory:(_Bool)arg1;
- (id)withMerchant:(id)arg1;
- (id)withLoyaltyInfo:(id)arg1;
- (id)withHasSaved_UNSAFE_DO_NOT_USE:(_Bool)arg1;
- (id)withSellerBadge:(id)arg1;
- (id)withCheckoutProperties:(id)arg1;
- (id)withVariantValues:(id)arg1;
- (id)withHasVariants:(_Bool)arg1;
- (id)withCheckoutStyle:(long long)arg1;
- (id)withReviewStatus:(long long)arg1;
- (id)withExternalURL:(id)arg1;
- (id)withAllImages:(id)arg1;
- (id)withThumbnailImage:(id)arg1;
- (id)withMainImageId:(id)arg1;
- (id)withMainImage:(id)arg1;
- (id)withProductPlatform:(id)arg1;
- (id)withRetailerId:(id)arg1;
- (id)withName:(id)arg1;
- (id)withPerUnitPrice:(id)arg1;
- (id)withFullPriceAmount:(id)arg1;
- (id)withCurrentPriceAmount:(id)arg1;
- (id)withFullPriceStripped:(id)arg1;
- (id)withCurrentPriceStripped:(id)arg1;
- (id)withFullPrice:(id)arg1;
- (id)withCurrentPrice:(id)arg1;
- (id)withRichProductDescription:(id)arg1;
- (id)withProductDescription:(id)arg1;
- (id)withPk:(id)arg1;
- (id)build;

@end
