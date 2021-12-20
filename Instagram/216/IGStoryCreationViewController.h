//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGAnalyticsModule-Protocol.h"
#import "IGCustomViewController-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGNotificationHandler-Protocol.h"
#import "IGProfilePicturePostCaptureEditingDelegate-Protocol.h"
#import "IGScreenshotObserverDelegate-Protocol.h"
#import "IGStoryCameraDirectShareRecipientSource-Protocol.h"
#import "IGStoryCameraViewControllerDelegate-Protocol.h"
#import "IGStoryCreationViewControllerType-Protocol.h"
#import "IGStoryPostCaptureEditingViewControllerDelegate-Protocol.h"
#import "IGSundialPostCaptureEditingViewControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class IGAREffectTargetModel, IGActionableConfirmationToastController, IGAsyncTask, IGCameraLoggingContext, IGCameraTargetModel, IGDirectThreadService, IGScreenshotObserver, IGStoryCameraViewController, IGStoryCreationConfiguration, IGStoryDirectReplyTransitionCoordinator, IGStoryFacebookEligibilityProvider, IGUserSession, NSArray, NSString;
@protocol IGStoryCreationViewControllerNavigationDelegate, IGStoryCreationViewControllerSundialEventDelegate, IGStoryFormatViewControllerProtocol, IGSundialCameraPreloadingLatencyLoggingDelegate, IGSundialCreationViewControllerNavigationDelegate;

@interface IGStoryCreationViewController : UIViewController <IGCustomViewController, IGScreenshotObserverDelegate, IGStoryCameraDirectShareRecipientSource, IGStoryCameraViewControllerDelegate, IGStoryPostCaptureEditingViewControllerDelegate, IGSundialPostCaptureEditingViewControllerDelegate, UIViewControllerTransitioningDelegate, IGAnalyticsModule, IGGestureHandler, IGNotificationHandler, IGProfilePicturePostCaptureEditingDelegate, IGStoryCreationViewControllerType>
{
    IGStoryCreationConfiguration *_configuration;
    IGDirectThreadService *_threadService;
    IGCameraTargetModel *_initialCameraTarget;
    NSArray *_initialCameraEffectIDs;
    NSString *_initialTargetStickerId;
    long long _initialTargetStickerType;
    long long _initialActionSourceType;
    IGCameraLoggingContext *_loggingContext;
    IGStoryFacebookEligibilityProvider *_fbEligibilityProvider;
    IGUserSession *_userSession;
    NSString *_loggingSessionID;
    double _cameraRequestedTimestamp;
    long long _initialCameraPosition;
    _Bool _isDismissingFromShare;
    IGStoryDirectReplyTransitionCoordinator *_directReplyTransitionCoordinator;
    long long _presentationStyle;
    _Bool _shouldResetMediaOverlay;
    IGScreenshotObserver *_screenshotObserver;
    _Bool _appIsBackgrounded;
    UIViewController *_unifiedCameraPrototypeViewController;
    IGActionableConfirmationToastController *_igLiveToIGTVUploadToastController;
    NSString *_currentCompositionId;
    long long _currentCompositionMediaType;
    _Bool _active;
    _Bool _showPreloadingSettingsToast;
    id <IGStoryCreationViewControllerNavigationDelegate> _storyNavigationDelegate;
    IGStoryCameraViewController *_cameraViewController;
    id <IGSundialCreationViewControllerNavigationDelegate> _sundialNavigationDelegate;
    id <IGStoryCreationViewControllerSundialEventDelegate> _sundialEventDelegate;
    long long _entryPoint;
    NSString *_sourceMediaPk;
    NSString *_sourceMediaAuthorPk;
    NSString *_sourceMediaAuthorUsername;
    NSString *_pivotPageSeededMediaId;
    NSString *_preloadedMediaID;
    IGAREffectTargetModel *_effectTargetModelFromReel;
    id <IGSundialCameraPreloadingLatencyLoggingDelegate> _latencyLoggingDelegate;
    IGAsyncTask *_loadingAudioAsset;
    long long _state;
}

- (void).cxx_destruct;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak IGAsyncTask *loadingAudioAsset; // @synthesize loadingAudioAsset=_loadingAudioAsset;
@property(nonatomic) __weak id <IGSundialCameraPreloadingLatencyLoggingDelegate> latencyLoggingDelegate; // @synthesize latencyLoggingDelegate=_latencyLoggingDelegate;
@property(retain, nonatomic) IGAREffectTargetModel *effectTargetModelFromReel; // @synthesize effectTargetModelFromReel=_effectTargetModelFromReel;
@property(nonatomic) _Bool showPreloadingSettingsToast; // @synthesize showPreloadingSettingsToast=_showPreloadingSettingsToast;
@property(copy, nonatomic) NSString *preloadedMediaID; // @synthesize preloadedMediaID=_preloadedMediaID;
@property(copy, nonatomic) NSString *pivotPageSeededMediaId; // @synthesize pivotPageSeededMediaId=_pivotPageSeededMediaId;
@property(copy, nonatomic) NSString *sourceMediaAuthorUsername; // @synthesize sourceMediaAuthorUsername=_sourceMediaAuthorUsername;
@property(copy, nonatomic) NSString *sourceMediaAuthorPk; // @synthesize sourceMediaAuthorPk=_sourceMediaAuthorPk;
@property(copy, nonatomic) NSString *sourceMediaPk; // @synthesize sourceMediaPk=_sourceMediaPk;
@property(nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <IGStoryCreationViewControllerSundialEventDelegate> sundialEventDelegate; // @synthesize sundialEventDelegate=_sundialEventDelegate;
@property(nonatomic) __weak id <IGSundialCreationViewControllerNavigationDelegate> sundialNavigationDelegate; // @synthesize sundialNavigationDelegate=_sundialNavigationDelegate;
@property(readonly, nonatomic) IGStoryCameraViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
@property(nonatomic) __weak id <IGStoryCreationViewControllerNavigationDelegate> storyNavigationDelegate; // @synthesize storyNavigationDelegate=_storyNavigationDelegate;
- (void)_dismissToDestination:(long long)arg1;
- (void)sundialPostCaptureEditingViewController:(id)arg1 didSaveDraft:(id)arg2;
- (void)sundialPostCaptureEditingViewController:(id)arg1 didShareToStory:(long long)arg2 andDirectRecipients:(id)arg3 storyModelArray:(id)arg4 metadataArray:(id)arg5 exitPoint:(long long)arg6;
- (void)sundialPostCaptureEditingViewController:(id)arg1 didShareComposition:(id)arg2 toDestination:(long long)arg3 withPostId:(id)arg4;
- (void)sundialPostCaptureEditingViewController:(id)arg1 didTapCancelButton:(id)arg2;
- (unsigned long long)notificationPresentationPermissionsForNotificationSource:(unsigned long long)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)analyticsModule;
- (id)mediaReplyOverlayController;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_didTakeScreenshot;
- (_Bool)_isDirectCreationStyle;
- (void)_startCaptureSessionIfNeeded;
- (void)_finalizeCameraViewController;
- (void)_setupCameraViewControllerForDisplay;
- (void)_initializeCameraViewControllerIfNeeded;
- (long long)_initialCameraPosition;
- (void)_didDismissPostCaptureViewControllerWithoutSharing:(id)arg1;
- (void)_notifyAboutCapturedContent;
- (void)screenshotObserverDidSeeActiveScreenCapture:(id)arg1 event:(long long)arg2;
- (void)screenshotObserverDidSeeScreenshotTaken:(id)arg1;
- (_Bool)_isStoryReply;
@property(readonly, nonatomic) long long creationStyle;
- (void)_restartCameraViewControllerWithCameraTarget:(id)arg1;
- (void)_dismissStoryCreationView:(long long)arg1 storySendTarget:(long long)arg2 directRecipients:(id)arg3 storyModelArray:(id)arg4 metadataArray:(id)arg5;
- (id)selectedRecipients;
- (void)storyPostCaptureEditingViewControllerDidCancel:(id)arg1;
- (void)storyPostCaptureEditingViewControllerWillCancelAutoSavingDraft:(id)arg1;
- (void)storyPostCaptureEditingViewController:(id)arg1 didShareToStory:(long long)arg2 andDirectRecipients:(id)arg3 storyModelArray:(id)arg4 metadataArray:(id)arg5 exitPoint:(long long)arg6;
- (void)storyCameraViewControllerDidStopRecordingAndCaptureVideo:(id)arg1 videoCaptureResult:(id)arg2;
- (void)storyCameraViewControllerDidLaunchQRCodeURL:(id)arg1;
- (void)storyCameraViewController:(id)arg1 didUpdateRecordingProgress:(double)arg2;
- (void)storyCameraViewControllerDidStartRecording:(id)arg1;
- (void)storyCameraViewControllerDidCloseEffectGallery:(id)arg1;
- (void)storyCameraViewControllerDidOpenEffectGallery:(id)arg1;
- (void)storyCameraViewControllerDidTapOpenGallery:(id)arg1;
- (void)storyCameraViewControllerShouldCancelPostcapture:(id)arg1;
- (void)storyCameraViewController:(id)arg1 didCreateSundialComposition:(id)arg2;
- (void)storyCameraViewController:(id)arg1 didCreateMediaCompositions:(id)arg2;
- (void)storyCameraViewControllerDidSaveSundialDraft:(id)arg1;
- (void)storyCameraViewControllerDidShareToSundial:(id)arg1 toDestination:(long long)arg2;
- (void)storyCameraViewControllerDidShareToFeed:(id)arg1;
- (void)storyCameraViewController:(id)arg1 didDismissWithStoryTarget:(long long)arg2 exitPoint:(long long)arg3 directRecipients:(id)arg4 storyModelArray:(id)arg5 metadataArray:(id)arg6;
@property(readonly, nonatomic) UIViewController<IGStoryFormatViewControllerProtocol> *currentCameraFormatViewController;
- (void)storyCameraViewControllerDidBeginPhotoCapture:(id)arg1;
- (void)storyCameraViewControllerDidTapCloseButton:(id)arg1;
- (void)storyCameraViewControllerDidDismissFromSuccessfulBroadcast:(id)arg1 shouldAnimatePostToFeed:(_Bool)arg2 sharedToIGTV:(_Bool)arg3 restartWithCameraTarget:(id)arg4;
- (id)ig_keyViewControllers;
- (void)presentSavedEffectGallery;
- (void)presentEffectGallery;
- (void)presentSundialAudioBrowserIfPossible;
- (void)showPromptToApplyAudioTrack:(id)arg1 effectModel:(id)arg2;
- (void)setTargetStickerId:(id)arg1 targetStickerType:(long long)arg2 actionSourceType:(long long)arg3;
- (void)setCameraPosition:(long long)arg1;
- (void)setCameraEffectListWithIDs:(id)arg1;
- (void)setCameraTarget:(id)arg1;
@property(readonly, nonatomic) _Bool canBeginScrollingToFeed;
- (void)lastDisplayedFrameWithCompletion:(CDUnknownBlockType)arg1;
- (void)willEnterAppForeground;
- (void)willEnterAppBackground;
- (void)willBecomeInactiveWithExitPoint:(long long)arg1;
- (void)didBecomeActiveWithEntryPoint:(long long)arg1;
- (void)willBecomeActiveFromEntryPoint:(long long)arg1;
- (id)childViewControllerForStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadView;
- (void)profilePicturePostCaptureEditingViewController:(id)arg1 didSelectImage:(id)arg2;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 presentationStyle:(long long)arg2 configuration:(id)arg3 loggingContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

