//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEmitterCell, CAEmitterLayer, IGGradientRippleConfiguration;

@interface IGLiveRippleEffectView : UIView
{
    CAEmitterCell *_emitterCell;
    CAEmitterLayer *_emitterLayer;
    long long _emitterImageSize;
    IGGradientRippleConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGGradientRippleConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)stopAnimating;
- (void)startAnimating;
- (void)_configureEmitterCellLowResImage;
- (void)_setEmitterImageSize:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;

@end

