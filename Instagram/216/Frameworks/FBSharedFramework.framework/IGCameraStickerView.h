//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGOverlayTransformViewType-Protocol.h>
#import <FBSharedFramework/IGQuickCamCaptureButtonDelegate-Protocol.h>
#import <FBSharedFramework/IGSpecialBurnedInContentStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStickerViewType-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGCameraStickerContentView, IGCameraStickerModel, IGQuickCamCaptureButton, IGStickerBundleView, IGStickerCaptureManager, IGStoryCameraFormatModel, IGStoryStickerExportModel, IGTooltipView, NSString;

@interface IGCameraStickerView : UIView <IGQuickCamCaptureButtonDelegate, UIGestureRecognizerDelegate, IGOverlayTransformViewType, IGStickerViewType, IGSpecialBurnedInContentStickerViewType>
{
    IGStickerBundleView *_bundleView;
    IGCameraStickerModel *_model;
    IGQuickCamCaptureButton *_captureButton;
    IGCameraStickerContentView *_stickerContentView;
    IGStickerCaptureManager *_captureManager;
    IGTooltipView *_tooltipNUX;
    IGStoryCameraFormatModel *_storyCameraFormatModel;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryCameraFormatModel *storyCameraFormatModel; // @synthesize storyCameraFormatModel=_storyCameraFormatModel;
@property(retain, nonatomic) IGTooltipView *tooltipNUX; // @synthesize tooltipNUX=_tooltipNUX;
@property(readonly, nonatomic) IGStickerCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
@property(readonly, nonatomic) IGCameraStickerContentView *stickerContentView; // @synthesize stickerContentView=_stickerContentView;
@property(readonly, nonatomic) IGQuickCamCaptureButton *captureButton; // @synthesize captureButton=_captureButton;
@property(readonly, nonatomic) IGCameraStickerModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) IGStickerBundleView *bundleView; // @synthesize bundleView=_bundleView;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (void)updateContentForBurnIn:(_Bool)arg1;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (id)outlinePath;
- (id)transformTargetView;
- (void)captureImage;
- (void)showCaptureNUX;
- (void)hideTapForMoreLabel;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)captureButtonDidConfirm;
- (void)captureButtonDidEndExpanding;
- (void)captureButtonDidBeginExpanding;
- (void)captureButtonDidTouchDown;
- (void)captureButtonDidReleaseFromInterruption;
- (void)captureButtonDidReleaseAfterExpandingFinished;
- (void)captureButtonDidReleaseBeforeExpandingFinished;
- (void)_setCaptureImage:(id)arg1;
- (void)_hideCaptureButton;
- (void)_didDoubleTap;
- (void)_didTap;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCaptureManager:(id)arg1 model:(id)arg2 storyCameraFormatModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

