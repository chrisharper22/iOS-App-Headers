//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGShimmeringGridModel, IGShoppingMerchantCarouselPlaceholderViewModel;

@interface IGShoppingMediaGridPlaceholderItem : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGShimmeringGridModel *_shimmeringGrid_model;
    IGShoppingMerchantCarouselPlaceholderViewModel *_merchantShopPreviewCarouselPlaceholder_carouselViewModel;
}

+ (id)shimmeringGridWithModel:(id)arg1;
+ (id)merchantShopPreviewCarouselPlaceholderWithCarouselViewModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchShimmeringGrid:(CDUnknownBlockType)arg1 merchantShopPreviewCarouselPlaceholder:(CDUnknownBlockType)arg2;

@end

