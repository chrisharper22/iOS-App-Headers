//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView;

@interface IGUnifiedVideoCaptionMask : UIView
{
    UIView *_solidColorView;
    IGGradientView *_topGradient;
    IGGradientView *_bottomGradient;
    double _topGradientVisibilityPercentage;
    double _bottomGradientVisibilityPercentage;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomGradientVisibilityPercentage; // @synthesize bottomGradientVisibilityPercentage=_bottomGradientVisibilityPercentage;
@property(nonatomic) double topGradientVisibilityPercentage; // @synthesize topGradientVisibilityPercentage=_topGradientVisibilityPercentage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

