//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMediaViewerActionDelegate-Protocol.h"
#import "IGDirectMediaViewerTransitionManagerPresentationDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "IGStoryViewerPresentationControllerDelegate-Protocol.h"

@class IGDirectGradientBubbleTracker, IGDirectMediaViewerTransitionManager, IGDirectMessageMenuController, IGDirectReactingUserListViewController, IGDirectThreadAnalyticsLogger, IGDirectThreadKey, IGDirectThreadViewOutgoingMessageSendAttributionFactory, IGDirectVisualMessageViewerPresentationManager, IGLinkTapHandlingService, IGStoryViewerPresentationController, IGSupportService, IGUserSession, IGVideoPlayerManager, NSString, UIImpactFeedbackGenerator, UIViewController;
@protocol IGDirectCameraReplying, IGDirectFooterTextPromotionActionHandling, IGDirectLoadingViewProtocol, IGDirectMessageCellSwipeToReplyHandler, IGDirectMessageReplying, IGDirectMessageSending, IGDirectReplyToAuthorViewControllerPresenting, IGDirectThreadListMessageQuerying, IGDirectTranslationsFooterTextActionHandler, IGDirectVaulting, IGDirectXMACtaButtonHandling, IGDirectXMATargetURLHandling;

@interface IGDirectMessageSectionComponents : NSObject <IGDirectMediaViewerTransitionManagerPresentationDelegate, IGDirectMediaViewerActionDelegate, IGStoryViewerPresentationControllerDelegate, IGPartialModalSheetListener>
{
    IGStoryViewerPresentationController *_storyViewerPresentController;
    id <IGDirectLoadingViewProtocol> _loadingView;
    id <IGDirectThreadListMessageQuerying> _messageQuerier;
    IGDirectThreadKey *_threadKey;
    id <IGDirectReplyToAuthorViewControllerPresenting> _directReplyToAuthorPresenter;
    id <IGDirectFooterTextPromotionActionHandling> _footerTextActionHandler;
    id <IGDirectMessageCellSwipeToReplyHandler> _swipeToReplyHandler;
    id <IGDirectCameraReplying> _cameraReplyHandler;
    IGDirectReactingUserListViewController *_reactingUserListViewController;
    id <IGDirectTranslationsFooterTextActionHandler> _translationsFooterTextActionHandler;
    NSString *_lastSeenShhMessageIdForCurrentUserWhenEnteringShhMode;
    id <IGDirectXMACtaButtonHandling> _ctaButtonHandler;
    id <IGDirectXMATargetURLHandling> _targetURLHandler;
    IGDirectVisualMessageViewerPresentationManager *_visualMessageViewerPresentationManager;
    CDUnknownBlockType _storyPresentationCompletionBlock;
    CDUnknownBlockType _directShareRecipientProvider;
    IGUserSession *_userSession;
    IGDirectThreadAnalyticsLogger *_analyticsLogger;
    id <IGDirectMessageSending> _messageSender;
    IGDirectThreadViewOutgoingMessageSendAttributionFactory *_sendAttributionFactory;
    IGVideoPlayerManager *_videoPlayerManager;
    IGLinkTapHandlingService *_linkHandlingService;
    IGDirectGradientBubbleTracker *_gradientBubbleTracker;
    id <IGDirectVaulting> _vault;
    id <IGDirectMessageReplying> _messageReplyHandler;
    IGSupportService *_supportService;
    IGDirectMessageMenuController *_menuController;
    IGDirectMediaViewerTransitionManager *_mediaViewerTransitionManager;
    UIViewController *_mediaViewerSourceController;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) __weak UIViewController *mediaViewerSourceController; // @synthesize mediaViewerSourceController=_mediaViewerSourceController;
@property(retain, nonatomic) IGDirectMediaViewerTransitionManager *mediaViewerTransitionManager; // @synthesize mediaViewerTransitionManager=_mediaViewerTransitionManager;
@property(readonly, nonatomic) IGDirectMessageMenuController *menuController; // @synthesize menuController=_menuController;
@property(readonly, nonatomic) IGSupportService *supportService; // @synthesize supportService=_supportService;
@property(readonly, nonatomic) __weak id <IGDirectMessageReplying> messageReplyHandler; // @synthesize messageReplyHandler=_messageReplyHandler;
@property(readonly, nonatomic) id <IGDirectVaulting> vault; // @synthesize vault=_vault;
@property(readonly, nonatomic) IGDirectGradientBubbleTracker *gradientBubbleTracker; // @synthesize gradientBubbleTracker=_gradientBubbleTracker;
@property(readonly, nonatomic) IGLinkTapHandlingService *linkHandlingService; // @synthesize linkHandlingService=_linkHandlingService;
@property(readonly, nonatomic) IGVideoPlayerManager *videoPlayerManager; // @synthesize videoPlayerManager=_videoPlayerManager;
@property(readonly, nonatomic) IGDirectThreadViewOutgoingMessageSendAttributionFactory *sendAttributionFactory; // @synthesize sendAttributionFactory=_sendAttributionFactory;
@property(readonly, nonatomic) id <IGDirectMessageSending> messageSender; // @synthesize messageSender=_messageSender;
@property(readonly, nonatomic) IGDirectThreadAnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)storyViewerPresentationControllerDidNavigateToMediaId:(id)arg1;
- (void)storyViewerPresentationControllerDidFinishOnMediaId:(id)arg1;
- (void)storyViewerPresentationControllerWillFinishOnMediaId:(id)arg1 viewerExitContextDict:(id)arg2;
- (void)storyViewerPresentationControllerDidPresentViewer:(id)arg1;
- (void)mediaViewerDidOpenCameraReply:(id)arg1 withPhoto:(id)arg2 anchorView:(id)arg3 messageId:(id)arg4 shouldObserveScreenRecording:(_Bool)arg5;
- (void)mediaViewerDidStartRecordingScreen:(id)arg1;
- (void)mediaViewerDidTakeScreenShot:(id)arg1;
- (void)mediaViewer:(id)arg1 didSendText:(id)arg2 quotedMessageId:(id)arg3;
- (void)mediaViewerTransitionManagerDidDismiss:(id)arg1;
- (void)mediaViewerTransitionManagerDidPresent:(id)arg1;
- (void)_sendReshareForMedia:(id)arg1 reelId:(id)arg2 message:(id)arg3 analyticsModule:(id)arg4 containerModule:(id)arg5;
- (void)_logServiceShopsTapIfNeededWithURL:(id)arg1 viewModel:(id)arg2;
- (void)_presentVisualMessageWithViewModel:(id)arg1 sourceController:(id)arg2 cell:(id)arg3;
- (void)presentThreadDetailsFromEntryPoint:(id)arg1;
- (void)handleMessageCellDidTapTargetURLWithTargetURLHandler:(id)arg1 viewModel:(id)arg2 loadingView:(id)arg3 viewToPresentFrom:(id)arg4 targetURL:(id)arg5 sourceController:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)handleMessageCellDidTapCtaButtonWithCtaButtonHandler:(id)arg1 viewModel:(id)arg2 actionURL:(id)arg3 postbackPayload:(id)arg4 actionTitle:(id)arg5 indexId:(id)arg6 sourceController:(id)arg7;
- (void)handleDidTapTranslationFooterTextForMessageWithKey:(id)arg1 messageCell:(id)arg2;
- (void)bringMessageCellToFrontOfMessageList:(id)arg1;
- (void)handleStopTrackingFooterTextPromotionView:(id)arg1;
- (void)handleDidCreateFooterTextPromotionView:(id)arg1;
- (void)handleFooterTextPromotionAction:(id)arg1;
- (void)forwardMessageWithKey:(id)arg1 previewImage:(id)arg2;
- (void)handleTapForTextMessagePowerup:(id)arg1 messageCell:(id)arg2 useHapticFeedback:(_Bool)arg3;
- (void)handleSwipeToReplyForMessageCellWithViewModel:(id)arg1;
- (void)updateMessageReactionListViewControllerWithReactions:(id)arg1;
- (void)presentMessageReactionListViewControllerForViewModel:(id)arg1 sourceController:(id)arg2;
- (void)presentStoryViewerForReelId:(id)arg1 media:(id)arg2 sourceController:(id)arg3 loadingView:(id)arg4 viewToPresentFrom:(id)arg5 showSingleItem:(_Bool)arg6 isStoryReshare:(_Bool)arg7 canRepostOnMention:(_Bool)arg8 isMoment:(_Bool)arg9 sourceMessageId:(id)arg10 completion:(CDUnknownBlockType)arg11;
- (void)handleMessageCellDidTapXmaUrl:(id)arg1 viewModel:(id)arg2 text:(id)arg3 webLinkEntrySource:(id)arg4 indexId:(id)arg5 sourceController:(id)arg6;
- (void)handleMessageCellDidTapUrl:(id)arg1 viewModel:(id)arg2 text:(id)arg3 webLinkEntrySource:(id)arg4 indexId:(id)arg5 sourceController:(id)arg6;
- (id)_updateURLForShareToCoWatchThreadEntryPointIfNeeded:(id)arg1 viewModel:(id)arg2;
- (void)_presentActionSheetForFailedMessageKey:(id)arg1 messageContentTypeString:(id)arg2 sendError:(id)arg3 canRetrySend:(_Bool)arg4 viewController:(id)arg5 bugReportAttachment:(id)arg6;
- (void)handleSendFailIfNeededForMessageKey:(id)arg1 outgoingMessageStatus:(id)arg2 sourceController:(id)arg3 isGroupThread:(_Bool)arg4 isPendingThread:(_Bool)arg5;
- (void)willPerformFloatingReactionAnimationForLiveRect:(CDUnknownBlockType)arg1 emojiUnicode:(id)arg2;
- (void)didStopMessageScaleAnimation;
- (void)willStartMessageScaleAnimation;
- (_Bool)shouldStartMessageScaleAnimation;
- (void)handleLongPressAndSwipeForMessageCell:(id)arg1 viewModel:(id)arg2 gestureRecognizer:(id)arg3;
- (void)handleTapOnVisualMessageCellWithViewModel:(id)arg1 isMediaUnseen:(_Bool)arg2 isMediaReplayable:(_Bool)arg3 sourceController:(id)arg4 cell:(id)arg5 shouldProtectVisualMessage:(_Bool)arg6;
- (void)performDoubleTapActionWithViewModel:(id)arg1;
- (void)presentLiveVideoWithDirectKey:(id)arg1 sourceController:(id)arg2 cell:(id)arg3 delegate:(id)arg4;
- (id)transitionManagerWithMediaViewerProducer:(id)arg1 isInteropThread:(_Bool)arg2 canMediaQuotedReply:(_Bool)arg3 sourceController:(id)arg4 delegate:(id)arg5;
- (void)presentMediaViewerWithTransitionManager:(id)arg1 forViewModel:(id)arg2 messageId:(id)arg3;
- (void)_performAvatarAction:(long long)arg1 tapType:(id)arg2 userKeyForNavigation:(id)arg3 userPk:(id)arg4 profileImage:(id)arg5 displayName:(id)arg6 sourceController:(id)arg7 userSession:(id)arg8 analyticsModule:(id)arg9;
- (void)handleLongPressOnAvatarForViewModel:(id)arg1 sourceController:(id)arg2;
- (void)handleTapOnAvatarForViewModel:(id)arg1 sourceController:(id)arg2;
- (id)initWithUserSession:(id)arg1 messageSender:(id)arg2 videoPlayerManager:(id)arg3 analyticsLogger:(id)arg4 menuController:(id)arg5 messageQuerier:(id)arg6 threadKey:(id)arg7 messageReplyHandler:(id)arg8 swipeToReplyHandler:(id)arg9 cameraReplyHandler:(id)arg10 sendAttributionFactory:(id)arg11 footerTextActionHandler:(id)arg12 translationsFooterTextActionHandler:(id)arg13 lastSeenShhMessageIdForCurrentUserWhenEnteringShhMode:(id)arg14 gradientBubbleTracker:(id)arg15 visualMessageViewerPresentationManager:(id)arg16 vault:(id)arg17 directShareRecipientProvider:(CDUnknownBlockType)arg18;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

