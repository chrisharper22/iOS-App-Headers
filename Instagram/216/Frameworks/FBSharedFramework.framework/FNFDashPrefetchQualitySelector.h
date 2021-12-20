//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDashQualitySelecting-Protocol.h>

@class FNFAssetResourceLoader, FNFDashPlayerQualityPruner, FNFDashPlayerSizePruner, FNFDashPlaylist, FNFDashVideoPlayerMetadata, NSString;
@protocol FNFBandwidthProvider, FNFDashABRSwitchSmoothing, FNFDashQualitySelecting;

@interface FNFDashPrefetchQualitySelector : NSObject <FNFDashQualitySelecting>
{
    long long _track;
    FNFDashPlaylist *_playlist;
    struct FNFDashConfig _config;
    FNFAssetResourceLoader *_resourceLoader;
    FNFDashVideoPlayerMetadata *_playerMetadata;
    id <FNFDashQualitySelecting> _fallbackSelector;
    id <FNFDashABRSwitchSmoothing> _abrSwitchSmoother;
    id <FNFBandwidthProvider> _bandwidthProvider;
    FNFDashPlayerQualityPruner *_playerQualityPruner;
    FNFDashPlayerSizePruner *_playerSizePruner;
}

- (void).cxx_destruct;
- (id)selectQuality;
- (id)initWithConfig:(struct FNFDashConfig)arg1 playlist:(id)arg2 resourceLoader:(id)arg3 playerMetadata:(id)arg4 track:(long long)arg5 bandwidthProvider:(id)arg6 abrSwitchSmoother:(id)arg7 fallbackSelector:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

