//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCommentModelUpdateListener-Protocol.h"

@class IGCommentCoverManager, IGCommentLoadMoreStateManager, IGUserSession, NSArray, NSMapTable, NSString;
@protocol IGCommentGroupFetching;

@interface IGCommentGroupsManager : NSObject <IGCommentModelUpdateListener>
{
    NSArray *_commentGroups;
    IGUserSession *_userSession;
    NSString *_feedItemPK;
    NSMapTable *_commentToGroupMapForInlineComments;
    IGCommentLoadMoreStateManager *_commentLoadMoreStateManager;
    id <IGCommentGroupFetching> _commentGroupFetcher;
    IGCommentCoverManager *_commentCoverManager;
    _Bool _isLoadingMorePreviewComments;
    _Bool _isLoadingMoreCommentReplies;
    _Bool _commentRepliesLastFetchEncounteredError;
    unsigned long long _commentReplyLoadMoreDirection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long commentReplyLoadMoreDirection; // @synthesize commentReplyLoadMoreDirection=_commentReplyLoadMoreDirection;
@property(readonly, nonatomic) _Bool commentRepliesLastFetchEncounteredError; // @synthesize commentRepliesLastFetchEncounteredError=_commentRepliesLastFetchEncounteredError;
@property(readonly, nonatomic) _Bool isLoadingMoreCommentReplies; // @synthesize isLoadingMoreCommentReplies=_isLoadingMoreCommentReplies;
@property(readonly, nonatomic) _Bool isLoadingMorePreviewComments; // @synthesize isLoadingMorePreviewComments=_isLoadingMorePreviewComments;
- (void)_updateCommentGroup:(id)arg1 toUpdatedCommentGroup:(id)arg2;
- (void)_removeObserversForCommentGroup:(id)arg1;
- (void)_addObserverForComment:(id)arg1;
- (void)_addObserversForCommentGroup:(id)arg1;
- (void)_replaceCommentGroup:(id)arg1 withUpdatedCommentGroup:(id)arg2;
- (void)_updateMapWithCommentGroups:(id)arg1;
- (void)_updateComment:(id)arg1;
- (void)commentModelDidUpdateLimitedStatus:(id)arg1;
- (void)commentModelDidUpdateRestrictStatus:(id)arg1;
- (void)commentModelDidUpdate:(id)arg1;
@property(readonly, nonatomic) _Bool hasCoveredComments;
- (void)_handleFailureWithCompletionBlock:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)_handleInlineCommentsRepliesConnection:(id)arg1 childComments:(id)arg2 commentGroup:(id)arg3 loadMoreDirection:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)resetPreviousLoadStateForCommentGroup:(id)arg1;
- (void)loadMoreCommentRepliesForCommentGroup:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadMorePreviewCommentsForCommentGroup:(id)arg1 loadMoreDirection:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)findCommentByPK:(id)arg1;
- (id)commentGroupForParentCommentPk:(id)arg1;
- (id)commentGroupForComment:(id)arg1;
- (id)commentGroups;
- (void)addCommentGroups:(id)arg1 atHead:(_Bool)arg2;
- (void)moveCommentGroup:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)addNewlyPostedComment:(id)arg1 toTop:(_Bool)arg2 ignoreChildCommentWihoutParentCommentPk:(_Bool)arg3;
- (void)dealloc;
- (id)initWithCommentGroups:(id)arg1 userSession:(id)arg2 feedItemPK:(id)arg3 commentCoverPosition:(long long)arg4;
- (id)initWithCommentGroups:(id)arg1 commentGroupFetcher:(id)arg2 userSession:(id)arg3 feedItemPK:(id)arg4 commentCoverPosition:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
