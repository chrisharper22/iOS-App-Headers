//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShoppingCameraProductGroupControlling-Protocol.h"
#import "IGShoppingProductGroupControllerDelegate-Protocol.h"

@class IGCameraEffectProduct, IGShoppingProductGroupController, NSString;
@protocol IGShoppingCameraProductGroupControllerDelegate;

@interface IGShoppingCameraProductGroupController : NSObject <IGShoppingProductGroupControllerDelegate, IGShoppingCameraProductGroupControlling>
{
    IGCameraEffectProduct *_initialEffectProduct;
    IGShoppingProductGroupController *_productGroupController;
    IGCameraEffectProduct *_selectedEffectProduct;
    id <IGShoppingCameraProductGroupControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGShoppingProductGroupController *productGroupController; // @synthesize productGroupController=_productGroupController;
@property(nonatomic) __weak id <IGShoppingCameraProductGroupControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGCameraEffectProduct *selectedEffectProduct; // @synthesize selectedEffectProduct=_selectedEffectProduct;
@property(readonly, nonatomic) IGCameraEffectProduct *initialEffectProduct; // @synthesize initialEffectProduct=_initialEffectProduct;
- (void)shoppingProductGroupController:(id)arg1 didUpdateFetchState:(id)arg2;
- (void)shoppingProductGroupController:(id)arg1 didLoadProductGroupResponse:(id)arg2;
- (id)selectEffectProductWithRetailerId:(id)arg1;
- (void)updateWithEffectProduct:(id)arg1;
- (void)fetchProductGroupIfNeeded;
- (id)initWithUserSession:(id)arg1 initialEffectProduct:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

