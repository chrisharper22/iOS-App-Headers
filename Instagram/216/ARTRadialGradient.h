//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ARTBrush.h"

@interface ARTRadialGradient : ARTBrush
{
    struct CGGradient *_gradient;
    struct CGPoint _focusPoint;
    struct CGPoint _centerPoint;
    double _radius;
    double _radiusRatio;
}

- (void)paint:(struct CGContext *)arg1;
- (void)dealloc;
- (id)initWithArray:(id)arg1;

@end
