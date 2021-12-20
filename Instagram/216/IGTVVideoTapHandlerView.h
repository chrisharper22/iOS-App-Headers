//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGGradientView, NSString, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol IGTVVideoTapHandlerViewDelegate;

@interface IGTVVideoTapHandlerView : UIView <UIGestureRecognizerDelegate>
{
    id <IGTVVideoTapHandlerViewDelegate> _delegate;
    IGGradientView *_rewindGradientView;
    IGGradientView *_fastForwardGradientView;
    UIView *_skipIconContainerView;
    UIImageView *_skipIconImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    long long _tapCount;
    struct CGPoint _initialLongPressTouchPoint;
    double _relativeWidth;
    double _translationMultiplier;
}

- (void).cxx_destruct;
- (void)_animateQuickSkipWithGradient:(id)arg1 isRewind:(_Bool)arg2;
- (void)_handleGestureTrigger;
- (double)_calculateTranslationProgress:(struct CGPoint)arg1;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_handleDoubleTapGesture;
- (void)_handleSingleTapGestureWithTapPoint:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_longPressGestureDetected:(id)arg1;
- (void)_tapGestureDetected:(id)arg1;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

