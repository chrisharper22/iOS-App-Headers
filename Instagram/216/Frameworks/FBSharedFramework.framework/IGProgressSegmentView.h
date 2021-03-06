//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, UIImageView;

@interface IGProgressSegmentView : UIView
{
    long long _style;
    UIView *_containerView;
    UIView *_backgroundView;
    IGGradientView *_progressView;
    UIImageView *_sparklerView;
    UIImageView *_smokeView;
    _Bool _useRoundedCorner;
    _Bool _isAnimating;
    double _progress;
}

- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)_startSmokeAnimationIfNeeded;
- (void)_loadSmokeViewIfNeeded;
- (void)_loadSparklerViewIfNeeded;
- (void)setProgressViewColors:(id)arg1;
- (void)removeFromProgressView;
- (void)setAnimatedProgress:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_layoutSubviewsForProgress:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 useRoundedCorner:(_Bool)arg2;

@end

