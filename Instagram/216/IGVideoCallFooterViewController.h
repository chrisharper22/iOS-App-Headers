//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGVideoCallCaptureCoordinatorListener-Protocol.h"
#import "IGVideoCallE2EEFooterDisclaimerProvider-Protocol.h"
#import "IGVideoCallFooterViewDelegate-Protocol.h"

@class IGUserSession, IGVideoCallFooterView, IGVideoCallLoggingContext, IGVideoCallSimpleStateProvider, NSString, UIView;
@protocol IGCoWatchLoggingListener, IGUserLauncherSetProviding, IGVideoCallCaptureCoordinatorAREffectProtocol, IGVideoCallFooterViewControllerDelegate;

@interface IGVideoCallFooterViewController : UIViewController <IGVideoCallFooterViewDelegate, IGVideoCallCaptureCoordinatorListener, IGVideoCallE2EEFooterDisclaimerProvider>
{
    IGUserSession *_userSession;
    id <IGUserLauncherSetProviding> _launcherSet;
    IGVideoCallFooterView *_footerView;
    IGVideoCallLoggingContext *_loggingContext;
    id <IGCoWatchLoggingListener> _coWatchLogger;
    id <IGVideoCallCaptureCoordinatorAREffectProtocol> _captureCoordinator;
    long long _callType;
    UIView *_screenshotButton;
    IGVideoCallSimpleStateProvider *_simpleStateProvider;
    _Bool _faceFiltersEnabled;
    _Bool _mediaPickerEnabled;
    _Bool _mediaPickerButtonImpressionLogged;
    _Bool _faceFiltersButtonImpressionLogged;
    _Bool _addUsersEnabled;
    _Bool _videoCallSettingsEnabled;
    id <IGVideoCallFooterViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoCallFooterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDisclaimerVisible:(_Bool)arg1;
- (void)captureCoordinatorDidResumeAudio:(id)arg1;
- (void)captureCoordinatorDidPauseAudio:(id)arg1;
- (void)captureCoordinatorDidPauseVideo:(id)arg1;
- (void)captureCoordinatorDidResumeVideo:(id)arg1 flipButtonVisibility:(_Bool)arg2;
- (void)videoCallFooterViewDidTapVideoCallSettingsButton:(id)arg1;
- (void)videoCallFooterViewMediaPickerButtonDidShow:(id)arg1;
- (void)videoCallFooterViewFaceFiltersButtonDidShow:(id)arg1;
- (void)videoCallFooterViewDidTapFaceFiltersButton:(id)arg1;
- (void)videoCallFooterViewDidTapAddUsersButton:(id)arg1;
- (void)videoCallFooterViewDidTapMediaPickerButton:(id)arg1;
- (void)videoCallFooterViewDidTapChevron:(id)arg1;
- (void)videoCallFooterViewDidTapHangUpButton:(id)arg1;
- (void)setSimpleStateProvider:(id)arg1;
- (void)toggleMediaPickerButton:(_Bool)arg1;
- (void)toggleAddUserButton:(_Bool)arg1;
- (void)toggleScreenshotButton:(_Bool)arg1;
- (void)showAllControls:(_Bool)arg1;
@property(readonly, nonatomic) IGVideoCallFooterView *footerView;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 captureCoordinator:(id)arg2 loggingContext:(id)arg3 coWatchLogger:(id)arg4 addUsersEnabled:(_Bool)arg5 screenshotButton:(id)arg6 faceFiltersEnabled:(_Bool)arg7 mediaPickerEnabled:(_Bool)arg8 videoCallSettingsEnabled:(_Bool)arg9 callType:(long long)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

