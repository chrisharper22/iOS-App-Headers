//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGGestureHandler-Protocol.h>
#import <FBSharedFramework/IGTouchDetectorDelegate-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class CAShapeLayer, IGAlignmentGrid, IGAlignmentGuideLine, IGDeadSpaceVisualizer, IGStoryStickerAlignmentConfiguration, IGTouchDetector, NSString, UIColor, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol IGStoryStickerGestureControllerDataSource, IGStoryStickerGestureControllerDelegate;

@interface IGStoryStickerGestureController : NSObject <UIGestureRecognizerDelegate, IGTouchDetectorDelegate, IGGestureHandler>
{
    UIPinchGestureRecognizer *_pinchGesture;
    UIPanGestureRecognizer *_panGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    UITapGestureRecognizer *_tapGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    IGTouchDetector *_forcePressTouchDetector;
    IGAlignmentGrid *_alignmentGrid;
    IGAlignmentGrid *_secondaryMarginAlignmentGrid;
    IGAlignmentGuideLine *_rotationAlignmentGuide;
    IGAlignmentGuideLine *_stickerEdgeAlignmentGuide;
    IGAlignmentGuideLine *_stickerPaddingAlignmentGuide;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    CAShapeLayer *_outlinePathVisualizer;
    IGStoryStickerAlignmentConfiguration *_closestStickerForAlignment;
    struct {
        unsigned int maximumScaleForSticker:1;
        unsigned int minimumScaleForSticker:1;
        unsigned int rotationPermittedForSticker:1;
        unsigned int maxmimumRotatationAngleForSticker:1;
        unsigned int didCompleteStickerDeletableAnimation:1;
        unsigned int didDragStickerOverTrash:1;
        unsigned int didDragStickerOutsideTrash:1;
        unsigned int mightShowSafeAreaWarnings:1;
        unsigned int shouldAllowVerticalSafeAreaWarnings:1;
        unsigned int shouldAllowHorizontalSafeAreaWarnings:1;
        unsigned int willDragActiveSticker:1;
    } _optionalDelegateMethods;
    _Bool _isUsingCustomMarginPadding;
    _Bool _fadeInOutMarginGuides;
    _Bool _alignmentGuidesEnabled;
    _Bool _bringStickerToFrontWhenActive;
    _Bool _trashcanVisible;
    _Bool _deleteSelected;
    _Bool _alignedWithStickerEdgeLine;
    _Bool _alignedWithStickerAngle;
    _Bool _pinnedToStickerEdge;
    _Bool _pinnedToStickerPadding;
    _Bool _pinnedToAngle;
    _Bool _pinnedToHorizontalCenterGuideLine;
    _Bool _pinnedToVerticalCenterGuideLine;
    _Bool _pinnedToLeftMarginGuideLine;
    _Bool _pinnedToRightMarginGuideLine;
    _Bool _pinnedToTopMarginGuideLine;
    _Bool _pinnedToBottomMarginGuideLine;
    _Bool _positionedAboveTopMarginGuideLine;
    _Bool _positionedBelowBottomMarginGuideLine;
    _Bool _positionedBeyondRightMargin;
    _Bool _positionedBeyondLeftMargin;
    id <IGStoryStickerGestureControllerDelegate> _delegate;
    id <IGStoryStickerGestureControllerDataSource> _dataSource;
    long long _deleteSelectedAnimationStyle;
    UIView *_trashcan;
    UIView *_trashcanSuperview;
    CDUnknownBlockType _trashcanPositionInView;
    UIView *_activeSticker;
    IGDeadSpaceVisualizer *_safeAreaVisualizer;
    double _stickerScale;
    double _stickerRotation;
    UIView *_hardPressedSticker;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool positionedBeyondLeftMargin; // @synthesize positionedBeyondLeftMargin=_positionedBeyondLeftMargin;
@property(nonatomic) _Bool positionedBeyondRightMargin; // @synthesize positionedBeyondRightMargin=_positionedBeyondRightMargin;
@property(nonatomic) _Bool positionedBelowBottomMarginGuideLine; // @synthesize positionedBelowBottomMarginGuideLine=_positionedBelowBottomMarginGuideLine;
@property(nonatomic) _Bool positionedAboveTopMarginGuideLine; // @synthesize positionedAboveTopMarginGuideLine=_positionedAboveTopMarginGuideLine;
@property(nonatomic) _Bool pinnedToBottomMarginGuideLine; // @synthesize pinnedToBottomMarginGuideLine=_pinnedToBottomMarginGuideLine;
@property(nonatomic) _Bool pinnedToTopMarginGuideLine; // @synthesize pinnedToTopMarginGuideLine=_pinnedToTopMarginGuideLine;
@property(nonatomic) _Bool pinnedToRightMarginGuideLine; // @synthesize pinnedToRightMarginGuideLine=_pinnedToRightMarginGuideLine;
@property(nonatomic) _Bool pinnedToLeftMarginGuideLine; // @synthesize pinnedToLeftMarginGuideLine=_pinnedToLeftMarginGuideLine;
@property(nonatomic) _Bool pinnedToVerticalCenterGuideLine; // @synthesize pinnedToVerticalCenterGuideLine=_pinnedToVerticalCenterGuideLine;
@property(nonatomic) _Bool pinnedToHorizontalCenterGuideLine; // @synthesize pinnedToHorizontalCenterGuideLine=_pinnedToHorizontalCenterGuideLine;
@property(nonatomic) _Bool pinnedToAngle; // @synthesize pinnedToAngle=_pinnedToAngle;
@property(nonatomic) _Bool pinnedToStickerPadding; // @synthesize pinnedToStickerPadding=_pinnedToStickerPadding;
@property(nonatomic) _Bool pinnedToStickerEdge; // @synthesize pinnedToStickerEdge=_pinnedToStickerEdge;
@property(nonatomic) _Bool alignedWithStickerAngle; // @synthesize alignedWithStickerAngle=_alignedWithStickerAngle;
@property(nonatomic) _Bool alignedWithStickerEdgeLine; // @synthesize alignedWithStickerEdgeLine=_alignedWithStickerEdgeLine;
@property(retain, nonatomic) UIView *hardPressedSticker; // @synthesize hardPressedSticker=_hardPressedSticker;
@property(nonatomic) _Bool deleteSelected; // @synthesize deleteSelected=_deleteSelected;
@property(nonatomic) _Bool trashcanVisible; // @synthesize trashcanVisible=_trashcanVisible;
@property(nonatomic) double stickerRotation; // @synthesize stickerRotation=_stickerRotation;
@property(nonatomic) double stickerScale; // @synthesize stickerScale=_stickerScale;
@property(retain, nonatomic) IGDeadSpaceVisualizer *safeAreaVisualizer; // @synthesize safeAreaVisualizer=_safeAreaVisualizer;
@property(retain, nonatomic) UIView *activeSticker; // @synthesize activeSticker=_activeSticker;
@property(copy, nonatomic) CDUnknownBlockType trashcanPositionInView; // @synthesize trashcanPositionInView=_trashcanPositionInView;
@property(retain, nonatomic) UIView *trashcanSuperview; // @synthesize trashcanSuperview=_trashcanSuperview;
@property(retain, nonatomic) UIView *trashcan; // @synthesize trashcan=_trashcan;
@property(nonatomic) long long deleteSelectedAnimationStyle; // @synthesize deleteSelectedAnimationStyle=_deleteSelectedAnimationStyle;
@property(nonatomic) _Bool bringStickerToFrontWhenActive; // @synthesize bringStickerToFrontWhenActive=_bringStickerToFrontWhenActive;
@property(nonatomic) _Bool alignmentGuidesEnabled; // @synthesize alignmentGuidesEnabled=_alignmentGuidesEnabled;
@property(nonatomic) _Bool fadeInOutMarginGuides; // @synthesize fadeInOutMarginGuides=_fadeInOutMarginGuides;
@property(nonatomic) _Bool isUsingCustomMarginPadding; // @synthesize isUsingCustomMarginPadding=_isUsingCustomMarginPadding;
@property(nonatomic) __weak id <IGStoryStickerGestureControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGStoryStickerGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isActiveStickerNearParentSticker;
- (void)_validateFinalPositionAnimationsWithPreviouslyActiveSticker:(id)arg1 finalStickerScale:(double)arg2;
@property(readonly, nonatomic) _Bool hasActiveGestures;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(retain, nonatomic) UIColor *bottomMarginAlignmentGuideColor;
@property(retain, nonatomic) UIColor *topMarginAlignmentGuideColor;
@property(retain, nonatomic) UIColor *rightMarginAlignmentGuideColor;
@property(retain, nonatomic) UIColor *leftMarginAlignmentGuideColor;
@property(retain, nonatomic) UIColor *horizontalCenterAlignmentGuideColor;
@property(retain, nonatomic) UIColor *verticalCenterAlignmentGuideColor;
@property(retain, nonatomic) UIColor *rotationAlignmentGuideColor;
@property(readonly, nonatomic) UIView *view;
- (void)_setTrashcanVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long alignmentGuideState;
@property(readonly, nonatomic) _Bool pinnedToHorizontalGuideLine;
@property(readonly, nonatomic) _Bool pinnedToVerticalGuideLine;
@property(readonly, nonatomic) IGAlignmentGrid *marginGridInUse;
- (void)_approachingMarginGuideLine:(id)arg1 withDistanceFromLine:(double)arg2 gestureMeetsSpeed:(_Bool)arg3 showInDangerArea:(_Bool)arg4 isPinnedToLine:(_Bool)arg5;
- (void)_setGuideLine:(id)arg1 visible:(_Bool)arg2;
@property(nonatomic) _Bool shouldAdjustCenterAlignmentGuidesWithMargins;
@property(nonatomic) struct UIEdgeInsets marginPadding;
- (double)_maximumRotationAngleForSticker:(id)arg1;
- (_Bool)_rotationPermittedForSticker:(id)arg1;
- (double)_minimumScaleForSticker:(id)arg1;
- (double)_maximumScaleForSticker:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)stickerAtPointInWindowCoordinates:(struct CGPoint)arg1;
- (void)touchDetector:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)_updateStickerEdgeAlignmentGuide;
- (void)_updateAlignedWithStickerAngleForGesture:(id)arg1;
- (void)_updateClosestStickerForAlignment;
- (struct CGPoint)_activeStickerReferencePointForAlignment:(long long)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_handleRotate:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_updateMarginsForRect:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)attachGesturesToView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

