//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import <FBSharedFramework/IGListAdapterDataSource-Protocol.h>
#import <FBSharedFramework/IGVideoLayerSectionControllerDelegate-Protocol.h>

@class IGListAdapter, NSArray, NSMutableOrderedSet, NSString, UICollectionView;
@protocol IGTimedObject, IGVideoLayerListViewDelegate;

@interface IGVideoLayerListView : IGPassthroughView <IGListAdapterDataSource, IGVideoLayerSectionControllerDelegate>
{
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    NSMutableOrderedSet *_stickers;
    NSMutableOrderedSet *_effects;
    id <IGVideoLayerListViewDelegate> _delegate;
    id <IGTimedObject> _selectedTimedObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGTimedObject> selectedTimedObject; // @synthesize selectedTimedObject=_selectedTimedObject;
@property(nonatomic) __weak id <IGVideoLayerListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reloadIndicatorForTimedObject:(id)arg1;
- (id)pillForTimedObject:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets contentInset;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didSelectVideoLayerSectionController:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)removeEffect:(id)arg1;
- (void)addEffect:(id)arg1;
- (void)setEffects:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSArray *effects;
- (void)removeSticker:(id)arg1;
- (void)addSticker:(id)arg1;
- (void)setStickers:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSArray *stickers;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

