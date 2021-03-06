//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGShoppingPDPViewInsightsCellDelegate-Protocol.h"

@class IGShoppingPDPViewInsightsViewModel, NSString;
@protocol IGShoppingPDPViewInsightsSectionControllerDelegate;

@interface IGShoppingPDPViewInsightsSectionController : IGListSectionController <IGShoppingPDPViewInsightsCellDelegate>
{
    IGShoppingPDPViewInsightsViewModel *_viewModel;
    id <IGShoppingPDPViewInsightsSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPViewInsightsSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shoppingPDPViewInsightsCell:(id)arg1 didTapButton:(id)arg2;
- (struct UIEdgeInsets)inset;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

