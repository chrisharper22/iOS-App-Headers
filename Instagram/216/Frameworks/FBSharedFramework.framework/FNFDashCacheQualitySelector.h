//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDashQualitySelecting-Protocol.h>

@class FNFAssetResourceLoader, FNFDashPlaylist, NSString;
@protocol FNFDashQualitySelecting;

@interface FNFDashCacheQualitySelector : NSObject <FNFDashQualitySelecting>
{
    FNFDashPlaylist *_playlist;
    struct FNFDashConfig _config;
    FNFAssetResourceLoader *_resourceLoader;
    id <FNFDashQualitySelecting> _fallbackSelector;
}

- (void).cxx_destruct;
- (id)selectQuality;
- (id)initWithConfig:(struct FNFDashConfig)arg1 playlist:(id)arg2 resourceLoader:(id)arg3 fallbackSelector:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
