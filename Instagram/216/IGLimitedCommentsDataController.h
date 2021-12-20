//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGCommentThread, IGMedia, IGUserSession;
@protocol IGLimitedCommentsDataControllerDelegate;

@interface IGLimitedCommentsDataController : NSObject
{
    IGUserSession *_userSession;
    IGMedia *_media;
    IGCommentThread *_commentThread;
    unsigned long long _status;
    CDUnknownBlockType _headLoadCompletionBlock;
    id <IGLimitedCommentsDataControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGCommentThread *commentThread; // @synthesize commentThread=_commentThread;
@property(nonatomic) __weak id <IGLimitedCommentsDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_containsLimitedComment:(id)arg1;
- (_Bool)_isCommentRemoved:(id)arg1;
- (_Bool)isLoading;
- (_Bool)hasMoreComments;
- (id)limitedComments;
- (void)fetchCommentsWithRequestType:(unsigned long long)arg1;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 headLoadCompletionBlock:(CDUnknownBlockType)arg3;

@end

