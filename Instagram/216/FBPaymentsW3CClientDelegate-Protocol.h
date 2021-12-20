//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPaymentsW3CClientPaymentRequest, FBPaymentsW3CClientPaymentResponse, NSArray, NSError, NSString;

@protocol FBPaymentsW3CClientDelegate <NSObject>
- (void)maskedCardsFetchedWithError:(NSError *)arg1;
- (void)maskedCardsWereFetched:(NSArray *)arg1;
- (void)paymentRequestDidComplete:(FBPaymentsW3CClientPaymentResponse *)arg1 withError:(NSError *)arg2;

@optional
- (void)paymentRequestDidUpdate:(FBPaymentsW3CClientPaymentRequest *)arg1 withRedactingConfig:(NSString *)arg2;
- (void)paymentRequestDidCancel:(long long)arg1;
@end

