//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGFeedItemCellController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGListSingleSectionControllerDelegate-Protocol.h"

@class IGListAdapter, IGSessionTracker, NSString, UICollectionViewFlowLayout;

@interface IGFeedItemShoppingChicletCellController : IGFeedItemCellController <IGListAdapterDataSource, IGListSingleSectionControllerDelegate>
{
    IGSessionTracker *_shoppingSessionTracker;
    IGListAdapter *_listAdapter;
    UICollectionViewFlowLayout *_collectionViewLayout;
}

+ (Class)collectionViewCellClass;
- (void).cxx_destruct;
- (id)_chainingAnalyticsContext;
- (id)_navigationAnalyticsContextWithSubmodule:(id)arg1;
- (id)_actionsForViewModel:(id)arg1;
- (void)_navigateToShopForBrand:(id)arg1;
- (void)_presentPDPWithProduct:(id)arg1;
- (id)_storefrontChicletViewModelForBrand:(id)arg1 idx:(unsigned long long)arg2;
- (id)_chicletObjectsForTaggedProducts;
- (id)_chicletObjectsForMediaWithNoTaggedProduct:(id)arg1;
- (void)didSelectSectionController:(id)arg1 withObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)configureCell:(id)arg1;
- (struct CGSize)sizeForWidth:(double)arg1;
- (id)initWithSectionContext:(id)arg1 feedItemSectionContext:(id)arg2 shoppingSessionTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
