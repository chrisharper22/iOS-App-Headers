//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCPContextualFeedbackControllerDelegate-Protocol.h"
#import "SCPSelfieCaptureViewControlling-Protocol.h"

@class NSString, SCPContextualFeedbackController, SCPDiagnosticView, SCPFaceAlignment, SCPPopupController, SCPSelfieCaptureCameraView, SCPSelfieCaptureFeedbackCoordinator, SCPSelfieCaptureFeedbackLabelsView, SCPSelfieCaptureInteractorState, SCPSelfieCapturePresenter, UIButton;
@protocol SCPFrameProviding, SCPSelfieCaptureViewControllerDelegate;

@interface SCPSelfieCaptureViewController : UIViewController <SCPContextualFeedbackControllerDelegate, SCPSelfieCaptureViewControlling>
{
    _Bool _canUpdateState;
    SCPSelfieCapturePresenter *_presenter;
    id <SCPSelfieCaptureViewControllerDelegate> _delegate;
    id <SCPFrameProviding> _frameProvider;
    UIButton *_requirementsButton;
    SCPSelfieCaptureFeedbackCoordinator *_feedbackCoordinator;
    SCPSelfieCaptureCameraView *_cameraView;
    SCPSelfieCaptureFeedbackLabelsView *_feedbackLabelsView;
    SCPDiagnosticView *_diagnosticView;
    SCPSelfieCaptureInteractorState *_currentState;
    SCPFaceAlignment *_lastAlignment;
    SCPPopupController *_requirementsPopupController;
    SCPContextualFeedbackController *_contextualFeedbackController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCPContextualFeedbackController *contextualFeedbackController; // @synthesize contextualFeedbackController=_contextualFeedbackController;
@property(retain, nonatomic) SCPPopupController *requirementsPopupController; // @synthesize requirementsPopupController=_requirementsPopupController;
@property(readonly, nonatomic) _Bool canUpdateState; // @synthesize canUpdateState=_canUpdateState;
@property(readonly, nonatomic) SCPFaceAlignment *lastAlignment; // @synthesize lastAlignment=_lastAlignment;
@property(readonly, nonatomic) SCPSelfieCaptureInteractorState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) SCPDiagnosticView *diagnosticView; // @synthesize diagnosticView=_diagnosticView;
@property(retain, nonatomic) SCPSelfieCaptureFeedbackLabelsView *feedbackLabelsView; // @synthesize feedbackLabelsView=_feedbackLabelsView;
@property(retain, nonatomic) SCPSelfieCaptureCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property(readonly, nonatomic) SCPSelfieCaptureFeedbackCoordinator *feedbackCoordinator; // @synthesize feedbackCoordinator=_feedbackCoordinator;
@property(retain, nonatomic) UIButton *requirementsButton; // @synthesize requirementsButton=_requirementsButton;
@property(retain, nonatomic) id <SCPFrameProviding> frameProvider; // @synthesize frameProvider=_frameProvider;
@property(nonatomic) __weak id <SCPSelfieCaptureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCPSelfieCapturePresenter *presenter; // @synthesize presenter=_presenter;
- (void)contextualFeedbackControllerDidFinishPresenting:(id)arg1;
- (void)selfieCapturePresenter:(id)arg1 requestedToShowContextualFeedbackWithMessageTitle:(id)arg2 messageBody:(id)arg3 okButtonTitle:(id)arg4;
- (void)selfieCapturePresenter:(id)arg1 didUpdateDiagnosticData:(id)arg2;
- (void)selfieCapturePresenter:(id)arg1 didFailWithError:(id)arg2;
- (void)selfieCapturePresenter:(id)arg1 didChangeState:(id)arg2 toState:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)requirementsButtonPressed;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateFeedbackLabelsView;
- (void)updateCameraView;
- (void)updateState:(id)arg1;
- (void)configureConstraints;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)setupUIDependentOnTraitCollection:(id)arg1;
- (void)initializeViews;
- (void)showCaptureRequirements;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

