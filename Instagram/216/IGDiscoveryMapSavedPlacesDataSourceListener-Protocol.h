//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDiscoveryMapDataSource, IGLocation, IGMapSavedLocationsResponse, IGStoryReel, NSURL;

@protocol IGDiscoveryMapSavedPlacesDataSourceListener <NSObject>
- (void)discoveryMapDataSource:(IGDiscoveryMapDataSource *)arg1 didFetchDefaultImageURL:(NSURL *)arg2 locationReel:(IGStoryReel *)arg3 forLocation:(IGLocation *)arg4;
- (void)discoveryMapDataSourceDidFailToFetchSavedPlaces:(IGDiscoveryMapDataSource *)arg1;
- (void)discoveryMapDataSource:(IGDiscoveryMapDataSource *)arg1 didFetchSavedPlacesResponse:(IGMapSavedLocationsResponse *)arg2;
@end
