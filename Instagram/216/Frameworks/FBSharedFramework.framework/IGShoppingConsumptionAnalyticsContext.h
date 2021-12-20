//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGShoppingChainingAnalyticsContext, IGShoppingFiltersAnalyticsContext, IGShoppingGuideAnalyticsContext, IGShoppingHomeRankingInfo, IGShoppingLiveAnalyticsContext, IGShoppingMediaCarouselAnalyticsContext, IGShoppingMentionAnalyticsContext, IGShoppingStorefrontAnalyticsContext, IGShoppingUpcomingEventAnalyticsContext, NSString;

@interface IGShoppingConsumptionAnalyticsContext : NSObject
{
    IGShoppingChainingAnalyticsContext *_chainingInfo;
    IGShoppingMediaCarouselAnalyticsContext *_mediaCarouselInfo;
    IGShoppingLiveAnalyticsContext *_liveInfo;
    IGShoppingUpcomingEventAnalyticsContext *_upcomingEventInfo;
    NSString *_surfaceCategoryId;
    IGShoppingMentionAnalyticsContext *_mentionInfo;
    IGShoppingFiltersAnalyticsContext *_filtersInfo;
    IGShoppingGuideAnalyticsContext *_guideInfo;
    IGShoppingHomeRankingInfo *_rankingInfo;
    IGShoppingStorefrontAnalyticsContext *_storefrontInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGShoppingStorefrontAnalyticsContext *storefrontInfo; // @synthesize storefrontInfo=_storefrontInfo;
@property(readonly, nonatomic) IGShoppingHomeRankingInfo *rankingInfo; // @synthesize rankingInfo=_rankingInfo;
@property(readonly, nonatomic) IGShoppingGuideAnalyticsContext *guideInfo; // @synthesize guideInfo=_guideInfo;
@property(readonly, nonatomic) IGShoppingFiltersAnalyticsContext *filtersInfo; // @synthesize filtersInfo=_filtersInfo;
@property(readonly, nonatomic) IGShoppingMentionAnalyticsContext *mentionInfo; // @synthesize mentionInfo=_mentionInfo;
@property(readonly, nonatomic) NSString *surfaceCategoryId; // @synthesize surfaceCategoryId=_surfaceCategoryId;
@property(readonly, nonatomic) IGShoppingUpcomingEventAnalyticsContext *upcomingEventInfo; // @synthesize upcomingEventInfo=_upcomingEventInfo;
@property(readonly, nonatomic) IGShoppingLiveAnalyticsContext *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(readonly, nonatomic) IGShoppingMediaCarouselAnalyticsContext *mediaCarouselInfo; // @synthesize mediaCarouselInfo=_mediaCarouselInfo;
@property(readonly, nonatomic) IGShoppingChainingAnalyticsContext *chainingInfo; // @synthesize chainingInfo=_chainingInfo;
- (id)initWithChainingInfo:(id)arg1 mediaCarouselInfo:(id)arg2 liveInfo:(id)arg3 upcomingEventInfo:(id)arg4 surfaceCategoryId:(id)arg5 mentionInfo:(id)arg6 filtersInfo:(id)arg7 guideInfo:(id)arg8 rankingInfo:(id)arg9 storefrontInfo:(id)arg10;

@end
