//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGBannerView, IGShoppingIGFundedIncentive, UIView;
@protocol IGCoreTextLinkHandler, IGShoppingIGFundedIncentivesMegaphoneShopTabBannerVariant1CellDelegate;

@interface IGShoppingIGFundedIncentivesMegaphoneShopTabBannerVariant1Cell : UICollectionViewCell
{
    IGShoppingIGFundedIncentive *_incentive;
    IGBannerView *_bannerView;
    UIView *_bottomSeparator;
    id <IGShoppingIGFundedIncentivesMegaphoneShopTabBannerVariant1CellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) __weak id <IGShoppingIGFundedIncentivesMegaphoneShopTabBannerVariant1CellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleDismissButtonTap;
- (void)_handleSecondaryButtonTap;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler;
- (void)configureWithIncentive:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
