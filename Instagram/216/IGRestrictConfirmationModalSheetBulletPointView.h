//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IGRestrictConfirmationModalSheetBulletPointView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}

+ (double)getEstimatedHeightForText:(id)arg1 containerWidth:(double)arg2;
- (void).cxx_destruct;
- (id)titleText;
- (void)_setUpTitleLabel;
- (void)_setUpIconImageView;
- (void)configureWithTitle:(id)arg1 andImage:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
