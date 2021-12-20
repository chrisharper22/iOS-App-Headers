//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, UIColor, UIImageView, UIView;

@interface IGStoryEyedropperToggleButton : UIControl
{
    UIView *_contentView;
    CAShapeLayer *_colorSwatchLayer;
    UIImageView *_eyedropperIconImageView;
    UIImageView *_checkmarkIconImageView;
    _Bool _pushedDown;
    UIColor *_color;
    struct UIEdgeInsets _hitTestSlop;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isPushedDown) _Bool pushedDown; // @synthesize pushedDown=_pushedDown;
@property(nonatomic) struct UIEdgeInsets hitTestSlop; // @synthesize hitTestSlop=_hitTestSlop;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

