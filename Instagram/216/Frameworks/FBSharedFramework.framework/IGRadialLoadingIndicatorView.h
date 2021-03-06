//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAAnimationGroup, CAGradientLayer, CAReplicatorLayer, CAShapeLayer;

@interface IGRadialLoadingIndicatorView : UIView
{
    CAShapeLayer *_circleLayer;
    CAGradientLayer *_gradientLayer;
    CAAnimationGroup *_loadingAnimation;
    CAReplicatorLayer *_replicatorLayer;
    double _circleRadius;
    long long _circleCount;
}

+ (id)_loadingAnimation:(long long)arg1;
+ (id)newInstagramGradientLoadingRadialIndicatorView;
+ (id)newDefaultLoadingRadialIndicatorView;
- (void).cxx_destruct;
@property(nonatomic) long long circleCount; // @synthesize circleCount=_circleCount;
@property(nonatomic) double circleRadius; // @synthesize circleRadius=_circleRadius;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (void)_prepareForReuse;
- (void)setViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end

