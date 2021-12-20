//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSessionTracker, IGShoppingNavigationAnalyticsContext, IGUserSession;

@interface IGShoppingContentTileLogger : NSObject
{
    IGUserSession *_userSession;
    IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
    IGSessionTracker *_shoppingSessionTracker;
}

- (void).cxx_destruct;
- (void)logTileTapMediaButtonUpcomingEventActionWithViewModel:(id)arg1 upcomingEvent:(id)arg2 action:(id)arg3 priorModule:(id)arg4;
- (void)logTileProfileNavigationWithViewModel:(id)arg1 merchant:(id)arg2;
- (void)logTileTapWithViewModel:(id)arg1 scrollInfo:(id)arg2;
- (void)logTileVPVDSubImpressionWithViewModel:(id)arg1 scrollInfo:(id)arg2 vpvdInfo:(id)arg3;
- (void)logTileVPVDImpressionWithViewModel:(id)arg1 scrollInfo:(id)arg2 vpvdInfo:(id)arg3;
- (void)logTileSubImpressionWithViewModel:(id)arg1 scrollInfo:(id)arg2;
- (void)logTileImpressionWithViewModel:(id)arg1 scrollInfo:(id)arg2;
- (id)initWithUserSession:(id)arg1 navigationAnalyticsContext:(id)arg2 shoppingSessionTracker:(id)arg3;

@end
