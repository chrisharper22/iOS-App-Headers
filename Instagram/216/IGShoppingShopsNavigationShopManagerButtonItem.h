//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

#import "IGShoppingShopManagerEditProductsViewControllerDelegate-Protocol.h"

@class IGShoppingShopsNavigationNavBarButton, IGUserSession, NSString, UINavigationController;

@interface IGShoppingShopsNavigationShopManagerButtonItem : UIBarButtonItem <IGShoppingShopManagerEditProductsViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGShoppingShopsNavigationNavBarButton *_button;
    UINavigationController *_navController;
    NSString *_analyticsModule;
    NSString *_priorModule;
    CDUnknownBlockType _onClose;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onClose; // @synthesize onClose=_onClose;
- (void)shopManagerEditProductsViewControllerDidClose:(id)arg1;
- (void)_didTap:(id)arg1;
- (id)initWithImage:(id)arg1 userSession:(id)arg2 navController:(id)arg3 analyticsModule:(id)arg4 priorModule:(id)arg5 onClose:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

