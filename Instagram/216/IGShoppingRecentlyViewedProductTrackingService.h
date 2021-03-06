//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShoppingRecentlyViewedProductTrackingManaging-Protocol.h"

@class NSHashTable, NSString;
@protocol IGShoppingRecentlyViewedProductTrackingAnnouncer;

@interface IGShoppingRecentlyViewedProductTrackingService : NSObject <IGShoppingRecentlyViewedProductTrackingManaging>
{
    id <IGShoppingRecentlyViewedProductTrackingAnnouncer> _announcer;
    NSString *_lastProductItemPk;
    NSHashTable *_trackedSurfaces;
}

- (void).cxx_destruct;
- (_Bool)hasListeners;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)untrackViewedProductItemPk:(id)arg1;
- (void)markProductItemAsViewed:(id)arg1 fromSurface:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

