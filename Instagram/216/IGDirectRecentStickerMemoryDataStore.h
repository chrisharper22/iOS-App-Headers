//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface IGDirectRecentStickerMemoryDataStore : NSObject
{
    unsigned long long _maximumStickers;
    NSMutableOrderedSet *_orderedRecentStickerIds;
    NSMutableDictionary *_orderedRecentStickersByStickerId;
    NSArray *_orderedRecentStickers;
}

- (void).cxx_destruct;
- (void)_updateOrderedRecentStickers;
- (void)_trimRecentStickers;
- (void)_trimRecentStickersAndUpdateOrderedRecentStickers;
- (void)_insertRecentStickerAtFirstPosition:(id)arg1;
- (void)_mergeRecentStickersWithCachedRecentStickers:(id)arg1;
- (void)_replaceCacheWithRecentStickers:(id)arg1;
@property(readonly, nonatomic) NSArray *allRecentStickers;
- (void)addRecentSticker:(id)arg1;
- (void)addUnarchivedRecentStickers:(id)arg1;
- (id)initWithMaximumStickers:(unsigned long long)arg1;

@end

