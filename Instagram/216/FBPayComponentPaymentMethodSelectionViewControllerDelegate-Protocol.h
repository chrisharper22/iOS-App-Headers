//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPayComponentDataMutatingRequest, FBPayComponentPaymentMethodSelectionViewController, FBPayPaymentMethod, NSArray;

@protocol FBPayComponentPaymentMethodSelectionViewControllerDelegate <NSObject>
- (void)paymentMethodSelectionViewController:(FBPayComponentPaymentMethodSelectionViewController *)arg1 didNeedToPerformMutationWithRequest:(FBPayComponentDataMutatingRequest *)arg2 mutatingCallback:(void (^)(FBPayComponentDataMutatingResponse *, NSError *))arg3;
- (void)paymentMethodSelectionViewController:(FBPayComponentPaymentMethodSelectionViewController *)arg1 didSelectNewPaymentMethod:(FBPayPaymentMethod *)arg2 updatedAllPaymentMethods:(NSArray *)arg3;
@end
