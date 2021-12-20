//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSaveStatusListener-Protocol.h"
#import "IGShoppingCartDataControllerListener-Protocol.h"

@class IGProductSaveStatusStore, IGShoppingCartDataController, NSArray, NSString;
@protocol IGShoppingCartProductCollectionsDataControllerDelegate;

@interface IGShoppingCartProductCollectionsDataController : NSObject <IGSaveStatusListener, IGShoppingCartDataControllerListener>
{
    IGShoppingCartDataController *_cartDataController;
    IGProductSaveStatusStore *_productSaveStatusStore;
    NSArray *_productCollections;
    id <IGShoppingCartProductCollectionsDataControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingCartProductCollectionsDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shoppingCartDataController:(id)arg1 didHandleUserError:(id)arg2;
- (void)shoppingCartDataController:(id)arg1 didUpdateState:(id)arg2 forQuery:(id)arg3 previousState:(id)arg4;
- (void)shoppingCartDataController:(id)arg1 didUpdateCartStore:(id)arg2 withChangeset:(id)arg3;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)_updateProductCollections:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *productCollections;
- (void)applyLoadedProductCollections:(id)arg1;
- (id)initWithCartDataController:(id)arg1 productSaveStatusStore:(id)arg2 saveStatusAnnouncer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

