//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGNewsCellView, IGNewsStory, IGProfilePictureImageView, IGTappableImageView, IGTooltipView, NSURL;

@protocol IGNewsCellViewDelegate <NSObject>
- (void)newsCellView:(IGNewsCellView *)arg1 didTapActionTextButtonForStory:(IGNewsStory *)arg2;
- (void)newsCellView:(IGNewsCellView *)arg1 showTooltip:(IGTooltipView *)arg2 upperPinPoint:(struct CGPoint)arg3 lowerPinPoint:(struct CGPoint)arg4;
- (void)newsCellView:(IGNewsCellView *)arg1 hideStory:(IGNewsStory *)arg2;
- (void)newsCellViewDidTapIgnoreFollowRequest:(IGNewsCellView *)arg1;
- (void)newsCellViewDidTapAcceptFollowRequest:(IGNewsCellView *)arg1;
- (void)newsCellViewDidTapMessageButton:(IGNewsCellView *)arg1;
- (void)newsCellView:(IGNewsCellView *)arg1 didTapFollowButtonWithAction:(long long)arg2;
- (void)newsCellViewDidTapPrivateReplySeeResponseButtonForStory:(IGNewsStory *)arg1;
- (void)newsCellView:(IGNewsCellView *)arg1 didTapPrivateReplyMessageButtonForStory:(IGNewsStory *)arg2;
- (void)newsCellView:(IGNewsCellView *)arg1 didTapDeleteCommentButtonForStory:(IGNewsStory *)arg2;
- (void)newsCellViewDidTapViewReplyButton:(IGNewsCellView *)arg1;
- (void)newsCellView:(IGNewsCellView *)arg1 didTapReplyButtonForStory:(IGNewsStory *)arg2;
- (void)newsCellViewDidTapLikeButton:(IGNewsCellView *)arg1;
- (void)newsCellView:(IGNewsCellView *)arg1 didTapStoryMediaImageViewForStory:(IGNewsStory *)arg2;
- (void)newsCellView:(IGNewsCellView *)arg1 didTapProfileImageView:(IGProfilePictureImageView *)arg2 forStory:(IGNewsStory *)arg3;
- (void)newsCellView:(IGNewsCellView *)arg1 openURL:(NSURL *)arg2;
- (void)newsCellView:(IGNewsCellView *)arg1 didTapImageView:(IGTappableImageView *)arg2 forStory:(IGNewsStory *)arg3;
- (void)newsCellView:(IGNewsCellView *)arg1 didTapCellRowForStory:(IGNewsStory *)arg2;
@end

