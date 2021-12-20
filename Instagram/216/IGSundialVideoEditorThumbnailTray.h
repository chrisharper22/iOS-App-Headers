//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGSundialVideoEditorThumbnailCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class CAShapeLayer, IGGestureCoordinatingCollectionView, NSArray, NSString, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol IGSundialVideoEditorThumbnailTrayDataSource, IGSundialVideoEditorThumbnailTrayDelegate, UIGestureRecognizerDelegate;

@interface IGSundialVideoEditorThumbnailTray : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGSundialVideoEditorThumbnailCellDelegate>
{
    IGGestureCoordinatingCollectionView *_thumbnailListView;
    UILabel *_actionDescriptionLabel;
    CAShapeLayer *_selectionDotLayer;
    UITapGestureRecognizer *_tapGesture;
    id <IGSundialVideoEditorThumbnailTrayDataSource> _dataSource;
    id <IGSundialVideoEditorThumbnailTrayDelegate> _delegate;
    long long _selectedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <IGSundialVideoEditorThumbnailTrayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGSundialVideoEditorThumbnailTrayDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSArray *visibleCells;
@property(readonly, nonatomic) double minSegmentWidth;
@property(readonly, nonatomic) double minSegmentSpacing;
- (void)_handleTapGesture:(id)arg1;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGesture;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> gestureDelegate;
- (id)getCellFromIndex:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)videoEditorThumbnailCellDidStopDragging:(id)arg1;
- (void)deletedCell:(long long)arg1;
- (_Bool)_deleteCell:(long long)arg1;
- (void)videoEditorThumbnailCellDidDrag:(id)arg1 gestureRecognizer:(id)arg2;
- (void)videoEditorThumbnailCellDidStartDragging:(id)arg1 gestureRecognizer:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
@property(nonatomic) double thumbnailsHorizontalOffset;
- (struct CGPoint)_selectionDotPosition;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
