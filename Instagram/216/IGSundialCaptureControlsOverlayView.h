//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGCameraToolsMenuPickerButtonDelegate-Protocol.h"

@class IGBouncyButton, IGCameraToolsMenu, IGCameraToolsMenuMusicButton, IGCameraToolsMenuPickerButton, IGCameraToolsMenuTapButton, IGCameraToolsMenuToggleButton, IGStoryCameraHeaderPill, IGSundialMaxRecordingDurationToggleButton, IGSundialReactiveAudioInputModelDataSource, IGUserSession, NSArray, NSSet, NSString, NSTimer, UIControl;
@protocol IGSundialCaptureControlOverlayDataSource, IGSundialCaptureControlsOverlayViewDelegate, IGSundialCapturePreviewButtonProtocol;

@interface IGSundialCaptureControlsOverlayView : IGPassthroughView <IGCameraToolsMenuPickerButtonDelegate>
{
    IGUserSession *_userSession;
    IGCameraToolsMenuPickerButton *_gridVideoLayoutButton;
    IGCameraToolsMenuToggleButton *_cropModeVideoLayoutButton;
    NSTimer *_particleEmissionTimer;
    _Bool _isAnimatingMusicParticles;
    NSSet *_toolsAboveTheFold;
    _Bool _musicButtonShouldAppearWashedOut;
    IGCameraToolsMenu *_toolsMenu;
    IGSundialMaxRecordingDurationToggleButton *_maxDurationToggleButton;
    IGCameraToolsMenuMusicButton *_musicButton;
    IGCameraToolsMenuTapButton *_editClipButton;
    IGCameraToolsMenuPickerButton *_speedPicker;
    IGCameraToolsMenuPickerButton *_remixLayoutPicker;
    IGCameraToolsMenuToggleButton *_timerButton;
    IGCameraToolsMenuTapButton *_flashButton;
    IGCameraToolsMenuToggleButton *_effectsButton;
    IGCameraToolsMenuToggleButton *_colorFiltersButton;
    IGCameraToolsMenuToggleButton *_ghostButton;
    IGBouncyButton<IGSundialCapturePreviewButtonProtocol> *_viewLastCapturePreviewButton;
    IGCameraToolsMenuPickerButton *_reactiveAudioPicker;
    IGCameraToolsMenuToggleButton *_dualButton;
    IGStoryCameraHeaderPill *_preloadAudioOrEffectPill;
    IGCameraToolsMenuToggleButton *_videoLayoutButton;
    UIControl *_nextButton;
    UIControl *_deleteAllCapturesButton;
    UIControl *_deleteLastClipButton;
    id <IGSundialCaptureControlsOverlayViewDelegate> _delegate;
    id <IGSundialCaptureControlOverlayDataSource> _dataSource;
    NSArray *_recordingSpeedsV2;
    IGSundialReactiveAudioInputModelDataSource *_reactiveAudioInputModelDataSource;
    struct CGRect _captureButtonRegion;
    struct CGRect _cameraContentRegion;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IGSundialReactiveAudioInputModelDataSource *reactiveAudioInputModelDataSource; // @synthesize reactiveAudioInputModelDataSource=_reactiveAudioInputModelDataSource;
@property(nonatomic) _Bool musicButtonShouldAppearWashedOut; // @synthesize musicButtonShouldAppearWashedOut=_musicButtonShouldAppearWashedOut;
@property(nonatomic) struct CGRect cameraContentRegion; // @synthesize cameraContentRegion=_cameraContentRegion;
@property(nonatomic) struct CGRect captureButtonRegion; // @synthesize captureButtonRegion=_captureButtonRegion;
@property(readonly, nonatomic) NSArray *recordingSpeedsV2; // @synthesize recordingSpeedsV2=_recordingSpeedsV2;
@property(nonatomic) __weak id <IGSundialCaptureControlOverlayDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGSundialCaptureControlsOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIControl *deleteLastClipButton; // @synthesize deleteLastClipButton=_deleteLastClipButton;
@property(readonly, nonatomic) UIControl *deleteAllCapturesButton; // @synthesize deleteAllCapturesButton=_deleteAllCapturesButton;
@property(readonly, nonatomic) UIControl *nextButton; // @synthesize nextButton=_nextButton;
@property(readonly, nonatomic) IGCameraToolsMenuToggleButton *videoLayoutButton; // @synthesize videoLayoutButton=_videoLayoutButton;
@property(readonly, nonatomic) IGStoryCameraHeaderPill *preloadAudioOrEffectPill; // @synthesize preloadAudioOrEffectPill=_preloadAudioOrEffectPill;
@property(readonly, nonatomic) IGCameraToolsMenuToggleButton *dualButton; // @synthesize dualButton=_dualButton;
@property(readonly, nonatomic) IGCameraToolsMenuPickerButton *reactiveAudioPicker; // @synthesize reactiveAudioPicker=_reactiveAudioPicker;
@property(readonly, nonatomic) IGBouncyButton<IGSundialCapturePreviewButtonProtocol> *viewLastCapturePreviewButton; // @synthesize viewLastCapturePreviewButton=_viewLastCapturePreviewButton;
@property(readonly, nonatomic) IGCameraToolsMenuToggleButton *ghostButton; // @synthesize ghostButton=_ghostButton;
@property(readonly, nonatomic) IGCameraToolsMenuToggleButton *colorFiltersButton; // @synthesize colorFiltersButton=_colorFiltersButton;
@property(readonly, nonatomic) IGCameraToolsMenuToggleButton *effectsButton; // @synthesize effectsButton=_effectsButton;
@property(readonly, nonatomic) IGCameraToolsMenuTapButton *flashButton; // @synthesize flashButton=_flashButton;
@property(readonly, nonatomic) IGCameraToolsMenuToggleButton *timerButton; // @synthesize timerButton=_timerButton;
@property(readonly, nonatomic) IGCameraToolsMenuPickerButton *remixLayoutPicker; // @synthesize remixLayoutPicker=_remixLayoutPicker;
@property(readonly, nonatomic) IGCameraToolsMenuPickerButton *speedPicker; // @synthesize speedPicker=_speedPicker;
@property(readonly, nonatomic) IGCameraToolsMenuTapButton *editClipButton; // @synthesize editClipButton=_editClipButton;
@property(readonly, nonatomic) IGCameraToolsMenuMusicButton *musicButton; // @synthesize musicButton=_musicButton;
@property(readonly, nonatomic) IGSundialMaxRecordingDurationToggleButton *maxDurationToggleButton; // @synthesize maxDurationToggleButton=_maxDurationToggleButton;
@property(readonly, nonatomic) IGCameraToolsMenu *toolsMenu; // @synthesize toolsMenu=_toolsMenu;
- (void)pickerButton:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)pickerButtonDidCollapsePicker:(id)arg1;
- (void)pickerButtonDidExpandPicker:(id)arg1;
- (void)_didTapDualButton;
- (void)_didTapVideoLayoutCropModeButton:(id)arg1;
- (void)_createVideoLayoutSubtools;
- (void)_updateVideoLayoutButtonSubMenu;
- (id)_compatibleToolsForTool:(id)arg1;
- (id)_overflowTools;
- (void)_didTapVideoLayoutButton;
- (void)setVideoLayoutButtonSelected:(_Bool)arg1;
- (_Bool)isVideoLayoutSelected;
- (void)_emitAnimatingMusicParticles;
- (void)stopEmittingAnimatingMusicParticles;
- (void)beginEmittingAnimatingMusicParticles;
- (_Bool)_canEmitAnimatingMusicParticles;
- (void)hidePreloadAudioAndEffectPill;
- (void)showPreloadAudioAndEffectPill:(id)arg1 pillTapBlock:(CDUnknownBlockType)arg2;
- (void)_toolButtonTapped:(id)arg1;
- (void)setMaxDurationToggleButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool maxDurationToggleButtonHidden;
@property(nonatomic) _Bool reactiveAudioInputHidden;
- (void)setGhostButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool ghostButtonHidden;
@property(nonatomic) _Bool previewButtonHidden;
- (void)setMusicButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool musicButtonHidden;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 remixedVideo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
