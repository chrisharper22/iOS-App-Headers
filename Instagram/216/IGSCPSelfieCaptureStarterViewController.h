//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCheckpointViewControllerCoordinatorProtocol-Protocol.h"
#import "IGSCPSelfieCaptureNavigationDelegate-Protocol.h"
#import "SCPSelfieCaptureFlowControllerDataSource-Protocol.h"
#import "SCPSelfieCaptureFlowControllerDelegate-Protocol.h"

@class IGARDeliveryFacade, IGSessionContext, IGTapButton, NSArray, NSString, SCPSelfieCaptureFlowController, UIActivityIndicatorView, UIViewController;
@protocol IGCheckpointViewControllerProtocol;

@interface IGSCPSelfieCaptureStarterViewController : IGViewController <SCPSelfieCaptureFlowControllerDataSource, SCPSelfieCaptureFlowControllerDelegate, IGSCPSelfieCaptureNavigationDelegate, IGCheckpointViewControllerCoordinatorProtocol>
{
    IGSessionContext *_context;
    SCPSelfieCaptureFlowController *_captureFlowController;
    IGARDeliveryFacade *_arDeliveryFacade;
    UIViewController *_entryViewController;
    _Bool _isPresentedModally;
    _Bool _isDismissEnabled;
    _Bool _isDebugModeEnabled;
    NSString *_challengeId;
    NSArray *_alignmentDirections;
    NSString *_product;
    UIActivityIndicatorView *_spinner;
    IGTapButton *_retryButton;
    NSString *_instanceId;
    NSString *_userFbId;
    NSString *_entityID;
    id <IGCheckpointViewControllerProtocol> _checkpointCoordinator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCheckpointViewControllerProtocol> checkpointCoordinator; // @synthesize checkpointCoordinator=_checkpointCoordinator;
- (id)_capturePromptImageViewWithIconImage:(id)arg1 borderColor:(id)arg2 backgroundColor:(id)arg3;
- (void)_dismiss;
- (void)_startSelfieCaptureFlowWithModelPaths:(id)arg1;
- (void)_fetchFaceTrackerModelAndStartFlow;
- (void)navigationDidEndFlow:(id)arg1 currentViewController:(id)arg2 isCancelled:(_Bool)arg3;
- (void)selfieCaptureFlowControllerDidCancelFlow:(id)arg1;
- (void)selfieCaptureFlowControllerDidFinishFlow:(id)arg1 capturedData:(id)arg2;
- (id)headDirectionSuccessImageViewsForSelfieCapture:(id)arg1;
- (id)headDirectionPromptImageViewsForSelfieCapture:(id)arg1;
- (id)captureConfirmationImageViewsForSelfieCapture:(id)arg1;
- (id)permissionGrantingImageViewsForSelfieCapture:(id)arg1;
- (id)onboardingStepsForSelfieCapture:(id)arg1;
- (id)confirmationViewControllerForSelfieCapture:(id)arg1;
- (id)captureViewControllerForSelfieCapture:(id)arg1;
- (id)permissionGrantingViewControllerForSelfieCapture:(id)arg1;
- (id)onboardingViewControllerForSelfieCapture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 hostViewController:(id)arg2 isPresentedModally:(_Bool)arg3 isDismissEnabled:(_Bool)arg4 isDebugModeEnabled:(_Bool)arg5 userFbID:(id)arg6 challengeID:(id)arg7 alignmentDirections:(id)arg8 product:(id)arg9 instanceID:(id)arg10 entityID:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

