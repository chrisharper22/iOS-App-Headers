//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGCommentModel, IGUser, NSString;
@protocol IGCommentsManagerProtocol;

@interface IGCommentPostFlowContext : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    id <IGCommentsManagerProtocol> _postParentCommentWithCommentThreadManager_commentThreadManager;
    NSString *_postCommentReplyByDefault_replyToCommentPK;
    IGUser *_postCommentReplyByDefault_replyToUser;
    IGCommentModel *_postCommentReplyWithCommentThreadManager_replyToCommentModel;
    IGUser *_postCommentReplyWithCommentThreadManager_replyToUser;
    id <IGCommentsManagerProtocol> _postCommentReplyWithCommentThreadManager_commentThreadManager;
}

+ (id)postParentCommentWithCommentThreadManagerWithCommentThreadManager:(id)arg1;
+ (id)postParentComment;
+ (id)postCommentReplyWithCommentThreadManagerWithReplyToCommentModel:(id)arg1 replyToUser:(id)arg2 commentThreadManager:(id)arg3;
+ (id)postCommentReplyByDefaultWithReplyToCommentPK:(id)arg1 replyToUser:(id)arg2;
- (void).cxx_destruct;
- (void)matchPostParentComment:(CDUnknownBlockType)arg1 postParentCommentWithCommentThreadManager:(CDUnknownBlockType)arg2 postCommentReplyByDefault:(CDUnknownBlockType)arg3 postCommentReplyWithCommentThreadManager:(CDUnknownBlockType)arg4;

@end

