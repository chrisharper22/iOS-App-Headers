//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

@interface IGLinearGradientView : UIView
{
    CAGradientLayer *_gradientLayer;
    NSArray *_colors;
    double _angle;
}

- (void).cxx_destruct;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

