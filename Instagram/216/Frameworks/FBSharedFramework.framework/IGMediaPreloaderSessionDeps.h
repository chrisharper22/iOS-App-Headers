//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGNetworkSpeedProvider, IGVideoLivePrefetcher, IGVideoLoaderV2, IGVideoProxy, IGVideoSlowNetworkHelper, SNPlayerControllerStore;
@protocol IGUserFeatureSets;

@interface IGMediaPreloaderSessionDeps : NSObject
{
    IGVideoProxy *_videoProxy;
    IGVideoLivePrefetcher *_videoLivePrefetcher;
    IGVideoLoaderV2 *_sessionVideoLoader;
    IGNetworkSpeedProvider *_networkSpeedProvider;
    IGVideoSlowNetworkHelper *_videoSlowNetworkHelper;
    SNPlayerControllerStore *_playerControllerStore;
    id <IGUserFeatureSets> _featureSets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGUserFeatureSets> featureSets; // @synthesize featureSets=_featureSets;
@property(readonly, nonatomic) SNPlayerControllerStore *playerControllerStore; // @synthesize playerControllerStore=_playerControllerStore;
@property(readonly, nonatomic) IGVideoSlowNetworkHelper *videoSlowNetworkHelper; // @synthesize videoSlowNetworkHelper=_videoSlowNetworkHelper;
@property(readonly, nonatomic) IGNetworkSpeedProvider *networkSpeedProvider; // @synthesize networkSpeedProvider=_networkSpeedProvider;
@property(readonly, nonatomic) IGVideoLoaderV2 *sessionVideoLoader; // @synthesize sessionVideoLoader=_sessionVideoLoader;
@property(readonly, nonatomic) IGVideoLivePrefetcher *videoLivePrefetcher; // @synthesize videoLivePrefetcher=_videoLivePrefetcher;
@property(readonly, nonatomic) IGVideoProxy *videoProxy; // @synthesize videoProxy=_videoProxy;
- (id)initWithVideoProxy:(id)arg1 videoLivePrefetcher:(id)arg2 sessionVideoLoader:(id)arg3 networkSpeedProvider:(id)arg4 videoSlowNetworkHelper:(id)arg5 playerControllerStore:(id)arg6 featureSets:(id)arg7;

@end

