//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDiscoveryMapDataSource, IGDiscoveryMapNeighborhoodQuery, IGMapNeighborhoodResponse;

@protocol IGDiscoveryMapNeighborhoodDataSourceListener <NSObject>
- (void)discoveryMapDataSource:(IGDiscoveryMapDataSource *)arg1 didFetchNeighborhoodResponse:(IGMapNeighborhoodResponse *)arg2 forQuery:(IGDiscoveryMapNeighborhoodQuery *)arg3;
@end
