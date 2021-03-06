//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPIDCaptureConfirmationInteractorDelegate-Protocol.h"

@class SCPIDCaptureConfirmationInteractor;
@protocol SCPIDCaptureConfirmationPresenterDelegate, SCPIDCaptureTranslationProviding, SCPIDCaptureUITheming;

@interface SCPIDCaptureConfirmationPresenter : NSObject <SCPIDCaptureConfirmationInteractorDelegate>
{
    id <SCPIDCaptureConfirmationPresenterDelegate> _delegate;
    SCPIDCaptureConfirmationInteractor *_interactor;
    id <SCPIDCaptureTranslationProviding> _translationProvider;
    id <SCPIDCaptureUITheming> _uiTheme;
    long long _flow;
}

+ (id)newWithFlow:(long long)arg1 interactor:(id)arg2 translationProvider:(id)arg3 uiTheme:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long flow; // @synthesize flow=_flow;
@property(readonly, nonatomic) id <SCPIDCaptureUITheming> uiTheme; // @synthesize uiTheme=_uiTheme;
@property(readonly, nonatomic) id <SCPIDCaptureTranslationProviding> translationProvider; // @synthesize translationProvider=_translationProvider;
@property(readonly, nonatomic) SCPIDCaptureConfirmationInteractor *interactor; // @synthesize interactor=_interactor;
@property(nonatomic) __weak id <SCPIDCaptureConfirmationPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)captureConfirmationInteractor:(id)arg1 didConfirmCapturedDataArray:(id)arg2 atCaptureStage:(id)arg3;
- (void)captureConfirmationInteractor:(id)arg1 didOpenCaptureCase:(id)arg2;
- (id)scrollViewGradientColor;
- (id)privacyDisclaimer;
- (id)nextButtonTitle;
- (id)scanAgainButtonTitle;
- (id)description;
- (id)title;
- (double)retakeButtonCornerRadius;
- (id)retakeButtonDisabledBackgroundColor;
- (id)retakeButtonHighlightedBackgroundColor;
- (id)retakeButtonBackgroundColor;
- (id)retakeButtonTextColor;
- (id)retakeButtonFont;
- (id)navigationBarTintColor;
- (double)actionButtonCornerRadius;
- (id)actionButtonDisabledBackgroundColor;
- (id)actionButtonHighlightedBackgroundColor;
- (id)actionButtonBackgroundColor;
- (id)actionButtonTextColor;
- (id)actionButtonFont;
- (id)descriptionColor;
- (id)descriptionFont;
- (long long)textAlignment;
- (id)titleColor;
- (id)titleFont;
- (id)surfaceBackgroundColor;
- (id)finalScanCompleteColor;
- (id)intermediateScanCompleteColor;
- (void)confirm;
- (id)capturedDataForCurrentStage;
- (id)imageDataForCurrentStage;
- (id)capturedDataArray;
- (id)initWithFlow:(long long)arg1 interactor:(id)arg2 translationProvider:(id)arg3 uiTheme:(id)arg4;

@end

