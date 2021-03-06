//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMedia, IGUserSession, NSMutableArray, NSString;
@protocol IGAPIClient, IGBulkCommentDeleteManagerDelegate;

@interface IGBulkCommentDeleteManager : NSObject
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    _Bool _deletingComments;
    id <IGBulkCommentDeleteManagerDelegate> _commentDeleteManagerDelegate;
    IGMedia *_post;
    NSMutableArray *_commentsToDelete;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(retain, nonatomic) NSMutableArray *commentsToDelete; // @synthesize commentsToDelete=_commentsToDelete;
@property(retain, nonatomic) IGMedia *post; // @synthesize post=_post;
@property(nonatomic, getter=isDeletingComments) _Bool deletingComments; // @synthesize deletingComments=_deletingComments;
@property(nonatomic) __weak id <IGBulkCommentDeleteManagerDelegate> commentDeleteManagerDelegate; // @synthesize commentDeleteManagerDelegate=_commentDeleteManagerDelegate;
- (id)_loggingInfoForDeletedComments:(id)arg1;
- (void)_logCommentDeletionFinishedWithSuccess:(_Bool)arg1 comments:(id)arg2;
- (void)_commentDeletionFailed:(id)arg1;
- (void)_commentDeletionFinished:(id)arg1 upsellType:(unsigned long long)arg2;
- (_Bool)_validateCommentsBeingDeleted:(id)arg1;
- (void)_bulkDeleteComments:(id)arg1;
- (void)_deleteUnpostedComments:(id)arg1;
- (void)_deletePostedComments:(id)arg1;
- (id)undoBulkCommentDeletion;
- (void)commitBulkCommentDeletion;
- (_Bool)addCommentToDelete:(id)arg1 media:(id)arg2;
- (_Bool)canAddCommentToDelete;
- (id)initWithPost:(id)arg1 userSession:(id)arg2 networker:(id)arg3 analyticsModule:(id)arg4;

@end

