//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGProductItem, IGSessionTracker, IGShoppingConsumptionFeedItemLogger, IGShoppingPDPMediaSeeAllViewModel, IGUserSession, NSString;

@interface IGShoppingPDPMediaSeeAllSectionController : IGListSectionController
{
    IGUserSession *_userSession;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGSessionTracker *_shoppingSessionTracker;
    IGShoppingPDPMediaSeeAllViewModel *_viewModel;
    struct IGGridLayoutConfiguration _layoutConfig;
    NSString *_analyticsModule;
    IGProductItem *_selectedProductItem;
}

- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 layoutConfig:(struct IGGridLayoutConfiguration)arg2 logger:(id)arg3 shoppingSessionTracker:(id)arg4 analyticsModule:(id)arg5 selectedProductItem:(id)arg6;

@end

