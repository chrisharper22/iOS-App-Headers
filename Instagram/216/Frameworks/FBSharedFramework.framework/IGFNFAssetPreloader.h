//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;
@protocol IGUserFeatureSets;

@interface IGFNFAssetPreloader : NSObject
{
    id <IGUserFeatureSets> _featureSets;
    NSCache *_assetsBeingPreloaded;
}

- (void).cxx_destruct;
- (void)preloadAssetForVideo:(id)arg1 mediaType:(long long)arg2 mediaId:(id)arg3 module:(id)arg4 forceNoRequestReadAhead:(_Bool)arg5 ignoreCache:(_Bool)arg6 videoProxy:(id)arg7 bandwidthFraction:(double)arg8 minBufferSizeSecs:(double)arg9 lazyLoadAudioTrack:(_Bool)arg10 abrPipeline:(id)arg11 isLooping:(_Bool)arg12;
- (id)preloadBundleForVideo:(id)arg1;
- (_Bool)canPreloadAssetForVideo:(id)arg1 mediaType:(long long)arg2;
- (id)initWithFeatureSets:(id)arg1;

@end
