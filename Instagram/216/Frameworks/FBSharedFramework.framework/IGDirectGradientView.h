//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGDirectGradient, IGGradientView;

@interface IGDirectGradientView : UIView
{
    IGDirectGradient *_gradient;
    IGGradientView *_gradientView;
}

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGRect)layerContentsRect;
- (_Bool)hasStaticGradient;
- (void)updateGradientWithContentsRect:(struct CGRect)arg1;
- (void)updateGradientContentsRectWithGradientBubbleTracker:(id)arg1;
- (void)configureWithGradient:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

