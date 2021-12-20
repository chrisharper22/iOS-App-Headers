//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGSoundStateListenerDelegate-Protocol.h"
#import "LXReorderableCollectionViewDataSource-Protocol.h"
#import "LXReorderableCollectionViewDelegateFlowLayout-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGIGLContext, IGSoundStateListener, IGUserSession, NSDictionary, NSIndexPath, NSMutableArray, NSString, UICollectionView, UIView;
@protocol IGSidecarCollectionControllerFilterIdentifierProviderDelegate, IGSidecarMediaCollectionControllerDelegate, IGSidecarMediaCollectionControllerDeleteZoneDataSource;

@interface IGSidecarCollectionController : UIViewController <LXReorderableCollectionViewDataSource, LXReorderableCollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGSoundStateListenerDelegate>
{
    UIView *_draggingContainerView;
    _Bool _useFbIgluFilters;
    IGIGLContext *_iglContext;
    _Bool _isDirectToShareFlow;
    _Bool _isDraft;
    _Bool _interactionEnabled;
    _Bool _cellInDeleteZone;
    id <IGSidecarMediaCollectionControllerDelegate> _delegate;
    id <IGSidecarMediaCollectionControllerDeleteZoneDataSource> _deleteZoneDataSource;
    id <IGSidecarCollectionControllerFilterIdentifierProviderDelegate> _filterIdentifierProviderDelegate;
    NSMutableArray *_assets;
    NSDictionary *_filterMapping;
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    UIView *_cellBeingDeletedView;
    NSIndexPath *_draggingCellInitialIndexPath;
    NSIndexPath *_cellBeingDroppedIndexPath;
    IGSoundStateListener *_soundStateListener;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSoundStateListener *soundStateListener; // @synthesize soundStateListener=_soundStateListener;
@property(retain, nonatomic) NSIndexPath *cellBeingDroppedIndexPath; // @synthesize cellBeingDroppedIndexPath=_cellBeingDroppedIndexPath;
@property(retain, nonatomic) NSIndexPath *draggingCellInitialIndexPath; // @synthesize draggingCellInitialIndexPath=_draggingCellInitialIndexPath;
@property(retain, nonatomic) UIView *cellBeingDeletedView; // @synthesize cellBeingDeletedView=_cellBeingDeletedView;
@property(nonatomic) _Bool cellInDeleteZone; // @synthesize cellInDeleteZone=_cellInDeleteZone;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool interactionEnabled; // @synthesize interactionEnabled=_interactionEnabled;
@property(readonly, nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(retain, nonatomic) NSDictionary *filterMapping; // @synthesize filterMapping=_filterMapping;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(nonatomic) __weak id <IGSidecarCollectionControllerFilterIdentifierProviderDelegate> filterIdentifierProviderDelegate; // @synthesize filterIdentifierProviderDelegate=_filterIdentifierProviderDelegate;
@property(nonatomic) __weak id <IGSidecarMediaCollectionControllerDeleteZoneDataSource> deleteZoneDataSource; // @synthesize deleteZoneDataSource=_deleteZoneDataSource;
@property(nonatomic) __weak id <IGSidecarMediaCollectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_fbCurrentCenteredVideoCell;
- (id)_currentCenteredVideoCell;
- (void)_fbSetPlayingForCurrentCell:(_Bool)arg1;
- (void)_igSetPlayingForCurrentCell:(_Bool)arg1;
- (void)setPlayingForCurrentCell:(_Bool)arg1;
- (void)stopPlayingVisibleCells;
- (void)muteCurrentVideoCell:(_Bool)arg1;
- (_Bool)assetsContainVideos;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)soundListenerDidSetStickySoundState:(id)arg1;
- (void)soundListenerDidUpdate:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 didDragView:(id)arg3 withOffset:(struct CGPoint)arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 didEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 didBeginDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (_Bool)_canDeleteItem;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)_getFbVideoCellForIndexPath:(id)arg1;
- (id)_getFbPhotoCellForIndexPath:(id)arg1;
- (id)_getVideoCellForIndexPath:(id)arg1;
- (id)_getPhotoCellForIndexPath:(id)arg1;
- (id)_sidecarCellForItemAtIndexPath:(id)arg1;
- (void)_setSidecarCellEditButtonHidden:(_Bool)arg1 atIndexPath:(id)arg2;
- (id)_fbCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)_igCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)assetsHaveBeenEdited;
- (void)_applyFilterIdentifier:(id)arg1 strength:(double)arg2 toMetadata:(id)arg3 filterID:(long long)arg4;
- (void)adjustFilterIdentifier:(id)arg1 strength:(double)arg2 filterID:(long long)arg3;
- (void)applyFilterIdentifier:(id)arg1 withStrength:(double)arg2 filterID:(long long)arg3;
- (void)_applyFilter:(Class)arg1 strength:(double)arg2 toMetadata:(id)arg3;
- (void)adjustFilter:(Class)arg1 strength:(double)arg2;
- (void)applyFilter:(Class)arg1 withStrength:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)prepareAssetsForShare;
- (void)_trimVideoIfNecessary:(id)arg1;
- (void)_prepareVideoAssets;
- (void)_updateSnapshotsForDraftsIfNeeded;
- (void)updateAssetAtIndex:(long long)arg1 withMediaMetadata:(id)arg2;
- (void)updateAssets:(id)arg1;
- (id)initWithUserSession:(id)arg1 composition:(id)arg2 draggingContainerView:(id)arg3 useFbIgluFilters:(_Bool)arg4 isDirectToShareFlow:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
