//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, POPDecayAnimation, POPSpringAnimation, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer;
@protocol IGConvexPolygonScrollViewDelegate;

@interface IGConvexPolygonScrollView : UIView <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    POPSpringAnimation *_bounceAnimation;
    POPDecayAnimation *_scrollAnimation;
    POPSpringAnimation *_zoomAnimation;
    POPSpringAnimation *_translationAnimation;
    _Bool __scrolling;
    _Bool __bouncing;
    _Bool _interruptedZoomBouncePending;
    _Bool _dragging;
    _Bool _zooming;
    _Bool _scrollEnabled;
    _Bool _shouldIgnoreLeftEdgePan;
    _Bool _interacting;
    _Bool _decelerating;
    _Bool _zoomBouncing;
    UIView *_contentView;
    double _rotateAngle;
    NSArray *_contentRegion;
    double _cropAspectRatio;
    double _maximumZoomScale;
    id <IGConvexPolygonScrollViewDelegate> _delegate;
    double _lastScale;
    struct CGSize _contentSize;
    struct CGSize _viewModelSize;
    struct CGPoint _lastZoomPoint;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint lastZoomPoint; // @synthesize lastZoomPoint=_lastZoomPoint;
@property(nonatomic) double lastScale; // @synthesize lastScale=_lastScale;
@property(nonatomic) _Bool zoomBouncing; // @synthesize zoomBouncing=_zoomBouncing;
@property(nonatomic) _Bool decelerating; // @synthesize decelerating=_decelerating;
@property(nonatomic) _Bool interacting; // @synthesize interacting=_interacting;
@property(nonatomic) __weak id <IGConvexPolygonScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldIgnoreLeftEdgePan; // @synthesize shouldIgnoreLeftEdgePan=_shouldIgnoreLeftEdgePan;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(nonatomic) _Bool zooming; // @synthesize zooming=_zooming;
@property(nonatomic) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) double cropAspectRatio; // @synthesize cropAspectRatio=_cropAspectRatio;
@property(copy, nonatomic) NSArray *contentRegion; // @synthesize contentRegion=_contentRegion;
@property(nonatomic) double rotateAngle; // @synthesize rotateAngle=_rotateAngle;
@property(nonatomic) struct CGSize viewModelSize; // @synthesize viewModelSize=_viewModelSize;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_restrainOffset:(struct CGPoint *)arg1 scale:(double *)arg2;
- (void)_restrainOffset:(struct CGPoint *)arg1;
- (struct CGPoint)_projectOffsetWithScale:(double)arg1 offset:(struct CGPoint)arg2;
- (id)_rectangularRegionFromSquareRegion:(id)arg1;
- (id)_squareRegionFromRectangularRegion:(id)arg1;
- (double)_aspectRatioAdjustedValue:(double)arg1;
- (double)_restrainScaleForRotation:(double)arg1 targetScale:(double)arg2 safeScale:(double)arg3;
- (struct CGPoint)_offsetForRotateAngle:(double)arg1;
- (double)_currentRubberBandingStrength;
- (_Bool)_isVisibleRegionInsideConvexPolygonWithOffset:(struct CGPoint)arg1 scale:(double)arg2;
- (_Bool)_isVisibleRegionInsideConvexPolygonWithOffset:(struct CGPoint)arg1 scale:(double)arg2 convexPlygon:(id)arg3;
- (double)_straightenScaleForAngle:(double)arg1;
- (void)_updateInteracting;
- (void)_pinchFromGestureRecognizer:(id)arg1;
- (void)enforceContentFill;
- (void)_zoomingDidFinished;
- (void)_zoomingUpdatedWithGesture:(id)arg1;
- (void)_beginZooming;
- (void)_zoomToPoint:(struct CGPoint)arg1 scale:(float)arg2;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_panFromGestureRecognizer:(id)arg1;
- (void)_draggingWithTranslation:(struct CGPoint)arg1;
- (void)_endDraggingWithDecelerationVelocity:(struct CGPoint)arg1;
- (struct CGPoint)_applyRubberBandingEffectOnScrollVector:(struct CGPoint)arg1;
- (void)_beginDragging;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_zoomAnimationWithTargetScale:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_noteZoomAnimationEnded:(_Bool)arg1;
- (void)_transitionToTranslateAnimationWithTargetOffset:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_zoomBounceFinished:(_Bool)arg1 targetOffset:(struct CGPoint)arg2 targetScale:(double)arg3;
- (void)_beginScrollAnimationsWithVelocity:(struct CGPoint)arg1;
- (struct CGPoint)_scrollVelocity;
- (void)_transitionToScrollAnimationWithVelocity:(struct CGPoint)arg1;
- (void)_transitionToBounceAnimationWithVelocity:(struct CGPoint)arg1;
- (void)_noteScrollingEndedAfterDeceleration:(_Bool)arg1;
- (void)cancelAnimations;
@property(nonatomic) union _GLKMatrix4 contentTransform;
@property(nonatomic) double rotateAngleZ;
@property(nonatomic) double rotateAngleY;
@property(nonatomic) double rotateAngleX;
@property(nonatomic) double zoomScale;
@property(nonatomic) struct CGPoint contentOffset;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)_updateScrollState;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 longPressEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

