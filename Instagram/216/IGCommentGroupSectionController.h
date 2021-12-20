//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSectionController.h>

#import "IGCommentBaseSectionController-Protocol.h"
#import "IGCommentCellTapDelegate-Protocol.h"
#import "IGCommentGroupTextCellDelegate-Protocol.h"
#import "IGCommentModelUpdateListener-Protocol.h"
#import "IGCommentNuxThreadingNuxCellDelegate-Protocol.h"
#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGListBindingSectionControllerDataSource-Protocol.h"
#import "IGListBindingSectionControllerSelectionDelegate-Protocol.h"

@class FBMerlinImpressionManager, IGBulkCommentDeleteManager, IGCommentCellRevealManager, IGCommentGroup, IGCommentGroupsManager, IGCommentMerlinLoggingHelper, IGCommentModel, IGCommentSectionViewModelCache, IGCommentThreadConfiguration, IGCommentVPVDController, IGMedia, IGSponsoredSupportConfiguration, IGUserSession, NSArray, NSMutableArray, NSString, UINavigationController;
@protocol IGCommentCellInteractionDelegate><IGCommentCellUFIDelegate, IGCommentGroupSectionDelegate, IGCommentSectionDelegate, IGCommentsManagerProtocol, IGFeedItemLoggingProviderDelegate;

@interface IGCommentGroupSectionController : IGListBindingSectionController <IGCommentNuxThreadingNuxCellDelegate, IGCoreTextLinkHandler, IGCommentModelUpdateListener, IGCommentGroupTextCellDelegate, IGCommentBaseSectionController, IGCommentCellTapDelegate, IGListBindingSectionControllerDataSource, IGListBindingSectionControllerSelectionDelegate>
{
    IGUserSession *_userSession;
    IGMedia *_media;
    NSString *_analyticsModule;
    IGCommentGroupsManager *_commentGroupsManager;
    IGBulkCommentDeleteManager *_bulkDeleteManager;
    IGCommentCellRevealManager *_cellRevealManager;
    long long _commentActionPresentationStyle;
    id <IGCommentsManagerProtocol> _threadManager;
    IGCommentGroup *_commentGroup;
    IGCommentGroup *_initialCommentGroup;
    id <IGCommentCellInteractionDelegate><IGCommentCellUFIDelegate> _commentCellController;
    long long _scheduledHighlightIndex;
    _Bool _commentRepliesExpanded;
    NSMutableArray *_collapsedFilteredPreviewComments;
    NSArray *_visibleFilteredPreviewComments;
    long long _likeButtonPosition;
    long long _likeCountPosition;
    long long _socialContextType;
    IGCommentSectionViewModelCache *_viewModelCache;
    IGCommentThreadConfiguration *_commentThreadConfiguration;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
    _Bool _isReadOnly;
    _Bool _isInEditMode;
    _Bool _isCommentRepliesSurfaceEnabled;
    _Bool _isInCommentRepliesMode;
    NSString *_sessionId;
    unsigned long long _loadMoreDirection;
    FBMerlinImpressionManager *_merlinManager;
    IGCommentMerlinLoggingHelper *_commentMerlinHelper;
    IGCommentVPVDController *_commentVPVDController;
    _Bool _isFromLimitedComments;
    id <IGCommentSectionDelegate> _delegate;
    id <IGCommentGroupSectionDelegate> _groupDelegate;
    IGCommentModel *_commentForCommentManagementNux;
    UINavigationController *_navigationController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) _Bool isFromLimitedComments; // @synthesize isFromLimitedComments=_isFromLimitedComments;
@property(retain, nonatomic) IGCommentModel *commentForCommentManagementNux; // @synthesize commentForCommentManagementNux=_commentForCommentManagementNux;
@property(nonatomic) __weak id <IGCommentGroupSectionDelegate> groupDelegate; // @synthesize groupDelegate=_groupDelegate;
@property(nonatomic) __weak id <IGCommentSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)commentModelDidUpdateLimitedStatus:(id)arg1;
- (void)commentModelDidUpdateRestrictStatus:(id)arg1;
- (void)commentModelDidUpdate:(id)arg1;
- (long long)_limitStatusForComment:(id)arg1;
- (void)_logPrivateReplyTooltipImpressionWithCommenterId:(id)arg1 commentId:(id)arg2;
- (id)_viewModelsForParentCommentGroup:(id)arg1;
- (void)_collapseCommentReplies;
- (void)_removeCommentGroupObserversAndListeners;
- (void)_addCommentGroupObserversAndListeners;
- (id)_commentViewModelForComment:(id)arg1 index:(long long)arg2;
- (long long)_actionsForComment:(id)arg1;
- (_Bool)_canDeleteCommentModel:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)commentGroupTextCellDelegate:(id)arg1 profilePictureTapped:(id)arg2 showFanClubBadge:(_Bool)arg3;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)threadingNuxCell:(id)arg1 didTapCloseButton:(id)arg2;
- (void)sectionController:(id)arg1 didUnhighlightItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (void)sectionController:(id)arg1 didHighlightItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (void)sectionController:(id)arg1 didDeselectItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (void)sectionController:(id)arg1 didSelectItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (struct CGSize)sectionController:(id)arg1 sizeForViewModel:(id)arg2 atIndex:(long long)arg3;
- (id)sectionController:(id)arg1 cellForViewModel:(id)arg2 atIndex:(long long)arg3;
- (id)_inlineComposerModelWithReplyToComment:(id)arg1 addTopPadding:(_Bool)arg2;
- (id)sectionController:(id)arg1 viewModelsForObject:(id)arg2;
- (id)commentForCommentCell:(id)arg1;
- (void)didSingleTapOnCommentCell:(id)arg1;
- (void)showPrivateReplyTooltip:(id)arg1 direction:(long long)arg2 view:(id)arg3;
- (void)showHighlightForComment:(id)arg1;
- (long long)indexForInlineComposer;
- (long long)indexForComment:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 analyticsModule:(id)arg3 threadManager:(id)arg4 commentGroupsManager:(id)arg5 bulkDeleteManager:(id)arg6 cellRevealManager:(id)arg7 commentMutationManager:(id)arg8 commentThreadConfiguration:(id)arg9 sponsoredSupportConfiguration:(id)arg10 viewModelCache:(id)arg11 restrictedUserController:(id)arg12 loggingDelegate:(id)arg13 isReadOnly:(_Bool)arg14 isInEditMode:(_Bool)arg15 isInBottomSheet:(_Bool)arg16 isInCommentRepliesMode:(_Bool)arg17;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
