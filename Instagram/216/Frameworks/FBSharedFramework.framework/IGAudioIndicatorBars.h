//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface IGAudioIndicatorBars : UIView
{
    NSArray *_bars;
    _Bool _animating;
    _Bool _shouldBeWigglingBars;
    double _spacing;
    double _barWidth;
    double _minBarHeight;
    double _maxBarHeight;
    UIColor *_barColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldBeWigglingBars; // @synthesize shouldBeWigglingBars=_shouldBeWigglingBars;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) double maxBarHeight; // @synthesize maxBarHeight=_maxBarHeight;
@property(nonatomic) double minBarHeight; // @synthesize minBarHeight=_minBarHeight;
@property(nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
- (void)_removeLayerAnimations;
- (struct CGRect)_layerFrameWithIndex:(long long)arg1 reverse:(_Bool)arg2;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) _Bool isVisible;
- (void)_addWiggleAnimationToBars;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

