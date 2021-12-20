//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCoWatchPremiumContentSeasonListItemSectionControllerSelectionDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGListAdapter, NSArray, NSString, UICollectionView;
@protocol IGCoWatchPremiumContentSeasonListViewControllerDelegate;

@interface IGCoWatchPremiumContentSeasonListViewController : IGViewController <IGListAdapterDataSource, IGCoWatchPremiumContentSeasonListItemSectionControllerSelectionDelegate>
{
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    NSArray *_viewModels;
    struct UIEdgeInsets _contentInsets;
    id <IGCoWatchPremiumContentSeasonListViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)seasonListItemSectionController:(id)arg1 didSelectSeason:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_setupCollectionViewAndListAdapter;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPremiumContentSeasons:(id)arg1 contentInsets:(struct UIEdgeInsets)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
