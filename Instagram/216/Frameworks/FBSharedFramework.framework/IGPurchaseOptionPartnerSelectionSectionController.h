//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGSMBSupportPartnerDataModel;
@protocol IGPurchaseOptionPartnerSelectionSectionControllerDelegate;

@interface IGPurchaseOptionPartnerSelectionSectionController : IGListSectionController
{
    IGSMBSupportPartnerDataModel *_viewModel;
    id <IGPurchaseOptionPartnerSelectionSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_configureViewProviderWithCell:(id)arg1;
- (void)didDeselectItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;

@end

