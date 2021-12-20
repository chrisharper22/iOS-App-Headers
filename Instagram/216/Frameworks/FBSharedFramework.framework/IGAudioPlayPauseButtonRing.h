//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, IGAudioProgressLoadingMask, NSArray, UIColor;

@interface IGAudioPlayPauseButtonRing : UIView
{
    CAGradientLayer *_gradientLayer;
    UIView *_customGradientView;
    CAShapeLayer *_circleOutlineLayer;
    CAShapeLayer *_playbackProgressLayer;
    IGAudioProgressLoadingMask *_loadingMask;
    NSArray *_defaultGradientProgressColors;
    double _lineWidth;
    _Bool _loading;
    double _diameter;
    double _playbackProgress;
    UIColor *_ringColor;
    UIColor *_backgroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *ringColor; // @synthesize ringColor=_ringColor;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) double playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic) struct CGColor *shadowColor;
@property(nonatomic) double shadowOpacity;
@property(nonatomic) double shadowRadius;
@property(readonly, nonatomic) NSArray *defaultGradientProgressColors;
@property(retain, nonatomic) NSArray *gradientProgressColors;
- (void)endLoadingAnimationInstantly;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithDiameter:(double)arg1 lineWidth:(double)arg2 customGradientView:(id)arg3;
- (id)initWithDiameter:(double)arg1;

@end
