//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGReplicatorView, UIView;
@protocol IGMarqueeScrollingViewDelegate;

@interface IGMarqueeScrollingView : IGPassthroughView
{
    UIView *_containerView;
    UIView *_contentView;
    double _scrollDistance;
    IGReplicatorView *_replicatorView;
    _Bool _animating;
    _Bool _implicitlyResetAnimationTiming;
    _Bool _shouldAlwaysAnimate;
    double _leftPadding;
    double _rightPadding;
    id <IGMarqueeScrollingViewDelegate> _delegate;
    double _animationSpeedInPointsPerSecond;
    double _scrollProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double scrollProgress; // @synthesize scrollProgress=_scrollProgress;
@property(nonatomic) double animationSpeedInPointsPerSecond; // @synthesize animationSpeedInPointsPerSecond=_animationSpeedInPointsPerSecond;
@property(nonatomic) __weak id <IGMarqueeScrollingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double rightPadding; // @synthesize rightPadding=_rightPadding;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) _Bool shouldAlwaysAnimate; // @synthesize shouldAlwaysAnimate=_shouldAlwaysAnimate;
@property(nonatomic) _Bool implicitlyResetAnimationTiming; // @synthesize implicitlyResetAnimationTiming=_implicitlyResetAnimationTiming;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

