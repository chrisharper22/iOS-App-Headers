//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCommentCellInteractionDelegate-Protocol.h"
#import "IGCommentCellUFIDelegate-Protocol.h"
#import "IGDirectMessageSendingListener-Protocol.h"
#import "IGTranslationNetworkDataSourceDelegate-Protocol.h"

@class IGBulkCommentDeleteManager, IGCommentCell, IGCommentCellRevealManager, IGCommentModel, IGMedia, IGRestrictedUserController, IGSponsoredSupportConfiguration, IGTranslationNetworkDataSource, IGUserSession, NSString;
@protocol IGCommentBaseSectionController><IGCommentCellTapDelegate, IGDirectReplyToAuthorViewControllerPresenting;

@interface IGCommentCellController : NSObject <IGTranslationNetworkDataSourceDelegate, IGDirectMessageSendingListener, IGCommentCellInteractionDelegate, IGCommentCellUFIDelegate>
{
    IGUserSession *_userSession;
    NSObject<IGCommentBaseSectionController><IGCommentCellTapDelegate> *_commentSectionController;
    IGMedia *_media;
    NSString *_analyticsModule;
    IGBulkCommentDeleteManager *_bulkDeleteManager;
    IGCommentCellRevealManager *_cellRevealManager;
    IGTranslationNetworkDataSource *_translationDataSource;
    IGRestrictedUserController *_restrictedUserController;
    IGCommentModel *_restrictActionComment;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    IGCommentCell *_privateReplyCommentCell;
    id <IGDirectReplyToAuthorViewControllerPresenting> _directReplyToAuthorPresenter;
}

- (void).cxx_destruct;
- (void)outgoingSecureMessageWillSendForThreadTarget:(id)arg1;
- (void)outgoingMessageWithPayload:(id)arg1 didFailToSendWithError:(id)arg2 manualRetryPermitted:(_Bool)arg3;
- (void)outgoingMessagePayloadSuccessfullySent:(id)arg1;
- (_Bool)_showReplyMediaDeletionAlertForReplyCommentIfNeeded:(id)arg1;
- (void)_showUnrestrictAlertForComment:(id)arg1;
- (void)_showDeleteCommentAlertAfterRestrictActionWithUser:(id)arg1;
- (void)_tryToShowSurveyWhenUserDeletesComment:(id)arg1;
- (void)_unrestrictComment:(id)arg1;
- (void)_toggleRestrictForUser:(id)arg1 showDeleteCommentAlert:(_Bool)arg2;
- (void)_restrictConfirmationDidTapOnRestrictWithUser:(id)arg1 confirmationViewController:(id)arg2;
- (void)_unfollowUser:(id)arg1;
- (id)_reportForComment:(id)arg1;
- (void)_deleteComment:(id)arg1;
- (void)_prepareDeleteComment:(id)arg1;
- (_Bool)_canRestrictCommentModel:(id)arg1;
- (_Bool)_canDeleteCommentModel:(id)arg1;
- (void)translationNetworkDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)translationNetworkDataSource:(id)arg1 didLoadTranslations:(id)arg2;
- (void)didTapOnUnsupportedMediaViewForCommentCell:(id)arg1;
- (void)didEndLongPressOnLikeButtonForCommentCell:(id)arg1;
- (void)didLongPressOnLikeButtonForCommentCell:(id)arg1;
- (void)commentCell:(id)arg1 didTapOnCommentMedia:(id)arg2;
- (void)didTapOnLikedByButtonForUser:(id)arg1;
- (void)commentCell:(id)arg1 didTapOnCheckmarkButton:(id)arg2;
- (void)didDoubleTap:(id)arg1;
- (void)didSingleTap:(id)arg1;
- (void)didTapOnTapToReadButtonForCommentCell:(id)arg1;
- (void)didTapOnDeleteButtonForCommentCell:(id)arg1;
- (void)_approveLimitedComment:(id)arg1;
- (void)didTapOnApproveButtonForCommentCell:(id)arg1;
- (void)didTapOnTranslateButtonForCommentCell:(id)arg1;
- (void)didTapOnFailureButtonForCommentCell:(id)arg1;
- (void)didTapOnUnhideButtonForCommentCell:(id)arg1;
- (void)_logPrivateReplyDirectComposerLaunchWithCommenterId:(id)arg1 commentId:(id)arg2;
- (void)_logPrivateReplyButtonClickWithCommenterId:(id)arg1 commentId:(id)arg2 isPrivateReplyMessage:(_Bool)arg3;
- (void)_updatePrivateReplyStatusForCommentCell;
- (void)didTapOnPrivateReplyButtonForCommentCell:(id)arg1;
- (void)didTapOnReplyButtonForCommentCell:(id)arg1;
- (void)didTapOnLikeCountButtonForCommentCell:(id)arg1;
- (void)_performCommentLikeOnCommentCell:(id)arg1 likeButton:(id)arg2 isDoubleTap:(_Bool)arg3;
- (void)commentCell:(id)arg1 didTapOnLikeButton:(id)arg2;
- (void)didFailToPost:(id)arg1;
- (void)didTapReplyForCommentCell:(id)arg1;
- (id)_deleteCommentActionForRestrictFlowWithStyle:(long long)arg1 loggingClickBlock:(CDUnknownBlockType)arg2;
- (void)_showRestrictConfirmationSheetWithComment:(id)arg1;
- (void)_showActionSheetForComment:(id)arg1;
- (void)didTapHideButtonForCommentCell:(id)arg1;
- (void)willCompleteClosingSwipeForCommentCell:(id)arg1;
- (void)didTapReportForCommentCell:(id)arg1;
- (void)didTapPinCommentForCommentCell:(id)arg1;
- (void)didTapDeleteForCommentCell:(id)arg1;
- (id)initWithUserSession:(id)arg1 commentSectionController:(id)arg2 media:(id)arg3 analyticsModule:(id)arg4 bulkDeleteManager:(id)arg5 cellRevealManager:(id)arg6 sponsoredSupportConfiguration:(id)arg7 restrictedUserController:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
