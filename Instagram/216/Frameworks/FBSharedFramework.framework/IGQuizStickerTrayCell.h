//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FBTimer, UILabel, UIStackView, UIView;

@interface IGQuizStickerTrayCell : UICollectionViewCell
{
    UIView *_containerView;
    UILabel *_label;
    UIStackView *_stackView;
    FBTimer *_animationTimer;
    unsigned long long _animationState;
}

- (void).cxx_destruct;
- (void)_onTimerFire;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

