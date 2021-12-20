//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGListAdapterDataSource-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegate-Protocol.h>

@class IGListAdapter, IGUserSession, NSArray, NSMutableSet, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol IGSuggestedTextHScrollViewDelegate, IGSuggestedTextHScrollViewLoggingDelegate;

@interface IGSuggestedTextHScrollView : UIView <IGListAdapterDataSource, UICollectionViewDelegate>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGListAdapter *_listAdapter;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSArray *_suggestedTextHScrollViewItems;
    NSMutableSet *_seenVisibleCells;
    id <IGSuggestedTextHScrollViewDelegate> _delegate;
    id <IGSuggestedTextHScrollViewLoggingDelegate> _loggingDelegate;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <IGSuggestedTextHScrollViewLoggingDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(nonatomic) __weak id <IGSuggestedTextHScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_logViewForIndexPathfNecessary:(id)arg1;
- (void)_initializeListAdapter;
- (void)_initializeCollectionView;
- (void)viewAppeared;
- (void)layoutSubviews;
- (void)updateWithItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)items;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

