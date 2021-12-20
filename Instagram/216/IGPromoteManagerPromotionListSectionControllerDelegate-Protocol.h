//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGPromoteManagerRejectionDataModel, NSArray, NSString, NSURL;

@protocol IGPromoteManagerPromotionListSectionControllerDelegate <NSObject>
- (void)notifyViewControllerDidTapNotDeliveringLearnMoreWithMediaId:(NSString *)arg1;
- (void)notifyViewControllerDidTapAccountSpendLimitStatusWithMediaId:(NSString *)arg1;
- (void)notifyViewControllerDidTapCompleteDraftWithMediaId:(NSString *)arg1;
- (void)notifyViewControllerDidTapAddFundsWithAdAccountId:(NSString *)arg1 mediaId:(NSString *)arg2;
- (void)notifyViewControllerDidTapPayNowWithAdAccountId:(NSString *)arg1 mediaId:(NSString *)arg2;
- (void)notifyViewControllerDidTapCampaignControlEditWithMediaId:(NSString *)arg1 pageId:(NSString *)arg2;
- (void)notifyViewControllerDidTapRejectedLearnMoreWithMediaId:(NSString *)arg1;
- (void)notifyListSectionControllerDidTapViewAppealWithAppealSupportInboxURL:(NSURL *)arg1 mediaId:(NSString *)arg2;
- (void)notifyViewControllerDidTapLearnMoreWithThumbnailURL:(NSURL *)arg1 isStoryPost:(_Bool)arg2 mediaId:(NSString *)arg3;
- (void)notifyViewControllerDidTapViewLeadsWithMediaId:(NSString *)arg1;
- (void)notifyViewControllerDidTapViewInsightsWithMediaId:(NSString *)arg1;
- (void)notifyViewControllerDidTapReviewWithMediaId:(NSString *)arg1 boostId:(NSString *)arg2 rejectionDataModel:(IGPromoteManagerRejectionDataModel *)arg3 adAccountId:(NSString *)arg4 audienceId:(NSString *)arg5 thumbnailURL:(NSURL *)arg6;
- (void)notifyViewControllerDidTapAppealWithMediaId:(NSString *)arg1 boostId:(NSString *)arg2 rejectionDataModel:(IGPromoteManagerRejectionDataModel *)arg3;
- (void)notifyViewControllerDidTapThumbnailWithMediaId:(NSString *)arg1 instagramPositions:(NSArray *)arg2 mediaProductType:(NSString *)arg3 politicalAdBylineText:(NSString *)arg4 destination:(long long)arg5;
- (void)notifyViewControllerDidTapPromoteAgainWithMediaId:(NSString *)arg1;
- (void)notifyViewControllerDidTapPauseWithOrganicMediaIgId:(NSString *)arg1 mediaId:(NSString *)arg2 pageId:(NSString *)arg3 thumbnailURL:(NSURL *)arg4 isStoryPost:(_Bool)arg5 tappedPauseCompletion:(void (^)(void))arg6 failureBlock:(void (^)(void))arg7;
- (void)notifyViewControllerDidTapResumeWithOrganicMediaIgId:(NSString *)arg1 mediaId:(NSString *)arg2 pageId:(NSString *)arg3 thumbnailURL:(NSURL *)arg4 isStoryPost:(_Bool)arg5 tappedResumeCompletion:(void (^)(void))arg6 failureBlock:(void (^)(void))arg7;
@end

