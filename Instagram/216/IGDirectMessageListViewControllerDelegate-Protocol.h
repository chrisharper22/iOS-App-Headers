//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectMessageActionsBarViewController, IGDirectMessageCell, IGDirectMessageListViewController, IGDirectMessageReactionSelectionViewController, IGDirectUIMessageMetadata, IGViewController, NSString;
@protocol FBMessagePowerupSupporting, IGDirectMessageViewModelProtocol;

@protocol IGDirectMessageListViewControllerDelegate <NSObject>
- (void)messageListViewController:(IGDirectMessageListViewController *)arg1 didTapVoteOnPoll:(NSString *)arg2 optionsCount:(long long)arg3 messageMetadata:(IGDirectUIMessageMetadata *)arg4 entryPoint:(unsigned long long)arg5;
- (void)messageListViewControllerDidReplayInShhMode:(IGDirectMessageListViewController *)arg1;
- (void)messageListViewControllerShouldPresentThreadDetails:(IGDirectMessageListViewController *)arg1 fromEntryPoint:(NSString *)arg2;
- (void)messageListViewControllerDidToggleShhMode:(IGDirectMessageListViewController *)arg1;
- (void)messageListViewControllerWillHandleTap:(IGDirectMessageListViewController *)arg1 forTextMessagePowerup:(id <FBMessagePowerupSupporting>)arg2 messageCell:(IGDirectMessageCell *)arg3 useHapticFeedback:(_Bool)arg4;
- (void)messageListViewControllerDidTakeScreenshot:(IGDirectMessageListViewController *)arg1 isRecording:(_Bool)arg2;
- (IGViewController *)presentingViewControllerForAlertView;
- (void)messageListViewControllerWillDismissKeyboard:(IGDirectMessageListViewController *)arg1;
- (void)messageListViewControllerWillPerformFloatingReactionAnimation:(IGDirectMessageListViewController *)arg1 liveRect:(struct CGRect (^)(id <UICoordinateSpace>))arg2 emojiUnicode:(NSString *)arg3;
- (void)messageListViewControllerDidUpdateThreadAppearance:(long long)arg1 isInitialLoad:(_Bool)arg2;
- (void)messageListViewControllerWillPrepareForThreadAppearanceUpdate:(long long)arg1 isInitialLoad:(_Bool)arg2;
- (void)messageListViewControllerWillClearComposerText:(IGDirectMessageListViewController *)arg1;
- (void)messageListViewControllerScrollViewDidEndDragging:(IGDirectMessageListViewController *)arg1 willDecelerate:(_Bool)arg2;
- (void)messageListViewControllerScrollViewDidScroll:(IGDirectMessageListViewController *)arg1;
- (void)messageListViewControllerWillDismissEmojiPickerTray:(IGDirectMessageListViewController *)arg1;
- (void)messageListViewControllerWillPresentOrAdjustEmojiPickerTray:(IGDirectMessageListViewController *)arg1 selectionMode:(long long)arg2;
- (void)messageListViewControllerWillDismiss:(IGDirectMessageListViewController *)arg1 actionsBar:(IGDirectMessageActionsBarViewController *)arg2 reactionsOverlay:(IGDirectMessageReactionSelectionViewController *)arg3 reactionBlock:(void (^)(void))arg4 messageCell:(IGDirectMessageCell *)arg5 animated:(_Bool)arg6;
- (void)messageListViewControllerWillPresent:(IGDirectMessageListViewController *)arg1 actionsBar:(IGDirectMessageActionsBarViewController *)arg2 reactionsOverlay:(IGDirectMessageReactionSelectionViewController *)arg3;
- (_Bool)messageListViewControllerShouldPresent:(IGDirectMessageListViewController *)arg1;
- (void)messageListViewController:(IGDirectMessageListViewController *)arg1 didLookupCreatorWithName:(NSString *)arg2 isSticker:(_Bool)arg3;
- (void)messageListViewController:(IGDirectMessageListViewController *)arg1 didReplyWithMessageViewModel:(id <IGDirectMessageViewModelProtocol>)arg2;
- (void)messageListViewController:(IGDirectMessageListViewController *)arg1 didSaveText:(NSString *)arg2;
- (void)messageListViewControllerDidPerformUpdate:(IGDirectMessageListViewController *)arg1 updateReason:(unsigned long long)arg2;
- (void)messageListViewControllerInUpdateAnimationBlock:(IGDirectMessageListViewController *)arg1;
- (void)messageListViewControllerDidShowMessageList:(IGDirectMessageListViewController *)arg1;
@end

