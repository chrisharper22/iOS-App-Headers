//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGUnifiedVideoControlsView, IGUser, NSString, NSURL, UICollectionViewCell, UIGestureRecognizer;
@protocol IGHeartAnimatable, IGStoryViewerEntryView, IGSundialControlsOverlaySupporting, IGSundialPlaybackCompatible, IGSundialPlaybackCompatible><IGSundialAdsMediaProviding, IGSundialPlaybackCompatible><IGSundialAdsMediaProviding><IGSundialAdsSoundPlaying><IGSundialAdsCellAnimatable;

@protocol IGSundialAdsVideoCellDelegate <NSObject>
- (void)sundialAdsVideoCell:(id)arg1 scrubbingDidEndInVideoControlsView:(IGUnifiedVideoControlsView *)arg2;
- (void)sundialAdsVideoCell:(id)arg1 scrubbingDidChangeInVideoControlsView:(IGUnifiedVideoControlsView *)arg2;
- (void)sundialAdsVideoCell:(id)arg1 scrubbingDidBeginInVideoControlsView:(IGUnifiedVideoControlsView *)arg2;
- (void)sundialAdsVideoCellDidTapTranslationButton:(id <IGSundialPlaybackCompatible>)arg1;
- (void)sundialAdsVideoCell:(id <IGSundialPlaybackCompatible>)arg1 didTapOnHashtag:(NSString *)arg2;
- (void)sundialAdsVideoCell:(id <IGSundialPlaybackCompatible>)arg1 didTapProfileURL:(NSURL *)arg2;
- (void)sundialAdsVideoCellDidLongPressSend:(id <IGSundialPlaybackCompatible>)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)sundialAdsVideoCellDidTapStickerResultsAttributionView:(id <IGSundialPlaybackCompatible>)arg1;
- (void)sundialAdsVideoCellDidTapLocationAttributionView:(id <IGSundialPlaybackCompatible>)arg1;
- (void)sundialAdsVideoCellDidTapVisualRepliesAttributionView:(id <IGSundialPlaybackCompatible><IGSundialAdsMediaProviding>)arg1;
- (void)sundialAdsVideoCellDidTapRemix:(id <IGSundialPlaybackCompatible>)arg1;
- (void)sundialAdsVideoCellDidTapCTA:(id <IGSundialPlaybackCompatible>)arg1;
- (void)sundialAdsVideoCell:(id <IGSundialPlaybackCompatible><IGSundialAdsMediaProviding>)arg1 didTapUser:(IGUser *)arg2;
- (void)sundialAdsVideoCellDidTapBrandedContentTags:(id <IGSundialPlaybackCompatible>)arg1;
- (void)sundialAdsVideoCellDidTapMoreOptionsButton:(id <IGSundialPlaybackCompatible><IGSundialAdsMediaProviding>)arg1;
- (void)sundialAdsVideoCellDidTapLike:(id <IGSundialPlaybackCompatible>)arg1;
- (void)sundialAdsVideoCellDidTapSendButton:(id <IGSundialPlaybackCompatible><IGSundialAdsMediaProviding>)arg1;
- (void)sundialAdsVideoCell:(id <IGSundialPlaybackCompatible>)arg1 didObserveTapOnStoryRingButton:(id <IGStoryViewerEntryView>)arg2 forUser:(IGUser *)arg3;
- (void)sundialAdsVideoCell:(id <IGSundialPlaybackCompatible>)arg1 didTapViewsAndLikesForMediaPk:(NSString *)arg2;
- (void)sundialAdsVideoCell:(id <IGSundialPlaybackCompatible>)arg1 didTapCommentForMediaPk:(NSString *)arg2;
- (void)sundialAdsVideoCellDidLongPressEnd:(id <IGSundialControlsOverlaySupporting>)arg1;
- (void)sundialAdsVideoCellDidLongPressBegin:(id <IGSundialControlsOverlaySupporting>)arg1;
- (void)sundialAdsVideoCellDidDoubleTap:(UICollectionViewCell<IGHeartAnimatable> *)arg1;
- (void)sundialAdsVideoCellDidSingleTap:(id <IGSundialPlaybackCompatible><IGSundialAdsMediaProviding><IGSundialAdsSoundPlaying><IGSundialAdsCellAnimatable>)arg1;
@end

