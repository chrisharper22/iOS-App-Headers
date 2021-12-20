//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPayComponentDataMutatingRequest, FBPayExpressCheckoutOneTimeCheckoutModel, FBPayExpressCheckoutPaymentRequest, FBPayExpressCheckoutReturnFields, FBPayPaymentMethod, NSArray, NSString;

@protocol FBPayComponentNetworking <NSObject>
- (void)mutateFBPayComponentDataWithRequest:(FBPayComponentDataMutatingRequest *)arg1 productId:(NSString *)arg2 clientReceiverId:(NSString *)arg3 platformTrustToken:(NSString *)arg4 shouldSkipValidation:(_Bool)arg5 isPUXFlow:(_Bool)arg6 completionBlock:(void (^)(FBPayComponentDataMutatingResponse *, NSError *))arg7;
- (void)requestPaymentContainerWithPaymentRequest:(FBPayExpressCheckoutPaymentRequest *)arg1 paymentMethod:(FBPayPaymentMethod *)arg2 shippingAddressId:(NSString *)arg3 orderId:(NSString *)arg4 credentialType:(unsigned int)arg5 pttString:(NSString *)arg6 returnFields:(FBPayExpressCheckoutReturnFields *)arg7 isGuestCheckout:(_Bool)arg8 oneTimeCheckoutModel:(FBPayExpressCheckoutOneTimeCheckoutModel *)arg9 completionBlock:(void (^)(FBPayExpressCheckoutPaymentContainerResponse *))arg10 errorBlock:(void (^)(NSError *))arg11;
- (void)fetchRegularDataforFBPayComponents:(NSArray *)arg1 paymentRequest:(FBPayExpressCheckoutPaymentRequest *)arg2 oneTimeCheckoutModel:(FBPayExpressCheckoutOneTimeCheckoutModel *)arg3 triggeringSource:(long long)arg4 successCallback:(void (^)(FBPayComponentDataFetchingResponse *))arg5 failureCallback:(void (^)(NSError *))arg6;
- (void)prefetchDataForFBPayComponent:(long long)arg1 productId:(NSString *)arg2 receiverId:(NSString *)arg3 actionTypes:(NSArray *)arg4 supportedContainerTypes:(NSArray *)arg5;
- (void)prewarmDataForFBPayComponent:(long long)arg1 productId:(NSString *)arg2 receiverId:(NSString *)arg3;
- (void)determineUXStatusFromCacheForFBPayComponent:(long long)arg1 productId:(NSString *)arg2 callback:(void (^)(_Bool))arg3;
@end
