//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, IGImageView, UILabel;

@interface IGShoppingPDPMediaSeeAllCell : UICollectionViewCell
{
    IGImageView *_imageView;
    CALayer *_dimmingLayer;
    UILabel *_seeAllLabel;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)configureWithPhoto:(id)arg1 analyticsModule:(id)arg2 size:(struct CGSize)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
