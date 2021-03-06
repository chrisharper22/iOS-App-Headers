//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class FNFAssetResourceLoader, FNFAssetResourceLoadingRequest, FNFMediaPresentationDescription, NSData, NSURL;

@protocol FNFAssetResourceLoaderDelegate <NSObject>
- (void)resourceLoader:(FNFAssetResourceLoader *)arg1 cachePlaylist:(NSData *)arg2 mpd:(FNFMediaPresentationDescription *)arg3;
- (int)activeRequestCountUsingResourceLoader:(FNFAssetResourceLoader *)arg1;
- (_Bool)resourceLoader:(FNFAssetResourceLoader *)arg1 hasCachedDataForUrl:(NSURL *)arg2 offset:(long long)arg3 length:(int)arg4;
- (_Bool)resourceLoader:(FNFAssetResourceLoader *)arg1 hasPrefetchedDataForUrl:(NSURL *)arg2;
- (void)resourceLoader:(FNFAssetResourceLoader *)arg1 cancelLoadingRequest:(FNFAssetResourceLoadingRequest *)arg2;
- (void)resourceLoader:(FNFAssetResourceLoader *)arg1 loadRequest:(FNFAssetResourceLoadingRequest *)arg2;
@end

