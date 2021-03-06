//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCPButton, SCPCameraOverlayBorderView, SCPCameraOverlayCreditCardInfoView, SCPCameraOverlayDimmerView, SCPCameraOverlayIDPlaceholderView, SCPCameraOverlayViewState, SCPScanningOverlayView, UIActivityIndicatorView, UIButton, UILabel;
@protocol SCPCameraOverlayViewDelegate;

@interface SCPCameraOverlayView : UIView
{
    struct CGRect _boundingBox;
    SCPCameraOverlayViewState *_state;
    _Bool _isNewUIWithCustomAspectRatioEnabled;
    SCPCameraOverlayBorderView *_borderView;
    SCPCameraOverlayIDPlaceholderView *_placeholderIconView;
    SCPScanningOverlayView *_scanningOverlayView;
    SCPCameraOverlayDimmerView *_dimmerView;
    SCPCameraOverlayCreditCardInfoView *_creditCardInfoView;
    UIActivityIndicatorView *_activityIndicatorView;
    UIButton *_cancelButton;
    UILabel *_modelsLoadingFailedTitle;
    UILabel *_modelsLoadingFailedSubtitle;
    SCPButton *_retryModelLoadingButton;
    id <SCPCameraOverlayViewDelegate> _delegate;
    UILabel *_manualCaptureHintLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *manualCaptureHintLabel; // @synthesize manualCaptureHintLabel=_manualCaptureHintLabel;
@property(nonatomic) __weak id <SCPCameraOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCPButton *retryModelLoadingButton; // @synthesize retryModelLoadingButton=_retryModelLoadingButton;
@property(readonly, nonatomic) UILabel *modelsLoadingFailedSubtitle; // @synthesize modelsLoadingFailedSubtitle=_modelsLoadingFailedSubtitle;
@property(readonly, nonatomic) UILabel *modelsLoadingFailedTitle; // @synthesize modelsLoadingFailedTitle=_modelsLoadingFailedTitle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)boundingBoxWithRatio:(double)arg1;
- (struct CGRect)calculateBoundingBox;
- (void)retryButtonPressed;
- (void)cancelButtonPressed;
- (void)showCancelButton;
- (double)placeholderIconViewMargin;
- (void)_toggleLoadingSpinner:(_Bool)arg1;
- (void)toggleLoadingSpinner:(_Bool)arg1;
- (void)_showCreditCardData:(id)arg1;
- (void)showCreditCardData:(id)arg1;
- (void)updateBorderTintColor:(id)arg1;
- (void)hideScanningOverlay;
- (void)showScanningOverlay;
- (void)tapToFocus:(id)arg1;
- (void)animateOutPlaceholderIconView;
- (void)adjustPlaceholderIconViewFrameIfNeeded;
- (void)setState:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)boundingBox;
- (id)borderView;
- (id)initWithIsNewUIWithCustomAspectRatioEnabled:(_Bool)arg1;

@end

