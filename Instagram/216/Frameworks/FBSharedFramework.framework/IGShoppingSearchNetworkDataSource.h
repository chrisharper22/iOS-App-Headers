//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGSearchNetworkDataProvider-Protocol.h>
#import <FBSharedFramework/IGSearchNetworkDataProviderDelegate-Protocol.h>

@class IGSearchResultsResponse, IGUserSession, NSString;
@protocol IGSearchNetworkDataProvider, IGSearchNetworkDataProviderDelegate;

@interface IGShoppingSearchNetworkDataSource : NSObject <IGSearchNetworkDataProviderDelegate, IGSearchNetworkDataProvider>
{
    IGUserSession *_userSession;
    id <IGSearchNetworkDataProvider> _keywordDataSource;
    id <IGSearchNetworkDataProvider> _sellerDataSource;
    IGSearchResultsResponse *_mergedResponse;
    NSString *_rankToken;
    id <IGSearchNetworkDataProviderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSearchNetworkDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)networkDataSourceDidThrottleNetworkRequest:(id)arg1 searchText:(id)arg2;
- (void)networkDataSource:(id)arg1 didFailForSearchText:(id)arg2;
- (void)networkDataSource:(id)arg1 cachedResultsForSearchText:(id)arg2 resultsResponse:(id)arg3 serverResultsLoaded:(_Bool)arg4;
- (void)networkDataSource:(id)arg1 didFinishFetchForSearchTextAfterSearchQueryChanged:(id)arg2 results:(id)arg3 rankToken:(id)arg4;
- (void)networkDataSource:(id)arg1 didFinishFetchForSearchText:(id)arg2 resultsResponse:(id)arg3 isFromPagination:(_Bool)arg4 clearClientCache:(_Bool)arg5;
- (void)networkDataSource:(id)arg1 didBeginFetchForSearchText:(id)arg2;
@property(readonly, nonatomic) long long loadingState;
- (void)invalidateSearchCache;
- (void)_updateDelegateRankToken:(id)arg1;
- (void)fetchDataForSearchQueryModel:(id)arg1;
- (id)initWithUserSession:(id)arg1 keywordDataSource:(id)arg2 sellerDataSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

