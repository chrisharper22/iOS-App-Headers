//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGImageView, IGTextButton, UIView;
@protocol IGUserPaySupportTierViewCellDelegate;

@interface IGUserPaySupportTierViewCell : UICollectionViewCell
{
    IGImageView *_tierIcon;
    IGTextButton *_priceButton;
    UIView *_separator;
    long long _supportTier;
    id <IGUserPaySupportTierViewCellDelegate> _delegate;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGUserPaySupportTierViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)_priceButtonTappped;
- (void)configureWithViewModel:(id)arg1 formattedPriceString:(id)arg2 hideSeparator:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

