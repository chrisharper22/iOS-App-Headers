//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGProductItem, IGShoppingRemoveProductController, NSString;

@protocol IGShoppingRemoveProductControllerDelegate <NSObject>
- (void)shoppingRemoveProductControllerDidCloseAlertDialog:(IGShoppingRemoveProductController *)arg1;
- (void)shoppingRemoveProductController:(IGShoppingRemoveProductController *)arg1 didFailWithErrorMessage:(NSString *)arg2;
- (void)shoppingRemoveProductController:(IGShoppingRemoveProductController *)arg1 didRemoveShoppingStickerFromStory:(NSString *)arg2;
- (void)shoppingRemoveProductController:(IGShoppingRemoveProductController *)arg1 didRemoveProduct:(IGProductItem *)arg2;
@end
