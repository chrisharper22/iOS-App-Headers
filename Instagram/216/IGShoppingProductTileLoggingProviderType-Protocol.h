//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSessionTracker, IGShoppingFiltersAnalyticsContext, IGShoppingGuideAnalyticsContext, IGShoppingLiveAnalyticsContext, IGShoppingMediaCarouselAnalyticsContext, IGShoppingNavigationAnalyticsContext, IGShoppingPDPAnalyticsContext, IGShoppingProductCollectionProperties, IGShoppingProductTileCoverMedia, IGShoppingUpcomingEventAnalyticsContext, NSDictionary, NSNumber, NSString;
@protocol IGShoppingGenericProductTileViewModel;

@protocol IGShoppingProductTileLoggingProviderType <NSObject>
@property(readonly, nonatomic) IGShoppingProductCollectionProperties *productCollectionProperties;
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;
@property(readonly, nonatomic) IGShoppingMediaCarouselAnalyticsContext *mediaCarouselInfo;
@property(readonly, nonatomic) IGShoppingUpcomingEventAnalyticsContext *upcomingEventInfo;
@property(readonly, nonatomic) IGShoppingLiveAnalyticsContext *liveInfo;
@property(readonly, nonatomic) IGShoppingGuideAnalyticsContext *guideInfo;
@property(readonly, nonatomic) IGShoppingPDPAnalyticsContext *pdpInfo;
@property(readonly, nonatomic) IGShoppingFiltersAnalyticsContext *filtersInfo;
@property(readonly, nonatomic) IGShoppingNavigationAnalyticsContext *navigationInfo;
- (void)logProductCardCoverSwipeToCoverMedia:(IGShoppingProductTileCoverMedia *)arg1 withViewModel:(id <IGShoppingGenericProductTileViewModel>)arg2;
- (void)logProductCardDismissForViewModel:(id <IGShoppingGenericProductTileViewModel>)arg1 extras:(NSDictionary *)arg2;
- (void)logProductCardTapForViewModel:(id <IGShoppingGenericProductTileViewModel>)arg1 entryPoint:(NSString *)arg2 scrollDepth:(NSNumber *)arg3 extras:(NSDictionary *)arg4;
- (long long)levelForImpression;
- (void)logProductCardSubImpressionForViewModel:(id <IGShoppingGenericProductTileViewModel>)arg1 scrollDepth:(NSNumber *)arg2 extras:(NSDictionary *)arg3;
- (void)logProductCardImpressionForViewModel:(id <IGShoppingGenericProductTileViewModel>)arg1 scrollDepth:(NSNumber *)arg2 extras:(NSDictionary *)arg3;
@end

