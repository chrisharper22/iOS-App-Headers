//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveBroadcastActionSheetController, IGLiveCommentModel, IGUser, NSArray;

@protocol IGLiveBroadcastActionSheetControllerDelegate <NSObject>
- (void)actionSheetController:(IGLiveBroadcastActionSheetController *)arg1 didTapInviteLiveWithUser:(IGUser *)arg2;
- (void)actionSheetController:(IGLiveBroadcastActionSheetController *)arg1 didTapDeleteComment:(IGLiveCommentModel *)arg2;
- (void)actionSheetController:(IGLiveBroadcastActionSheetController *)arg1 didReportComment:(IGLiveCommentModel *)arg2;
- (void)actionSheetController:(IGLiveBroadcastActionSheetController *)arg1 didRemoveModerator:(IGUser *)arg2;
- (void)actionSheetController:(IGLiveBroadcastActionSheetController *)arg1 didAddModerator:(IGUser *)arg2;
- (void)actionSheetController:(IGLiveBroadcastActionSheetController *)arg1 didBlockUser:(IGUser *)arg2;
- (void)actionSheetController:(IGLiveBroadcastActionSheetController *)arg1 didRemoveUserFromComment:(IGLiveCommentModel *)arg2;
- (void)actionSheetController:(IGLiveBroadcastActionSheetController *)arg1 didHideFromUser:(IGUser *)arg2;
- (void)actionSheetController:(IGLiveBroadcastActionSheetController *)arg1 didTapUnpinComment:(IGLiveCommentModel *)arg2;
- (void)actionSheetController:(IGLiveBroadcastActionSheetController *)arg1 didTapPinComment:(IGLiveCommentModel *)arg2;
- (void)actionSheetControllerDidTapAddModerator:(IGLiveBroadcastActionSheetController *)arg1;
- (void)actionSheetControllerDidTapShowPracticeTutorial:(IGLiveBroadcastActionSheetController *)arg1;
- (void)actionSheetControllerDidTapEnableQuestions:(IGLiveBroadcastActionSheetController *)arg1;
- (void)actionSheetControllerDidTapDisableQuestions:(IGLiveBroadcastActionSheetController *)arg1;
- (void)actionSheetControllerDidTapEnableBadges:(IGLiveBroadcastActionSheetController *)arg1;
- (void)actionSheetControllerDidTapDisableBadges:(IGLiveBroadcastActionSheetController *)arg1;
- (void)actionSheetControllerDidTapEnableRequestToJoin:(IGLiveBroadcastActionSheetController *)arg1;
- (void)actionSheetControllerDidTapDisableRequestToJoin:(IGLiveBroadcastActionSheetController *)arg1;
- (void)actionSheetControllerDidTapUnmuteComment:(IGLiveBroadcastActionSheetController *)arg1;
- (void)actionSheetControllerDidTapMuteComment:(IGLiveBroadcastActionSheetController *)arg1;
- (void)actionSheetController:(IGLiveBroadcastActionSheetController *)arg1 didDisplayActionSheetForComment:(IGLiveCommentModel *)arg2 actionIdentifiers:(NSArray *)arg3;
@end
