//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, IGImageProgressView, IGStoryAdsBackgroundViewRenderModel, NSString;

@interface IGStoryAdsBackgroundView : UIView
{
    IGStoryAdsBackgroundViewRenderModel *_renderModel;
    IGGradientView *_backgroundColorView;
    IGImageProgressView *_backgroundImageView;
    UIView *_backgroundImageDimmingView;
    NSString *_module;
}

- (void).cxx_destruct;
- (void)_configureBackgroundWithDimmingViewAlpha:(double)arg1;
- (void)_configureBackgroundWithPhoto:(id)arg1 blurEffect:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)storyAdsBackgroundViewGradientColor;
- (void)configureWithRenderModel:(id)arg1 module:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

