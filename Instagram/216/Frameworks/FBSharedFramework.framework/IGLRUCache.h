//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface IGLRUCache : NSObject
{
    CDUnknownBlockType _completion;
    long long _totalCostLimit;
    NSMutableDictionary *_objects;
    NSMutableOrderedSet *_queue;
    long long _totalCost;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(nonatomic) long long totalCost; // @synthesize totalCost=_totalCost;
@property(readonly, nonatomic) NSMutableOrderedSet *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableDictionary *objects; // @synthesize objects=_objects;
@property(nonatomic) long long totalCostLimit; // @synthesize totalCostLimit=_totalCostLimit;
- (void)_evictCachedObjectsIfNeeded;
- (id)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (_Bool)containsObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(long long)arg3;
- (id)objectForKey:(id)arg1;
- (id)dictionaryValue;
- (id)initWithTotalCostLimit:(long long)arg1;
- (id)initWithTotalCostLimit:(long long)arg1 evictionCompletion:(CDUnknownBlockType)arg2;

@end

