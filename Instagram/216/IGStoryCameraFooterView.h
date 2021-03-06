//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGGestureHandler-Protocol.h"
#import "IGStoryCameraModeSwitcherViewDelegate-Protocol.h"
#import "IGStoryCircularHuePickerDelegate-Protocol.h"

@class IGGradientColorToggleButton, IGQuickCamCaptureButton, IGStoryCameraFormatModel, IGStoryCameraLightingButton, IGStoryCameraLowLightButton, IGStoryCameraModeSwitcherView, IGStoryCircularHuePicker, IGStoryMusicProgressButton, IGTapButton, IGUserSession, NSArray, NSString, UIView;
@protocol IGStoryCameraFooterViewDelegate;

@interface IGStoryCameraFooterView : IGPassthroughView <IGStoryCameraModeSwitcherViewDelegate, IGStoryCircularHuePickerDelegate, IGGestureHandler>
{
    UIView *_cameraButtonsWrapperView;
    IGUserSession *_userSession;
    IGStoryCircularHuePicker *_circularHuePicker;
    long long _musicModeState;
    IGStoryCameraModeSwitcherView *_cameraModeSwitcherView;
    IGStoryCameraLightingButton *_lightingButton;
    IGStoryCameraLowLightButton *_lowLightButton;
    IGQuickCamCaptureButton *_captureButton;
    IGTapButton *_rightSwitchCameraButton;
    IGGradientColorToggleButton *_gradientButton;
    IGStoryMusicProgressButton *_musicProgressButton;
    double _viewFinderMaximumY;
    id <IGStoryCameraFooterViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryCameraFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double viewFinderMaximumY; // @synthesize viewFinderMaximumY=_viewFinderMaximumY;
@property(readonly, nonatomic) IGStoryMusicProgressButton *musicProgressButton; // @synthesize musicProgressButton=_musicProgressButton;
@property(readonly, nonatomic) IGGradientColorToggleButton *gradientButton; // @synthesize gradientButton=_gradientButton;
@property(readonly, nonatomic) IGTapButton *rightSwitchCameraButton; // @synthesize rightSwitchCameraButton=_rightSwitchCameraButton;
@property(readonly, nonatomic) IGQuickCamCaptureButton *captureButton; // @synthesize captureButton=_captureButton;
@property(readonly, nonatomic) IGStoryCameraLowLightButton *lowLightButton; // @synthesize lowLightButton=_lowLightButton;
@property(readonly, nonatomic) IGStoryCameraLightingButton *lightingButton; // @synthesize lightingButton=_lightingButton;
@property(readonly, nonatomic) IGStoryCameraModeSwitcherView *cameraModeSwitcherView; // @synthesize cameraModeSwitcherView=_cameraModeSwitcherView;
@property(nonatomic) long long musicModeState; // @synthesize musicModeState=_musicModeState;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)circularHuePickerDidEndSelection:(id)arg1;
- (void)circularHuePicker:(id)arg1 didUpdateWithColor:(id)arg2;
- (void)cameraModeSwitcherViewDidDisplayMode:(id)arg1;
- (void)cameraModeSwitcherViewDidEndScrollOnMode:(id)arg1;
- (void)cameraModeSwitcherViewDidSelectMode:(id)arg1;
- (void)cameraModeSwitcherView:(id)arg1 didSwitchFromMode:(id)arg2 toMode:(id)arg3;
- (_Bool)cameraModeSwitcherView:(id)arg1 shouldBeginDraggingFromMode:(id)arg2;
- (id)_centerButton;
- (void)_configureAccessibilityOrder;
- (void)_setupDefaultControlConfiguration;
- (void)setCameraButtonsWrapperViewHidden:(_Bool)arg1;
- (void)updateControlsIfNeeded;
- (void)switchToCameraMode:(id)arg1;
- (void)setModeSwitcherEnabled:(_Bool)arg1;
- (void)setFooterViewEnabled:(_Bool)arg1;
- (void)showCameraModeSwitcher:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)currentModeIndex;
@property(readonly, nonatomic) IGStoryCameraFormatModel *currentMode;
@property(readonly, nonatomic) NSArray *modes;
- (double)minimumHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_didTapLowLightButton;
- (void)_didTapMusicProgressButton;
- (void)_didLongPressGradientButton:(id)arg1;
- (void)_didTapGradientButton;
- (void)_didTapLightingButton;
- (void)_didTapSwitchCameraButton;
- (struct UIEdgeInsets)_modeSwitcherHitTestInsets;
- (void)layoutSubviews;
- (_Bool)_isNotchedDevice;
- (id)initWithUserSession:(id)arg1 availableCameraSwitcherModes:(id)arg2 availableCaptureButtonModes:(id)arg3 initialMode:(id)arg4 captureButtonDelegate:(id)arg5 useContinuousCaptureRing:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

