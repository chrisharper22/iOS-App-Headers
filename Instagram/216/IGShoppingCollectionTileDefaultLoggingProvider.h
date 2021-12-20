//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShoppingCollectionTileLoggingProviderType-Protocol.h"

@class IGSessionTracker, IGShoppingNavigationAnalyticsContext, IGUserSession, NSString;

@interface IGShoppingCollectionTileDefaultLoggingProvider : NSObject <IGShoppingCollectionTileLoggingProviderType>
{
    IGUserSession *_userSession;
    long long _viewpointLevel;
    IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
    IGSessionTracker *_shoppingSessionTracker;
}

- (void).cxx_destruct;
- (long long)levelForImpression;
- (void)logCollectionTileTapWithProductCollection:(id)arg1 hasDropsLaunched:(_Bool)arg2 sectionIndex:(long long)arg3 contentType:(id)arg4;
- (void)logCollectionTileSubImpressionWithProductCollection:(id)arg1 hasDropsLaunched:(_Bool)arg2 sectionIndex:(long long)arg3 contentType:(id)arg4;
- (void)logCollectionTileImpressionWithProductCollection:(id)arg1 hasDropsLaunched:(_Bool)arg2 sectionIndex:(long long)arg3 contentType:(id)arg4;
- (id)initWithUserSession:(id)arg1 navigationAnalyticsContext:(id)arg2 shoppingSessionTracker:(id)arg3 viewpointLevel:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
