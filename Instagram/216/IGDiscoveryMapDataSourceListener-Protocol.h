//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGScopedListener-Protocol.h"

@class IGDiscoveryMapDataSource, IGDiscoveryMapDataSourceQuery, IGMapResponse, NSDictionary;

@protocol IGDiscoveryMapDataSourceListener <IGScopedListener>
- (void)discoveryMapDataSource:(IGDiscoveryMapDataSource *)arg1 didFailForQuery:(IGDiscoveryMapDataSourceQuery *)arg2;
- (void)discoveryMapDataSource:(IGDiscoveryMapDataSource *)arg1 didFetchStoriesForLocationIds:(NSDictionary *)arg2;
- (void)discoveryMapDataSource:(IGDiscoveryMapDataSource *)arg1 didFetchMapResponse:(IGMapResponse *)arg2 forQuery:(IGDiscoveryMapDataSourceQuery *)arg3;
- (void)discoveryMapDataSource:(IGDiscoveryMapDataSource *)arg1 didStartFetchForQuery:(IGDiscoveryMapDataSourceQuery *)arg2;
@end
