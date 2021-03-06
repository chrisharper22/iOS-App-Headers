//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGVerticalSplitInteractiveViewScrollingDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer;
@protocol IGVerticalSplitInteractiveViewDelegate;

@interface IGVerticalSplitInteractiveView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, IGVerticalSplitInteractiveViewScrollingDelegate>
{
    UIView *_topView;
    UIView *_bottomView;
    UIView *_topOverlayView;
    double _bottomViewStartY;
    double _currentTopViewVisibleHeight;
    UIPanGestureRecognizer *_splitViewPanGestureRecognizer;
    struct CGPoint _touchBeganPoint;
    id <IGVerticalSplitInteractiveViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(readonly, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) __weak id <IGVerticalSplitInteractiveViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateOverlayViewAlpha;
- (_Bool)_isBottomViewExpandedFullScreen;
- (_Bool)_isBottomViewAtDockedPosition;
- (_Bool)_allowSwipeDownToDismissWithGestureRecognizer:(id)arg1;
- (_Bool)_isPanningDownWithGestureRecognizer:(id)arg1;
- (_Bool)_shouldPlayMedia;
- (_Bool)_shouldEnableInteractionForTopViewWithPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)verticalSplitInteractiveViewScrollingController:(id)arg1 updateVisibleTopViewFrame:(struct CGRect)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_didPan:(id)arg1;
- (void)layoutSubviews;
- (void)_setUpViews;
- (id)initWithTopView:(id)arg1 bottomView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

