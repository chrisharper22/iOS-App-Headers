//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGARDeliveryUserConfig, NSMutableDictionary;

@interface IGARAssetsStorageConfiguringBuilder : NSObject
{
    NSMutableDictionary *_cacheSizesPerAssetTypes;
    NSMutableDictionary *_cacheStaleAgesPerAssetTypes;
    unsigned long long _defaultCacheSize;
    long long _defaultCacheStaleAge;
    IGARDeliveryUserConfig *_userConfig;
    _Bool _shouldMoveFromPreviousLocation;
    _Bool _useCachesForExpensiveTypes;
    _Bool _useCachesForLowCostTypes;
    _Bool _useSessionlessEffectCache;
}

- (void).cxx_destruct;
- (id)build;
- (void)setCacheStaleAge:(long long)arg1 forAssetType:(long long)arg2;
- (void)setCacheSize:(unsigned long long)arg1 forAssetType:(long long)arg2;
- (id)initWithUserConfig:(id)arg1 cacheDefaultSize:(unsigned long long)arg2 cacheDefaultStaleAge:(long long)arg3 shouldMoveFromPreviousLocation:(_Bool)arg4 useCachesForExpensiveTypes:(_Bool)arg5 useCachesForLowCostTypes:(_Bool)arg6 useSessionlessEffectCache:(_Bool)arg7;

@end
