//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface IGListCollectionView : UICollectionView
{
}

- (void)_didModifyIndexPaths:(id)arg1;
- (void)_didModifySection:(unsigned long long)arg1;
- (void)_didModifySections:(id)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)insertSections:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (id)_listLayout;
- (id)initWithFrame:(struct CGRect)arg1 listCollectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

