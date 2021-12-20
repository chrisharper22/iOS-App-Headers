//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGGiphyFetching-Protocol.h>

@class IGDirectStickerSearchFetcher, NSString;
@protocol IGGiphyDataStoreUpdating;

@interface IGDjangoGiphyDataSource : NSObject <IGGiphyFetching>
{
    IGDirectStickerSearchFetcher *_stickerFetcher;
    unsigned long long _itemTypes;
    unsigned long long _requestSurface;
    id <IGGiphyDataStoreUpdating> _giphyDataStoreUpdater;
}

- (void).cxx_destruct;
- (void)_cacheGiphyResponse:(id)arg1;
- (id)searchWithTerm:(id)arg1 sessionId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchTrendingWithSessionId:(id)arg1 mediaId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithNetworker:(id)arg1 interopFeatureGating:(id)arg2 giphyDataStoreUpdater:(id)arg3 stickerStoringService:(id)arg4 objectStores:(id)arg5 userPk:(id)arg6 itemTypes:(unsigned long long)arg7 requestSurface:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

