//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGDialMagnifierViewType-Protocol.h"
#import "IGPlaybackTimelineDelegate-Protocol.h"

@class CAShapeLayer, IGPlaybackTimeline, IGSundialAnimatedGradientView, NSString, UIImage, UIImageView;

@interface IGSundialCameraShutterButton : UIView <IGPlaybackTimelineDelegate, IGDialMagnifierViewType>
{
    UIView *_contentWrapperView;
    CAShapeLayer *_outerRing;
    UIView *_innerCircle;
    IGPlaybackTimeline *_borderOscillationTimeline;
    UIView *_gradientViewWrapper;
    IGSundialAnimatedGradientView *_gradientView;
    UIView *_gradientMask;
    CAShapeLayer *_outerRingGradientMaskComponent;
    UIView *_magnifierView;
    CAShapeLayer *_stopIcon;
    UIImageView *_badgeView;
    _Bool _expanded;
    _Bool _pushedDown;
    double _progress;
    double _itemSpacing;
    UIView *_leftView;
    UIView *_rightView;
    double _expansionProgress;
    double _borderExpansionAmount;
}

- (void).cxx_destruct;
@property(nonatomic) double borderExpansionAmount; // @synthesize borderExpansionAmount=_borderExpansionAmount;
@property(nonatomic) double expansionProgress; // @synthesize expansionProgress=_expansionProgress;
@property(nonatomic) _Bool pushedDown; // @synthesize pushedDown=_pushedDown;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (id)accessibilityIdentifier;
@property(retain, nonatomic) UIImage *badgeImage;
- (void)_startGradientSpinAnimation;
- (void)didMoveToWindow;
- (void)playbackTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_layoutSubviewsWithoutImplicitAnimations;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

