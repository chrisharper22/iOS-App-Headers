//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "FBFacecastFrameIdProvider-Protocol.h"
#import "FNFPictureInPictureStatusUpdate-Protocol.h"
#import "IGCameraEffectBottomSheetViewControllerDelegate-Protocol.h"
#import "IGCameraEffectCollectionDataSourceListener-Protocol.h"
#import "IGFNFVideoPlayerLiveDelegate-Protocol.h"
#import "IGFundraiserDonationCheckoutSheetViewControllerDelegate-Protocol.h"
#import "IGKeyboardObserverFrameChangeDelegate-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "IGListScrollDelegate-Protocol.h"
#import "IGLiveAREffectTrayManagerDelegate-Protocol.h"
#import "IGLiveAddonConforming-Protocol.h"
#import "IGLiveCameraTrayViewControllerDelegate-Protocol.h"
#import "IGLiveContentGatingScreenDelegate-Protocol.h"
#import "IGLiveFeedbackControllerDelegate-Protocol.h"
#import "IGLiveHeaderGuestSheetManagerDelegate-Protocol.h"
#import "IGLiveInteractivityHelperDelegate-Protocol.h"
#import "IGLiveInteractivityServiceDelegate-Protocol.h"
#import "IGLiveRealtimeSubmitQuestionViewControllerDelegate-Protocol.h"
#import "IGLiveRoomGuestBroadcastViewControllerDelegate-Protocol.h"
#import "IGLiveRoomGuestEndViewControllerDelegate-Protocol.h"
#import "IGLiveRoomGuestManagerDelegate-Protocol.h"
#import "IGLiveRoomGuestPreviewViewControllerDelegate-Protocol.h"
#import "IGLiveRoomPrivacyConfirmationViewControllerDelegate-Protocol.h"
#import "IGLiveUpvoteableQuestionSheetViewControllerDelegate-Protocol.h"
#import "IGLiveViewerActionSheetControllerDelegate-Protocol.h"
#import "IGLiveViewerModeratorManagerDelegate-Protocol.h"
#import "IGLiveViewerPinnedViewModelUpdatingDelegate-Protocol.h"
#import "IGLiveViewerPostLiveManagerDelegate-Protocol.h"
#import "IGLiveViewerSharingInterstitialViewControllerDelegate-Protocol.h"
#import "IGLiveViewerShoppingManagerDelegate-Protocol.h"
#import "IGLiveViewerViewDelegate-Protocol.h"
#import "IGMediaOverlayDelegate-Protocol.h"
#import "IGMediaOverlayableItemListener-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "IGStoryFullscreenControllerType-Protocol.h"
#import "IGStoryFullscreenSectionLoggingContextStoryDataSource-Protocol.h"
#import "IGStoryPlayerMediaViewDelegate-Protocol.h"
#import "IGUserPayCheckoutSheetViewControllerDelegate-Protocol.h"
#import "IGVideoPlaybackLoggingExtrasProvider-Protocol.h"

@class BKContext, FBFacecastE2ELogger, FBInAppPurchaseStoreManager, FBTimer, IGAsyncTask, IGBloksAsyncActionHandler, IGKeyboardObserver, IGLiveAREffectTrayManager, IGLiveAddonCoordinator, IGLiveBroadcast, IGLiveBroadcastLaunchContext, IGLiveBroadcastLogger, IGLiveBroadcastSessionLogger, IGLiveCameraTrayViewController, IGLiveCommentModel, IGLiveCommentViewUpdater, IGLiveCommentWarningManager, IGLiveFeedbackController, IGLiveFlaggedCommentLedger, IGLiveHeaderGuestSheetManager, IGLiveInteractivityService, IGLiveInteractivityTimestampHelper, IGLiveNotificationStore, IGLivePlaybackLoggingContext, IGLiveRealtimeSubmitQuestionViewController, IGLiveRoomGuestBroadcastViewController, IGLiveRoomGuestEndViewController, IGLiveRoomGuestManager, IGLiveRoomGuestPreviewViewController, IGLiveRoomPrivacyConfirmationViewController, IGLiveUpvoteableQuestionSheetViewController, IGLiveViewStatusTracker, IGLiveViewerActionSheetController, IGLiveViewerListViewController, IGLiveViewerModeratorManager, IGLiveViewerPostLiveManager, IGLiveViewerShareSheetController, IGLiveViewerSharingInterstitialViewController, IGLiveViewerShoppingManager, IGLiveViewerUserPayManager, IGLiveViewerUserPayNetworker, IGLiveViewerUserPayViewModel, IGLiveWaveService, IGMediaOverlayableItem, IGMultiCameraEffectCollectionDataProvider, IGPartialModalSheetBackgroundResizingController, IGPartialModalSheetViewController, IGRealtimeStatusQuerier, IGSessionTracker, IGStoryViewerConfiguration, IGStoryViewerLoggingContext, IGStoryViewerViewModel, IGUser, IGUserSession, NSArray, NSDate, NSError, NSString, UIColor, UIView, UIViewController;
@protocol IGAPIClient, IGAdInsertionMediaViewTracking, IGLiveAddonCoordinating, IGStoryFullscreenControllerTypeDelegate, IGSubscriptionToken;

@interface IGLiveFullscreenSectionController : IGListSectionController <FBFacecastFrameIdProvider, FNFPictureInPictureStatusUpdate, IGKeyboardObserverFrameChangeDelegate, IGMediaOverlayDelegate, IGMediaOverlayableItemListener, IGListDisplayDelegate, IGListScrollDelegate, IGLiveAddonConforming, IGLiveFeedbackControllerDelegate, IGLiveHeaderGuestSheetManagerDelegate, IGLiveRealtimeSubmitQuestionViewControllerDelegate, IGLiveUpvoteableQuestionSheetViewControllerDelegate, IGLiveViewerActionSheetControllerDelegate, IGLiveViewerPinnedViewModelUpdatingDelegate, IGLiveViewerPostLiveManagerDelegate, IGLiveViewerSharingInterstitialViewControllerDelegate, IGLiveViewerViewDelegate, IGLiveContentGatingScreenDelegate, IGLiveRoomGuestBroadcastViewControllerDelegate, IGLiveRoomGuestEndViewControllerDelegate, IGLiveRoomGuestManagerDelegate, IGLiveRoomGuestPreviewViewControllerDelegate, IGLiveRoomPrivacyConfirmationViewControllerDelegate, IGStoryFullscreenSectionLoggingContextStoryDataSource, IGStoryPlayerMediaViewDelegate, IGVideoPlaybackLoggingExtrasProvider, IGLiveInteractivityServiceDelegate, IGFNFVideoPlayerLiveDelegate, IGFundraiserDonationCheckoutSheetViewControllerDelegate, IGLiveInteractivityHelperDelegate, IGLiveViewerShoppingManagerDelegate, IGUserPayCheckoutSheetViewControllerDelegate, IGLiveCameraTrayViewControllerDelegate, IGCameraEffectCollectionDataSourceListener, IGPartialModalSheetListener, IGCameraEffectBottomSheetViewControllerDelegate, IGLiveAREffectTrayManagerDelegate, IGLiveViewerModeratorManagerDelegate, IGStoryFullscreenControllerType>
{
    CDStruct_eef638a9 _liveBroadcastConfig;
    IGRealtimeStatusQuerier *_realtimeStatusQuerier;
    _Bool _initialProcessAdvanced;
    _Bool _isAcceptingQuestions;
    _Bool _requestToJoinEnabled;
    long long _liveRoomCameraPosition;
    IGLiveBroadcast *_currentBroadcast;
    IGLiveBroadcastLaunchContext *_launchContext;
    IGLiveFeedbackController *_feedbackController;
    id <IGAPIClient> _networker;
    IGUserSession *_userSession;
    IGKeyboardObserver *_keyboardObserver;
    IGStoryViewerConfiguration *_configuration;
    IGStoryViewerLoggingContext *_storyLoggingContext;
    FBFacecastE2ELogger *_e2eLogger;
    IGLivePlaybackLoggingContext *_sectionLoggingContext;
    long long _entryPoint;
    _Bool _hasStartedPlaying;
    IGLiveFlaggedCommentLedger *_flaggedCommentLedger;
    IGLiveNotificationStore *_notificationStore;
    _Bool _needsStartPulling;
    IGUser *_currentUser;
    _Bool _isStopped;
    _Bool _isBuffering;
    NSError *_currentLoadingError;
    NSString *_analyticsModule;
    IGLiveAddonCoordinator *_addonCoordinator;
    IGLiveViewStatusTracker *_viewStatusTracker;
    IGLiveViewerSharingInterstitialViewController *_sharingInterstitialViewController;
    IGLiveViewerActionSheetController *_actionSheetController;
    IGLiveCommentViewUpdater *_commentViewUpdater;
    IGLiveViewerShareSheetController *_shareSheetController;
    UIColor *_cellBackgroundColor;
    IGBloksAsyncActionHandler *_bloksAsyncActionHandler;
    BKContext *_bloksContext;
    IGLiveRoomGuestManager *_liveRoomGuestManager;
    IGLiveRoomGuestBroadcastViewController *_liveRoomGuestBroadcastViewController;
    IGLiveRoomGuestPreviewViewController *_liveRoomGuestPreviewViewController;
    IGLiveRoomPrivacyConfirmationViewController *_privacyConfirmationViewController;
    IGLiveViewerListViewController *_viewerListViewController;
    IGLiveRoomGuestEndViewController *_liveRoomGuestEndViewController;
    FBTimer *_liveRoomInviteDismissTimer;
    IGLiveBroadcastLogger *_liveRoomGuestLogger;
    IGLiveBroadcastSessionLogger *_liveRoomGuestSessionLogger;
    long long _liveRoomLoggingState;
    _Bool _didShowLiveWithPreviewToGuest;
    IGLiveCameraTrayViewController *_cameraTrayViewController;
    IGLiveAREffectTrayManager *_liveAREffectTrayManager;
    IGLiveCommentModel *_requestToJoinPrompt;
    _Bool _pendingRequestToJoin;
    _Bool _insertedRequestToJoin;
    IGLiveCommentModel *_notificationUpsellPrompt;
    IGLiveCommentModel *_followUpsellPrompt;
    _Bool _displayedUpsellPrompt;
    long long _previousSubscriptionStatus;
    IGLiveCommentModel *_shareUpsellPrompt;
    _Bool _displayedShareUpsellPrompt;
    IGLiveCommentModel *_selfJoinComment;
    IGLiveWaveService *_waveService;
    IGLiveInteractivityService *_interactivityService;
    IGLiveInteractivityTimestampHelper *_timestampHelper;
    IGLiveRealtimeSubmitQuestionViewController *_submitQuestionViewController;
    IGLiveUpvoteableQuestionSheetViewController *_liveUpvoteableQuestionSheetViewController;
    IGMediaOverlayableItem *_mediaOverlayableItem;
    FBTimer *_mediaOverlayTimer;
    NSDate *_mediaOverlayTimerStartDate;
    NSDate *_mediaOverlayTimerPauseDate;
    IGLiveViewerUserPayManager *_userPayManager;
    IGLiveViewerUserPayViewModel *_userPayViewModel;
    IGPartialModalSheetViewController *_userPayPartialModalSheetViewController;
    FBInAppPurchaseStoreManager *_inAppPurchaseStoreManager;
    IGLiveViewerUserPayNetworker *_userPayNetworker;
    _Bool _isUserPayIAPDebuggingEnabled;
    _Bool _badgesEnabled;
    IGLiveCommentWarningManager *_commentWarningManager;
    IGLiveViewerShoppingManager *_shoppingManager;
    IGSessionTracker *_shoppingSessionTracker;
    _Bool _didComeFromShoppingSurface;
    IGPartialModalSheetBackgroundResizingController *_backgroundResizingController;
    UIViewController *_presentedHalfSheetViewController;
    IGLiveHeaderGuestSheetManager *_headerManager;
    _Bool _shouldScrollVerticallyFullscreen;
    _Bool _shouldScrollVerticallyWithPeeks;
    _Bool _shouldScrollVerticallyV2;
    _Bool _shouldUseBottomHeader;
    _Bool _shouldUseStickyUFI;
    _Bool _shouldUseZoomedInNavigation;
    id <IGAdInsertionMediaViewTracking> _adInsertionMediaViewTracker;
    IGLiveViewerPostLiveManager *_postLiveManager;
    _Bool _externalPictureInPictureEnabled;
    _Bool _externalPictureInPictureWithSwipe;
    _Bool _pictureInPictureStoppedOnBackground;
    _Bool _backgroundAudioEnabled;
    NSArray *_sponsorTags;
    id <IGSubscriptionToken> _broadcastSubscriptionToken;
    unsigned long long _requestTimeSinceBroadcastStarts;
    long long _commentsDisplayMode;
    IGMultiCameraEffectCollectionDataProvider *_effectDataProvider;
    IGAsyncTask *_userLoadingTaskFromBroadcastUpdate;
    _Bool _failedFetchInfo;
    IGLiveViewerModeratorManager *_moderatorManager;
    _Bool _audioEnabled;
    _Bool _isFocusedController;
    _Bool _disabled;
    _Bool _addonLifeCycleEventEnabled;
    IGStoryViewerViewModel *_viewModel;
    id <IGStoryFullscreenControllerTypeDelegate> _delegate;
    long long _errorType;
    id <IGLiveAddonCoordinating> _coordinator;
    NSString *_identifier;
}

+ (void)_presentSubscribersOnlyLiveShareAlert;
+ (void)_presentPrivateLiveShareAlert;
+ (_Bool)_shouldStopPlaybackWithStatus:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool addonLifeCycleEventEnabled; // @synthesize addonLifeCycleEventEnabled=_addonLifeCycleEventEnabled;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <IGLiveAddonCoordinating> coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) _Bool isFocusedController; // @synthesize isFocusedController=_isFocusedController;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) __weak id <IGStoryFullscreenControllerTypeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGStoryViewerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
- (void)_presentEffectBottomSheet;
- (void)_reloadLiveBroadcastConfig;
- (id)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)receiveEvent:(unsigned long long)arg1 from:(id)arg2 payload:(id)arg3;
- (void)_contentViewDidSwipeDown;
- (void)cameraEffectCollectionDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraEffectCollectionDataSource:(id)arg1 didUpdateUsingPage:(id)arg2;
- (void)playerRestoreUserInterfaceForStopWithCompletion:(CDUnknownBlockType)arg1;
- (void)playerDidStopPictureInPicture;
- (void)playerWillStopPictureInPicture;
- (void)playerFailedToStartPictureInPictureWithError:(id)arg1;
- (void)playerDidStartPictureInPicture;
- (void)playerWillStartPictureInPicture;
- (id)_videoStartReasonString;
- (id)extrasForEventType:(unsigned long long)arg1;
- (void)_showAlertWithTitle:(id)arg1 message:(id)arg2 error:(id)arg3 actions:(id)arg4;
- (void)_showAlertWithTitle:(id)arg1 message:(id)arg2 error:(id)arg3;
- (void)_showPaymentFailedInPinedViewWithError:(id)arg1;
- (void)_handleTransactionFailureWithError:(id)arg1 productTier:(id)arg2;
- (void)_handleSuccessfulSupporterPurchaseForProductTier:(id)arg1;
- (void)_handleBuyProductForProductTier:(id)arg1;
- (void)userPayCheckoutSheetViewController:(id)arg1 didTapPayForProductTier:(id)arg2;
- (void)timestampHelper:(id)arg1 didReceiveHistoricalEvent:(id)arg2 atApproximateTimestamp:(double)arg3;
- (void)timestampHelper:(id)arg1 removeCurrentEventAtTimestamp:(double)arg2;
- (void)timestampHelper:(id)arg1 didReceiveEvent:(id)arg2 atTimestamp:(double)arg3;
- (void)_endUserPaySession;
- (void)_updateWithUserPayConfig:(id)arg1;
- (void)videoPlayer:(id)arg1 didUpdateToElapsedTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didSeekToElapsedTime:(double)arg2;
- (void)interactivityService:(id)arg1 didReceiveBadgesStatusChange:(_Bool)arg2;
- (void)interactivityServiceQuestionSubmissionStatusDidChange:(_Bool)arg1 submittedQuestionCount:(long long)arg2;
- (void)interactivityService:(id)arg1 didReceiveQuestionEvent:(id)arg2;
- (void)liveRoomGuestManager:(id)arg1 didRejectRequestWithRequestType:(unsigned long long)arg2;
- (void)liveRoomGuestManager:(id)arg1 didAcceptRequestWithRequestType:(unsigned long long)arg2;
- (void)_updateHeaderWithGuests:(id)arg1;
- (void)liveRoomGuestBroadcastViewControllerDidUpdateAREffects:(id)arg1;
- (void)liveRoomGuestBroadcastViewController:(id)arg1 didUpdateAREffectTouchSupportedStatus:(_Bool)arg2;
- (void)liveRoomGuestBroadcastViewController:(id)arg1 showAREffectInstructions:(id)arg2 forDuration:(double)arg3;
- (void)liveRoomGuestBroadcastViewControllerDidHideAREffectInstructions:(id)arg1;
- (void)liveRoomGuestBroadcastViewControllerDidApplyAREffect:(id)arg1;
- (void)liveRoomGuestBroadcastViewControllerAREffectDidBecomeAvailable:(id)arg1;
- (void)liveRoomGuestBroadcastViewControllerDidTurnOffAREffect:(id)arg1;
- (void)liveRoomGuestBroadcastViewControllerDidToggleAREffect:(id)arg1;
- (void)liveRoomGuestBroadcastViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)liveRoomGuestBroadcastViewControllerDidDismissFromCall:(id)arg1 reason:(long long)arg2;
- (void)liveRoomGuestBroadcastViewControllerWillDismiss:(id)arg1;
- (void)liveRoomGuestBroadcastViewControllerDidReceiveInvitation:(id)arg1;
- (void)liveRoomGuestBroadcastViewController:(id)arg1 didRemoveGuest:(id)arg2;
- (void)_fetchAdditionalUserDataIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)liveRoomGuestBroadcastViewController:(id)arg1 didJoinWithGuest:(id)arg2;
- (void)liveRoomGuestBroadcastViewControllerDidJoinRoom:(id)arg1;
- (void)rejectButtonTappedInPrivacyConfirmationViewController:(id)arg1;
- (void)acceptButtonTappedInPrivacyConfirmationViewController:(id)arg1;
- (void)liveRoomGuestEndViewControllerDidPressDoneButton:(id)arg1;
- (void)_dismissEndViewControllerIfCurrentlyShowing;
- (void)_presentEndViewControllerWithGuests:(id)arg1;
- (void)_joinBroadcast;
- (void)_switchFromGuestToViewerWithReason:(long long)arg1;
- (void)_updateViewerOverlayForLiveRoom;
- (void)_dismissPendingUserInputUIElements;
- (void)_endGuestSessionWithReason:(long long)arg1;
- (void)_beginGuestSessionWithBroadcast;
- (void)_didMuteUser:(id)arg1;
- (void)liveViewerHeaderGuestSheetManager:(id)arg1 didMuteUser:(id)arg2;
- (void)liveViewerHeaderGuestSheetManager:(id)arg1 didWaveToUser:(id)arg2;
- (void)liveViewerHeaderGuestSheetManager:(id)arg1 didMentionUser:(id)arg2;
- (void)liveViewerHeaderGuestSheetManager:(id)arg1 requestToLeaveForUser:(id)arg2 forPresentingViewController:(id)arg3;
- (void)liveViewerHeaderGuestSheetManager:(id)arg1 didFollowUser:(id)arg2;
- (void)liveViewerHeaderGuestSheetManager:(id)arg1 didInspectUser:(id)arg2;
- (void)liveViewerHeaderGuestSheetManagerDidRequestToJoin:(id)arg1;
- (void)liveViewerHeaderGuestSheetManagerWillShowUserListSheet:(id)arg1;
- (void)liveViewerModeratorManagerBecameModeratorSession:(id)arg1;
- (void)liveViewerModeratorManagerRemovedCurrentUserModerator:(id)arg1;
- (void)liveViewerModeratorManagerAddedCurrentUserModerator:(id)arg1;
- (void)liveViewerShoppingManager:(id)arg1 didRequestModalSheetPresentationWithModalSheet:(id)arg2 viewControllerForPresentation:(id)arg3;
- (void)liveViewerShoppingManager:(id)arg1 didUpdatePartialModalSheetPresentationProgress:(double)arg2;
- (void)liveViewerPinnedViewModelUpdater:(id)arg1 didUpdatePinnedViewModel:(id)arg2;
- (void)actionSheetController:(id)arg1 didTapDeleteComment:(id)arg2 broadcast:(id)arg3;
- (void)actionSheetControllerDidCancel:(id)arg1;
- (void)actionSheetControllerDidTapStorySettings:(id)arg1;
- (void)actionSheetControllerDidTapReportAProblemButton:(id)arg1;
- (void)actionSheetControllerDidTapInviteToWatch:(id)arg1;
- (void)actionSheetController:(id)arg1 didSelectViewBroadcasterProfile:(id)arg2;
- (void)actionSheetControllerDidDeletePostLiveBroadcast:(id)arg1;
- (void)actionsheetController:(id)arg1 didTapDeleteComment:(id)arg2;
- (void)actionSheetController:(id)arg1 didSFPLTBroadcast:(id)arg2;
- (void)actionSheetController:(id)arg1 didTapReplyToUser:(id)arg2;
- (void)actionSheetController:(id)arg1 didRemoveUser:(id)arg2;
- (void)actionSheetController:(id)arg1 didMuteUser:(id)arg2;
- (void)actionSheetController:(id)arg1 didReportComment:(id)arg2;
- (void)actionSheetController:(id)arg1 didReportBroadcast:(id)arg2;
- (void)actionSheetController:(id)arg1 didTapReportBroadcast:(id)arg2;
- (void)liveUpvoteableQuestionSheetViewControllerDidReportQuestion:(id)arg1;
- (void)liveUpvoteableQuestionSheetViewController:(id)arg1 didSubmitQuestion:(id)arg2 shouldDismiss:(_Bool)arg3;
- (void)liveUpvoteableQuestionSheetViewControllerDidSelectQuestion:(id)arg1;
- (void)realtimeSubmitQuestionViewController:(id)arg1 didDismissWithQuestion:(id)arg2;
- (void)willDismissRealtimeSubmitQuestionViewController:(id)arg1;
- (void)_onAppDidBecomeActive:(id)arg1;
- (void)_onAppWillResignActive:(id)arg1;
- (void)_launchBloksAppWithBloksAppId:(id)arg1 params:(id)arg2;
- (void)_openInAppBrowserWithUrlString:(id)arg1 urlSource:(unsigned long long)arg2;
- (void)_updateViewerOverlayViewWithInteractivityEvent:(id)arg1;
- (void)_handleWaveMessage:(long long)arg1 fromUser:(id)arg2;
- (void)_dismissUpvoteableQuestionController;
- (void)_submitQuestionToBroadcaster:(id)arg1;
- (void)_presentSubmitUpvoteableQuestionController;
- (void)_presentSubmitQuestionController;
- (void)_presentViewerList;
- (void)liveAREffectTrayManagerDidSetShowing:(_Bool)arg1;
- (void)_resetInteractivityService;
- (void)_resetFeedbackController;
- (_Bool)_isUserGuest:(id)arg1;
- (void)_presentPostLiveSheet;
- (void)_handlePlaybackEndedWithViewerOverlayView:(id)arg1 pauseReasonDebugString:(id)arg2;
- (void)_updateVideoPauseForReason:(long long)arg1;
- (id)_systemCommentForSelfJoin;
- (void)_updateWithBroadcastInfo:(id)arg1;
- (void)_closeLiveViewerWithVideoStopReason:(long long)arg1;
- (void)_hideGuestPreviewView;
- (void)_showGuestPreviewViewIfNeeded;
- (void)_hideSharingInterstitial;
- (void)_showSharingInterstitialIfNeeded;
- (_Bool)_joinedAsGuest;
- (_Bool)_hasActiveLiveWithSession;
- (void)_stopMediaOverlayProgress;
- (void)_resumeMediaOverlayProgress;
- (void)_pauseMediaOverlayProgress;
- (void)_updateMediaOverlayProgress;
- (void)_startMediaOverlayProgress;
- (void)_showMediaOverlayIfNeeded;
- (_Bool)_isLiveRoom;
- (void)mediaOverlayableItemDidUpdate:(id)arg1;
- (void)didTapMediaOverlayButton:(id)arg1 mediaItem:(id)arg2;
- (void)_markFollowUpsellAsSelected:(_Bool)arg1;
- (void)_markNotificationUpsellAsNotified:(_Bool)arg1;
- (void)_toggleBroadcasterFollowStatus:(_Bool)arg1;
- (void)_toggleBroadcasterLiveSubscriptionStatus:(_Bool)arg1;
- (void)_cancelJoinRequestIfNeeded;
- (void)_markRequestToJoinCommentAsSent:(_Bool)arg1;
- (void)_showDefaultSentHUD;
- (void)_presentPrivacyConfimationViewControllerWithMethod:(id)arg1;
- (long long)cameraEffectBottomSheetViewControllerCaptureType:(id)arg1;
- (void)cameraEffectBottomSheetViewControllerDidTapTryIt:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (_Bool)cameraEffectBottomSheetViewControllerShouldPresentCamera:(id)arg1;
- (id)cameraEffectBottomSheetViewControllerAttributionModelForCurrentAREffect:(id)arg1;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didRequestRemovalOfEffectWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didToggleSaveToWishlist:(_Bool)arg2 showToast:(_Bool)arg3;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didTapViewProductItem:(id)arg2;
- (void)cameraEffectBottomSheetViewControllerDidLeaveFullscreenMode:(id)arg1;
- (void)cameraEffectBottomSheetViewControllerDidEnterFullscreenMode:(id)arg1;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)liveCameraTrayViewControllerDidConfirmSelection:(id)arg1;
- (void)liveCameraTrayViewController:(id)arg1 didRequestRemovalOfAREffectWithID:(id)arg2;
- (void)liveCameraTrayViewController:(id)arg1 didSelectEffect:(id)arg2;
- (id)effectsForLiveCameraTrayViewController:(id)arg1;
- (id)currentEffectForLiveCameraTrayViewController:(id)arg1;
@property(readonly, nonatomic) UIView *effectTrayView;
- (long long)currentCarouselTransformationSegmentIndex;
- (id)story;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (CDStruct_1b6d18a9)getFrameId;
- (void)liveRoomGuestPreviewViewControllerDidCancel:(id)arg1;
- (void)liveRoomGuestPreviewViewControllerDidSwitch:(id)arg1;
- (void)liveRoomGuestPreviewViewControllerDidContinue:(id)arg1;
- (void)liveViewerSharingInterstitialViewControllerDidCancel:(id)arg1;
- (void)liveViewerSharingInterstitialViewControllerDidConfirm:(id)arg1;
- (_Bool)feedbackController:(id)arg1 updateRequestPromptIfNeeded:(id)arg2 withIncomingRequestPrompt:(id)arg3;
- (void)feedbackControllerDidFetchCommentMuteStatus:(_Bool)arg1;
- (void)feedbackControllerDidFailToUnmuteComments:(id)arg1;
- (void)feedbackControllerDidFailToMuteComments:(id)arg1;
- (void)feedbackController:(id)arg1 didFailToUnpinComment:(id)arg2;
- (void)feedbackController:(id)arg1 didFailToPinComment:(id)arg2;
- (void)feedbackController:(id)arg1 didFetchPinnedComment:(id)arg2;
- (void)feedbackController:(id)arg1 updateWithFloatingLikeAnimationModel:(id)arg2;
- (void)feedbackController:(id)arg1 updateWithLikeAnimationModel:(id)arg2;
- (void)feedbackController:(id)arg1 didHaveBroadcastUpdate:(id)arg2 requestTimestamp:(id)arg3;
- (void)_insertShareUpsellComment;
- (void)_insertUpsellComment;
- (void)_insertRequestToJoinPrompt;
- (void)_updateWithCurrentBroadcast:(id)arg1;
- (void)feedbackController:(id)arg1 didReplaceCommentWithPk:(id)arg2 withComment:(id)arg3;
- (void)feedbackController:(id)arg1 didRemoveComment:(id)arg2;
- (void)feedbackController:(id)arg1 hasCommentsReadyToDisplay:(id)arg2 shouldLogImpression:(_Bool)arg3;
- (void)liveViewerViewContentGatingTimerExpired:(id)arg1;
- (void)liveViewerViewDidTapSeeWhyInContentGatingView:(id)arg1 actionSource:(unsigned long long)arg2;
- (void)liveViewerViewDidTapContinueInContentGatingActionSheet:(id)arg1;
- (void)liveViewerViewDidDismissContentGatingActionSheet:(id)arg1;
- (void)liveViewerViewDidDisplayContentGatingActionSheet:(id)arg1;
- (void)showDonorOutroStandaloneComponentUpsell:(id)arg1 withProfileFundraiserID:(id)arg2;
- (void)dismissFundraiserDonationCheckoutSheetViewController:(id)arg1;
- (void)fundraiserDonationCheckoutSheetViewController:(id)arg1 didCompleteDonationWithYouDonatedMessage:(id)arg2 didValidateWithServer:(_Bool)arg3;
- (void)liveViewerPostLiveManagerDidDismissPostLiveSheet:(id)arg1 backgroundViewTapped:(_Bool)arg2;
- (void)liveViewerPostLiveManagerWillPresentPostLiveSheet:(id)arg1;
- (void)viewerViewWaveBackButtonTappedForWaver:(id)arg1;
- (void)viewerViewDidChangeTopBannerVisibility:(id)arg1;
- (void)viewerViewDidToggleCommentsHeight:(id)arg1 method:(id)arg2;
- (void)_didTapUserPayButton;
- (void)viewerView:(id)arg1 didTapPinnedViewWithViewModel:(id)arg2;
- (void)viewerView:(id)arg1 didTapPinnedTextWithViewModel:(id)arg2 text:(id)arg3 URL:(id)arg4;
- (void)viewerView:(id)arg1 didTapPinnedButtonWithViewModel:(id)arg2;
- (void)_didTapFundraiserButton;
- (void)viewerViewDidRequestToHideTrays:(id)arg1;
- (void)viewerView:(id)arg1 didChangeZoomScaleWithDelta:(double)arg2;
- (void)viewerView:(id)arg1 didTapWithGestureRecognizer:(id)arg2;
- (void)seeCompassionWebResourceTappedInViewerView:(id)arg1;
- (void)viewerView:(id)arg1 didReceiveTapOnComment:(id)arg2 isPinned:(_Bool)arg3 cell:(id)arg4;
- (void)viewerViewDidChangeCommentText:(id)arg1;
- (void)viewerView:(id)arg1 didEnterCommentText:(id)arg2;
- (void)startLiveVideoButtonTappedInViewerView:(id)arg1;
- (void)_navigateToUserProfile:(id)arg1;
- (void)viewerCountButtonTappedInViewerView:(id)arg1;
- (void)headerTappedInViewerView:(id)arg1;
- (void)userListButtonTappedInViewerView:(id)arg1;
- (void)broadcasterProfileTappedInViewerView:(id)arg1;
- (void)closeButtonTappedInViewerView:(id)arg1;
- (void)storyPlayerMediaView:(id)arg1 didGenerateVideoPlaybackWarningWithError:(id)arg2;
- (void)_toggleLoadingErrorViewShow:(_Bool)arg1;
- (void)_showLoadingErrorView;
- (void)storyPlayerMediaViewDidFailToPlayback:(id)arg1 error:(id)arg2;
- (void)storyPlayerMediaViewDidFailToLoadImage:(id)arg1 error:(id)arg2 networkRequestSummary:(id)arg3;
- (void)storyPlayerMediaView:(id)arg1 willLoadURL:(id)arg2;
- (void)storyPlayerMediaView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)storyPlayerMediaViewDidPlay:(id)arg1;
- (void)storyPlayerMediaViewReceivedEmptyBuffer:(id)arg1;
- (void)storyPlayerMediaViewDidPlayToEnd:(id)arg1;
- (void)storyPlayerMediaView:(id)arg1 didUpdateProgress:(double)arg2 player:(id)arg3 captionController:(id)arg4;
- (void)storyPlayerMediaViewDidLoad:(id)arg1 loadSource:(id)arg2 networkRequestSummary:(id)arg3;
- (void)_configureForBroadcastInterruptionIfNeeded;
- (void)_configureVideoView:(id)arg1 withBroadcast:(id)arg2;
- (void)_configureMediaViewForCell:(id)arg1;
- (void)_configureViewerOverlayViewForCell:(id)arg1 startGuestSession:(_Bool)arg2;
- (id)_visibleVideoPlayer;
- (id)_visibleMediaObject;
- (id)_visibleMediaContainerView;
- (id)_visibleViewerOverlayView;
- (id)_visibleCell;
- (void)endEditingForOverlayView;
- (void)addSharingInterstitialViewWithDelegate:(id)arg1;
- (void)batchReelSeenStateUpdate;
- (double)targetDimmingPercentForProposedDimmingPercent:(double)arg1;
- (id)sectionLoggingContext;
- (void)setCommentsDisplayMode:(long long)arg1;
- (void)setFooterHidden:(_Bool)arg1;
- (void)seekToBeginning;
- (void)resetSeenState;
- (void)stopWithReason:(long long)arg1;
- (void)_pauseWithReason:(long long)arg1 stopPulling:(_Bool)arg2 enableAppIdle:(_Bool)arg3;
- (void)pauseWithReason:(long long)arg1;
- (void)_logVideoShouldStartIfNeeded;
- (void)tryResumePlaybackWithDisableAppIdle:(_Bool)arg1;
- (void)tryResumePlaybackWithReason:(long long)arg1;
- (_Bool)isPlaying;
- (void)listAdapter:(id)arg1 didEndDraggingSectionController:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)listAdapter:(id)arg1 willBeginDraggingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didScrollSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)_setupMediaOverlayForDisplayCell:(id)arg1 startGuestSession:(_Bool)arg2;
- (void)_willDisplayCell:(id)arg1;
- (void)_showInviteReceivedPrivacyConfirmationSheet;
- (void)_showModerationSessionWarningSheet;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)_logWave:(_Bool)arg1;
- (id)currentStoryItem;
- (id)scrollDelegate;
- (id)displayDelegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 storyLoggingContext:(id)arg2 entryPoint:(long long)arg3 viewerConfiguration:(id)arg4 adInsertionMediaViewTracker:(id)arg5 analyticsModule:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

