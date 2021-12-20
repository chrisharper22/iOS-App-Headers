//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@interface IGDirectionalPanGestureRecognizer : UIPanGestureRecognizer
{
    struct CGPoint _referencePoint;
    _Bool _lockTranslationToActivationAxis;
    unsigned long long _permissableActivationDirections;
    unsigned long long _activatedDirection;
}

@property(nonatomic) _Bool lockTranslationToActivationAxis; // @synthesize lockTranslationToActivationAxis=_lockTranslationToActivationAxis;
@property(readonly, nonatomic) unsigned long long activatedDirection; // @synthesize activatedDirection=_activatedDirection;
@property(nonatomic) unsigned long long permissableActivationDirections; // @synthesize permissableActivationDirections=_permissableActivationDirections;
- (struct CGPoint)translationInView:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
