//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectRecentStickerMemoryDataStore, IGObjectDiskStorage, NSArray;
@protocol IGDirectRecentStickerAnnouncer;

@interface IGDirectRecentStickerService : NSObject
{
    _Bool _needsUnarchiving;
    IGDirectRecentStickerMemoryDataStore *_recentStickerMemoryDataStore;
    id <IGDirectRecentStickerAnnouncer> _announcer;
    IGObjectDiskStorage *_storageRecentSticker;
}

- (void).cxx_destruct;
- (void)_writeRecentStickersToDisk;
- (void)_writeUnarchivedStickersToMemoryCache:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)addRecentSticker:(id)arg1;
@property(readonly, nonatomic) NSArray *recentStickers;
- (void)unarchive;
- (id)initWithDiskManager:(id)arg1 legacyDiskPaths:(id)arg2;

@end

