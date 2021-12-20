//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LXReorderableCollectionViewDataSource-Protocol.h"
#import "LXReorderableCollectionViewDelegateFlowLayout-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGUserSession, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UICollectionView;
@protocol IGFBFilterCollectionControllerDelegate;

@interface IGFBFilterCollectionController : NSObject <LXReorderableCollectionViewDataSource, LXReorderableCollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _blurFiltersWithOverlay;
    _Bool _animationInProgress;
    _Bool _scrollingToFilter;
    NSString *_selectedFilterIdentifier;
    id <IGFBFilterCollectionControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    NSDictionary *_allFiltersByIdentifier;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    long long _pickerType;
    NSDictionary *_allFiltersById;
    NSMutableArray *_orderedFilterIdentifiers;
    NSMutableDictionary *_filterThumbnailsById;
}

+ (id)sharedFilterIdentifiers;
+ (_Bool)useStaticFilterThumbnails;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *filterThumbnailsById; // @synthesize filterThumbnailsById=_filterThumbnailsById;
@property(retain, nonatomic) NSMutableArray *orderedFilterIdentifiers; // @synthesize orderedFilterIdentifiers=_orderedFilterIdentifiers;
@property(retain, nonatomic) NSDictionary *allFiltersById; // @synthesize allFiltersById=_allFiltersById;
@property(nonatomic) _Bool scrollingToFilter; // @synthesize scrollingToFilter=_scrollingToFilter;
@property(nonatomic) long long pickerType; // @synthesize pickerType=_pickerType;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) NSDictionary *allFiltersByIdentifier; // @synthesize allFiltersByIdentifier=_allFiltersByIdentifier;
@property(readonly, nonatomic) _Bool animationInProgress; // @synthesize animationInProgress=_animationInProgress;
@property(nonatomic) _Bool blurFiltersWithOverlay; // @synthesize blurFiltersWithOverlay=_blurFiltersWithOverlay;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <IGFBFilterCollectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *selectedFilterIdentifier; // @synthesize selectedFilterIdentifier=_selectedFilterIdentifier;
- (void)collectionView:(id)arg1 layout:(id)arg2 didEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canBeRemovedAtPoint:(struct CGPoint)arg3;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)_reloadCellForFilterIdentifier:(id)arg1;
- (void)fetchStaticThumbnailForFilterIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedFilterThumbnailForFilterIdentifier:(id)arg1;
- (void)generateFilterPreviewThumbnailsForImage:(id)arg1;
- (void)selectFilter:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToSelectedFilterAnimated:(_Bool)arg1;
- (void)resetSelection;
- (void)moveFilterIdentifierFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)logFilterManagementState;
- (void)_writeFiltersToDefaults;
- (id)_filterManagementState;
- (void)resetToDefaults;
- (void)_readFilterIdentifiers;
- (id)_filterStorageKey;
- (id)_filterOverlayTitleForIdentifier:(id)arg1;
- (id)filterNameForIdentifier:(id)arg1;
- (long long)filterIdForIdentifier:(id)arg1;
- (id)filterIdentifierForId:(long long)arg1;
- (id)_allFilterIdentifiers;
- (id)initWithType:(long long)arg1 userSession:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

