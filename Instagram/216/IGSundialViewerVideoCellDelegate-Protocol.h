//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMedia, IGSundialViewerVideoCell, IGUnifiedVideoContextualHighlightInfo, IGUnifiedVideoControlsView, IGUser, NSArray, NSString, NSURL, UIGestureRecognizer;
@protocol IGStoryViewerEntryView, IGSundialAudioAssetProtocol;

@protocol IGSundialViewerVideoCellDelegate <NSObject>
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 didLongPressSendButtonWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 scrubbingDidEndInVideoControlsView:(IGUnifiedVideoControlsView *)arg2;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 scrubbingDidChangeInVideoControlsView:(IGUnifiedVideoControlsView *)arg2;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 scrubbingDidBeginInVideoControlsView:(IGUnifiedVideoControlsView *)arg2;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 didTapContextualHighlight:(IGUnifiedVideoContextualHighlightInfo *)arg2;
- (void)sundialViewerVideoCellDidTapVoiceoverButton:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapHashtagChallengeButton:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapStickerResultsAttributionView:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapLocationAttributionView:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapVisualRepliesAttributionView:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 didUpdatePlaybackState:(CDStruct_f53b2872)arg2;
- (void)sundialViewerVideoCellDidTapUser:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapTranslation:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapLike:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCelldidTapLearnMore:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCelldidTapRevealSensitiveMedia:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapUnhideMedia:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapShowPost:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 didTapAudioAttribution:(id <IGSundialAudioAssetProtocol>)arg2 onAttributionButton:(_Bool)arg3;
- (void)sundialViewerVideoCellDidTapViewPeopleTagsEntryPoint:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapInThisReelEntryPoint:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapViewProductsEntryPoint:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 didTapEffectAttribution:(NSArray *)arg2;
- (void)sundialViewerVideoCellDidTapSendButton:(IGSundialViewerVideoCell *)arg1;
- (void)sundialVideoCell:(IGSundialViewerVideoCell *)arg1 didObserveTapOnStoryRingButton:(id <IGStoryViewerEntryView>)arg2 forUser:(IGUser *)arg3;
- (void)sundialVideoCell:(IGSundialViewerVideoCell *)arg1 didTapBreakingCreatorVideo:(IGMedia *)arg2;
- (void)sundialVideoCell:(IGSundialViewerVideoCell *)arg1 didTapHashtag:(NSString *)arg2;
- (void)sundialVideoCell:(IGSundialViewerVideoCell *)arg1 didTapViewsAndLikesForSundialVideo:(IGMedia *)arg2;
- (void)sundialVideoCell:(IGSundialViewerVideoCell *)arg1 didTapCommentForSundialVideoPk:(NSString *)arg2;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 didTapProfileURL:(NSURL *)arg2;
- (void)sundialViewerVideoCellDidTapSeeAllRemixesButton:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapRemixButton:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapRemixCTAButton:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapBrandedContentTags:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCell:(IGSundialViewerVideoCell *)arg1 didTapURL:(NSURL *)arg2;
- (void)sundialViewerVideoCellDidStartPlaying:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidTapMoreOptionsButton:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidLoadPreviewImage:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidLongPressEnd:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidLongPressBegin:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidDoubleTap:(IGSundialViewerVideoCell *)arg1;
- (void)sundialViewerVideoCellDidSingleTap:(IGSundialViewerVideoCell *)arg1;
@end

