//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGShoppingNavigationAnalyticsContext, IGUserSession, NSString;
@protocol IGTabBarTooltipPresenting;

@interface IGShoppingHomeTooltipController : NSObject
{
    IGUserSession *_userSession;
    id <IGTabBarTooltipPresenting> _tabBarTooltipPresenter;
    IGShoppingNavigationAnalyticsContext *_navigationInfo;
    NSString *_shoppingSessionId;
}

- (void).cxx_destruct;
- (void)markUserDidScrollInNonTabViewer;
- (id)initWithUserSession:(id)arg1 navigationInfo:(id)arg2 shoppingSessionId:(id)arg3;

@end
