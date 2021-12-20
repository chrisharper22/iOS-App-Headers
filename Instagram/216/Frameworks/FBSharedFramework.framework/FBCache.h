//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBCache : NSObject
{
    void *_imp;
    struct map<NSObject *, FBCacheOwnedObject, std::less<NSObject *>, std::allocator<std::pair<NSObject *const, FBCacheOwnedObject>>> _ownedObjectMap;
    struct mutex _impLock;
    _Bool _enabled;
    unsigned long long _fetchCount;
    unsigned long long _missCount;
    CDUnknownBlockType _evictionCompletion;
    _Bool _shouldRemoveAllObjectsWhenEnteringBackground;
    double _compactionFactorForMemoryWarning;
    NSString *_cacheName;
    NSString *_cacheStrategy;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *cacheStrategy; // @synthesize cacheStrategy=_cacheStrategy;
@property(readonly, nonatomic) NSString *cacheName; // @synthesize cacheName=_cacheName;
@property(nonatomic) _Bool shouldRemoveAllObjectsWhenEnteringBackground; // @synthesize shouldRemoveAllObjectsWhenEnteringBackground=_shouldRemoveAllObjectsWhenEnteringBackground;
@property(nonatomic) double compactionFactorForMemoryWarning; // @synthesize compactionFactorForMemoryWarning=_compactionFactorForMemoryWarning;
- (unsigned long long)missCount;
- (unsigned long long)fetchCount;
- (void)disableAndDrain;
- (void)enable;
- (id)allObjects;
- (id)allKeys;
- (id)description;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (vector_b074186d)_cacheCopy;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (_Bool)containsKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)compactOnMemoryWarning;
- (void)compactOnMemoryLimit:(long long)arg1;
- (void)compactWithFactor:(double)arg1;
- (void)compact;
- (void)_locked_compactWithFactor:(double)arg1;
- (void)_locked_compact;
- (id)removeAllObjects;
- (void)removeAllUnownedObjects;
- (void)_locked_pruneNilOwnedObjects;
- (unsigned long long)totalCost;
- (unsigned long long)count;
- (unsigned long long)maximumCost;
@property(nonatomic) double compactionFactor;
- (void)dealloc;
- (id)initWithMaximumCost:(unsigned long long)arg1 cacheName:(id)arg2 strategyOverride:(id)arg3 evictionCompletion:(CDUnknownBlockType)arg4;
- (id)initWithMaximumCost:(unsigned long long)arg1 cacheName:(id)arg2;

@end

