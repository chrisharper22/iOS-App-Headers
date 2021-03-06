//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGBrandedContentActiveAdItem, IGImageView, UILabel;
@protocol IGBrandedContentActiveAdItemCellDelegate;

@interface IGBrandedContentActiveAdItemCell : UICollectionViewCell
{
    UILabel *_adTimestampLabel;
    IGImageView *_mediaPreviewImageView;
    UILabel *_captionLabel;
    UILabel *_postedOnDateLabel;
    IGImageView *_chevronAccessoryView;
    long long _adStatusType;
    IGBrandedContentActiveAdItem *_adViewModel;
    id <IGBrandedContentActiveAdItemCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBrandedContentActiveAdItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) IGBrandedContentActiveAdItem *adViewModel; // @synthesize adViewModel=_adViewModel;
- (void)configureWithAdViewModel:(id)arg1 adStatusType:(long long)arg2 analyticsModule:(id)arg3;
- (void)_viewAdButtonTapped;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

