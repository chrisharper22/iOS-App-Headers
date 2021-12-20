//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet, NSSet;
@protocol IGTouchDetectorDelegate;

@interface IGTouchDetector : UIGestureRecognizer
{
    NSMutableSet *_trackedTouches;
    id <IGTouchDetectorDelegate> _touchEventDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTouchDetectorDelegate> touchEventDelegate; // @synthesize touchEventDelegate=_touchEventDelegate;
@property(readonly, nonatomic) NSSet *trackedTouches;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)delaysTouchesEnded;
- (_Bool)delaysTouchesBegan;
- (_Bool)cancelsTouchesInView;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
