//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCPSelfieCaptureCameraArcView, SCPSelfieCaptureCameraViewState;
@protocol SCPSelfieCaptureTranslationProviding;

@interface SCPSelfieCaptureCameraView : UIView
{
    _Bool _shouldEmphasiseNegativeProgress;
    SCPSelfieCaptureCameraViewState *_state;
    id <SCPSelfieCaptureTranslationProviding> _translationProvider;
    UIView *_cameraPreviewView;
    SCPSelfieCaptureCameraArcView *_topArcView;
    SCPSelfieCaptureCameraArcView *_leftArcView;
    SCPSelfieCaptureCameraArcView *_rightArcView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldEmphasiseNegativeProgress; // @synthesize shouldEmphasiseNegativeProgress=_shouldEmphasiseNegativeProgress;
@property(retain, nonatomic) SCPSelfieCaptureCameraArcView *rightArcView; // @synthesize rightArcView=_rightArcView;
@property(retain, nonatomic) SCPSelfieCaptureCameraArcView *leftArcView; // @synthesize leftArcView=_leftArcView;
@property(retain, nonatomic) SCPSelfieCaptureCameraArcView *topArcView; // @synthesize topArcView=_topArcView;
@property(readonly, nonatomic) UIView *cameraPreviewView; // @synthesize cameraPreviewView=_cameraPreviewView;
@property(retain, nonatomic) id <SCPSelfieCaptureTranslationProviding> translationProvider; // @synthesize translationProvider=_translationProvider;
@property(retain, nonatomic) SCPSelfieCaptureCameraViewState *state; // @synthesize state=_state;
- (void)layoutSubviews;
- (void)setHeadDirectionSuccessImageView:(id)arg1;
- (void)setHeadDirectionPromptImageView:(id)arg1;
- (void)setCaptureProgressFillColor:(id)arg1;
- (void)setCaptureFailureColor:(id)arg1;
- (void)setCaptureSuccessColor:(id)arg1;
- (void)setCaptureInactiveColor:(id)arg1;
- (void)setCaptureActiveColor:(id)arg1;
- (struct CGRect)failFaceAlignmentRect;
- (struct CGRect)beginFaceAlignmentRect;
- (void)configureConstraints;
- (void)initializeViews;
- (id)initWithCameraPreviewView:(id)arg1 shouldEmphasiseNegativeProgress:(_Bool)arg2;

@end

