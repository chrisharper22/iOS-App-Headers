//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGVideoCallCaptureControlsViewDelegate-Protocol.h"
#import "IGVideoCallHaloFooterViewDelegate-Protocol.h"
#import "IGVideoCallHeaderViewDelegate-Protocol.h"

@class IGBaseLobbyPrivacyViewController, IGCoreTextView, IGDirectAvatarView, IGImageView, IGPartialModalSheetViewController, IGRTCKragleCall, IGRoomsLobbyViewModel, IGTextButton, IGUserSession, IGVideoCallHaloFooterViewController, IGVideoCallHaloHeaderViewController, IGVideoCallHeaderView, IGVideoCallLoggingContext, IGVideoCallManager, IGVideoCallRoomLogger, NSString, UIActivityIndicatorView, UILabel, UIView;
@protocol IGNativeRoomsLobbyViewControllerDelegate, IGRTCVideoCallControllerParticipantDelegate><IGRTCVideoCallControllerConnectionDelegate, IGSubscriptionToken, IGVideoCallCaptureCoordinatorAREffectProtocol;

@interface IGNativeRoomsLobbyViewController : IGViewController <IGCoreTextLinkHandler, IGVideoCallCaptureControlsViewDelegate, IGVideoCallHeaderViewDelegate, IGVideoCallHaloFooterViewDelegate>
{
    IGUserSession *_userSession;
    id <IGSubscriptionToken> _lobbyViewModelSubscription;
    id <IGSubscriptionToken> _participantsSubscriptionToken;
    IGRTCKragleCall *_call;
    IGTextButton *_joinRoomButton;
    IGTextButton *_cameraPreviewButton;
    IGImageView *_roomOwnerProfilePictureBackground;
    UIView *_blurEffectView;
    UIView *_darkScreenView;
    _Bool _isE2eeMandated;
    _Bool _isSelfVideoDisabled;
    _Bool _participantsPresent;
    _Bool _isShowingCameraPreview;
    IGCoreTextView *_privacyPolicyButtonView;
    IGPartialModalSheetViewController *_privacyPolicyContainerViewController;
    IGBaseLobbyPrivacyViewController *_privacyViewController;
    IGDirectAvatarView *_avatarView;
    IGDirectAvatarView *_currentUserAvatarView;
    IGImageView *_currentUserBackgroundView;
    UILabel *_activeParticipantsLabel;
    IGVideoCallManager<IGRTCVideoCallControllerParticipantDelegate><IGRTCVideoCallControllerConnectionDelegate> *_videoCallManager;
    UIActivityIndicatorView *_loadingSpinner;
    id <IGNativeRoomsLobbyViewControllerDelegate> _lobbyDelegate;
    id <IGVideoCallCaptureCoordinatorAREffectProtocol> _captureCoordinator;
    UIView *_previewView;
    UIView *_controllerPreviewView;
    UILabel *_roomNameLabel;
    UILabel *_roomSubtitleLabel;
    UILabel *_e2eeSubtitleLabel;
    IGImageView *_roomIcon;
    IGVideoCallHeaderView *_headerView;
    IGVideoCallLoggingContext *_loggingContext;
    IGVideoCallRoomLogger *_roomLogger;
    _Bool _isAudioOnly;
    _Bool _isHaloEnabled;
    IGVideoCallHaloHeaderViewController *_haloHeaderViewController;
    IGVideoCallHaloFooterViewController *_haloFooterViewController;
    IGRoomsLobbyViewModel *_currentLobbyViewModel;
    _Bool _isThreadCall;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)videoCallHaloFooterViewDidTapMicrophoneToggleButtonWithFooterView:(id)arg1 toggledOn:(_Bool)arg2;
- (void)videoCallHaloFooterViewDidTapCameraFlipButtonWithFooterView:(id)arg1 cameraDirection:(long long)arg2;
- (void)videoCallHaloFooterViewDidTapCameraToggleButtonWithFooterView:(id)arg1 toggledOn:(_Bool)arg2;
- (void)videoCallHeaderViewDidTapVideoButton:(id)arg1;
- (void)videoCallHeaderViewDidTapSpeakerButton:(id)arg1;
- (void)videoCallHeaderViewDidTapHangUpButton:(id)arg1;
- (void)videoCallHeaderViewDidTapSwitchCameraButton:(id)arg1;
- (void)videoCallHeaderViewDidTapMinimizeButton:(id)arg1;
- (void)videoCallCaptureControlsViewDidTapSwitchCameraButton:(id)arg1;
- (void)videoCallCaptureControlsViewDidTapAudioButton:(id)arg1 selected:(_Bool)arg2;
- (void)videoCallCaptureControlsViewDidTapVideoButton:(id)arg1 selected:(_Bool)arg2;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)_handleActiveParticipantsUpdate:(id)arg1;
- (id)_getProfilePictureFromURLString:(id)arg1;
- (void)_updateWithModel:(id)arg1;
- (void)_privacyPolicyButtonTapped:(id)arg1;
- (_Bool)isShowingCameraPreview;
- (void)hideCameraPreview;
- (void)_showCameraPreview;
- (void)_removeCapturingPreviewView;
- (void)_attachCapturingPreviewView;
- (void)_cameraPreviewButtonTapped:(id)arg1;
- (void)_joinRoomButtonTapped:(id)arg1;
- (void)_setupRoomUI;
- (void)viewDidLayoutSubviews;
- (struct CGRect)_previewViewNegativeSpaceFrame;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setCall:(id)arg1;
- (id)initWithUserSession:(id)arg1 isThreadCall:(_Bool)arg2 isE2eeMandated:(_Bool)arg3 roomLogger:(id)arg4 loggingContext:(id)arg5 lobbyDelegate:(id)arg6 isAudioOnly:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

