//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDiscoveryNavigationTrayDelegate-Protocol.h"
#import "IGEmptyFeedViewDelegate-Protocol.h"
#import "IGPromoteAlbumSelectionDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGBoostPostLogger, IGDiscoveryNavigationTray, IGEmptyFeedView, IGPartialModalSheetViewController, IGPromotePHAssetDataSource, IGPromotePHAssetsFetchResult, IGUserSession, NSIndexPath, NSMutableOrderedSet, NSString, PHAssetCollection, PHCachingImageManager, PHFetchResult, PHImageRequestOptions, UICollectionView;
@protocol IGPromoteGridViewControllerDelegate;

@interface IGPromoteMediaLibraryGridViewController : IGViewController <IGEmptyFeedViewDelegate, IGDiscoveryNavigationTrayDelegate, IGPromoteAlbumSelectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    IGUserSession *_userSession;
    IGBoostPostLogger *_logger;
    UICollectionView *_collectionView;
    IGEmptyFeedView *_emptyView;
    PHFetchResult *_collectionFetchResult;
    PHAssetCollection *_collection;
    PHCachingImageManager *_imageManager;
    PHImageRequestOptions *_imageRequestOptions;
    IGPromotePHAssetsFetchResult *_assetsResult;
    IGPromotePHAssetDataSource *_assetDataSource;
    NSMutableOrderedSet *_selectedAssets;
    NSIndexPath *_currentlySelectedIndexPath;
    double _maxContentWidth;
    struct CGSize _thumbnailSize;
    _Bool _libraryAccessGranted;
    IGDiscoveryNavigationTray *_filterTray;
    IGPartialModalSheetViewController *_albumBottomSheetViewController;
    id <IGPromoteGridViewControllerDelegate> _delegate;
    struct IGAssetSelectionMechanic _assetSelectionMechanic;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableOrderedSet *selectedAssets; // @synthesize selectedAssets=_selectedAssets;
@property(nonatomic) struct IGAssetSelectionMechanic assetSelectionMechanic; // @synthesize assetSelectionMechanic=_assetSelectionMechanic;
- (void)selectAlbumControllerDidSelectAlbum:(id)arg1 fetchResult:(id)arg2;
- (void)navigationTray:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3;
- (void)_resetCachedAssets;
- (void)_setPhotosLibraryOptions;
- (id)_libraryAssetAtIndex:(long long)arg1;
- (void)_updateCollectionViewLayout;
- (void)_updateSelectedOverlayWithIndexPath:(id)arg1;
- (unsigned long long)_indexOfLibraryAsset:(id)arg1;
- (id)_indexpathForAsset:(id)arg1;
- (id)_gridViewCellForIndexPath:(id)arg1;
- (void)_addToSelectAssets:(id)arg1;
- (void)_selectAsset:(id)arg1 atIndexPath:(id)arg2;
- (void)_setDefaultAlbum:(CDUnknownBlockType)arg1;
- (void)_setupEmptyView;
- (void)_loadData;
- (void)_updateFilterTray:(id)arg1;
- (void)_setupViews;
- (void)selectAsset:(id)arg1;
- (id)firstAsset;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAssetFilterType:(unsigned long long)arg1 maxContentWidth:(double)arg2 libraryAccessGranted:(_Bool)arg3 userSession:(id)arg4 boostPostLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
