//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMedia, IGShoppingChainingAnalyticsContext, IGShoppingExploreAnalyticsContext, IGShoppingMediaCarouselAnalyticsContext, NSDictionary, NSNumber, NSString;

@protocol IGFeedItemLoggingProviderDelegate <NSObject>
@property(readonly, copy, nonatomic) NSString *initialSessionId;
@property(readonly, copy, nonatomic) NSString *sessionId;
- (NSString *)surfaceCategoryId;
- (IGShoppingChainingAnalyticsContext *)chainingInfoForMedia:(IGMedia *)arg1;
- (IGShoppingMediaCarouselAnalyticsContext *)carouselInfoForMedia:(IGMedia *)arg1;
- (IGShoppingExploreAnalyticsContext *)exploreInfo;
- (NSNumber *)mediaIndexForMedia:(IGMedia *)arg1;
- (NSString *)followControllerContextStringForMedia:(IGMedia *)arg1;
- (NSString *)customModuleForMedia:(IGMedia *)arg1;
- (NSDictionary *)extraDictionaryForMedia:(IGMedia *)arg1;
@end

