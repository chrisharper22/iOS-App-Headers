//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, IGInsetLabel, IGLiveIndicatorViewSpec, UIImageView;

@interface IGLiveIndicatorView : UIView
{
    _Bool _hasBorder;
    _Bool _hasDynamicFont;
    double _fontSize;
    IGLiveIndicatorViewSpec *_spec;
    CAGradientLayer *_gradientLayer;
    UIImageView *_crownImageLabel;
    IGInsetLabel *_label;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGInsetLabel *label; // @synthesize label=_label;
- (void)_updateGradientLayerBranding2021;
- (void)_updateGradientLayerColorsWithTopLeftColor:(id)arg1 bottomRightColor:(id)arg2;
- (void)_resetGradientColors;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setCornerRadius:(double)arg1;
- (struct CGSize)sizeForText:(id)arg1;
- (void)configureWithSpec:(id)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

