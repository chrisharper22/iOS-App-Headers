//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface IGShoppingCheckoutAttributionData : NSObject <NSCopying>
{
    NSString *_marketerIgId;
    NSString *_merchantIgId;
    NSString *_shoppingSessionId;
    NSString *_priorModule;
    NSString *_priorModuleIgId;
    NSString *_entryPoint;
    NSString *_globalShoppingCartEntryPoint;
    NSString *_globalShoppingCartPriorModule;
    NSNumber *_globalBagId;
    NSNumber *_merchantBagId;
    NSString *_trackingToken;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toJsonDictionary;
- (id)shoppingSessionId;
- (id)initWithMerchantIgId:(id)arg1 shoppingSessionId:(id)arg2 marketerIgId:(id)arg3 priorModule:(id)arg4 priorModuleIgId:(id)arg5 entryPoint:(id)arg6 globalShoppingCartEntryPoint:(id)arg7 globalShoppingCartPriorModule:(id)arg8 globalBagId:(id)arg9 merchantBagId:(id)arg10 trackingToken:(id)arg11;

@end

