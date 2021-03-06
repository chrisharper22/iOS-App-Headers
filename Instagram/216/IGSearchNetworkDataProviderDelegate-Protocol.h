//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSearchResultsResponse, NSArray, NSString;
@protocol IGSearchNetworkDataProvider;

@protocol IGSearchNetworkDataProviderDelegate <NSObject>
- (void)networkDataSourceDidThrottleNetworkRequest:(id <IGSearchNetworkDataProvider>)arg1 searchText:(NSString *)arg2;
- (void)networkDataSource:(id <IGSearchNetworkDataProvider>)arg1 didFailForSearchText:(NSString *)arg2;
- (void)networkDataSource:(id <IGSearchNetworkDataProvider>)arg1 cachedResultsForSearchText:(NSString *)arg2 resultsResponse:(IGSearchResultsResponse *)arg3 serverResultsLoaded:(_Bool)arg4;
- (void)networkDataSource:(id <IGSearchNetworkDataProvider>)arg1 didFinishFetchForSearchTextAfterSearchQueryChanged:(NSString *)arg2 results:(NSArray *)arg3 rankToken:(NSString *)arg4;
- (void)networkDataSource:(id <IGSearchNetworkDataProvider>)arg1 didFinishFetchForSearchText:(NSString *)arg2 resultsResponse:(IGSearchResultsResponse *)arg3 isFromPagination:(_Bool)arg4 clearClientCache:(_Bool)arg5;
- (void)networkDataSource:(id <IGSearchNetworkDataProvider>)arg1 didBeginFetchForSearchText:(NSString *)arg2;
@end

