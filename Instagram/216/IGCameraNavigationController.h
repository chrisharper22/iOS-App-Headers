//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCustomViewController-Protocol.h"
#import "IGFeedCreationFlowControllerType-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGMediaCaptureViewControllerDelegate-Protocol.h"
#import "IGResetToFeedPreferenceProviding-Protocol.h"
#import "IGTVVideoCompositionUploadFlowDelegate-Protocol.h"
#import "IGVideoSharingUploadFlowDelegate-Protocol.h"
#import "UINavigationBarDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class IGEditorViewController, IGFeedCreationFlowLogger, IGTVCreationAnalyticsSession, IGTVVideoCompositionUploadFlow, IGUserSession, IGVideoSharingUploadFlow, NSString, UINavigationBar, UIView;
@protocol IGCameraNavigationControllerDelegate, IGFeedCreationFlowDelegate;

@interface IGCameraNavigationController : IGViewController <IGResetToFeedPreferenceProviding, IGMediaCaptureViewControllerDelegate, IGTVVideoCompositionUploadFlowDelegate, IGVideoSharingUploadFlowDelegate, UIViewControllerTransitioningDelegate, UINavigationBarDelegate, IGCustomViewController, IGFeedCreationFlowControllerType, IGGestureHandler>
{
    IGFeedCreationFlowLogger *_logger;
    IGTVVideoCompositionUploadFlow *_igtvUploadFlow;
    IGVideoSharingUploadFlow *_videoUploadFlow;
    IGTVCreationAnalyticsSession *_creationAnalytics;
    _Bool _isDirectToShareFlow;
    id <IGFeedCreationFlowDelegate> _delegate;
    double _verticalOffset;
    id <IGCameraNavigationControllerDelegate> _navigationDelegate;
    UIView *_containerView;
    UINavigationBar *_navigationBar;
    UIView *_navigationBarShadow;
    IGEditorViewController *_currentEditor;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak IGEditorViewController *currentEditor; // @synthesize currentEditor=_currentEditor;
@property(retain, nonatomic) UIView *navigationBarShadow; // @synthesize navigationBarShadow=_navigationBarShadow;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <IGCameraNavigationControllerDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) _Bool isDirectToShareFlow; // @synthesize isDirectToShareFlow=_isDirectToShareFlow;
@property(nonatomic) double verticalOffset; // @synthesize verticalOffset=_verticalOffset;
@property(nonatomic) __weak id <IGFeedCreationFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)accessibilityPerformEscape;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (void)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)popToRootViewControllerAndResetAssetsWithNewDraft:(id)arg1;
- (void)_proceedToShareWithComposition:(id)arg1;
- (void)_proceedToShareWithMediaMetadata:(id)arg1 andVideoInfo:(id)arg2;
- (void)reloadNavigationItem:(id)arg1 animated:(_Bool)arg2;
- (void)reloadNavigationItem:(id)arg1;
- (void)_beginVideoUploadFlowForPreselectedVideo:(id)arg1 shareListManager:(id)arg2 forStartAction:(long long)arg3;
- (void)_beginVideoUploadFlowWithVideoUploadAsset:(id)arg1 startAction:(long long)arg2;
- (void)_dismissVideoSharingUploadFlowAfterUpload;
- (void)videoSharingUploadFlowDidCancelAnimated:(_Bool)arg1;
- (void)videoSharingUploadFlowDidFinishUploadForPromote;
- (void)videoSharingUploadFlowDidBeginUpload;
- (void)igtvVideoCompositionUploadFlowDidSaveDraft;
- (void)igtvVideoCompositionUploadFlowDidBeginUpload;
- (void)mediaCaptureViewController:(id)arg1 didSharePanavisionComposition:(id)arg2;
- (void)mediaCaptureViewController:(id)arg1 didSaveSundialDraft:(id)arg2;
- (void)mediaCaptureViewController:(id)arg1 didShareToStory:(long long)arg2 andDirectRecipients:(id)arg3 storyModelArray:(id)arg4 metadataArray:(id)arg5 exitPoint:(long long)arg6;
- (void)mediaCaptureViewController:(id)arg1 didShareSundialComposition:(id)arg2 toDestination:(long long)arg3;
- (void)mediaCaptureViewControllerDidShareNftPost:(id)arg1;
- (void)mediaCaptureViewController:(id)arg1 didShowSelectAlbumVC:(_Bool)arg2;
- (void)mediaCaptureViewController:(id)arg1 didTapDirectToShareNextWithComposition:(id)arg2;
- (void)mediaCaptureViewController:(id)arg1 didTapDirectToShareNextWithMetadata:(id)arg2 andVideoInfo:(id)arg3;
- (void)mediaCaptureViewControllerDidTapCameraButton:(id)arg1;
- (void)mediaCaptureViewController:(id)arg1 didSelectVideoComposition:(id)arg2;
- (void)mediaCaptureViewControllerDidCancel:(id)arg1 mediaType:(long long)arg2;
- (void)navigationBar:(id)arg1 didPopItem:(id)arg2;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)navigationBar:(id)arg1 didPushItem:(id)arg2;
- (_Bool)navigationBar:(id)arg1 shouldPushItem:(id)arg2;
- (void)_popViewControllerWithPoppedToViewWillBeVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)_pushViewController:(id)arg1 viewWillBeVisible:(_Bool)arg2 animated:(_Bool)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewControllers:(id)arg1 animateLastPush:(_Bool)arg2;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (id)ig_keyViewControllers;
- (id)initWithMetadata:(id)arg1 captureFlowViewModel:(id)arg2 mode:(long long)arg3 entryPoint:(long long)arg4 userSession:(id)arg5 creationSessionId:(id)arg6;
- (_Bool)IAcknowledgeThisAPICouldRegressFeedMetricsAndIWillRunATest;
- (id)resetToFeedPreferenceForConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
