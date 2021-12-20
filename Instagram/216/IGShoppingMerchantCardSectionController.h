//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGSessionTracker, IGShoppingMerchantCardViewModel, IGUserSession;
@protocol IGShoppingMerchantCardLoggingProvider;

@interface IGShoppingMerchantCardSectionController : IGListSectionController
{
    IGUserSession *_userSession;
    id <IGShoppingMerchantCardLoggingProvider> _loggingProvider;
    IGSessionTracker *_shoppingSessionTracker;
    IGShoppingMerchantCardViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 loggingProvider:(id)arg2 shoppingSessionTracker:(id)arg3;

@end

