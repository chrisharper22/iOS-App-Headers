//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;

@interface IGProfileQuickAddCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIView *_addIconContainerView;
    UIImageView *_addIconImageView;
}

+ (struct CGSize)estimatedSizeForTitleText:(id)arg1 cellWidth:(double)arg2 expandToCellWidth:(_Bool)arg3;
- (void).cxx_destruct;
- (void)_setupViews;
- (void)configureWithTitleText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
