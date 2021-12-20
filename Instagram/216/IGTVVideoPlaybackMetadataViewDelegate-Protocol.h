//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGTVVideoPlaybackControlsViewDelegate-Protocol.h"

@class IGTVVideoPlaybackMetadataView, NSString, NSURL;

@protocol IGTVVideoPlaybackMetadataViewDelegate <IGTVVideoPlaybackControlsViewDelegate>
- (void)videoPlaybackMetadataView:(IGTVVideoPlaybackMetadataView *)arg1 didTapURL:(NSURL *)arg2 hashtagText:(NSString *)arg3;
- (void)videoPlaybackMetadataViewDidTapLiveRing:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackMetadataViewDidToggleDetailsDisplay:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackViewDidTapBrandPartners:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackViewDidTapLocationButton:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackMetadataViewDidTapPeopleTagsButton:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackMetadataViewDidTapViewProductsButton:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackMetadataViewDidTapSeriesButton:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackMetadataViewDidTapOrientationButton:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackMetadataViewDidTapDismissButton:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackMetadataViewDidTapOverflowButton:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackMetadataViewDidTapDirectButton:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackMetadataViewDidTapCommentButton:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackMetadataViewDidTapLikeCountButton:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackMetadataViewDidTapRemixButton:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackMetadataViewDidTapLikeButton:(IGTVVideoPlaybackMetadataView *)arg1;
- (void)videoPlaybackMetadataViewDidTapUsernameButton:(IGTVVideoPlaybackMetadataView *)arg1;
@end
