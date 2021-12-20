//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCommentGroupFetching-Protocol.h"

@class IGUserSession, NSString;

@interface IGFacebookCommentGroupFetcher : NSObject <IGCommentGroupFetching>
{
    IGUserSession *_userSession;
    NSString *_feedItemPK;
}

- (void).cxx_destruct;
- (void)_handleChildCommentsResponseForResponseObject:(id)arg1 commentGroup:(id)arg2 loadMoreDirection:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)loadMoreCommentRepliesForCommentGroup:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)loadMorePreviewCommentsForCommentGroup:(id)arg1 loadMoreDirection:(unsigned long long)arg2 numberOfCommentsOnLastLoad:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initWithUserSession:(id)arg1 feedItemPK:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

