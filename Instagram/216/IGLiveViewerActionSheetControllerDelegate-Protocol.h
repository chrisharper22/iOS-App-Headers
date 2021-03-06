//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveBroadcast, IGLiveCommentModel, IGLiveViewerActionSheetController, IGUser;

@protocol IGLiveViewerActionSheetControllerDelegate <NSObject>
- (void)actionSheetControllerDidTapReportAProblemButton:(IGLiveViewerActionSheetController *)arg1;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didSelectViewBroadcasterProfile:(IGUser *)arg2;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didTapDeleteComment:(IGLiveCommentModel *)arg2 broadcast:(IGLiveBroadcast *)arg3;
- (void)actionSheetControllerDidCancel:(IGLiveViewerActionSheetController *)arg1;
- (void)actionSheetControllerDidDeletePostLiveBroadcast:(IGLiveBroadcast *)arg1;
- (void)actionSheetControllerDidTapInviteToWatch:(IGLiveViewerActionSheetController *)arg1;
- (void)actionSheetControllerDidTapStorySettings:(IGLiveViewerActionSheetController *)arg1;
- (void)actionsheetController:(IGLiveViewerActionSheetController *)arg1 didTapDeleteComment:(IGLiveCommentModel *)arg2;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didSFPLTBroadcast:(IGLiveBroadcast *)arg2;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didTapReplyToUser:(IGUser *)arg2;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didRemoveUser:(IGUser *)arg2;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didMuteUser:(IGUser *)arg2;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didReportComment:(IGLiveCommentModel *)arg2;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didReportBroadcast:(IGLiveBroadcast *)arg2;
- (void)actionSheetController:(IGLiveViewerActionSheetController *)arg1 didTapReportBroadcast:(IGLiveBroadcast *)arg2;
@end

