//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGLocationNetworkerDelegate-Protocol.h"

@class IGAsyncTask, IGLocationNetworker, IGUserSession, NSMutableDictionary, NSString;
@protocol IGAPIClient, IGDiscoveryMapDataSourceAnnouncer, IGDiscoveryMapDataSourceCoordinatesProvider, IGDiscoveryMapMapPinsHydrationAnnouncer, IGDiscoveryMapNeighborhoodDataSourceAnnouncer, IGDiscoveryMapSavedPlacesDataSourceAnnouncer, IGRequestToken;

@interface IGDiscoveryMapDataSource : NSObject <IGLocationNetworkerDelegate>
{
    IGUserSession *_userSession;
    id <IGAPIClient> _networker;
    id <IGDiscoveryMapDataSourceCoordinatesProvider> _coordinateProvider;
    id <IGDiscoveryMapDataSourceAnnouncer> _announcer;
    id <IGDiscoveryMapNeighborhoodDataSourceAnnouncer> _neighborhoodAnnouncer;
    id <IGDiscoveryMapSavedPlacesDataSourceAnnouncer> _savedPlacesAnnouncer;
    id <IGDiscoveryMapMapPinsHydrationAnnouncer> _pinsHydrationAnnouncer;
    id <IGRequestToken> _currentNeighborhoodRequestToken;
    NSMutableDictionary *_mapResponseByQuery;
    NSMutableDictionary *_requestTokenByQuery;
    NSMutableDictionary *_cachedThumbnailURLs;
    NSMutableDictionary *_cachedStoryReels;
    IGAsyncTask *_fetchSavedLocationsTask;
    IGAsyncTask *_hydrateLocationsTask;
    IGLocationNetworker *_locationNetworker;
    _Bool _needsBusinessInfoFetch;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool needsBusinessInfoFetch; // @synthesize needsBusinessInfoFetch=_needsBusinessInfoFetch;
- (void)_handleLocationStoriesResponse:(id)arg1;
- (void)_fetchStoriesForMapPins:(id)arg1;
- (void)_cleanupRequestTokenForQuery:(id)arg1;
- (void)locationNetworker:(id)arg1 didFetchLocation:(id)arg2;
- (void)locationNetworker:(id)arg1 didFailRequestWithError:(id)arg2 config:(id)arg3 ofNetworkRequstType:(long long)arg4;
- (void)locationNetworker:(id)arg1 didFetchInfoPageModel:(id)arg2 withConfig:(id)arg3;
- (void)locationNetworker:(id)arg1 didFetchNetworkResponse:(id)arg2 withConfig:(id)arg3;
- (void)locationNetworker:(id)arg1 didCompleteReelRequest:(id)arg2 withConfig:(id)arg3 withDefaultImageURL:(id)arg4;
- (void)removePinsHydrationListener:(id)arg1;
- (void)addPinsHydrationListener:(id)arg1;
- (void)removeSavedPlacesListener:(id)arg1;
- (void)addSavedPlacesListener:(id)arg1;
- (void)removeNeighborhoodListener:(id)arg1;
- (void)addNeighborhoodListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (unsigned long long)resultPositionForPin:(id)arg1 forQuery:(id)arg2;
- (void)setMapResponse:(id)arg1 forQuery:(id)arg2;
- (id)mapResponseForQuery:(id)arg1;
- (void)_fetchForQuery:(id)arg1 searchThisArea:(_Bool)arg2;
- (void)fetchForQuery:(id)arg1;
- (void)refetchForQuery:(id)arg1 searchThisArea:(_Bool)arg2;
- (_Bool)needsFetchForQuery:(id)arg1;
- (void)fetchNeighborhood;
- (void)hydrateLocations:(id)arg1;
- (void)fetchAllSavedPlaces;
- (void)fetchThumbnailURLForLocation:(id)arg1;
- (id)initWithUserSession:(id)arg1 announcer:(id)arg2 networker:(id)arg3 coordinateProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

