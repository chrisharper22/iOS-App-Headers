//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FNFAssetResourceLoader, FNFAssetResourceLoadingRequest;

@interface IGVideoLiveMPDDownloadInfo : NSObject
{
    FNFAssetResourceLoader *_resourceLoader;
    FNFAssetResourceLoadingRequest *_loadingRequest;
    long long _retryCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) FNFAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(readonly, nonatomic) FNFAssetResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
- (id)initWithResourceLoader:(id)arg1 loadingRequest:(id)arg2;

@end

