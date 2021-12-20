//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "POPAnimationDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIView;
@protocol IGZoomViewControllerDelegate;

@interface IGZoomViewController : IGViewController <POPAnimationDelegate>
{
    _Bool _isZoomingEnding;
    _Bool _tensionParameterSet;
    _Bool _hidesDimmedBackgroundView;
    id <IGZoomViewControllerDelegate> _delegate;
    UIView *_zoomView;
    UIView *_mediaView;
    UIView *_containerView;
    UIView *_stabilizationView;
    UIView *_dimmedView;
    double _visibleYOffset;
    double _previousRotationAngle;
    double _previousScale;
    double _tensionParameter;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    double _maxZoomScaleReached;
    struct CGPoint _originalPosition;
    struct CGPoint _accumulatedTranslation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hidesDimmedBackgroundView; // @synthesize hidesDimmedBackgroundView=_hidesDimmedBackgroundView;
@property(nonatomic) double maxZoomScaleReached; // @synthesize maxZoomScaleReached=_maxZoomScaleReached;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) double tensionParameter; // @synthesize tensionParameter=_tensionParameter;
@property(nonatomic) _Bool tensionParameterSet; // @synthesize tensionParameterSet=_tensionParameterSet;
@property(nonatomic) struct CGPoint accumulatedTranslation; // @synthesize accumulatedTranslation=_accumulatedTranslation;
@property(nonatomic) double previousScale; // @synthesize previousScale=_previousScale;
@property(nonatomic) double previousRotationAngle; // @synthesize previousRotationAngle=_previousRotationAngle;
@property(nonatomic) double visibleYOffset; // @synthesize visibleYOffset=_visibleYOffset;
@property(nonatomic) struct CGPoint originalPosition; // @synthesize originalPosition=_originalPosition;
@property(retain, nonatomic) UIView *dimmedView; // @synthesize dimmedView=_dimmedView;
@property(retain, nonatomic) UIView *stabilizationView; // @synthesize stabilizationView=_stabilizationView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) UIView *zoomView; // @synthesize zoomView=_zoomView;
@property(nonatomic) _Bool isZoomingEnding; // @synthesize isZoomingEnding=_isZoomingEnding;
@property(nonatomic) __weak id <IGZoomViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateViewWithGestureRecognizer:(id)arg1;
- (void)pop_animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (void)_setupAnimationViews;
- (void)_setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (struct CATransform3D)_currentTransform;
- (double)_updatedPinchScale;
- (void)_updateAlphaOfBackgroundViews;
- (double)_normalizeVelocity:(double)arg1;
- (void)_resetViewsToPosition:(struct CGPoint)arg1 mediaYOffset:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMediaView:(id)arg1 frame:(struct CGRect)arg2 visibleYOffset:(double)arg3 pinchGestureRecognizer:(id)arg4 panGestureRecognizer:(id)arg5 hidesDimmedBackgroundView:(_Bool)arg6 analyticsModule:(id)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

