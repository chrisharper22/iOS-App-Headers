//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface IGUsageInsightsManageCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_infoLabel;
    UIImageView *_chevron;
}

+ (struct CGSize)sizeWithReminderTimeStringForTitle:(id)arg1 description:(id)arg2 timeString:(id)arg3 containerWidth:(double)arg4;
+ (struct CGSize)sizeForTitle:(id)arg1 description:(id)arg2 containerWidth:(double)arg3;
+ (struct CGSize)sizeOfText:(id)arg1 withFont:(id)arg2 totalWidth:(double)arg3 totalSpacing:(double)arg4 maxNumberOfLines:(unsigned long long)arg5;
+ (id)infoFont;
+ (id)descriptionFont;
+ (id)titleFont;
- (void).cxx_destruct;
- (void)configureWithTitle:(id)arg1 description:(id)arg2 chevronMessage:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

