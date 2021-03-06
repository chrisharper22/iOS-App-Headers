//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectInteropStatusListener-Protocol.h"
#import "IGDirectMessageActionsBarDelegate-Protocol.h"
#import "IGDirectMessageMenuActionHandlerDelegate-Protocol.h"
#import "IGDirectMessageMenuItemTarget-Protocol.h"
#import "IGDirectMessageReactionSelectionDelegate-Protocol.h"
#import "IGDirectSaveMediaDelegate-Protocol.h"
#import "IGKeyboardObserverHideDelegate-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"

@class IGDirectMessageActionsBarViewController, IGDirectMessageCell, IGDirectMessageKey, IGDirectMessageReactionSelectionViewController, IGDirectThreadAnalyticsLogger, IGKeyboardObserver, IGUserSession, IGViewController, NSMutableArray, NSString;
@protocol IGDirectMessageMenuActionHandling, IGDirectMessageMenuControllerDelegate;

@interface IGDirectMessageMenuController : NSObject <IGDirectInteropStatusListener, IGDirectMessageReactionSelectionDelegate, IGDirectSaveMediaDelegate, IGDirectMessageMenuActionHandlerDelegate, IGDirectMessageActionsBarDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, IGDirectMessageMenuItemTarget>
{
    id <IGDirectMessageMenuActionHandling> _actionHandler;
    IGViewController *_containingViewController;
    IGKeyboardObserver *_keyboardObserver;
    IGDirectMessageCell *_currentMessageCell;
    IGDirectMessageKey *_currentMessageKey;
    IGUserSession *_userSession;
    NSString *_module;
    NSMutableArray *_saveMediaObservers;
    id <IGDirectMessageMenuControllerDelegate> _delegate;
    IGDirectThreadAnalyticsLogger *_analyticsLogger;
    unsigned long long _presentationStyle;
    IGDirectMessageReactionSelectionViewController *_reactionSelectionViewController;
    IGDirectMessageActionsBarViewController *_actionsBarViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGDirectMessageActionsBarViewController *actionsBarViewController; // @synthesize actionsBarViewController=_actionsBarViewController;
@property(retain, nonatomic) IGDirectMessageReactionSelectionViewController *reactionSelectionViewController; // @synthesize reactionSelectionViewController=_reactionSelectionViewController;
@property(nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) IGDirectThreadAnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) __weak id <IGDirectMessageMenuControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableArray *saveMediaObservers; // @synthesize saveMediaObservers=_saveMediaObservers;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGDirectMessageKey *currentMessageKey; // @synthesize currentMessageKey=_currentMessageKey;
- (void)_showUnsendMitigationSenderNUXAlert;
- (void)_handleMediaSaveIsError:(_Bool)arg1 isVideo:(_Bool)arg2;
- (void)_configurePresentationStyle;
- (void)interopUpgradeStatusDidChange:(long long)arg1;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (id)currentThread;
- (id)visualMessageViewerPresentationManagerContextDelegate;
- (id)presentingViewController;
- (id)containingViewController;
- (void)menuActionHandler:(id)arg1 didReplyWithMessageViewModel:(id)arg2;
- (void)menuActionHandler:(id)arg1 didSaveVideo:(id)arg2;
- (void)menuActionHandler:(id)arg1 didSavePhoto:(id)arg2;
- (void)menuActionHandler:(id)arg1 didSaveText:(id)arg2;
- (void)menuActionHandler:(id)arg1 didLookForCreatorWithName:(id)arg2 isSticker:(_Bool)arg3;
- (void)_cleanUpMenuController;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)messageActionsBarViewControllerDidTapOrPanBackgroundOverlay:(id)arg1;
- (void)messageActionsBarViewControllerDidCancelActionSheet:(id)arg1;
- (void)messageActionsBarViewControllerWillPresentActionSheet:(id)arg1;
- (void)messageReactionSelectionViewControllerWillAdjustOpacityToFocusMessage:(id)arg1;
- (void)messageReactionSelectionViewControllerWillResetOpacity:(id)arg1;
- (void)messageReactionSelectionViewControllerWillDismissEmojiPickerTray:(id)arg1;
- (void)messageReactionSelectionViewControllerWillPresentOrAdjustEmojiPickerTray:(id)arg1 selectionMode:(long long)arg2;
- (void)messageReactionSelectionViewControllerWillDismissAndCleanUp:(id)arg1;
- (void)messageReactionSelectionViewController:(id)arg1 didToggleEmoji:(id)arg2 isSelected:(_Bool)arg3 isSuperReact:(_Bool)arg4 actionSource:(long long)arg5;
- (void)saveMediaObserver:(id)arg1 isVideo:(_Bool)arg2 didCompleteWithError:(id)arg3;
- (void)quotedReply:(id)arg1;
- (void)forward:(id)arg1;
- (void)viewDetails:(id)arg1;
- (void)replay:(id)arg1;
- (void)save:(id)arg1;
- (void)report:(id)arg1;
- (void)unlike:(id)arg1;
- (void)unsend:(id)arg1;
- (void)lookupCreator:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1;
- (void)_handleControllerActionPerformed;
- (id)_customMenuItemsForActionBar;
- (void)messageCellDidLongPressAndSwipeStateEndedWithGestureRecognizer:(id)arg1;
- (void)messageCellDidLongPressAndSwipeStateChangedWithGestureRecognizer:(id)arg1;
- (void)_menuControllerDidHide:(id)arg1;
- (id)_customMenuItems;
- (void)_dismissReactionsMenuControllerAnimated:(_Bool)arg1 reactionBlock:(CDUnknownBlockType)arg2;
- (void)dismissReactionsMenuControllerAndCleanUpIfNeeded:(_Bool)arg1;
- (void)presentThreadDetailsFromEntryPoint:(id)arg1;
- (void)bringMessageCellToFrontOfMessageList:(id)arg1;
- (void)handleTapForTextMessagePowerup:(id)arg1 messageCell:(id)arg2 useHapticFeedback:(_Bool)arg3;
- (void)forwardMessageWithKey:(id)arg1 previewImage:(id)arg2;
- (void)willPerformFloatingReactionAnimationForLiveRect:(CDUnknownBlockType)arg1 emojiUnicode:(id)arg2;
- (void)didStopMessageScaleAnimation;
- (void)willStartMessageScaleAnimation;
- (_Bool)shouldStartMessageScaleAnimation;
- (_Bool)isReactionsMenuControllerVisible;
- (_Bool)hideMenuIfVisible;
- (id)_validActionBarControllerActionsFromMenuItems:(id)arg1;
- (void)_prepareMessageActionsBarWithActions:(id)arg1;
- (void)_prepareReactionSelectionOverlayWithSelectedReaction:(id)arg1;
- (void)toggleMenuForMessageCell:(id)arg1 messageKey:(id)arg2 gestureRecognizer:(id)arg3 selectedReaction:(id)arg4;
- (void)dealloc;
- (id)initWithContainingViewController:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 userSession:(id)arg4 analyticsLogger:(id)arg5 module:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

