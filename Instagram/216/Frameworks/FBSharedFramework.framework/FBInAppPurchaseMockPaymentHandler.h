//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBInAppPurchaseDelegate;

@interface FBInAppPurchaseMockPaymentHandler : NSObject
{
    id <FBInAppPurchaseDelegate> _delegate;
    _Bool _isBuying;
}

- (void).cxx_destruct;
- (void)_reset;
- (void)_buyProduct:(id)arg1 payload:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)mockBuy:(id)arg1 internalProductID:(id)arg2 payload:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initWithDelegate:(id)arg1;

@end
