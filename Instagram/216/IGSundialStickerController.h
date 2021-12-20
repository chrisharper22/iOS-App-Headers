//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGStoryFullscreenTappableOverlayDelegate-Protocol.h"

@class IGMedia, IGStoryConfettiAnimationController, IGSundialStickerLogger, IGUserSession, NSString;
@protocol IGSundialStickerOverlayViewControllerDelegate;

@interface IGSundialStickerController : IGViewController <IGStoryFullscreenTappableOverlayDelegate>
{
    IGUserSession *_userSession;
    IGSundialStickerLogger *_logger;
    IGStoryConfettiAnimationController *_confettiAnimationController;
    _Bool _isCurrentUser;
    id <IGSundialStickerOverlayViewControllerDelegate> _delegate;
    IGMedia *_video;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(retain, nonatomic) IGMedia *video; // @synthesize video=_video;
@property(nonatomic) __weak id <IGSundialStickerOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_animateQuizSticker:(id)arg1 overlayView:(id)arg2 withCorrectAnswer:(_Bool)arg3;
- (void)_handleFullscreenOverlay:(id)arg1 didTapPollSticker:(id)arg2 voteIndex:(long long)arg3 tapTarget:(id)arg4;
- (void)fullscreenOverlay:(id)arg1 didTapAdsLinkSticker:(id)arg2;
- (void)fullscreenOverlayBloksbloksStickerMentionCountIncrement:(id)arg1 userId:(id)arg2;
- (id)fullscreenOverlayBloksStickerDidRequestStoryLogPayload:(id)arg1;
- (void)fullscreenOverlayBloksStickerDidRequestPlayerPlay:(id)arg1;
- (void)fullscreenOverlayBloksStickerDidRequestPlayerPause:(id)arg1;
- (void)fullscreenOverlayDidDisplayEmojiReactionsContainerView:(id)arg1;
- (void)fullscreenOverlayDidEndDisplayEmojiReactionsContainerView:(id)arg1;
- (void)fullscreenOverlay:(id)arg1 didTapSupportPersonalizedAdsSticker:(id)arg2;
- (void)fullscreenOverlayDidTapRemoveViewerEmojiReaction:(id)arg1;
- (void)fullscreenOverlay:(id)arg1 didTapPromptStickerSocialContext:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapPromptStickerShareButton:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapCustomClientGeneratedTapObject:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)fullscreenOverlayDidLayoutSubviews:(id)arg1;
- (void)fullscreenOverlay:(id)arg1 didTapDiscussionSticker:(id)arg2 atPointInWindowCoordinates:(struct CGPoint)arg3;
- (void)fullscreenOverlay:(id)arg1 didEndSlidingSlider:(id)arg2 withVote:(double)arg3 inStickerViewMode:(long long)arg4;
- (void)fullscreenOverlay:(id)arg1 didBeginSlidingSlider:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didRequestSaveForProductItem:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didReachDropStickerLaunchDate:(id)arg2 stickerModel:(id)arg3;
- (void)fullscreenOverlay:(id)arg1 didReachCountdownStickerEndDate:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapRollCallSticker:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapSMBDiscountSticker:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapSMBSupportSticker:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapFundraiserSticker:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapCountdownSticker:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapMusicLyricsStickerObject:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapMusicStickerObject:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapPollStickerV2:(id)arg2 voteIndex:(long long)arg3 tapTarget:(id)arg4;
- (void)fullscreenOverlay:(id)arg1 didTapPollSticker:(id)arg2 voteIndex:(long long)arg3 tapTarget:(id)arg4;
- (void)fullscreenOverlay:(id)arg1 didTapProductObject:(id)arg2 inDropsReminderButton:(_Bool)arg3;
- (void)fullscreenOverlay:(id)arg1 didTapMultiProductObject:(id)arg2 inDropsReminderButton:(_Bool)arg3;
- (void)fullscreenOverlay:(id)arg1 didTapUpcomingEventObject:(id)arg2 tapPoint:(struct CGPoint)arg3;
- (void)fullscreenOverlay:(id)arg1 didTapFeedPostCTAObject:(id)arg2 tapPoint:(struct CGPoint)arg3;
- (void)fullscreenOverlay:(id)arg1 didTapFeedPostObject:(id)arg2 tapPoint:(struct CGPoint)arg3;
- (void)fullscreenOverlay:(id)arg1 didTapLocationObject:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapHashtagObject:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapUserObject:(id)arg2 mentionType:(long long)arg3;
- (void)fullscreenOverlay:(id)arg1 didTapURL:(id)arg2 tapModel:(id)arg3;
- (void)fullscreenOverlay:(id)arg1 didTapQuizStickerView:(id)arg2 atPointInWindowCoordinates:(struct CGPoint)arg3 tapTarget:(id)arg4;
- (void)fullscreenOverlay:(id)arg1 didTapQuestionAnswerStickerView:(id)arg2;
- (void)fullscreenOverlayDidTapBloksSticker:(id)arg1 bloksModel:(id)arg2;
- (void)fullscreenOverlayDidTapSoundOnSticker:(id)arg1;
- (void)fullscreenOverlayDidHideNuxView:(id)arg1;
- (void)fullscreenOverlayDidHideTooltip:(id)arg1 analyticsTag:(id)arg2;
- (void)fullscreenOverlayDidShowTooltip:(id)arg1 analyticsTag:(id)arg2;
- (void)fullscreenOverlayDidDisplayHeaderLinkAttributionTooltip:(id)arg1;
- (void)fullscreenOverlayDidDisplayTappableOverlayTooltip:(id)arg1 tapModel:(id)arg2 tapPoint:(struct CGPoint)arg3 isFromSticker:(_Bool)arg4;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2 sessionId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
