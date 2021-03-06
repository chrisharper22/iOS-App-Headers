//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGFilteredImageStore : NSObject
{
}

+ (id)_filteredImageForImage:(id)arg1 filterClass:(Class)arg2 launcherSetProvider:(id)arg3;
+ (id)_diskStore;
+ (id)_cache;
+ (id)_queue;
+ (id)_keyForImageAsset:(unsigned long long)arg1 filterKey:(id)arg2;
+ (_Bool)_containsImageForImageAsset:(unsigned long long)arg1 filterKey:(id)arg2;
+ (_Bool)containsImageForImageAsset:(unsigned long long)arg1 filterIdentifier:(id)arg2;
+ (_Bool)containsImageForImageAsset:(unsigned long long)arg1 filterClass:(Class)arg2;
+ (id)_cachedImageForImageAsset:(unsigned long long)arg1 filterKey:(id)arg2;
+ (id)cachedImageForImageAsset:(unsigned long long)arg1 filterIdentifier:(id)arg2;
+ (id)cachedImageForImageAsset:(unsigned long long)arg1 filterClass:(Class)arg2;
+ (void)_imageForImageAsset:(unsigned long long)arg1 filterKey:(id)arg2 queue:(id)arg3 filterImageFunction:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)imageWithFBFilteredImageGeneratorForImageAsset:(unsigned long long)arg1 filterIdentifier:(id)arg2 queue:(id)arg3 userSession:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)imageForImageAsset:(unsigned long long)arg1 filterClass:(Class)arg2 queue:(id)arg3 launcherSetProvider:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)clearCache;
+ (void)clearStore;

@end

