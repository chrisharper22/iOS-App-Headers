//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGNametagViewConfiguration, UIImageView, UILabel, UIView;

@interface IGNametagCardNUXCollectionViewCell : UICollectionViewCell
{
    UILabel *_orderLabel;
    UILabel *_instructionLabel;
    UIView *_cardView;
    UIImageView *_arrowView;
    IGNametagViewConfiguration *_cardViewConfig;
}

+ (id)flipArrowView:(id)arg1;
- (void).cxx_destruct;
- (void)configWithIGNametagView:(id)arg1 cardViewConfig:(id)arg2 instructions:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

