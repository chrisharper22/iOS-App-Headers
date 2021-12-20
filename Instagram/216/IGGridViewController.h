//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGGridViewHeaderLabelDelegate-Protocol.h"
#import "IGPhotoLibraryLimitedAccessHeaderViewDelegate-Protocol.h"
#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGPHAssetDataSource, IGPHAssetsFetchResult, IGPanavisionDraftStore, IGPhotoLibraryLimitedAccessHeaderView, IGScrollPerfManualLogger, IGUserSession, NSArray, NSIndexPath, NSMutableOrderedSet, NSString, PHAssetCollection, PHCachingImageManager, PHFetchResult, PHImageRequestOptions, UICollectionView, UILongPressGestureRecognizer;
@protocol IGGridViewControllerDelegate, IGGridViewControllerScrollDelegate;

@interface IGGridViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, PHPhotoLibraryChangeObserver, IGGridViewHeaderLabelDelegate, IGPhotoLibraryLimitedAccessHeaderViewDelegate, IGGestureHandler>
{
    _Bool _inlineCameraEnabled;
    IGPHAssetDataSource *_assetDataSource;
    IGPHAssetsFetchResult *_assetsResult;
    IGScrollPerfManualLogger *_scrollPerfLogger;
    IGPanavisionDraftStore *_panavisionDraftStore;
    _Bool _draftsTabSelected;
    _Bool _draftsEnabled;
    _Bool _manageDraftsEnabled;
    _Bool _needsSetPhotoLibraryOptions;
    _Bool _finishedFetchingAssets;
    _Bool _finishedFetchingDrafts;
    _Bool _ignoreTapEventLogging;
    NSMutableOrderedSet *_selectedAssets;
    id <IGGridViewControllerDelegate> _delegate;
    id <IGGridViewControllerScrollDelegate> _scrollDelegate;
    unsigned long long _assetFilterType;
    NSArray *_preselectedIdentifiers;
    IGUserSession *_userSession;
    id _firstAssetProperty;
    NSIndexPath *_currentlySelectedIndexPath;
    NSArray *_draftPreviews;
    long long _draftTotalCount;
    UICollectionView *_collectionView;
    PHFetchResult *_collectionFetchResult;
    PHAssetCollection *_collection;
    PHCachingImageManager *_imageManager;
    PHImageRequestOptions *_imageRequestOptions;
    IGPhotoLibraryLimitedAccessHeaderView *_limitedAccessHeaderView;
    double _maxContentWidth;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    struct IGAssetSelectionMechanic _assetSelectionMechanic;
    struct CGSize _thumbnailSize;
    struct CGRect _previousPreheatRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreTapEventLogging; // @synthesize ignoreTapEventLogging=_ignoreTapEventLogging;
@property(nonatomic) _Bool finishedFetchingDrafts; // @synthesize finishedFetchingDrafts=_finishedFetchingDrafts;
@property(nonatomic) _Bool finishedFetchingAssets; // @synthesize finishedFetchingAssets=_finishedFetchingAssets;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(readonly, nonatomic) double maxContentWidth; // @synthesize maxContentWidth=_maxContentWidth;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) struct CGRect previousPreheatRect; // @synthesize previousPreheatRect=_previousPreheatRect;
@property(retain, nonatomic) IGPhotoLibraryLimitedAccessHeaderView *limitedAccessHeaderView; // @synthesize limitedAccessHeaderView=_limitedAccessHeaderView;
@property(nonatomic) _Bool needsSetPhotoLibraryOptions; // @synthesize needsSetPhotoLibraryOptions=_needsSetPhotoLibraryOptions;
@property(retain, nonatomic) PHImageRequestOptions *imageRequestOptions; // @synthesize imageRequestOptions=_imageRequestOptions;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) PHAssetCollection *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) PHFetchResult *collectionFetchResult; // @synthesize collectionFetchResult=_collectionFetchResult;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long draftTotalCount; // @synthesize draftTotalCount=_draftTotalCount;
@property(retain, nonatomic) NSArray *draftPreviews; // @synthesize draftPreviews=_draftPreviews;
@property(nonatomic) _Bool manageDraftsEnabled; // @synthesize manageDraftsEnabled=_manageDraftsEnabled;
@property(nonatomic) _Bool draftsEnabled; // @synthesize draftsEnabled=_draftsEnabled;
@property(retain, nonatomic) NSIndexPath *currentlySelectedIndexPath; // @synthesize currentlySelectedIndexPath=_currentlySelectedIndexPath;
@property(retain, nonatomic) id firstAssetProperty; // @synthesize firstAssetProperty=_firstAssetProperty;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) NSArray *preselectedIdentifiers; // @synthesize preselectedIdentifiers=_preselectedIdentifiers;
@property(nonatomic) struct IGAssetSelectionMechanic assetSelectionMechanic; // @synthesize assetSelectionMechanic=_assetSelectionMechanic;
@property(readonly, nonatomic) unsigned long long assetFilterType; // @synthesize assetFilterType=_assetFilterType;
@property(nonatomic) _Bool draftsTabSelected; // @synthesize draftsTabSelected=_draftsTabSelected;
@property(nonatomic) __weak id <IGGridViewControllerScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak id <IGGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableOrderedSet *selectedAssets; // @synthesize selectedAssets=_selectedAssets;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)photoLibraryLimitedAccessHeaderViewDidTapManageButton;
- (_Bool)_isFeedCameraCellForIndexPath:(id)arg1;
- (_Bool)_hasPreselectedIdentifiers;
- (void)_updateFirstAsset;
- (void)_reselectSelectedAssetsAndSetScrollPosition:(unsigned long long)arg1;
- (_Bool)_addAndScrollToIndexPath:(id)arg1 scrollPosition:(unsigned long long)arg2;
- (void)gridViewHeaderLabelDidTapSecondaryButton:(id)arg1;
- (id)_indexPathsFromIndexes:(id)arg1 indexTranslationBlock:(CDUnknownBlockType)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (void)_setPhotosLibraryOptions;
- (void)_computeDifferenceBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 removedHandler:(CDUnknownBlockType)arg3 addedHandler:(CDUnknownBlockType)arg4;
- (void)_updateCachedAssets;
- (void)_resetCachedAssets;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)firstAsset;
- (void)updateSelectedOverlayForAsset:(id)arg1;
- (void)_updateSelectedOverlayWithIndexPath:(id)arg1;
- (id)_gridViewCellForIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)_setHeaderLabelTextForLabel:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)_handleLongPressGesture:(id)arg1;
- (id)_libraryAssetAtIndex:(long long)arg1;
- (unsigned long long)_indexOfLibraryAsset:(id)arg1;
- (unsigned long long)_indexOfPreviewAsset:(id)arg1;
- (id)_indexPathOfSelectedAsset:(id)arg1;
- (void)deselectAllAssets;
- (void)deselectAsset:(id)arg1;
- (struct CGRect)selectedAssetFrame;
- (void)setContentInset:(struct UIEdgeInsets)arg1 expanding:(_Bool)arg2;
- (void)setContentInsetNoSideEffects:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) NSString *currentAlbumTitle;
- (void)setAlbum:(id)arg1 fromCollectionFetchResult:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_addToSelectAssets:(id)arg1;
- (id)_indexpathForAsset:(id)arg1;
- (void)_updateSelectedCellAssetNumbers;
- (void)_selectAsset:(id)arg1 atIndexPath:(id)arg2;
- (void)selectAsset:(id)arg1;
- (void)_mergeDraftsAndAssets:(id)arg1;
- (void)expandDrafts:(_Bool)arg1;
- (void)reloadDraftsAndSelectDraft:(id)arg1;
- (void)_reload;
- (void)scrollToTop;
- (void)_reloadDraftsAndSelectDraft:(id)arg1 count:(unsigned long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_setDefaultAlbum:(CDUnknownBlockType)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updateCollectionViewLayout;
- (id)initWithUserSession:(id)arg1 draftsEnabled:(_Bool)arg2 manageDraftsEnabled:(_Bool)arg3 maximumContentWidth:(double)arg4 inlineCameraEnabled:(_Bool)arg5 assetFilterType:(unsigned long long)arg6 analyticsModule:(id)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

