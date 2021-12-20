//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDirectAlbumSectionControllerSelectDelegate-Protocol.h"
#import "IGDirectGalleryDataSourceListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGListAdapter, NSArray, NSString, PHCachingImageManager, PHImageRequestOptions, UICollectionView;
@protocol IGDirectAlbumViewControllerDelegate, IGDirectGalleryDataSourceProtocol;

@interface IGDirectAlbumViewController : IGViewController <IGListAdapterDataSource, IGDirectAlbumSectionControllerSelectDelegate, IGDirectGalleryDataSourceListener>
{
    _Bool _isRedesignEnabled;
    Class _albumCellClass;
    NSString *_module;
    id <IGDirectAlbumViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    id <IGDirectGalleryDataSourceProtocol> _dataSource;
    NSArray *_viewModels;
    PHCachingImageManager *_imageManager;
    PHImageRequestOptions *_imageRequestOptions;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHImageRequestOptions *imageRequestOptions; // @synthesize imageRequestOptions=_imageRequestOptions;
@property(readonly, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(readonly, nonatomic) id <IGDirectGalleryDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) __weak id <IGDirectAlbumViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)analyticsModule;
- (void)albumSectionController:(id)arg1 didSelectViewModel:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_updateViewModelsWithAssetCollections:(id)arg1;
- (void)_reloadAssetCollections;
- (void)dataSourceCurrentAssetsDidUpdate:(id)arg1 hasCountChange:(_Bool)arg2;
- (_Bool)isScrolledToTop;
- (void)setContentBackgroundColor:(id)arg1;
- (void)_setupCollectionViewAndListAdapter;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithImageManager:(id)arg1 imageRequestOptions:(id)arg2 dataSource:(id)arg3 albumCellClass:(Class)arg4 redesignEnabled:(_Bool)arg5 module:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
