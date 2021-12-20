//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGCommentContentViewProtocol-Protocol.h"

@class IGCommentModel, NSArray, NSString;
@protocol IGCommentContentWithLikeViewDelegate;

@protocol IGCommentContentWithLikeViewProtocol <IGCommentContentViewProtocol>
@property(nonatomic) __weak id <IGCommentContentWithLikeViewDelegate> delegate;
- (void)updateFacebookLikeButtonSelectedWithCommentViewModel:(IGCommentModel *)arg1;
- (void)updateFacebookReactionButtonCountWithCommentViewModel:(IGCommentModel *)arg1;
- (void)updatePrivateReplyText;
- (void)updateLikedByButtonWithLikers:(NSArray *)arg1 module:(NSString *)arg2;
- (void)updateLikeCountButtonWithLikeCount:(long long)arg1;
@end

