//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectMessageActionsBarViewController, IGDirectMessageCell, IGDirectMessageKey, IGDirectMessageMenuController, IGDirectMessageReactionSelectionViewController, IGDirectUIThread, IGViewController, NSString, UICollectionViewCell;
@protocol FBMessagePowerupSupporting, IGDirectMessageViewModelProtocol, IGDirectVisualMessageViewerPresentationManagerContextDelegate;

@protocol IGDirectMessageMenuControllerDelegate <NSObject>
- (void)menuControllerWillBring:(IGDirectMessageMenuController *)arg1 messageCellToFrontOfMessageList:(UICollectionViewCell *)arg2;
- (void)menuControllerWillHandleTap:(IGDirectMessageMenuController *)arg1 forTextMessagePowerup:(id <FBMessagePowerupSupporting>)arg2 messageCell:(IGDirectMessageCell *)arg3 useHapticFeedback:(_Bool)arg4;
- (void)menuControllerShouldPresentThreadDetails:(IGDirectMessageMenuController *)arg1 fromEntryPoint:(NSString *)arg2;
- (void)menuControllerWillDismissKeyboard:(IGDirectMessageMenuController *)arg1;
- (void)menuControllerWillPerformFloatingReactionAnimation:(IGDirectMessageMenuController *)arg1 liveRect:(struct CGRect (^)(id <UICoordinateSpace>))arg2 emojiUnicode:(NSString *)arg3;
- (void)menuControllerWillDismissEmojiPickerTray:(IGDirectMessageMenuController *)arg1;
- (void)menuControllerWillPresentOrAdjustEmojiPickerTray:(IGDirectMessageMenuController *)arg1 selectionMode:(long long)arg2;
- (void)menuControllerDidStopMessageScaleAnimation:(IGDirectMessageMenuController *)arg1;
- (void)menuControllerWillStartMessageScaleAnimation:(IGDirectMessageMenuController *)arg1;
- (_Bool)menuControllerShouldStartMessageScaleAnimation:(IGDirectMessageMenuController *)arg1;
- (void)menuControllerWillAdjustOpacityToFocusMessage:(IGDirectMessageMenuController *)arg1;
- (void)menuControllerWillResetOpacity:(IGDirectMessageMenuController *)arg1 animated:(_Bool)arg2;
- (void)menuControllerWillDismiss:(IGDirectMessageMenuController *)arg1 actionsBar:(IGDirectMessageActionsBarViewController *)arg2 reactionsOverlay:(IGDirectMessageReactionSelectionViewController *)arg3 reactionBlock:(void (^)(void))arg4 messageCell:(IGDirectMessageCell *)arg5 animated:(_Bool)arg6;
- (void)menuControllerWillPresent:(IGDirectMessageMenuController *)arg1 actionsBar:(IGDirectMessageActionsBarViewController *)arg2 reactionsOverlay:(IGDirectMessageReactionSelectionViewController *)arg3;
- (void)menuControllerDidSetVisible:(IGDirectMessageMenuController *)arg1;
- (_Bool)menuControllerShouldPresent:(IGDirectMessageMenuController *)arg1;
- (id <IGDirectMessageViewModelProtocol>)messageViewModelForMessageKey:(IGDirectMessageKey *)arg1;
- (IGViewController *)presentingViewControllerForAlertView;
- (IGDirectUIThread *)currentThread;
- (id <IGDirectVisualMessageViewerPresentationManagerContextDelegate>)visualMessageViewerPresentationManagerContextDelegate;
- (void)menuController:(IGDirectMessageMenuController *)arg1 didReplyWithMessageViewModel:(id <IGDirectMessageViewModelProtocol>)arg2;
- (void)menuController:(IGDirectMessageMenuController *)arg1 didSaveText:(NSString *)arg2;
- (void)menuController:(IGDirectMessageMenuController *)arg1 didLookForCreatorWithName:(NSString *)arg2 isSticker:(_Bool)arg3;
@end
