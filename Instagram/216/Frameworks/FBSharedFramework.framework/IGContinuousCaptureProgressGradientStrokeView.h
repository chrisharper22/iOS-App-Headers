//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface IGContinuousCaptureProgressGradientStrokeView : UIView
{
    double _segmentProgress;
    double _videoProgress;
    CAShapeLayer *_fillLayer;
    double _currentSegment;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateStrokeEnd:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

