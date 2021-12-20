//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGARStickerModel, IGAnimatedStickerModel, IGAvatarStickerModel, IGBadgesSupporterThankYouStickerModel, IGCameraStickerModel, IGCountdownStickerTrayModel, IGDateStickerModel, IGEmojiModel, IGExpressingLoveStickerTrayModel, IGGalleryVideoStickerModel, IGHashtagStickerModel, IGITakeCareStickerModel, IGInternalStickerModel, IGKaraokeCaptionStickerTrayModel, IGMemoriesStickerModel, IGMentionStickerModel, IGPollStickerModel, IGPollStickerV2TrayModel, IGPromptStickerTrayModel, IGQuestionAnswerStickerModel, IGQuizStickerTrayModel, IGRollCallStickerTrayModel, IGSendLikesStickerModel, IGSliderStickerModel, IGStaticStickerModel, IGStoryPlaybackTimeDebuggingStickerModel, IGStoryStickerViewController, IGSupportPersonalizedAdsStickerTrayModel, IGTimeStickerModel, IGUniversalLocationStickerModel, IGUpcomingEventStickerTrayModel, IGVoterRegistrationStickerModel, UIImage, UIView;
@protocol IGAudioModelProtocol;

@protocol IGStoryStickerViewControllerSelectionDelegate <NSObject>
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectITakeCareStickerModel:(IGITakeCareStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectBadgesSupporterThankYouStickerModel:(IGBadgesSupporterThankYouStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectPromptStickerModel:(IGPromptStickerTrayModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectExpressingLoveStickerTrayModel:(IGExpressingLoveStickerTrayModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectKaraokeCaptionStickerTrayModel:(IGKaraokeCaptionStickerTrayModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectAudioTrack:(id <IGAudioModelProtocol>)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectAmplifyBlackBusinessStickerModel:(IGStaticStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectUpcomingEventStickerTrayModel:(IGUpcomingEventStickerTrayModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectRollCallStickerTrayModel:(IGRollCallStickerTrayModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectShareProfessionalStickerModel:(IGStaticStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectCountdownStickerTrayModel:(IGCountdownStickerTrayModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectQuizStickerTrayModel:(IGQuizStickerTrayModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectQuestionAnswerStickerModel:(IGQuestionAnswerStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectSliderStickerModel:(IGSliderStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectMentionStickerModel:(IGMentionStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectPollStickerV2Model:(IGPollStickerV2TrayModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectPollStickerModel:(IGPollStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectHashtagStickerModel:(IGHashtagStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectARSticker:(IGARStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectSendLikesSticker:(IGSendLikesStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectAvatars:(IGAvatarStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectSPAStickerTrayModel:(IGSupportPersonalizedAdsStickerTrayModel *)arg2;
- (void)stickerViewControllerDidSelectPollMessage:(IGStoryStickerViewController *)arg1;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectVoterRegistrationStickerTrayModel:(IGVoterRegistrationStickerModel *)arg2;
- (void)stickerViewControllerDidSelectSelfieSticker:(IGStoryStickerViewController *)arg1;
- (void)stickerViewControllerDidSelectLike:(IGStoryStickerViewController *)arg1;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectPlaybackTimeDebuggingStickerModel:(IGStoryPlaybackTimeDebuggingStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectInternalStickerModel:(IGInternalStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectGalleryVideoSticker:(IGGalleryVideoStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectGalleryImageSticker:(UIImage *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectCameraStickerModel:(IGCameraStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectLocationStickerModel:(IGUniversalLocationStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 willDismissLocationPicker:(IGUniversalLocationStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 willPresentLocationPicker:(IGUniversalLocationStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectMemoriesSticker:(IGMemoriesStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectDateSticker:(IGDateStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectTimeStickerModel:(IGTimeStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectAnimatedSticker:(IGAnimatedStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectStaticSticker:(IGStaticStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectEmoji:(IGEmojiModel *)arg2 emojiView:(UIView *)arg3;
@end

