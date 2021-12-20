//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListUpdatingDelegate-Protocol.h>

@class NSString;

@interface IGListReloadDataUpdater : NSObject <IGListUpdatingDelegate>
{
}

- (void)_synchronousReloadDataWithCollectionView:(id)arg1;
- (void)reloadCollectionView:(id)arg1 sections:(id)arg2;
- (void)moveSectionInCollectionView:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)reloadItemInCollectionView:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)moveItemInCollectionView:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)reloadDataWithCollectionViewBlock:(CDUnknownBlockType)arg1 reloadUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performDataSourceChange:(CDUnknownBlockType)arg1;
- (void)performUpdateWithCollectionViewBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 itemUpdates:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performUpdateWithCollectionViewBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 sectionDataBlock:(CDUnknownBlockType)arg3 applySectionDataBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)objectLookupPointerFunctions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
