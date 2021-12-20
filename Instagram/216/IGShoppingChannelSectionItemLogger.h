//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSessionTracker, IGShoppingContentTileToProductCollectionNavigationMetadata, IGShoppingHomeRankingInfo, IGShoppingNavigationAnalyticsContext, IGUserSession;

@interface IGShoppingChannelSectionItemLogger : NSObject
{
    IGUserSession *_userSession;
    IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
    IGSessionTracker *_shoppingSessionTracker;
    IGShoppingHomeRankingInfo *_rankingInfo;
    IGShoppingContentTileToProductCollectionNavigationMetadata *_productCollectionInfo;
}

- (void).cxx_destruct;
- (void)_logGridItemTapWithViewModel:(id)arg1 scrollInfo:(id)arg2;
- (void)_logGridItemSubImpressionWithViewModel:(id)arg1 scrollInfo:(id)arg2;
- (void)_logGridItemImpressionWithViewModel:(id)arg1 scrollInfo:(id)arg2;
- (void)_logHscrollItemTapWithViewModel:(id)arg1 scrollInfo:(id)arg2;
- (void)_logHscrollItemSubImpressionWithViewModel:(id)arg1 scrollInfo:(id)arg2;
- (void)_logHscrollItemImpressionWithViewModel:(id)arg1 scrollInfo:(id)arg2;
- (void)logTapWithViewModel:(id)arg1 scrollInfo:(id)arg2;
- (void)logSubImpressionWithViewModel:(id)arg1 scrollInfo:(id)arg2;
- (void)logImpressionWithViewModel:(id)arg1 scrollInfo:(id)arg2;
- (id)initWithUserSession:(id)arg1 navigationAnalyticsContext:(id)arg2 shoppingSessionTracker:(id)arg3 rankingInfo:(id)arg4 productCollectionInfo:(id)arg5;

@end

