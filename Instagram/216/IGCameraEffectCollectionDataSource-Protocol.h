//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSOrderedSet;
@protocol IGCameraEffectCollectionDataSourceListener;

@protocol IGCameraEffectCollectionDataSource <NSObject>
@property(readonly, nonatomic) NSArray *sortedEffects;
@property(readonly, nonatomic) NSDictionary *unsortedEffects;
@property(readonly, nonatomic) NSOrderedSet *sortedEffectIdentifiers;
@property(readonly, nonatomic) _Bool isLoading;
- (void)removeListener:(id <IGCameraEffectCollectionDataSourceListener>)arg1;
- (void)addListener:(id <IGCameraEffectCollectionDataSourceListener>)arg1;
- (void)prefetch;
- (void)fetch;
@end

