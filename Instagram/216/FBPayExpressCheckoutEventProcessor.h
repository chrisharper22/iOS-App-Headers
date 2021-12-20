//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBPayExpressCheckoutPaymentRequestUpdateEvent;
@protocol FBPayExpressCheckoutEventHandling, FBPayExpressCheckoutEventProcessorDelegate, FBPayUPLLoggingAPI;

@interface FBPayExpressCheckoutEventProcessor : NSObject
{
    id <FBPayUPLLoggingAPI> _logger;
    FBPayExpressCheckoutPaymentRequestUpdateEvent *_pendingUpdateEvent;
    FBPayExpressCheckoutPaymentRequestUpdateEvent *_ongoingUpdateEvent;
    id <FBPayExpressCheckoutEventHandling> _eventHandler;
    _Bool _isEventBeingHandled;
    _Bool _hasPendingEventsToHandle;
    _Bool _shouldTriggerEventHandling;
    id <FBPayExpressCheckoutEventProcessorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayExpressCheckoutEventProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)suppressBillingAddressEventUpdate;
- (void)suppressShippingAddressEventUpdate;
- (void)updateUserAdditionalFields:(id)arg1;
- (void)updateUserEnteredMerchantLoyalty:(id)arg1;
- (void)updateUserEnteredPromoCodes:(id)arg1;
- (void)updateUserSelectedShippingOptionId:(id)arg1;
- (void)updateUserSelectedShippingAddress:(id)arg1;
- (void)updateUserSelectedPaymentMethod:(id)arg1;
- (void)_handleEventHandlingResults:(id)arg1;
- (void)_maybeTriggerEventHandling;
- (void)updateEventHandler:(id)arg1;
- (void)beginTriggeringEventHandling;
- (id)initWithLogger:(id)arg1 preselectedShippingOptionId:(id)arg2 eventHandler:(id)arg3;

@end

