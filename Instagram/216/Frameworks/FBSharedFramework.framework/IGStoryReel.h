//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGStorableObject.h>

#import <FBSharedFramework/IGAdGapRuleEnforceable-Protocol.h>
#import <FBSharedFramework/IGAdPlatformSponsoredItemInfoProviding-Protocol.h>
#import <FBSharedFramework/IGUnitItemInformationProviding-Protocol.h>

@class IGAdPlatformGapRules, IGPhoto, IGRatingsAndReviewsInfo, IGRingViewSpec, IGStoryAdPodRulesModel, IGStoryCarouselModel, IGStoryDismissCard, IGStoryNetegoModel, IGStoryReelCoverInfo, IGStoryReelRequiredObjectStores, IGStoryRingBadgeSpec, IGStoryToastViewModel, NSArray, NSData, NSDate, NSObject, NSString, NSURL;
@protocol IGStoryReelOwnerType, IGUserLauncherSet;

@interface IGStoryReel : IGStorableObject <IGAdPlatformSponsoredItemInfoProviding, IGUnitItemInformationProviding, IGAdGapRuleEnforceable>
{
    _Bool _hasRightsManagerViolation;
    IGStoryReelRequiredObjectStores *_reelRequiredObjectStores;
    id <IGUserLauncherSet> _launcherSet;
    NSObject *_lock;
    NSDate *_expiringAtDate;
    unsigned long long _viewStateItemType;
    _Bool _isNux;
    _Bool _showNuxTooltip;
    _Bool _isMuted;
    _Bool _isCacheable;
    _Bool _canReply;
    _Bool _canReshare;
    _Bool _hideFromFeedUnit;
    _Bool _isSponsored;
    _Bool _isAdsSensitive;
    _Bool _hasFavoritesMedia;
    _Bool _hasPrideMedia;
    _Bool _hasFanClubExclusiveStory;
    _Bool _isPinnedHighlight;
    _Bool _hasSkipped;
    _Bool _isSensitiveVerticalAd;
    _Bool _isCTAStickerAvailable;
    _Bool _hasRecentlyPostedTo;
    _Bool _isClientGenerated;
    _Bool _isCacheSortedItemsEnabled;
    _Bool _showSelfStoryReactionBadge;
    _Bool _isPartiallyPopulatedFromCache;
    NSArray *_mediaIds;
    id <IGStoryReelOwnerType> _owner;
    long long _rankedPosition;
    long long _seenRankedPosition;
    NSDate *_instantiatedAtDate;
    NSDate *_latestReelMediaDate;
    NSDate *_createdAtDate;
    double _clientPrefetchScore;
    long long _prefetchCount;
    long long _reelType;
    NSString *_promotionID;
    IGPhoto *_mediaPreviewPhoto;
    NSDate *_mediaPreviewPhotoCreationDate;
    NSData *_mediaPreviewData;
    NSString *_title;
    long long _reelMediaCount;
    IGRingViewSpec *_customRingSpec;
    IGStoryRingBadgeSpec *_ringBadgeSpec;
    IGStoryReelCoverInfo *_coverInfo;
    NSURL *_firstItemPhotoURL;
    NSString *_sourceToken;
    NSString *_trayContext;
    IGStoryDismissCard *_dismissCard;
    NSString *_uniqueReelID;
    NSString *_code;
    NSString *_timeSinceInteraction;
    IGStoryNetegoModel *_storyNetegoModel;
    NSDate *_adExpiryTimestamp;
    NSArray *_adItems;
    long long _adOrNetegoPriorityIndex;
    IGAdPlatformGapRules *_gapRules;
    IGStoryAdPodRulesModel *_adPodRulesModel;
    NSArray *_copRenderDecision;
    IGStoryCarouselModel *_carouselModel;
    NSArray *_videoToCarouselCutSecs;
    IGRatingsAndReviewsInfo *_ratingsAndReviewsInfo;
    double _presceneDuration;
    IGStoryToastViewModel *_toastViewModel;
    long long _highlightsHeaderDesign;
    NSArray *_carouselTransformationCards;
    NSArray *_bestiesMediaIds;
    NSArray *_seenMediaIds;
    NSArray *_tombstoneIndexes;
    NSString *_firstMediaIdWithNewEmojiReaction;
    NSArray *_pendingItems;
    NSArray *_storyUnitItems;
}

+ (id)reelForReelOwner:(id)arg1 store:(id)arg2;
+ (id)archiveMapReelWithItems:(id)arg1 user:(id)arg2 store:(id)arg3;
+ (id)feedReelWithPK:(id)arg1 items:(id)arg2 user:(id)arg3 store:(id)arg4;
+ (id)emptyReelWithPK:(id)arg1 user:(id)arg2 store:(id)arg3;
+ (id)emptyHighlightsReelWithPK:(id)arg1 user:(id)arg2 store:(id)arg3;
+ (id)reelForUserReference:(id)arg1 store:(id)arg2;
+ (id)reelForUser:(id)arg1 store:(id)arg2;
+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPartiallyPopulatedFromCache; // @synthesize isPartiallyPopulatedFromCache=_isPartiallyPopulatedFromCache;
@property(retain, nonatomic) NSArray *storyUnitItems; // @synthesize storyUnitItems=_storyUnitItems;
@property(readonly, nonatomic) NSArray *pendingItems; // @synthesize pendingItems=_pendingItems;
@property(readonly, nonatomic) NSString *firstMediaIdWithNewEmojiReaction; // @synthesize firstMediaIdWithNewEmojiReaction=_firstMediaIdWithNewEmojiReaction;
@property(nonatomic) _Bool showSelfStoryReactionBadge; // @synthesize showSelfStoryReactionBadge=_showSelfStoryReactionBadge;
@property(readonly, nonatomic) NSArray *tombstoneIndexes; // @synthesize tombstoneIndexes=_tombstoneIndexes;
@property(readonly, nonatomic) NSArray *seenMediaIds; // @synthesize seenMediaIds=_seenMediaIds;
@property(readonly, nonatomic) NSArray *bestiesMediaIds; // @synthesize bestiesMediaIds=_bestiesMediaIds;
@property(readonly, nonatomic) _Bool isCacheSortedItemsEnabled; // @synthesize isCacheSortedItemsEnabled=_isCacheSortedItemsEnabled;
@property(nonatomic) _Bool isClientGenerated; // @synthesize isClientGenerated=_isClientGenerated;
@property(readonly, nonatomic) NSArray *carouselTransformationCards; // @synthesize carouselTransformationCards=_carouselTransformationCards;
@property(readonly, nonatomic) long long highlightsHeaderDesign; // @synthesize highlightsHeaderDesign=_highlightsHeaderDesign;
@property(readonly, nonatomic) IGStoryToastViewModel *toastViewModel; // @synthesize toastViewModel=_toastViewModel;
@property(readonly, nonatomic) _Bool hasRecentlyPostedTo; // @synthesize hasRecentlyPostedTo=_hasRecentlyPostedTo;
@property(readonly, nonatomic) double presceneDuration; // @synthesize presceneDuration=_presceneDuration;
@property(readonly, nonatomic) IGRatingsAndReviewsInfo *ratingsAndReviewsInfo; // @synthesize ratingsAndReviewsInfo=_ratingsAndReviewsInfo;
@property(copy, nonatomic) NSArray *videoToCarouselCutSecs; // @synthesize videoToCarouselCutSecs=_videoToCarouselCutSecs;
@property(readonly, nonatomic) IGStoryCarouselModel *carouselModel; // @synthesize carouselModel=_carouselModel;
@property(readonly, nonatomic) NSArray *copRenderDecision; // @synthesize copRenderDecision=_copRenderDecision;
@property(readonly, nonatomic) IGStoryAdPodRulesModel *adPodRulesModel; // @synthesize adPodRulesModel=_adPodRulesModel;
@property(readonly, nonatomic) IGAdPlatformGapRules *gapRules; // @synthesize gapRules=_gapRules;
@property(readonly, nonatomic) long long adOrNetegoPriorityIndex; // @synthesize adOrNetegoPriorityIndex=_adOrNetegoPriorityIndex;
@property(readonly, nonatomic) NSArray *adItems; // @synthesize adItems=_adItems;
@property(readonly, nonatomic) NSDate *adExpiryTimestamp; // @synthesize adExpiryTimestamp=_adExpiryTimestamp;
@property(readonly, nonatomic) _Bool isCTAStickerAvailable; // @synthesize isCTAStickerAvailable=_isCTAStickerAvailable;
@property(readonly, nonatomic) _Bool isSensitiveVerticalAd; // @synthesize isSensitiveVerticalAd=_isSensitiveVerticalAd;
@property(readonly, nonatomic) IGStoryNetegoModel *storyNetegoModel; // @synthesize storyNetegoModel=_storyNetegoModel;
@property(readonly, nonatomic) _Bool hasSkipped; // @synthesize hasSkipped=_hasSkipped;
@property(readonly, nonatomic) NSString *timeSinceInteraction; // @synthesize timeSinceInteraction=_timeSinceInteraction;
@property(readonly, copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(readonly, copy, nonatomic) NSString *uniqueReelID; // @synthesize uniqueReelID=_uniqueReelID;
@property(readonly, nonatomic) IGStoryDismissCard *dismissCard; // @synthesize dismissCard=_dismissCard;
@property(readonly, copy, nonatomic) NSString *trayContext; // @synthesize trayContext=_trayContext;
@property(readonly, copy, nonatomic) NSString *sourceToken; // @synthesize sourceToken=_sourceToken;
@property(readonly, nonatomic) NSURL *firstItemPhotoURL; // @synthesize firstItemPhotoURL=_firstItemPhotoURL;
@property(readonly, nonatomic) IGStoryReelCoverInfo *coverInfo; // @synthesize coverInfo=_coverInfo;
@property(readonly, nonatomic) IGStoryRingBadgeSpec *ringBadgeSpec; // @synthesize ringBadgeSpec=_ringBadgeSpec;
@property(readonly, nonatomic) IGRingViewSpec *customRingSpec; // @synthesize customRingSpec=_customRingSpec;
@property(readonly, nonatomic) long long reelMediaCount; // @synthesize reelMediaCount=_reelMediaCount;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool isPinnedHighlight; // @synthesize isPinnedHighlight=_isPinnedHighlight;
@property(readonly, nonatomic) NSData *mediaPreviewData; // @synthesize mediaPreviewData=_mediaPreviewData;
@property(readonly, nonatomic) NSDate *mediaPreviewPhotoCreationDate; // @synthesize mediaPreviewPhotoCreationDate=_mediaPreviewPhotoCreationDate;
@property(readonly, nonatomic) IGPhoto *mediaPreviewPhoto; // @synthesize mediaPreviewPhoto=_mediaPreviewPhoto;
@property(readonly, nonatomic) NSString *promotionID; // @synthesize promotionID=_promotionID;
@property(nonatomic) long long reelType; // @synthesize reelType=_reelType;
@property(readonly, nonatomic) _Bool hasFanClubExclusiveStory; // @synthesize hasFanClubExclusiveStory=_hasFanClubExclusiveStory;
@property(readonly, nonatomic) _Bool hasPrideMedia; // @synthesize hasPrideMedia=_hasPrideMedia;
@property(readonly, nonatomic) _Bool hasFavoritesMedia; // @synthesize hasFavoritesMedia=_hasFavoritesMedia;
@property(readonly, nonatomic) _Bool isAdsSensitive; // @synthesize isAdsSensitive=_isAdsSensitive;
@property(readonly, nonatomic) long long prefetchCount; // @synthesize prefetchCount=_prefetchCount;
@property(readonly, nonatomic) _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(readonly, nonatomic) double clientPrefetchScore; // @synthesize clientPrefetchScore=_clientPrefetchScore;
@property(readonly, nonatomic) _Bool hideFromFeedUnit; // @synthesize hideFromFeedUnit=_hideFromFeedUnit;
@property(readonly, nonatomic) _Bool canReshare; // @synthesize canReshare=_canReshare;
@property(readonly, nonatomic) _Bool canReply; // @synthesize canReply=_canReply;
@property(readonly, nonatomic) NSDate *createdAtDate; // @synthesize createdAtDate=_createdAtDate;
@property(readonly, nonatomic) NSDate *latestReelMediaDate; // @synthesize latestReelMediaDate=_latestReelMediaDate;
@property(readonly, nonatomic) NSDate *instantiatedAtDate; // @synthesize instantiatedAtDate=_instantiatedAtDate;
@property(nonatomic) _Bool isCacheable; // @synthesize isCacheable=_isCacheable;
@property(readonly, nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(readonly, nonatomic) _Bool showNuxTooltip; // @synthesize showNuxTooltip=_showNuxTooltip;
@property(readonly, nonatomic) _Bool isNux; // @synthesize isNux=_isNux;
@property(readonly, nonatomic) long long seenRankedPosition; // @synthesize seenRankedPosition=_seenRankedPosition;
@property(readonly, nonatomic) long long rankedPosition; // @synthesize rankedPosition=_rankedPosition;
@property(retain, nonatomic) id <IGStoryReelOwnerType> owner; // @synthesize owner=_owner;
- (unsigned long long)serverViewStateItemType;
- (unsigned long long)unitItemType;
- (id)unitItemId;
- (void)_resetSelfStoryBadgeIfNeeded;
- (void)_clearOutInvalidOrExpiredFeedItems;
- (void)_removeDeletedMedia:(id)arg1;
- (void)_updateMediasWithMediaItems:(id)arg1 mediaIds:(id)arg2;
- (id)_parseOwner:(id)arg1;
- (void)_parseNetegoUnit:(id)arg1 gapRules:(id)arg2;
- (id)storyItemForMediaID:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *expiringAtDate;
@property(readonly, nonatomic) NSArray *mediaIds; // @synthesize mediaIds=_mediaIds;
@property(readonly, nonatomic) _Bool containsReshare;
- (void)updateRingBadgeSpec:(id)arg1;
- (void)updateCustomRingSpec:(id)arg1;
- (void)updateLatestReelMediaDate:(id)arg1;
- (void)updateMediaPreviewPhotoCreationDate:(id)arg1;
- (void)updateMediaPreviewPhoto:(id)arg1;
@property(readonly, nonatomic) _Bool hasRightsManagerViolation;
- (void)updateHasRecentlyPostedTo:(_Bool)arg1;
- (void)updateSkipped:(_Bool)arg1;
- (void)updateMuteStatus:(_Bool)arg1;
@property(readonly, nonatomic) _Bool needsFetch;
@property(readonly, nonatomic) _Bool needsPrefetch;
- (_Bool)hasEmojiReactions;
- (_Bool)hasUnexpiredContent;
- (id)sortedItemsIncludingExpired;
- (id)sortedItems;
- (void)updatePendingItems:(id)arg1;
- (void)updateWithPostedFeedItem:(id)arg1;
- (void)removeFeedItem:(id)arg1;
- (void)updateFeedItems:(id)arg1 shouldUpdateLatestReelMediaDate:(_Bool)arg2 shouldClearOutInvalidOrExpiredFeedItems:(_Bool)arg3 isPartiallyPopulatedFromCache:(_Bool)arg4;
- (_Bool)updateWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPk:(id)arg1 reelRequiredObjectStores:(id)arg2 launcherSet:(id)arg3;
- (id)replyConfig;
- (id)_getMediaIDsForPerMediaSeenState;
- (id)_dateBasedFirstUnseenStoryMediaItemWithReelSeenStateStore:(id)arg1 isSelfStory:(_Bool)arg2;
- (_Bool)seenWithReelSeenStateStoreState:(id)arg1;
- (id)firstUnseenStoryMediaItemWithReelSeenStateStore:(id)arg1 isSelfStory:(_Bool)arg2;
- (_Bool)seenWithReelSeenStateStore:(id)arg1 isSelfStory:(_Bool)arg2;
- (id)unseenMediaIdsForReelSeenStateStore:(id)arg1;
- (id)lastSeenDateForReelSeenStateStore:(id)arg1;
- (id)appId;
- (id)inventorySource;
- (long long)numberOfAdsInAdPod;
- (long long)indexInAdPod;
- (id)adPodId;
- (id)adTrackingToken;
- (id)mediaPk;
- (id)invalidationRules;
- (id)adPlatformInvalidationInfo;
- (id)adPlatformMetadata;
- (id)adPlatformSponsoredItemId;
@property(readonly, nonatomic) long long targetInsertionPosition;
@property(readonly, nonatomic) long long priorityIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

