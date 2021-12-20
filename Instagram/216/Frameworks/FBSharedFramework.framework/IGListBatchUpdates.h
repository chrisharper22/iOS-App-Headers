//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableIndexSet;

@interface IGListBatchUpdates : NSObject
{
    NSMutableIndexSet *_sectionReloads;
    NSMutableArray *_itemInserts;
    NSMutableArray *_itemDeletes;
    NSMutableArray *_itemReloads;
    NSMutableArray *_itemMoves;
    NSMutableArray *_itemUpdateBlocks;
    NSMutableArray *_itemCompletionBlocks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *itemCompletionBlocks; // @synthesize itemCompletionBlocks=_itemCompletionBlocks;
@property(readonly, nonatomic) NSMutableArray *itemUpdateBlocks; // @synthesize itemUpdateBlocks=_itemUpdateBlocks;
@property(readonly, nonatomic) NSMutableArray *itemMoves; // @synthesize itemMoves=_itemMoves;
@property(readonly, nonatomic) NSMutableArray *itemReloads; // @synthesize itemReloads=_itemReloads;
@property(readonly, nonatomic) NSMutableArray *itemDeletes; // @synthesize itemDeletes=_itemDeletes;
@property(readonly, nonatomic) NSMutableArray *itemInserts; // @synthesize itemInserts=_itemInserts;
@property(readonly, nonatomic) NSMutableIndexSet *sectionReloads; // @synthesize sectionReloads=_sectionReloads;
- (_Bool)hasChanges;
- (id)init;

@end
