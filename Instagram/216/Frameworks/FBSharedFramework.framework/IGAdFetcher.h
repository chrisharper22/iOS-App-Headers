//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGNetworkSourcePolicyDelegate-Protocol.h>

@class IGAdPlatformEventCenter, IGAdPlatformToolbox, IGAdRequestExtraInfo, IGAdRequestPaginationHandler, IGAdRequestParams, IGNetworkSource, NSString;
@protocol IGAdFetcherDelegate, IGAdInsertionDataSource, IGAdInsertionDelegate;

@interface IGAdFetcher : NSObject <IGNetworkSourceDelegate, IGNetworkSourcePolicyDelegate>
{
    IGAdPlatformToolbox *_adPlatformToolbox;
    IGAdPlatformEventCenter *_adPlatformEventCenter;
    IGNetworkSource *_networkSource;
    NSString *_requestPath;
    IGAdRequestParams *_requestParams;
    IGAdRequestExtraInfo *_adRequestExtraInfo;
    double _requestStartTime;
    _Bool _isPrefetcher;
    _Bool _isFetcherDisable;
    id <IGAdFetcherDelegate> _adFetcherDelegate;
    id <IGAdInsertionDataSource> _adPlatformDataSource;
    id <IGAdInsertionDelegate> _adPlatformDelegate;
    IGAdRequestPaginationHandler *_paginationHandler;
    long long _lastAdFetchIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long lastAdFetchIndex; // @synthesize lastAdFetchIndex=_lastAdFetchIndex;
@property(readonly, nonatomic) IGAdRequestPaginationHandler *paginationHandler; // @synthesize paginationHandler=_paginationHandler;
- (void)disableFetcher;
- (void)_handleSuccessfullyFetchedAd:(id)arg1 httpResponse:(id)arg2 requestTag:(id)arg3;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3 requestTag:(id)arg4;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (id)networkSource:(id)arg1 policyForFetch:(_Bool)arg2;
- (_Bool)isFetchingAds;
- (void)fetchAdsWithParams:(id)arg1 adRequestExtraInfo:(id)arg2 isHeadload:(_Bool)arg3 paginationInfo:(id)arg4 analyticsModule:(id)arg5;
- (id)initWithAdPlatformToolbox:(id)arg1 adPlatformEventCenter:(id)arg2 adFetcherDelegate:(id)arg3 requestPath:(id)arg4 adPlatformDataSource:(id)arg5 adPlatformDelegate:(id)arg6 paginationHandler:(id)arg7 networkSource:(id)arg8 isPrefetcher:(_Bool)arg9;
- (id)initWithAdPlatformToolbox:(id)arg1 adPlatformEventCenter:(id)arg2 adFetcherDelegate:(id)arg3 requestPath:(id)arg4 parser:(id)arg5 adPlatformDataSource:(id)arg6 adPlatformDelegate:(id)arg7 isPrefetcher:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

