//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShoppingProfileShopLoggingProviderType-Protocol.h"

@class IGAnalyticsNavigationState, IGShoppingAdMetadata, IGUserSession, NSString;

@interface IGShoppingProfileShopLoggingProviderDefault : NSObject <IGShoppingProfileShopLoggingProviderType>
{
    IGUserSession *_userSession;
    NSString *_targetUserId;
    NSString *_shopLinkedCreatorId;
    NSString *_marketerUserId;
    NSString *_linkId;
    IGAnalyticsNavigationState *_navState;
    _Bool _isMiniShopStoreFront;
    _Bool _isSelfProfile;
    NSString *_waterfallId;
    NSString *_priorSubmodule;
    IGShoppingAdMetadata *_shoppingProductAdMetadata;
    NSString *_mPk;
    NSString *_priorModule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *priorModule; // @synthesize priorModule=_priorModule;
@property(readonly, nonatomic) NSString *waterfallId; // @synthesize waterfallId=_waterfallId;
@property(readonly, nonatomic) IGAnalyticsNavigationState *navState; // @synthesize navState=_navState;
- (id)analyticsModule;
- (void)_maybeLogProfileActionForAction:(id)arg1 productID:(id)arg2;
- (void)logRemoveRejectedProductRequestFailedForProductId:(id)arg1 errorMessage:(id)arg2;
- (void)logRemoveRejectedProductRequestCompletedForProductId:(id)arg1;
- (void)logRemoveRejectedProductRequestStartedForProductId:(id)arg1;
- (void)logRejectedProductDialogOpenForProductId:(id)arg1;
- (void)logUnsaveProductForProductID:(id)arg1;
- (void)logSaveProductForProductID:(id)arg1;
- (void)logProductCollectionTapWithProductCollectionType:(id)arg1;
- (void)logProductTapWithProductID:(id)arg1;
- (void)logEntryWithIsCheckoutEnabled:(_Bool)arg1 isInfluencer:(_Bool)arg2 shoppingSessionId:(id)arg3;
- (id)initWithUserSession:(id)arg1 targetUserId:(id)arg2 shopLinkedCreatorId:(id)arg3 marketerUserId:(id)arg4 linkId:(id)arg5 navState:(id)arg6 waterfallId:(id)arg7 isMiniShopStoreFront:(_Bool)arg8 priorModule:(id)arg9 priorSubmodule:(id)arg10 shoppingProductAdMetadata:(id)arg11 mPk:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

