//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/BKBloksComponentController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGShoppingPDPHeroCarouselARSectionControllerDelegate-Protocol.h"

@class IGListAdapter, NSString;

@interface IGCPDPHeroCarouselTryInARController : BKBloksComponentController <IGListAdapterDataSource, IGShoppingPDPHeroCarouselARSectionControllerDelegate>
{
    IGListAdapter *_adapter;
}

- (void).cxx_destruct;
- (void)_showFetchFailureAlertBar;
- (void)shoppingPDPHeroCarouselARSectionControllerDidTapCell:(id)arg1 inController:(id)arg2 arEffectMetadata:(id)arg3;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)componentDidAcquireView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

