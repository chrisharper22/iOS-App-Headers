//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface UICollectionView (Instagram)
- (void)scrollToSection:(unsigned long long)arg1 offsetDelta:(struct CGPoint)arg2;
- (struct CGPoint)offsetDeltaForSection:(unsigned long long)arg1;
- (id)indexPathBeforeIndexPath:(id)arg1;
- (id)indexPathAfterIndexPath:(id)arg1;
- (id)centerVisisbleCell;
- (id)ig_visibleCellsIntersectingCollectionViewBounds;
- (id)visibleCellsOfClass:(Class)arg1;
- (id)filterVisibleCellsByClass:(Class)arg1 visibleCells:(id)arg2;
- (unsigned long long)mostVisibleSection;
- (void)enumerateVisibleViewsWithClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateVisibleCellsWithClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateViews:(id)arg1 class:(Class)arg2 block:(CDUnknownBlockType)arg3;
@end

