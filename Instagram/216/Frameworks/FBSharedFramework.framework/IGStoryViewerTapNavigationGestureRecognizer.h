//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer;

@interface IGStoryViewerTapNavigationGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _referencePoint;
    NSTimer *_maximumTapDurationTimer;
    double _maximumTapDuration;
    double _maximumAllowableMovement;
}

- (void).cxx_destruct;
@property(nonatomic) double maximumAllowableMovement; // @synthesize maximumAllowableMovement=_maximumAllowableMovement;
@property(nonatomic) double maximumTapDuration; // @synthesize maximumTapDuration=_maximumTapDuration;
- (void)_maximumTapDurationTimerDidFire:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

