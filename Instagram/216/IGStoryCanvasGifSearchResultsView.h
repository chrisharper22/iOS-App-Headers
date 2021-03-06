//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGStoryCanvasGifSearchResultsSectionControllerDelegate-Protocol.h"

@class IGListAdapter, NSArray, NSString, UICollectionView;
@protocol IGStoryCanvasGifSearchResultsViewDelegate;

@interface IGStoryCanvasGifSearchResultsView : IGPassthroughView <IGListAdapterDataSource, IGStoryCanvasGifSearchResultsSectionControllerDelegate>
{
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    id <IGStoryCanvasGifSearchResultsViewDelegate> _delegate;
    NSArray *_searchResults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) __weak id <IGStoryCanvasGifSearchResultsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)gifSearchResultsSectionController:(id)arg1 searchByAuthorWithStickerModel:(id)arg2;
- (void)gifSearchResultsSectionController:(id)arg1 didLongPressCell:(id)arg2 stickerModel:(id)arg3;
- (void)gifSearchResultsSectionController:(id)arg1 didSelectStickerModel:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithUserSession:(id)arg1 module:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

