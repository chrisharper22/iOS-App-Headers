//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPayExpressCheckoutPaymentContainerResponse, NSString;

@protocol FBPayExpressCheckoutHelperNetworking <NSObject>
- (void)submitExpressCheckoutPaymentContainer:(FBPayExpressCheckoutPaymentContainerResponse *)arg1 productId:(NSString *)arg2 callback:(void (^)(FBPayExpressCheckoutError *, NSString *, NSString *, FBPayTextWithEntities *, FBPayTextWithEntities *))arg3;
- (void)handleExpressCheckoutEventWithOrderId:(NSString *)arg1 productId:(NSString *)arg2;
- (void)fetchECPProductConfigurationWithProductId:(NSString *)arg1 receiverId:(NSString *)arg2 sessionId:(NSString *)arg3 productItemId:(NSString *)arg4 productConfigCallback:(void (^)(FBPayExpressCheckoutProductConfiguration *))arg5;
@end

