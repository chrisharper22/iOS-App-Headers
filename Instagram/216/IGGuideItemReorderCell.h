//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGImageView, UIImageView, UILabel;

@interface IGGuideItemReorderCell : UICollectionViewCell
{
    IGImageView *_imageView;
    UILabel *_titleLabel;
    UIImageView *_handleIconImageView;
}

- (void).cxx_destruct;
- (id)LX_snapshotView;
- (struct CGRect)LX_rearrangeHotspot;
- (void)configureWithTitle:(id)arg1 imageSpecifier:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

