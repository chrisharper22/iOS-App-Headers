//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, IGAnimatedCheckmarkView, UILabel;

@interface IGActivityAccountSwitcherCell : UICollectionViewCell
{
    CALayer *_topSeparator;
    IGAnimatedCheckmarkView *_checkmarkView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
- (void)animateCheckmark;
- (void)updateUsername:(id)arg1 hideTopSeparator:(_Bool)arg2 shouldAnimate:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

