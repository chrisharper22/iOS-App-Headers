//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGCameraCaptureButtonConfig, IGCameraZoomController, IGContinuousCaptureProgressRing, IGProgressRingView, IGQuickCamInnerCircleView, IGStoryCameraFormatModel, NSArray, UILongPressGestureRecognizer, UIView;
@protocol IGQuickCamCaptureButtonDelegate;

@interface IGQuickCamCaptureButton : UIButton <NSCopying>
{
    long long _buttonStyle;
    _Bool _allowsExpanding;
    _Bool _instantExpanding;
    _Bool _shouldHandleGestures;
    _Bool _shouldFinishExpandingOnRelease;
    _Bool _hidesInnerCircleWhenExpanded;
    _Bool _progressRingViewHidden;
    _Bool _handlesLongPressAsTap;
    id <IGQuickCamCaptureButtonDelegate> _delegate;
    long long _buttonState;
    IGStoryCameraFormatModel *_cameraMode;
    double _videoRecordProgress;
    double _captureInnerCircleSize;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    IGCameraZoomController *_cameraZoomController;
    IGCameraCaptureButtonConfig *_config;
    double _captureButtonExpandSize;
    double _captureInnerCircleShrinkSize;
    UIView *_background;
    UIView *_backgroundEffectContainer;
    UIView *_confirmOverlay;
    double _longPressInitialY;
    IGQuickCamInnerCircleView *_innerCircle;
    NSArray *_cameraModes;
    double _captureButtonSize;
    IGProgressRingView *_ringView;
    IGContinuousCaptureProgressRing *_continuousCaptureProgressRingView;
    UIView *_outlineView;
    struct UIEdgeInsets _captureHitInsets;
}

+ (void)setRecordingBackgroundImage:(id)arg1;
+ (id)recordingBackgroundImage;
+ (id)defaultRecordingBackgroundImage;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain, nonatomic) IGContinuousCaptureProgressRing *continuousCaptureProgressRingView; // @synthesize continuousCaptureProgressRingView=_continuousCaptureProgressRingView;
@property(retain, nonatomic) IGProgressRingView *ringView; // @synthesize ringView=_ringView;
@property(nonatomic) double captureButtonSize; // @synthesize captureButtonSize=_captureButtonSize;
@property(readonly, copy, nonatomic) NSArray *cameraModes; // @synthesize cameraModes=_cameraModes;
@property(readonly, nonatomic) IGQuickCamInnerCircleView *innerCircle; // @synthesize innerCircle=_innerCircle;
@property(nonatomic) double longPressInitialY; // @synthesize longPressInitialY=_longPressInitialY;
@property(retain, nonatomic) UIView *confirmOverlay; // @synthesize confirmOverlay=_confirmOverlay;
@property(retain, nonatomic) UIView *backgroundEffectContainer; // @synthesize backgroundEffectContainer=_backgroundEffectContainer;
@property(retain, nonatomic) UIView *background; // @synthesize background=_background;
@property(nonatomic) _Bool handlesLongPressAsTap; // @synthesize handlesLongPressAsTap=_handlesLongPressAsTap;
@property(nonatomic) _Bool progressRingViewHidden; // @synthesize progressRingViewHidden=_progressRingViewHidden;
@property(nonatomic) double captureInnerCircleShrinkSize; // @synthesize captureInnerCircleShrinkSize=_captureInnerCircleShrinkSize;
@property(nonatomic) double captureButtonExpandSize; // @synthesize captureButtonExpandSize=_captureButtonExpandSize;
@property(nonatomic) _Bool hidesInnerCircleWhenExpanded; // @synthesize hidesInnerCircleWhenExpanded=_hidesInnerCircleWhenExpanded;
@property(nonatomic) _Bool shouldFinishExpandingOnRelease; // @synthesize shouldFinishExpandingOnRelease=_shouldFinishExpandingOnRelease;
@property(retain, nonatomic) IGCameraCaptureButtonConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool shouldHandleGestures; // @synthesize shouldHandleGestures=_shouldHandleGestures;
@property(retain, nonatomic) IGCameraZoomController *cameraZoomController; // @synthesize cameraZoomController=_cameraZoomController;
@property(nonatomic) _Bool instantExpanding; // @synthesize instantExpanding=_instantExpanding;
@property(nonatomic) _Bool allowsExpanding; // @synthesize allowsExpanding=_allowsExpanding;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) struct UIEdgeInsets captureHitInsets; // @synthesize captureHitInsets=_captureHitInsets;
@property(nonatomic) double captureInnerCircleSize; // @synthesize captureInnerCircleSize=_captureInnerCircleSize;
@property(nonatomic) double videoRecordProgress; // @synthesize videoRecordProgress=_videoRecordProgress;
@property(readonly, nonatomic) IGStoryCameraFormatModel *cameraMode; // @synthesize cameraMode=_cameraMode;
@property(nonatomic) long long buttonState; // @synthesize buttonState=_buttonState;
@property(nonatomic) __weak id <IGQuickCamCaptureButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)simulateRelease;
- (void)removeTapGestureRecognizer:(id)arg1;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)removeLongPressGestureRecognizer:(id)arg1;
- (void)handleLongPressGestureRecognizer:(id)arg1;
- (void)simulateTouch;
- (void)updateForRecordingState:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_handleReleaseRecognized:(id)arg1;
- (void)_handleTouchRecognized:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_longPress:(id)arg1;
- (void)_animateButton:(CDUnknownBlockType)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)_beginExpanding;
- (void)_removeAllAnimations;
- (void)setBackgroundAndRingViewTransform:(struct CGAffineTransform)arg1;
- (void)_updateBackgroundAndOutlineVisibility;
- (void)_setTouchDownAppearanceForState:(long long)arg1;
- (void)_setDefaultAppearance;
- (void)_setExpandedStateAppearance;
- (void)_setConfirmStateAppearance;
- (void)setCameraMode:(id)arg1 withAnimation:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithConfig:(id)arg1 availableModes:(id)arg2 initialMode:(id)arg3 buttonStyle:(long long)arg4;

@end

