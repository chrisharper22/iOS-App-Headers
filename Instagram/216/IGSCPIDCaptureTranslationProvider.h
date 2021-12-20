//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPIDCaptureTranslationProviding-Protocol.h"

@class NSString;

@interface IGSCPIDCaptureTranslationProvider : NSObject <SCPIDCaptureTranslationProviding>
{
}

- (id)creditCardModelsLoadingFailedRetryButtonLabel;
- (id)creditCardModelsLoadingFailedSubtitleLabel;
- (id)creditCardModelsLoadingFailedTitleLabel;
- (id)errorMessage_cameraFrameProviderCannotCaptureWhileRecordingVideo;
- (id)errorMessage_cameraFrameProviderFailedToObtainInput;
- (id)errorMessage_generalError;
- (id)permissionsScreenAlertOpenSettingsButtonTitle;
- (id)permissionsScreenAlertNotNowButtonTitle;
- (id)permissionsScreenAlertCameraAccessDescription;
- (id)permissionsScreenAlertCameraAccessTitle;
- (id)permissionsScreenDeclineButtonTitle;
- (id)permissionsScreenAllowButtonTitle;
- (id)permissionsScreenDescriptionCamera;
- (id)permissionsScreenTitleCamera;
- (id)onboardingScreenTutorialFitFrameAndFocusSubtitle;
- (id)onboardingScreenTutorialFitFrameAndFocusTitle;
- (id)onboardingScreenTutorialAvoidGlareShadowsSubtitle;
- (id)onboardingScreenTutorialAvoidGlareShadowsTitle;
- (id)onboardingScreenTutorialFindFlatSurfaceSubtitle;
- (id)onboardingScreenTutorialFindFlatSurfaceTitle;
- (id)onboardingScreenLastPageActionButtonTitle;
- (id)onboardingScreenActionButtonTitle;
- (id)photoRequirementsManualFallbackDescription;
- (id)photoRequirementsManualFallbackTitle;
- (id)photoRequirementsThirdReqContent;
- (id)photoRequirementsThirdReqTitle;
- (id)photoRequirementsSecondReqContent;
- (id)photoRequirementsSecondReqTitle;
- (id)photoRequirementsFirstReqContent;
- (id)photoRequirementsFirstReqTitle;
- (id)photoRequirementsPopoverTitle;
- (id)confirmationScreenScanAgainButtonTitle;
- (id)confirmationScreenNextButtonTitleFinal;
- (id)confirmationScreenNextButtonTitleFrontSide;
- (id)confirmationScreenDescriptionFinal;
- (id)confirmationScreenDescriptionFrontSide;
- (id)confirmationScreenTitleFinal;
- (id)confirmationScreenTitleFrontSide;
- (id)errorMessage_interactorCaptureDataFailureWithDataType:(id)arg1;
- (id)errorMessage_presenterStateChangeFailureWithPreviousStateName:(id)arg1 newStateName:(id)arg2;
- (id)errorMessage_interactorStateChangeFailureWithPreviousStateName:(id)arg1 newStateName:(id)arg2;
- (id)errorMessage_saveToCameraRollFailure;
- (id)errorAlertTitle;
- (id)hintScanningID;
- (id)hintGlareDetected;
- (id)hintBlurDetected;
- (id)hintAlignIDWithFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
