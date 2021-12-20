//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "IGStoryCanvasPostCaptureCardsCompositionsSelectionListSectionControllerDelegate-Protocol.h"

@class IGAsyncTask, IGDirectBottomActionButton, IGListAdapter, NSArray, NSMutableOrderedSet, NSOrderedSet, NSString, UICollectionView;
@protocol IGStoryCanvasPostCaptureCardsSelectionViewControllerDelegate;

@interface IGStoryCanvasPostCaptureCardsSelectionViewController : UIViewController <IGListAdapterDataSource, IGListDisplayDelegate, IGStoryCanvasPostCaptureCardsCompositionsSelectionListSectionControllerDelegate, IGGestureHandler>
{
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    NSArray *_feedItems;
    NSOrderedSet *_initiallySelectedFeedItemPks;
    NSMutableOrderedSet *_selectedFeedItems;
    IGAsyncTask *_cardUserMediaSelectionModelRequest;
    IGDirectBottomActionButton *_bottomActionButton;
    id <IGStoryCanvasPostCaptureCardsSelectionViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryCanvasPostCaptureCardsSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_doneButtonTapped;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)cardCompositionListSelectionController:(id)arg1 cellDeselected:(id)arg2;
- (void)cardCompositionListSelectionController:(id)arg1 cellSelected:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_populateFeedAndSelectedItems;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 selectedFeedItemPks:(id)arg2 cardUserMediaSelectionModelRequest:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
