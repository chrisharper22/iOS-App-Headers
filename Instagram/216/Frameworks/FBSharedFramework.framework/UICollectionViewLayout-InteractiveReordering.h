//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@interface UICollectionViewLayout (InteractiveReordering)
+ (void)load;
- (id)ig_cleanupInvalidationContext:(id)arg1;
- (id)ig_invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 movementCancelled:(_Bool)arg3;
- (id)ig_invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(struct CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(struct CGPoint)arg4;
- (id)updatedTargetForInteractivelyMovingItem:(id)arg1 toIndexPath:(id)arg2 adapter:(id)arg3;
- (id)ig_targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint)arg2;
- (void)ig_hijackLayoutInteractiveReorderingMethodForAdapter:(id)arg1;
@end

