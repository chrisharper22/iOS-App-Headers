//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGCameraViewControllerAdditionalCaptureMetadataObserver-Protocol.h"
#import "IGCameraViewControllerDataSource-Protocol.h"
#import "IGCameraViewControllerDelegate-Protocol.h"
#import "IGCameraZoomControllerDelegate-Protocol.h"
#import "IGQuickCamCaptureButtonDelegate-Protocol.h"
#import "IGStoryCameraOverlayViewControllerDelegate-Protocol.h"
#import "IGStoryCameraOverlayViewControllerVariantSelectorDataSource-Protocol.h"
#import "IGStoryCameraOverlayViewControllerVariantSelectorDelegate-Protocol.h"
#import "IGStoryDrawerDismissDelegate-Protocol.h"
#import "IGStoryFormatViewControllerProtocol-Protocol.h"
#import "IGStoryStickerGestureControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGCameraDynamicPreviewView, IGCameraLoggingContext, IGCameraViewController, IGCameraZoomController, IGStoryCameraOverlayViewController, IGStoryStyledFrameBundleView, IGUserSession, NSArray, NSMutableDictionary, NSString;
@protocol IGStoryFormatViewControllerProtocolDelegate;

@interface IGStoryMultiCamFormatViewController : UIViewController <IGCameraViewControllerDataSource, IGCameraViewControllerDelegate, IGCameraViewControllerAdditionalCaptureMetadataObserver, IGCameraZoomControllerDelegate, IGStoryCameraOverlayViewControllerDelegate, IGStoryCameraOverlayViewControllerVariantSelectorDataSource, IGStoryCameraOverlayViewControllerVariantSelectorDelegate, IGStoryDrawerDismissDelegate, IGStoryStickerGestureControllerDelegate, IGQuickCamCaptureButtonDelegate, UIGestureRecognizerDelegate, IGStoryFormatViewControllerProtocol>
{
    IGUserSession *_userSession;
    NSArray *_variants;
    unsigned long long _metricsReportedVariantIndex;
    IGStoryStyledFrameBundleView *_pipFrameView;
    IGCameraDynamicPreviewView *_pipCameraPreviewView;
    _Bool _borderEnabled;
    NSArray *_originalCaptureDevices;
    NSArray *_captureDevices;
    _Bool _didSwitchCaptureDevices;
    IGCameraZoomController *_zoomController;
    struct CGRect _detectedFaceRect;
    long long _initialMainCameraPosition;
    NSMutableDictionary *_firstFramesOfVideoCapture;
    NSMutableDictionary *_videoCreationTasks;
    long long _maxVideoSegments;
    long long _numPIPEdits;
    IGCameraLoggingContext *_loggingContext;
    double _captureButtonTapTime;
    double _contentCornerRadius;
    IGCameraViewController *_cameraViewController;
    IGStoryCameraOverlayViewController *_overlayViewController;
    CDUnknownBlockType _galleryViewControllerProvider;
    id <IGStoryFormatViewControllerProtocolDelegate> _delegate;
    struct CGRect _contentRegion;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryFormatViewControllerProtocolDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType galleryViewControllerProvider; // @synthesize galleryViewControllerProvider=_galleryViewControllerProvider;
@property(retain, nonatomic) IGStoryCameraOverlayViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(retain, nonatomic) IGCameraViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
@property(nonatomic) double contentCornerRadius; // @synthesize contentCornerRadius=_contentCornerRadius;
@property(nonatomic) struct CGRect contentRegion; // @synthesize contentRegion=_contentRegion;
- (id)analyticsModule;
- (void)hideAREffectInstructions;
- (void)showAREffectInstructions:(id)arg1 forDuration:(double)arg2;
- (void)showAREffectInstructions:(id)arg1;
- (void)cameraViewController:(id)arg1 didUpdateFlashScene:(_Bool)arg2;
- (void)cameraViewController:(id)arg1 didDetectFaceRect:(struct CGRect)arg2;
- (void)cameraViewControllerDidResumeRecording:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)cameraViewControllerDidPauseRecording:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)cameraViewControllerDidUpdateLightingCapability:(id)arg1;
- (void)cameraViewControllerDidStopRecording:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2 error:(id)arg3;
- (void)cameraViewControllerDidStartCameraSwitch:(id)arg1;
- (void)cameraViewControllerDidReceiveFirstFrame:(id)arg1;
- (void)cameraViewController:(id)arg1 willSwitchFromCameraPosition:(long long)arg2;
- (void)cameraViewController:(id)arg1 startAudioSessionDidError:(id)arg2;
- (void)cameraViewController:(id)arg1 didStartCaptureSessionWithCameraPosition:(long long)arg2 cameraOrientation:(long long)arg3;
- (void)cameraViewController:(id)arg1 didReceiveFirstFrameAfterSwitchingCamerasWithCameraPosition:(long long)arg2 cameraOrientation:(long long)arg3;
- (void)cameraViewController:(id)arg1 didFinishWithBoomerangManager:(id)arg2;
- (void)cameraViewController:(id)arg1 captureDidBecomeAvailable:(_Bool)arg2;
- (void)cameraViewController:(id)arg1 failedToCapturePhotoWithError:(id)arg2;
- (void)cameraViewController:(id)arg1 didUpdateRecordProgress:(double)arg2;
- (void)cameraViewController:(id)arg1 didChangeCameraState:(long long)arg2;
- (void)cameraViewController:(id)arg1 didFinishWithDevicePosition:(long long)arg2 videoInfos:(id)arg3 images:(id)arg4;
- (void)cameraViewControllerWillStopRecording:(id)arg1;
- (void)cameraViewControllerDidStartRecording:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)cameraViewControllerDidRequestStartRecording:(id)arg1;
- (void)cameraViewController:(id)arg1 didSwitchToCameraPosition:(long long)arg2 withUserInput:(unsigned long long)arg3;
- (void)cameraViewController:(id)arg1 didToggleLowLightMode:(_Bool)arg2;
- (void)cameraViewController:(id)arg1 didChangeLightingMode:(long long)arg2;
- (struct UIEdgeInsets)cameraViewControllerSafeAreaInsets:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapRetakeButton:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 didSelectShareUpcomingEvent:(id)arg2;
- (void)storyCameraOverlayViewControllerDidTapTryIt:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (void)storyCameraOverlayViewControllerTrayDidDisappear:(id)arg1;
- (void)storyCameraOverlayViewControllerTrayDidAppear:(id)arg1;
- (void)storyCameraOverlayViewMoreInfoSheetDidLeaveFullscreenMode:(id)arg1;
- (void)storyCameraOverlayViewMoreInfoSheetDidEnterFullscreenMode:(id)arg1;
- (void)storyCameraOverlayViewDidUpdatePermissions:(id)arg1;
- (void)storyCameraOverlayViewDidExitTextInput:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapSettingsButton:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapShutterButton:(id)arg1;
- (void)storyCameraOverlayViewControllerDidBeginHandsFreeCountdown:(id)arg1;
- (void)storyCameraOverlayViewControllerDialDidStopVideoCapture:(id)arg1;
- (void)storyCameraOverlayViewControllerDialDidStartVideoCapture:(id)arg1;
- (void)storyCameraOverlayViewControllerDialDidFailVideoCapture:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 didToggleNetworkAccess:(_Bool)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didToggleMuteButton:(_Bool)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didTapSticker:(id)arg2;
- (_Bool)storyCameraOverlayViewController:(id)arg1 shouldTapSticker:(id)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didSelectAREffectScrollingSelectorItemAtIndex:(long long)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didFinishHandsFreeCountdown:(_Bool)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didEndScrollingOnAREffectScrollingSelectorItemIndex:(long long)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didEndScrollOnCameraMode:(id)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 canvasModeViewControllerDidShareToStory:(long long)arg2 andDirectRecipients:(id)arg3;
- (void)storyCameraOverlayView:(id)arg1 didChangeText:(id)arg2;
- (void)storyCameraOverlayView:(id)arg1 didChangeSliderWithValue:(double)arg2;
- (void)storyCameraOverlayView:(id)arg1 didChangePickerValueWithIndex:(long long)arg2;
- (void)storyCameraOverlayView:(id)arg1 didZoomByPercent:(double)arg2;
- (void)storyCameraOverlayView:(id)arg1 didScaleZoom:(double)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didSwitchFromCameraMode:(id)arg2 toCameraMode:(id)arg3;
- (void)storyCameraOverlayViewControllerDidTapGalleryButton:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapSwitchCameras:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapLowLightButton:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapLightingButton:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapCloseButton:(id)arg1;
- (_Bool)storyCameraOverlayViewControllerDialShouldAllowVideoCapture:(id)arg1;
- (void)stickerGestureController:(id)arg1 didUpdateAlignmentGuideState:(unsigned long long)arg2;
- (void)stickerGestureController:(id)arg1 didDeleteSticker:(id)arg2;
- (void)stickerGestureController:(id)arg1 willDeleteSticker:(id)arg2;
- (void)stickerGestureController:(id)arg1 didUpdateStickerPosition:(id)arg2;
- (void)stickerGestureController:(id)arg1 willBeginPositioningSticker:(id)arg2;
- (void)stickerGestureController:(id)arg1 didLongPressOnSticker:(id)arg2;
- (void)stickerGestureController:(id)arg1 didPressHardOnSticker:(id)arg2;
- (void)stickerGestureController:(id)arg1 didFinishPositioningSticker:(id)arg2;
- (double)stickerGestureController:(id)arg1 minimumScaleForSticker:(id)arg2;
- (double)stickerGestureController:(id)arg1 maximumScaleForSticker:(id)arg2;
- (void)stickerGestureController:(id)arg1 didTapSticker:(id)arg2 atPoint:(struct CGPoint)arg3;
- (_Bool)stickerGestureController:(id)arg1 stickerCanBeDeleted:(id)arg2;
- (_Bool)stickerGestureController:(id)arg1 shouldBeginPositioningSticker:(id)arg2 withGesture:(id)arg3;
- (_Bool)stickerGestureController:(id)arg1 stickerCanBePlacedOffGuidelines:(id)arg2;
- (_Bool)stickerGestureController:(id)arg1 stickerCanBePlacedOffscreen:(id)arg2;
- (void)storyDrawerDidDismiss:(id)arg1;
- (void)storyDrawerWillDismiss:(id)arg1 withDismissStyle:(unsigned long long)arg2;
- (_Bool)storyCameraOverlayViewControllerShouldShowVariantSelectorCloseButton:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 didEndScrollingAtIndex:(long long)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didTapVariantAtIndex:(long long)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didSelectVariantAtIndex:(long long)arg2;
- (id)storyCameraOverlayViewController:(id)arg1 variantAtIndex:(long long)arg2;
- (long long)numberOfVariantsInStoryCameraOverlayViewController:(id)arg1;
- (void)captureButtonDidConfirm;
- (void)captureButtonDidEndExpanding;
- (void)captureButtonDidReleaseFromInterruption;
- (void)captureButtonDidReleaseAfterExpandingFinished;
- (void)captureButtonDidReleaseBeforeExpandingFinished;
- (void)captureButtonDidTouchDown;
- (void)captureButtonDidBeginExpanding;
- (void)_tryStopRecording;
- (void)_tryBeginRecording;
- (void)_capturePhoto;
- (id)_pipDeviceID;
- (void)_resetPIPFrameViewPosition;
- (void)_setCameraUIForCameraCaptureState:(long long)arg1;
- (void)captureButtonDidZoomScale:(double)arg1;
- (void)zoomControllerDidStopZoom:(id)arg1;
- (void)zoomController:(id)arg1 didChangeZoomScaleBy:(double)arg2;
- (void)_handleSingleTap:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (id)cameraViewController:(id)arg1 viewforPosition:(long long)arg2;
- (id)cameraViewController:(id)arg1 viewforDevice:(id)arg2;
- (void)cameraDidStopRecording:(CDStruct_1b6d18a9)arg1;
- (void)cameraWillStopRecording;
- (void)cameraDidStartRecording:(CDStruct_1b6d18a9)arg1;
- (void)cameraWillStartRecording;
- (void)didDismissPostCaptureBySharing;
- (void)didDismissPostCaptureWithoutSharing:(id)arg1;
- (void)_setupCaptureDevices;
- (void)tearDownAnimated:(_Bool)arg1;
- (void)setupAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isManagingCameraView;
@property(readonly, nonatomic) long long prefersBottomLeftButtonType;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)_getLoggingMetadata;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 loggingContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

