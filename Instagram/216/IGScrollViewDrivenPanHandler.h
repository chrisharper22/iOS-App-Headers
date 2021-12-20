//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableSet, NSString, POPAnimatableProperty, UIPanGestureRecognizer, UIScrollView;
@protocol IGScrollViewDrivenPanDelegate;

@interface IGScrollViewDrivenPanHandler : NSObject <UIGestureRecognizerDelegate>
{
    UIScrollView *_scrollView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastScrollViewActionTime;
    double _lastScrollViewActionContentOffset;
    double _lastScrollViewActionVelocity;
    POPAnimatableProperty *_translationAnimatableProperty;
    double _bounceVerticalTranslationAtPanStart;
    NSMutableSet *_disabledEdges;
    id <IGScrollViewDrivenPanDelegate> _delegate;
    long long _state;
    double _verticalTranslation;
}

- (void).cxx_destruct;
@property(nonatomic) double verticalTranslation; // @synthesize verticalTranslation=_verticalTranslation;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <IGScrollViewDrivenPanDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_stopScrollViewScrolling;
- (void)_handlePanEnded;
- (void)_handlePanChanged:(id)arg1;
- (void)_handlePanBegan;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_performBounceAtEdge:(long long)arg1 withVelocity:(double)arg2;
- (struct CGPoint)_currentPanGestureVelocity;
- (double)_currentHorizontalTranslation;
- (void)_updateContentOffsetForState;
- (void)_enableEdge:(long long)arg1;
- (void)_disableEdge:(long long)arg1;
- (_Bool)_isEdgeDisabled:(long long)arg1;
- (_Bool)_attemptStartPanningOrBouncingAtEdge:(long long)arg1;
- (void)_handleDidEndPanningOrBouncing:(long long)arg1;
- (void)_handleDidStartPanningOrBouncing;
- (void)cancelGesture;
- (void)handleScrollViewDidScroll;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

