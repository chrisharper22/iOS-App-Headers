//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPUITheming-Protocol.h"

@class NSString;

@interface SCPBaseIGUITheme : NSObject <SCPUITheming>
{
}

- (id)captureConfirmationScreenScrollViewGradientColor;
- (id)privacyDisclaimerViewForSelfieConfirmationScreen;
- (id)privacyDisclaimerViewForPermissionGranting;
- (id)privacyDisclaimerViewForCaptureRequirementsPopover;
- (id)privacyDisclaimerViewForOnboarding;
- (id)actionButtonsSeparatorLineColor;
- (id)captureRequirementsExplanationFont;
- (id)captureRequirementsHeadingFont;
- (id)captureRequirementsTitleFont;
- (id)captureRequirementsSeparatorColor;
- (id)captureRequirementsSurfaceBackgroundColor;
- (id)captureRequirementsSecondaryTextColor;
- (id)captureRequirementsPrimaryTextColor;
- (double)captureRequirementsButtonSize;
- (_Bool)captureRequirementsShowsCloseButton;
- (double)secondaryButtonCornerRadius;
- (id)secondaryButtonFont;
- (double)primaryButtonCornerRadius;
- (id)primaryButtonFont;
- (id)primaryTextEmphasizedFont;
- (id)secondaryTextFont;
- (id)onboardingStepIndicatorTintColor;
- (id)currentOnboardingStepIndicatorTintColor;
- (id)surfaceBackgroundColor;
- (id)onboardingSurfaceBackgroundColor;
- (id)secondaryTextColor;
- (id)secondaryButtonTextColor;
- (id)onboardingSecondaryTextColor;
- (id)secondaryButtonBackgroundColor;
- (id)onboardingPrimaryTextColor;
- (id)primaryTextColor;
- (id)primaryButtonTextColor;
- (id)primaryButtonDisabledBackgroundColor;
- (id)primaryButtonHighlightedBackgroundColor;
- (id)primaryButtonBackgroundColor;
- (id)popoverBackgroundColor;
- (id)dividerColor;
- (id)backgroundDeepmphasizedColor;
- (id)alwaysBlackColor;
- (id)navigationBarTintColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

