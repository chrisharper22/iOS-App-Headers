//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGProductItem, IGSessionTracker, NSString;
@protocol IGShoppingMediaGridServiceType, IGShoppingMediaGridViewControllerConfigurationType;

@interface IGShoppingMediaGridUserIntentTarget : NSObject <FBIntentTarget>
{
    id <IGShoppingMediaGridServiceType> _service;
    id <IGShoppingMediaGridViewControllerConfigurationType> _configuration;
    IGSessionTracker *_shoppingSessionTracker;
    IGProductItem *_initialProductItem;
    IGProductItem *_selectedProductItem;
    NSString *_priorModule;
    NSString *_priorSubmodule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *priorSubmodule; // @synthesize priorSubmodule=_priorSubmodule;
@property(readonly, nonatomic) NSString *priorModule; // @synthesize priorModule=_priorModule;
@property(readonly, nonatomic) IGProductItem *selectedProductItem; // @synthesize selectedProductItem=_selectedProductItem;
@property(readonly, nonatomic) IGProductItem *initialProductItem; // @synthesize initialProductItem=_initialProductItem;
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
@property(readonly, nonatomic) id <IGShoppingMediaGridViewControllerConfigurationType> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <IGShoppingMediaGridServiceType> service; // @synthesize service=_service;
- (id)initWithService:(id)arg1 configuration:(id)arg2 shoppingSessionTracker:(id)arg3 initialProductItem:(id)arg4 selectedProductItem:(id)arg5 priorModule:(id)arg6 priorSubmodule:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

