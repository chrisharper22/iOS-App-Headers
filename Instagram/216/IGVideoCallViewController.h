//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "AVPictureInPictureControllerDelegate-Protocol.h"
#import "FOAVideoCallViewDelegate-Protocol.h"
#import "IGBugReportCoordinatorDelegate-Protocol.h"
#import "IGCoWatchContentSelectionCoordinatorListener-Protocol.h"
#import "IGCoWatchCoordinatorDelegate-Protocol.h"
#import "IGCoWatchInteropUpgradeBannerUpsellViewDelegate-Protocol.h"
#import "IGKragleVideoRenderControllerDelegate-Protocol.h"
#import "IGPartialModalSheetCustomInteractionDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "IGRoomsOverlayViewControllerDelegate-Protocol.h"
#import "IGRoomsSettingViewControllerDelegate-Protocol.h"
#import "IGScreenCaptureButtonDelegate-Protocol.h"
#import "IGVideoCallAREffectViewControllerDelegate-Protocol.h"
#import "IGVideoCallAddUsersViewControllerDelegate-Protocol.h"
#import "IGVideoCallAudioRouteObserverListener-Protocol.h"
#import "IGVideoCallCameraPermissionCoordinatorDelegate-Protocol.h"
#import "IGVideoCallCaptureControlsViewDelegate-Protocol.h"
#import "IGVideoCallCaptureCoordinatorListener-Protocol.h"
#import "IGVideoCallEndOverlayViewControllerDelegate-Protocol.h"
#import "IGVideoCallFooterViewControllerDelegate-Protocol.h"
#import "IGVideoCallGroupVideoContainerViewDelegate-Protocol.h"
#import "IGVideoCallHaloFooterViewDelegate-Protocol.h"
#import "IGVideoCallHaloHeaderViewDelegate-Protocol.h"
#import "IGVideoCallHeaderViewDelegate-Protocol.h"
#import "IGVideoCallInCallDetailsViewControllerDelegate-Protocol.h"
#import "IGVideoCallInCallExpansionPublisherDelegate-Protocol.h"
#import "IGVideoCallNavigationTrackerDelegate-Protocol.h"
#import "IGVideoCallPhotoBoothFlowCoordinatorDelegate-Protocol.h"
#import "IGVideoCallRealtimeNotificationServiceDelegate-Protocol.h"
#import "IGVideoCallRingOverlayViewControllerDelegate-Protocol.h"
#import "IGVideoCallScreenshotFlowCoordinatorDelegate-Protocol.h"
#import "IGVideoCallSessionListener-Protocol.h"
#import "IGVideoCallSidebarViewDelegate-Protocol.h"
#import "IGVideoCallUIFooterDimensionProvider-Protocol.h"
#import "IGVideoCallVideoStreamsViewControllerDelegate-Protocol.h"
#import "IGVideoCallViewController-Protocol.h"
#import "IGVideoCallViewDelegate-Protocol.h"

@class AVPictureInPictureController, FBTimer, IGBugReportCoordinator, IGCoWatchContentSelectionCoordinator, IGCoWatchInteropUpgradeBannerUpsellView, IGDirectDataSubscriptionPipe, IGMinimizableContext, IGPartialModalSheetViewController, IGQuickPromotionCoordinator, IGRoomsInCallLogger, IGRoomsIncallRoomModel, IGRoomsOverlayViewController, IGUserSession, IGVideoCallAddUsersViewController, IGVideoCallCoWatchLogger, IGVideoCallE2eeDeviceMessagesHelper, IGVideoCallEndOverlayViewController, IGVideoCallFooterViewController, IGVideoCallHaloFooterViewController, IGVideoCallHaloHeaderViewController, IGVideoCallHeaderViewController, IGVideoCallInCallExpansionPublisher, IGVideoCallNavigationTracker, IGVideoCallNuxCoordinator, IGVideoCallRealtimeNotificationService, IGVideoCallRingOverlayViewController, IGVideoCallRoomLogger, IGVideoCallSession, IGVideoCallSidebarViewController, IGVideoCallStatusDisplay, IGVideoCallUserDataSource, IGVideoCallUserKey, IGVideoCallVideoStreamsViewController, IGVideoCallView, MPVolumeView, NSArray, NSDate, NSMutableSet, NSString, UIView, UIViewController;
@protocol FBCancelable, IGCoWatchCoordinatorProtocol, IGScreenCaptureButtonContainerInterface, IGSubscriptionToken, IGVCStackIdentifierViewIntf, IGVideoCallAREffectViewControllerInterface, IGVideoCallCameraPermissionCoordinatorInterface, IGVideoCallCaptureControlsViewProtocol, IGVideoCallCaptureCoordinatorAREffectProtocol, IGVideoCallPhotoBoothFlowCoordinatorInterface, IGVideoCallScreenshotFlowCoordinatorInterface, IGVideoCallViewControllerAnnouncer;

@interface IGVideoCallViewController : IGViewController <IGPartialModalSheetListener, IGPartialModalSheetCustomInteractionDelegate, IGVideoCallEndOverlayViewControllerDelegate, IGVideoCallFooterViewControllerDelegate, IGVideoCallHeaderViewDelegate, IGVideoCallRingOverlayViewControllerDelegate, IGRoomsOverlayViewControllerDelegate, IGVideoCallSessionListener, IGVideoCallCaptureControlsViewDelegate, IGCoWatchCoordinatorDelegate, IGCoWatchContentSelectionCoordinatorListener, IGVideoCallRealtimeNotificationServiceDelegate, IGVideoCallScreenshotFlowCoordinatorDelegate, IGVideoCallPhotoBoothFlowCoordinatorDelegate, IGVideoCallCaptureCoordinatorListener, IGVideoCallAREffectViewControllerDelegate, IGVideoCallNavigationTrackerDelegate, IGCoWatchInteropUpgradeBannerUpsellViewDelegate, IGVideoCallCameraPermissionCoordinatorDelegate, FOAVideoCallViewDelegate, IGKragleVideoRenderControllerDelegate, IGVideoCallVideoStreamsViewControllerDelegate, IGVideoCallHaloFooterViewDelegate, IGVideoCallHaloHeaderViewDelegate, IGScreenCaptureButtonDelegate, AVPictureInPictureControllerDelegate, IGVideoCallAddUsersViewControllerDelegate, IGVideoCallUIFooterDimensionProvider, IGVideoCallSidebarViewDelegate, IGVideoCallInCallDetailsViewControllerDelegate, IGVideoCallAudioRouteObserverListener, IGRoomsSettingViewControllerDelegate, IGVideoCallGroupVideoContainerViewDelegate, IGVideoCallViewDelegate, IGBugReportCoordinatorDelegate, IGVideoCallInCallExpansionPublisherDelegate, IGVideoCallViewController>
{
    IGVideoCallSession *_videoCallSession;
    id <IGVideoCallCaptureCoordinatorAREffectProtocol> _captureCoordinator;
    IGVideoCallView *_videoCallView;
    IGUserSession *_userSession;
    IGVideoCallUserKey *_currentUserKey;
    IGVideoCallFooterViewController *_oldFooterViewController;
    IGVideoCallHaloFooterViewController *_haloFooterViewController;
    IGVideoCallHeaderViewController *_oldHeaderViewController;
    IGVideoCallHaloHeaderViewController *_haloHeaderViewController;
    IGVideoCallVideoStreamsViewController *_videoStreamsViewController;
    IGVideoCallSidebarViewController *_sidebarViewController;
    IGPartialModalSheetViewController *_addUsersContainerViewController;
    IGPartialModalSheetViewController *_roomSettingsManagementContainerViewController;
    IGPartialModalSheetViewController *_roomPeopleManagementContainerViewController;
    IGPartialModalSheetViewController *_inCallDetailsContainerViewController;
    IGPartialModalSheetViewController *_waitingToJoinContainerViewController;
    UIView<IGVideoCallCaptureControlsViewProtocol> *_captureControlsView;
    IGVideoCallCoWatchLogger *_coWatchLogger;
    IGVideoCallRoomLogger *_roomLogger;
    IGRoomsInCallLogger *_inCallRoomsLogger;
    UIViewController<IGVideoCallAREffectViewControllerInterface> *_arEffectViewController;
    UIView<IGVCStackIdentifierViewIntf> *_rtcStackDebugView;
    IGVideoCallRingOverlayViewController *_ringOverlayViewController;
    IGRoomsOverlayViewController *_roomsOverlayViewController;
    IGVideoCallEndOverlayViewController *_endOverlayViewController;
    _Bool _ringTimedOut;
    _Bool _showingChrome;
    _Bool _isAREffectsEnabledInCall;
    _Bool _isAloneInCall;
    _Bool _hasShownAREffectTray;
    _Bool _minimizeEnabled;
    IGMinimizableContext *_minimizableContext;
    IGVideoCallNavigationTracker *_navigationTracker;
    _Bool _videoButtonSelected;
    _Bool _videoEffectsImpressionLogged;
    struct CGRect _groupVideoViewShrunkenFrame;
    struct CGRect _groupVideoViewFullFrame;
    IGVideoCallAddUsersViewController *_addUsersViewController;
    _Bool _canShowAddUsersButton;
    _Bool _addUsersIncludingInteropUsers;
    IGCoWatchContentSelectionCoordinator *_coWatchContentSelectionCoordinator;
    id <IGCoWatchCoordinatorProtocol> _coWatchCoordinator;
    IGVideoCallRealtimeNotificationService *_notificationService;
    id <IGVideoCallScreenshotFlowCoordinatorInterface> _screenshotCoordinator;
    id <IGVideoCallPhotoBoothFlowCoordinatorInterface> _photoBoothCoordinator;
    IGVideoCallStatusDisplay *_statusDisplay;
    id <IGVideoCallViewControllerAnnouncer> _announcer;
    IGVideoCallNuxCoordinator *_nuxCoordinator;
    IGVideoCallUserDataSource *_userDataSource;
    id <FBCancelable> _participantStateProviderToken;
    IGDirectDataSubscriptionPipe *_callModelPipe;
    id <IGSubscriptionToken> _viewModelSubscriptionToken;
    id <IGSubscriptionToken> _photoBoothStateSubscriptionToken;
    id <IGSubscriptionToken> _callModelSubscriptionToken;
    UIViewController *_navigatedViewController;
    IGCoWatchInteropUpgradeBannerUpsellView *_coWatchInteropUpgradeBannerUpsell;
    FBTimer *_coWatchUpsellBannerDismissTimer;
    FBTimer *_chromeDismissTimer;
    FBTimer *_showPeekPromoToastTimer;
    FBTimer *_effectsTrayDismissTimer;
    FBTimer *_arEffectsTrayDisplayTimer;
    id <IGVideoCallCameraPermissionCoordinatorInterface> _permissionsCoordinator;
    NSString *_linkURL;
    NSMutableSet *_currentConnectedParticipantsSet;
    _Bool _isE2eeMandated;
    _Bool _isOmniGridEnabled;
    _Bool _isHaloEnabled;
    _Bool _isLinkConvergenceEligible;
    MPVolumeView *_mpVolumeView;
    _Bool _hasShownFirstJoinRequestMessageForCurrentCall;
    _Bool _hasShownConvergenceNUX;
    _Bool _didEnterAvatarModeFromAudioRoom;
    _Bool _isAudioRoom;
    _Bool _isInitialChromeStateSet;
    int _connectionQuality;
    IGRoomsIncallRoomModel *_currentRoomModel;
    NSString *_currentSoftMuteActionID;
    NSArray *_usersPendingJoinRequests;
    id <IGScreenCaptureButtonContainerInterface> _screenshotButtonContainer;
    UIView *_screenshotButton;
    IGQuickPromotionCoordinator *_qpCoordinator;
    IGVideoCallE2eeDeviceMessagesHelper *_e2eeDeviceMessageHelper;
    AVPictureInPictureController *_systemPipController;
    _Bool _hasAudioRecordStartError;
    _Bool _hasAudioRecordLongStall;
    _Bool _displayingMuteDetectionToast;
    NSDate *_lastDisplayedMuteDetection;
    _Bool _previousHasVoiceActivity;
    _Bool _hasShownBatteryWarningForCurrentCall;
    _Bool _videoPausedDueToOcclusion;
    long long _numberOfRejoinAttempts;
    NSDate *_reconnectionAttemptStartTime;
    NSArray *_invitedParticipantsInRoom;
    IGBugReportCoordinator *_bugReportCoordinator;
    _Bool _bugReportPausedDismissal;
    IGVideoCallInCallExpansionPublisher *_inCallExpansionPublisher;
    _Bool _hasSubscribedToInCallExpansionPublisher;
    _Bool _displayedInCallExpansionToast;
}

- (void).cxx_destruct;
- (void)inCallExpansionDidPublishUserToDisplay:(id)arg1;
- (void)bugReportDidFinish;
- (id)bugReportPresentingViewController;
- (void)roomSettingsViewControllerDidUpdateJoinRequestSettings:(id)arg1 joinRequestsEnabled:(_Bool)arg2;
- (void)roomSettingsViewControllerWillUpdateJoinRequestSettings:(id)arg1 joinRequestsEnabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)roomSettingsViewControllerDidTapChangeRoomName:(id)arg1;
- (void)roomSettingsViewControllerDidChangeRoomName:(id)arg1 newRoomName:(id)arg2;
- (void)roomSettingsViewControllerDidEncryptRoom:(id)arg1 isE2eEncrypted:(_Bool)arg2;
- (void)roomSettingsViewControllerDidTapTurnOnE2eEncryption:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
- (void)onConnectedAudioDevice:(id)arg1;
- (void)didInviteParticipantsToRoom:(id)arg1;
- (void)didToggleFullscreenSearch:(_Bool)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)didTapScreenCaptureButtonWithPhotoBoothMode:(_Bool)arg1;
- (void)videoCallHaloFooterViewDidTapEffectsButtonWithFooterView:(id)arg1;
- (void)videoCallHaloFooterViewDidTapSettingsButtonWithFooterView:(id)arg1;
- (void)videoCallHaloFooterViewDidTapAddPeopleButtonWithFooterView:(id)arg1;
- (void)videoCallHaloFooterViewDidTapAudioRouteButtonWithFooterView:(id)arg1;
- (void)videoCallHaloFooterViewDidTapSpeakerToggleButtonWithFooterView:(id)arg1 toggledOn:(_Bool)arg2;
- (void)videoCallHaloFooterViewDidTapMicrophoneToggleButtonWithFooterView:(id)arg1 toggledOn:(_Bool)arg2;
- (void)videoCallHaloFooterViewDidTapMediaButtonWithFooterView:(id)arg1;
- (void)videoCallHaloFooterViewDidTapCameraFlipButtonWithFooterView:(id)arg1 cameraDirection:(long long)arg2;
- (void)videoCallHaloFooterViewDidTapCameraToggleButtonWithFooterView:(id)arg1 toggledOn:(_Bool)arg2;
- (void)videoCallHaloHeaderViewDidTapTitleBarWithHeaderView:(id)arg1;
- (void)videoCallHaloHeaderViewDidTapHangUpButtonWithHeaderView:(id)arg1;
- (void)videoCallHaloHeaderViewDidTapMoreButtonWithHeaderView:(id)arg1;
- (void)videoCallHaloHeaderViewDidTapMinimizeButtonWithHeaderView:(id)arg1;
- (void)videoRenderController:(id)arg1 videoSizeChangedForUserIdentifier:(id)arg2 videoSize:(struct CGSize)arg3;
- (void)_fetchInvitedUsersForRoom:(id)arg1;
- (_Bool)_isReconnecting;
- (void)_startEffectsTrayDismissTimer;
- (void)_showQPPeekPromo;
- (void)_registerQPPeekPromo;
- (void)_startPhotoBoothSessionWithTotalCaptures:(long long)arg1 interval:(long long)arg2 isInitiator:(_Bool)arg3;
- (id)_getAudioErrorAction:(int)arg1;
- (id)_getAudioErrorMessage:(int)arg1;
- (void)_maybeDisplayAudioErrorBanner:(id)arg1;
- (void)_maybeDisplayLowBatteryBanner;
- (void)_maybeDisplayLowConnectivityBanner:(int)arg1;
- (void)_displayFirstJoinerToast:(id)arg1;
- (void)_shareLinkTapped;
- (void)_updateShouldShowConvergenceNUX;
- (_Bool)_shouldShowConvergenceNUX;
- (void)_maybeShowConvergenceNUX:(id)arg1;
- (void)_updateShouldShowFirstJoinRequestMessage;
- (_Bool)_shouldShowFirstJoinRequestMessage;
- (void)_displayJoinRequestToast:(id)arg1;
- (void)_displayOwnerMutedYouToast:(id)arg1;
- (void)_ownerMutedYou:(id)arg1;
- (void)_handleSoftMuteActionUpdate:(struct __RSModeratorActionInfo *)arg1 callModel:(id)arg2;
- (void)_dismissMuteDetectionToast;
- (void)_addUserToCall:(id)arg1;
- (void)_handleInCallExpansionAddTappedForUser:(id)arg1;
- (void)_displayInCallExpansionSuggestionForUser:(id)arg1;
- (void)_displayMuteDetectionToast;
- (void)_handleVoiceActivityUpdateForSelfParticipantModel:(id)arg1;
- (void)_handleCallModelUpdated:(id)arg1;
- (void)_handleViewModelUpdated:(id)arg1;
- (void)_updateConnectedParticipantsIdSetIfNeeded:(id)arg1;
- (void)_updateEffectsButtonAvailability:(_Bool)arg1;
- (void)_displayEffectsTrayWithMode:(unsigned long long)arg1;
- (void)_displayEffectsTray:(_Bool)arg1;
- (void)_didTapVideoCallView:(id)arg1;
- (void)_didTapHangUpButton:(_Bool)arg1;
- (void)_didTapMoreButton;
- (void)_didTapMinimizeButton;
- (double)currentFooterHeight;
- (void)videoStreamsViewControllerDidUpdateToDominateLayout:(id)arg1 dominantItemOriginY:(double)arg2 nondominantItemOriginY:(double)arg3;
- (void)videoStreamsViewControllerDidTapEffectsButton:(id)arg1;
- (void)videoStreamsViewControllerDidTapMiniGalleryParticipants:(id)arg1;
- (void)FOAOmniGridDidChangeVideoEscalationToggleValue:(_Bool)arg1;
- (void)omniGridDidTapStopScreenShareOnSelfView;
- (void)omniGridDidTapFloatingParticipantsView;
- (void)omniGridDidTapExpandOnPeerWithModel:(id)arg1;
- (void)omniGridDidTapVideoEffectIcon:(id)arg1;
- (void)omniGridDidTapFloatingSelfView:(id)arg1;
- (void)omniGridDidTapParticipantPillWithAction:(long long)arg1;
- (void)omniGridDidTap:(id)arg1 recognizer:(id)arg2 inSelfView:(_Bool)arg3;
- (void)omniGridDidTapOnMoreOptions:(id)arg1;
- (void)_didDragToDismissOmniGrid;
- (void)groupVideoViewDidSwipeDown:(id)arg1;
- (void)groupVideoViewDidBeginPanUp:(id)arg1 withRecognizer:(id)arg2;
- (void)groupVideoViewDidDoubleTap:(id)arg1 withRecognizer:(id)arg2;
- (void)groupVideoViewDidSingleTap:(id)arg1 withRecognizer:(id)arg2;
- (void)_didEngageMinimizeVideoCallAction;
- (void)cameraPermissionCoordinatorDidCancel;
- (void)cameraPermissionCoordinatorDidEnablePermissions;
- (void)coWatchUpgradeInteropBannerUpsellViewDidTapLearnMoreButton:(id)arg1;
- (void)videoCallInCallDetailsViewControllerDidTapEndCallButton:(id)arg1;
- (void)videoCallSidebarSliderDidChangeValue:(unsigned long long)arg1 value:(double)arg2;
- (void)videoCallSidebarDidTapButton:(unsigned long long)arg1;
- (void)arEffectViewControllerDidToggleAvatarMode:(_Bool)arg1;
- (_Bool)arEffectViewControllerIsAREffectEnabledInCall;
- (_Bool)arEffectViewControllerIsCallE2eeMandated;
- (void)displayApplyingMultipeerEffectFromInitiatorWithId:(id)arg1 initiatorName:(id)arg2 effectName:(id)arg3 effectThumbnailUrlString:(id)arg4;
- (void)arEffectViewControllerDidToggleVideoOn:(id)arg1;
- (id)videoViewController;
- (void)hideEffectInstructionsOnSelfView;
- (void)showEffectInstructionsOnSelfView:(id)arg1;
- (void)arEffectViewControllerDidInteractWithEffectTray:(id)arg1;
- (void)arEffectViewControllerDidDismissMiniGallery:(id)arg1;
- (void)arEffectViewControllerDidPresentMiniGallery:(id)arg1;
- (void)arEffectViewControllerDidDismissFullScreenModal:(id)arg1;
- (void)arEffectViewControllerDidPresentFullScreenModal:(id)arg1;
- (void)arEffectViewControllerDidRemoveEffectWithMode:(unsigned long long)arg1;
- (void)arEffectViewControllerDidApplyEffectWithMode:(unsigned long long)arg1;
- (void)arEffectViewControllerWillApplyAvatarEffect;
- (void)setCameraFlipButtonVisibility:(_Bool)arg1;
- (void)captureCoordinatorDidResumeAudio:(id)arg1;
- (void)captureCoordinatorDidPauseAudio:(id)arg1;
- (void)captureCoordinatorDidResumeVideo:(id)arg1 flipButtonVisibility:(_Bool)arg2;
- (void)captureCoordinatorDidPauseVideo:(id)arg1;
- (void)didUpdatePhotoBoothProgress:(double)arg1;
- (void)photoBoothFlowDidEnd;
- (void)flowCoordinatorDidObserveHardwareScreenshotTaken;
- (void)videoCallService:(id)arg1 didReceiveNotification:(id)arg2;
- (void)contentSelectionCoordinatorDidRequestNavigation:(id)arg1 shouldMinimize:(_Bool)arg2;
- (void)contentSelectionCoordinatorDidSelectMedia:(id)arg1 tabSource:(id)arg2;
- (void)coWatchCoordinatorDidFinishReporting:(id)arg1;
- (void)coWatchCoordinatorDidStartReporting:(id)arg1;
- (struct UIEdgeInsets)_insetsForDominantLayout;
- (void)_updateCowatchE2EEDisclaimerVisibility:(_Bool)arg1;
- (void)coWatchCoordinatorDidStopPlaying:(id)arg1;
- (void)coWatchCoordinatorWillStopPlaying:(id)arg1;
- (void)coWatchCoordinator:(id)arg1 didChangeDominantColors:(id)arg2;
- (void)_displayMessageForCoWatchItemType:(long long)arg1 productType:(unsigned long long)arg2 actor:(id)arg3;
- (void)coWatchCoordinator:(id)arg1 didChangeMediaByActor:(id)arg2 mediaType:(long long)arg3 productType:(unsigned long long)arg4 isNewMedia:(_Bool)arg5 isFirstMedia:(_Bool)arg6 adminMessage:(id)arg7;
- (void)coWatchCoordinator:(id)arg1 willStartPlayingByActor:(id)arg2 tabSource:(id)arg3;
- (void)coWatchCoordinator:(id)arg1 didTapOwner:(id)arg2;
- (id)partialModalSheetViewController:(id)arg1 delegateView:(id)arg2 hitTest:(struct CGPoint)arg3 withEvent:(id)arg4;
- (double)partialModalSheetViewControllerAlphaForDimmingView:(id)arg1;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)_dismissWaitingToJoinViewController;
- (void)_presentWaitingToJoinSheet;
- (void)_dismissRoomPeopleManagementViewController;
- (void)_presentPeopleSheet;
- (void)_dismissRoomSettingsManagementViewController;
- (void)_presentRoomSettings;
- (void)_presentInCallRoomSettings;
- (void)_presentCallDetails:(_Bool)arg1;
- (void)_presentAddUsersForOutOfThreadCall;
- (void)_dismissDirectInviteSheet;
- (void)_presentDirectInviteSheetWithGestureRecognizer:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (_Bool)prefersStatusBarHidden;
- (void)videoCallViewSidebarDidShow:(id)arg1;
- (void)didNavigateToViewController:(id)arg1;
- (void)didNavigateToVideoEnabledModule;
- (void)didNavigateToVideoDisabledModule;
- (void)videoCallSession:(id)arg1 participant:(id)arg2 didUpdateVideoState:(long long)arg3 videoView:(id)arg4 audioEnabled:(_Bool)arg5;
- (void)videoCallSession:(id)arg1 participantDidLeave:(id)arg2;
- (void)videoCallSession:(id)arg1 participantDidJoin:(id)arg2 isFirstJoin:(_Bool)arg3 videoView:(id)arg4 videoState:(long long)arg5 audioEnabled:(_Bool)arg6;
- (void)endOverlayViewControllerShouldDismiss:(id)arg1;
- (void)roomsOverlayViewControllerRingDidTimeout:(id)arg1;
- (void)roomsOverlayViewControllerFinishedRingingCountdown:(id)arg1;
- (void)roomsOverlayViewControllerDidTapShowInvitedPeopleButton:(id)arg1;
- (void)roomsOverlayViewControllerDidTapInviteButton:(id)arg1;
- (void)ringOverlayViewControllerDidTapBugReportButton:(id)arg1;
- (void)ringOverlayViewControllerDidTapCallAgainButton:(id)arg1;
- (void)ringOverlayViewControllerDidTapCancelButton:(id)arg1;
- (void)ringOverlayViewControllerDidTimeout:(id)arg1;
- (void)ringOverlayViewControllerDidShowEndScreen:(id)arg1 withMessageLabel:(long long)arg2;
- (void)ringOverlayViewControllerDidShowRingScreen:(id)arg1;
- (void)videoCallHeaderViewDidTapVideoButton:(id)arg1;
- (void)videoCallHeaderViewDidTapSpeakerButton:(id)arg1;
- (void)videoCallHeaderViewDidTapHangUpButton:(id)arg1;
- (void)videoCallHeaderViewDidTapSwitchCameraButton:(id)arg1;
- (void)videoCallHeaderViewDidTapMinimizeButton:(id)arg1;
- (id)_cancelAction;
- (id)_switchToAudioActionWithHandler:(CDUnknownBlockType)arg1;
- (id)_switchToVideoActionWithHandler:(CDUnknownBlockType)arg1;
- (id)_switchToAvatarActionWithHandler:(CDUnknownBlockType)arg1;
- (void)_presentThreeWayToggleIfNeededWithCameraButtonState:(_Bool)arg1;
- (void)videoCallFooterViewControllerDidTapVideoCallSettingsButton:(id)arg1;
- (void)videoCallFooterViewControllerDidTapFaceFiltersButton:(id)arg1;
- (void)videoCallFooterViewControllerDidTapAddUsersButton:(id)arg1;
- (void)videoCallFooterViewControllerDidTapMediaPickerButton:(id)arg1;
- (void)videoCallFooterViewControllerDidTapChevron:(id)arg1;
- (void)videoCallFooterViewControllerDidTapHangUpButton:(id)arg1;
- (void)videoCallCaptureControlsViewDidTapSwitchCameraButton:(id)arg1;
- (void)videoCallCaptureControlsViewDidTapAudioButton:(id)arg1 selected:(_Bool)arg2;
- (void)videoCallCaptureControlsViewDidTapVideoButton:(id)arg1 selected:(_Bool)arg2;
- (void)customizeMinimizedViewAnimationCancelledPropertiesForState:(unsigned long long)arg1;
- (void)customizeMinimizedViewAnimationEndPropertiesForState:(unsigned long long)arg1;
- (void)customizeMinimizedViewAnimationStartPropertiesForState:(unsigned long long)arg1;
- (void)minimizedViewTappedForState:(unsigned long long)arg1;
- (struct CGSize)preferredContentSizeForMinimizedViewState:(unsigned long long)arg1;
- (_Bool)shouldSupportMinimizedViewExpandedState;
- (void)customizeAnimationCancelledProperties;
- (void)customizeAnimationEndProperties;
- (void)customizeAnimationStartProperties;
- (id)minimizableContextSharedObject;
- (void)minimizableContextDidMinimizeWithSharedObject:(id)arg1;
- (void)minimizableContextDidMaximizeWithSharedObject:(id)arg1;
- (void)minimizableContextWillMinimizeWithSharedObject:(id)arg1;
- (void)minimizableContextWillMaximizeWithSharedObject:(id)arg1;
- (_Bool)minimizableContextCanMaximize;
- (_Bool)minimizableContextCanMinimize;
- (void)minimizableContextDidBegin:(id)arg1;
- (void)_handleReconnectionUpdateForCallModel:(id)arg1;
- (void)_logSidebarExposureIfNeeded;
- (_Bool)_isHaloHeaderMoreButtonEnabled;
- (void)_startChromeDismissTimerIfNeeded;
- (void)_updateAddButtonState:(_Bool)arg1;
- (void)_presentRoomsEndCallDialog;
- (void)_enableVideo;
- (_Bool)_isDropInMode;
- (void)_turnVideoModeOffForAudioCall;
- (void)_turnVideoModeOnForAudioCall;
- (void)_dismissCoWatchUpsellBanner;
- (void)_startCoWatchUpsellBannerDismissTimer;
- (double)_inviteSheetHeight;
- (void)_presentCoWatchMediaPicker;
- (id)_mediaPickerConfigForCowatch;
- (void)_resetCallStates;
- (void)_receivedInvitedUpdate:(id)arg1 invitees:(id)arg2;
- (void)_startObservingStates;
- (void)_showChrome:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_showChrome:(_Bool)arg1 animated:(_Bool)arg2 ignoreCowatchContent:(_Bool)arg3;
- (void)_showSidebarLabelsTemporarilyIfPossible;
- (void)_updateAudioState:(_Bool)arg1;
- (void)_toggleAudio:(_Bool)arg1;
- (void)_toggleVideoCaptureSessionEnabled:(_Bool)arg1;
- (void)_showEndCallOverlayControllerIsUserInitiated:(_Bool)arg1;
- (void)_leaveCallNotUserInitiated:(long long)arg1;
- (void)_leaveCallWithReason:(long long)arg1;
- (void)_showEndScreenIfNecessary:(_Bool)arg1;
- (void)_updateLayoutIfNecessary;
- (_Bool)_isInteropCall;
- (void)_switchCaptureDeviceWithUserInputIfNeeded:(unsigned long long)arg1;
- (void)_toggleSidebar:(_Bool)arg1;
- (void)_toggleScreenshotButton:(_Bool)arg1;
- (void)_enableScreenshotsIfNecessary;
- (void)_disableScreenshots;
- (void)_dismissMediaPicker;
- (void)_showFooterViews:(_Bool)arg1;
- (void)_hideFaceFiltersTrayAndShowFooterIfNecessary;
- (id)_footerView;
- (id)_footerViewController;
- (id)_headerViewController;
- (void)_setupPhotoBoothSubscriptionsForCall:(id)arg1;
- (void)_setupCallSubscriptionsForCall:(id)arg1 screenshotEnabled:(_Bool)arg2;
- (void)_initializeAddUsersViewController;
- (double)_chromeBottomInset;
- (void)dismissToast;
- (void)displayDualButtonToast:(id)arg1 duration:(double)arg2 tapDualButtonLeftBlock:(CDUnknownBlockType)arg3 tapDualButtonRightBlock:(CDUnknownBlockType)arg4 dismissedHandler:(CDUnknownBlockType)arg5;
- (void)displayToast:(id)arg1 duration:(double)arg2 tapActionBlock:(CDUnknownBlockType)arg3 tapToastBlock:(CDUnknownBlockType)arg4 dismissedHandler:(CDUnknownBlockType)arg5;
- (void)toggleVideo:(_Bool)arg1;
- (void)fetchTargetEffectModel:(id)arg1;
- (void)transitionToError:(id)arg1;
- (void)setState:(long long)arg1;
- (void)showChrome;
- (_Bool)isShowingChrome;
- (_Bool)isMinimized;
- (void)_updateStatusDisplayLayout;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 videoCallSession:(id)arg2 captureCoordinator:(id)arg3 coWatchCoordinator:(id)arg4 dropInCoordinator:(id)arg5 userDataSource:(id)arg6 isAudioRoom:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
