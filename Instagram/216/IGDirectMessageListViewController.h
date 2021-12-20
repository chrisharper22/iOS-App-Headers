//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGAnalyticsModule-Protocol.h"
#import "IGBugReportingProtocol-Protocol.h"
#import "IGDirectMessageListDataSourceDelegate-Protocol.h"
#import "IGDirectMessageMenuControllerDelegate-Protocol.h"
#import "IGDirectMessageMenuItemTarget-Protocol.h"
#import "IGDirectThreadCollectionViewLayoutDelegate-Protocol.h"
#import "IGDirectThreadMessageListDisplayStateProviding-Protocol.h"
#import "IGDirectThreadViewTimestampAnimatorDelegate-Protocol.h"
#import "IGDirectTranslationsFooterTextActionHandler-Protocol.h"
#import "IGDirectVisualMessageViewerPresentationManagerContextDelegate-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGScreenshotObserverDelegate-Protocol.h"
#import "IGTransitionZoomFromCapable-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGDirectGradientBubbleTracker, IGDirectGyroscopeThemeTracker, IGDirectMessageFooterTextManager, IGDirectMessageMenuController, IGDirectScrollCoordinator, IGDirectShhModeLearnMoreViewModel, IGDirectThreadAnalyticsLogger, IGDirectThreadCollectionViewLayout, IGDirectThreadKey, IGDirectThreadLastSeenMessageTracker, IGDirectThreadNewMessageIndicator, IGDirectThreadNullStateViewModel, IGDirectThreadViewMessagesClientStateManager, IGDirectThreadViewOutgoingMessageSendAttributionFactory, IGDirectThreadViewTimestampAnimator, IGDirectTranslationsService, IGDirectVisualMessageViewerPresentationManager, IGListAdapter, IGScreenshotObserver, IGScrollPerfManualLogger, IGUserSession, NSArray, NSMutableArray, NSString, UICollectionView;
@protocol IGDirectCameraReplying, IGDirectMessageCellSwipeToReplyHandler, IGDirectMessageListDataSource, IGDirectMessageListViewControllerDelegate, IGDirectMessageReplying, IGDirectVaulting, IGListDiffable;

@interface IGDirectMessageListViewController : UIViewController <IGDirectMessageMenuControllerDelegate, IGDirectMessageMenuItemTarget, IGDirectMessageListDataSourceDelegate, IGDirectThreadCollectionViewLayoutDelegate, IGDirectThreadViewTimestampAnimatorDelegate, IGDirectTranslationsFooterTextActionHandler, IGListAdapterDelegate, IGTransitionZoomFromCapable, IGScreenshotObserverDelegate, UICollectionViewDelegate, UIScrollViewDelegate, IGAnalyticsModule, IGBugReportingProtocol, IGDirectVisualMessageViewerPresentationManagerContextDelegate, IGDirectThreadMessageListDisplayStateProviding>
{
    IGUserSession *_userSession;
    IGDirectThreadKey *_threadKey;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGDirectMessageMenuController *_menuController;
    IGDirectThreadViewMessagesClientStateManager *_clientStateManager;
    IGDirectThreadAnalyticsLogger *_analyticsLogger;
    IGDirectThreadViewOutgoingMessageSendAttributionFactory *_sendAttributionFactory;
    IGDirectScrollCoordinator *_scrollCoordinator;
    IGDirectThreadNewMessageIndicator *_messageIndicator;
    IGDirectThreadLastSeenMessageTracker *_lastSeenMessageTracker;
    IGScrollPerfManualLogger *_scrollPerfLogger;
    _Bool _detectedRubberBanding;
    _Bool _isFirstAppearance;
    _Bool _isViewVisible;
    double _navigationBarHeight;
    id <IGDirectMessageReplying> _messageReplyHandler;
    id <IGDirectMessageCellSwipeToReplyHandler> _swipeToReplyHandler;
    id <IGDirectCameraReplying> _cameraReplyHandler;
    IGDirectTranslationsService *_translationsService;
    IGDirectThreadViewTimestampAnimator *_timestampAnimator;
    id <IGDirectMessageListDataSource> _messageListDataSource;
    NSArray *_nonHighlightedCells;
    NSMutableArray *_updateReasonsSincePaused;
    _Bool _isPerformingListKitUpdates;
    IGDirectThreadCollectionViewLayout *_collectionViewLayout;
    IGDirectMessageFooterTextManager *_footerTextPromotionManager;
    long long _threadAppearance;
    IGScreenshotObserver *_screenshotObserver;
    id <IGListDiffable> _pendingPowerupTextMessageViewModel;
    _Bool _isScreenRecording;
    IGDirectGyroscopeThemeTracker *_gyroscopeThemeTracker;
    IGDirectVisualMessageViewerPresentationManager *_visualMessageViewerPresentationManager;
    id <IGDirectVaulting> _vault;
    NSMutableArray *_insertedAccessibilityMessageViewModels;
    _Bool _isPaused;
    _Bool _willScrollToTop;
    id <IGDirectMessageListViewControllerDelegate> _delegate;
    IGDirectGradientBubbleTracker *_gradientBubbleTracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectGradientBubbleTracker *gradientBubbleTracker; // @synthesize gradientBubbleTracker=_gradientBubbleTracker;
@property(readonly, nonatomic) _Bool willScrollToTop; // @synthesize willScrollToTop=_willScrollToTop;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) __weak id <IGDirectMessageListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setUpGyroScropicThemeTracker:(id)arg1;
- (void)gyroscopeThemeMotionUpdate:(id)arg1;
- (_Bool)_hasShhModeMessageVisible;
- (void)_notifyScreenRecordingIfNecessary;
- (void)_setCountToMaxForNuxTypeIfNecessary:(long long)arg1;
- (void)_incrementNuxCountAndSetTimestampForNuxTypeIfNecessary:(long long)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_loadPreviousMessages;
- (_Bool)isMessageListScrolling;
- (_Bool)_threadIsAtBottom;
- (void)_layoutStaticBackgroundGradientIfNecessary;
- (void)_scrollToBottomAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_displayAlertBarWithMessage:(id)arg1 style:(long long)arg2;
- (void)_displayFailedToLoadEarlierMessagesError;
- (void)_displayFailedToLoadAnyMessagesError;
- (double)_heightForViewModel:(id)arg1;
- (id)_nuxViewModelAsLastObject;
- (void)_playTextMessagePowerupIfNecessaryWithDelay:(double)arg1;
- (void)_setUpPowerUpSendAnimationWithDiffResult:(id)arg1 updateReason:(unsigned long long)arg2;
- (void)_playInsertedAccessibilityMessageViewModels;
- (void)_setUpInsertedAccessibilityMessageViewModelsWithDiffResult:(id)arg1 updateReason:(unsigned long long)arg2;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldZoomFromTransition;
- (_Bool)hasSpacerAtIndexPath:(id)arg1;
- (_Bool)hasTopSeparatorAtIndexPath:(id)arg1;
- (_Bool)hasBottomSeparatorAtIndexPath:(id)arg1;
- (_Bool)hasSeparatorAtIndexPath:(id)arg1;
- (id)bottomColorForSeparatorAtIndexPath:(id)arg1;
- (void)threadCollectionViewLayoutWillFinalizeCollectionViewUpdates:(id)arg1;
- (void)menuControllerShouldPresentThreadDetails:(id)arg1 fromEntryPoint:(id)arg2;
- (void)menuControllerWillBring:(id)arg1 messageCellToFrontOfMessageList:(id)arg2;
- (void)_performTapAnimationForTextMessagePowerup:(id)arg1 messageCell:(id)arg2 useHapticFeedback:(_Bool)arg3;
- (void)menuControllerWillHandleTap:(id)arg1 forTextMessagePowerup:(id)arg2 messageCell:(id)arg3 useHapticFeedback:(_Bool)arg4;
- (void)menuControllerWillDismissKeyboard:(id)arg1;
- (void)menuControllerWillPerformFloatingReactionAnimation:(id)arg1 liveRect:(CDUnknownBlockType)arg2 emojiUnicode:(id)arg3;
- (void)menuControllerDidStopMessageScaleAnimation:(id)arg1;
- (void)menuControllerWillStartMessageScaleAnimation:(id)arg1;
- (_Bool)menuControllerShouldStartMessageScaleAnimation:(id)arg1;
- (void)menuControllerWillAdjustOpacityToFocusMessage:(id)arg1;
- (void)menuControllerWillResetOpacity:(id)arg1 animated:(_Bool)arg2;
- (void)menuControllerWillDismissEmojiPickerTray:(id)arg1;
- (void)menuControllerWillPresentOrAdjustEmojiPickerTray:(id)arg1 selectionMode:(long long)arg2;
- (void)menuControllerWillDismiss:(id)arg1 actionsBar:(id)arg2 reactionsOverlay:(id)arg3 reactionBlock:(CDUnknownBlockType)arg4 messageCell:(id)arg5 animated:(_Bool)arg6;
- (void)menuControllerWillPresent:(id)arg1 actionsBar:(id)arg2 reactionsOverlay:(id)arg3;
- (void)menuControllerDidSetVisible:(id)arg1;
- (_Bool)menuControllerShouldPresent:(id)arg1;
- (id)messageViewModelForMessageKey:(id)arg1;
- (id)presentingViewControllerForAlertView;
- (id)currentThread;
- (id)visualMessageViewerPresentationManagerContextDelegate;
- (void)menuController:(id)arg1 didReplyWithMessageViewModel:(id)arg2;
- (void)menuController:(id)arg1 didSaveText:(id)arg2;
- (void)menuController:(id)arg1 didLookForCreatorWithName:(id)arg2 isSticker:(_Bool)arg3;
- (void)quotedReply:(id)arg1;
- (void)forward:(id)arg1;
- (void)lookupCreator:(id)arg1;
- (void)viewDetails:(id)arg1;
- (void)replay:(id)arg1;
- (void)save:(id)arg1;
- (void)report:(id)arg1;
- (void)copy:(id)arg1;
- (void)unlike:(id)arg1;
- (void)unsend:(id)arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)additionalBugReportMetadata;
- (id)bugReportDescription;
- (void)didTapTranslationsFooterTextForMessageWithId:(id)arg1 hasTranslationAvailable:(_Bool)arg2;
- (_Bool)timestampAnimatorShouldRespectOtherGestureRecognizers:(id)arg1;
- (_Bool)timestampAnimatorShouldReceiveTouchWithIndexPath:(id)arg1;
- (_Bool)timestampAnimator:(id)arg1 shouldSlideCell:(id)arg2 atIndexPath:(id)arg3;
- (void)timestampAnimatorDidBeginSliding:(id)arg1;
- (id)messageListDisplayState;
- (id)visualMessageViewerPresentationContextForIdentifier:(id)arg1;
- (void)_autoscrollToNewMessagesSeparatorIfNecessary;
- (void)_autoscrollToMessageIslandAnchorMessage:(id)arg1;
- (void)_loadPreviousMessagesIfSpinnerIsVisible;
- (void)_didCompleteFirstListKitUpdate;
- (_Bool)_shouldToggleMessageIndicatorWithUpdateReason:(unsigned long long)arg1;
- (_Bool)_shouldNotifyTranslationsServiceForUpdateReason:(unsigned long long)arg1;
- (_Bool)_shouldAutoScrollToBottomForUpdateReason:(unsigned long long)arg1;
- (void)_didPerformListKitUpdatesWithUpdateReason:(unsigned long long)arg1;
- (void)messageListDataSource:(id)arg1 didUpdateWithDiffResult:(id)arg2 isInitialLoad:(_Bool)arg3 updateReason:(unsigned long long)arg4;
- (void)_updateMessageListWithIsInitialLoad:(_Bool)arg1 updateReason:(unsigned long long)arg2 unpaused:(_Bool)arg3;
- (void)messageListDataSource:(id)arg1 didTapCtaForPoll:(id)arg2 optionsCount:(long long)arg3 messageMetadata:(id)arg4 entryPoint:(unsigned long long)arg5;
- (void)messageListDataSourceDidReplayInShhMode:(id)arg1;
- (void)messageListDataSourceDidToggleShhMode:(id)arg1;
- (void)messageListDataSource:(id)arg1 didEncounterError:(id)arg2;
- (id)createMessageSectionComponentsWithLastSeenShhMessageIdForCurrentUserWhenEnteringShhMode:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)screenshotObserverDidSeeActiveScreenCapture:(id)arg1 event:(long long)arg2;
- (void)screenshotObserverDidSeeScreenshotTaken:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)_scrollPerfAnalyticsModule;
- (id)analyticsModule;
- (void)markLastMessageAsSeen;
- (void)dismissReactionsMenuControllerAndCleanUpIfNeeded:(_Bool)arg1;
- (void)_resetOpacityAnimated:(_Bool)arg1;
- (void)adjustOpacityForHighlightedMessage;
- (id)newMessagesIndicator;
- (void)setUpNewMessagesIndicatorWithContainerView:(id)arg1 referenceView:(id)arg2;
- (_Bool)isAtBottom;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (id)scrollView;
- (void)viewDidLayoutSubviews;
- (void)_setupCollectionViewAndListAdapter;
- (void)_setUp;
@property(readonly, nonatomic) IGDirectThreadNullStateViewModel *nullStateViewModel;
@property(readonly, nonatomic) IGDirectShhModeLearnMoreViewModel *shhModeLearnMoreViewModel;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 threadKey:(id)arg2 messageListDataSource:(id)arg3 analyticsLogger:(id)arg4 navigationBarHeight:(double)arg5 messageReplyHandler:(id)arg6 swipeToReplyHandler:(id)arg7 cameraReplyHandler:(id)arg8 messagesClientStateManager:(id)arg9 sendAttributionFactory:(id)arg10 footerTextPromotionManager:(id)arg11 translationsService:(id)arg12 gyroscopeThemeTracker:(id)arg13 visualMessageViewerPresentationManager:(id)arg14 vault:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

