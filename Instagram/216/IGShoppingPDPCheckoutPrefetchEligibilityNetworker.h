//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;
@protocol IGShoppingPDPCheckoutPrefetchEligibilityNetworkerDelegate;

@interface IGShoppingPDPCheckoutPrefetchEligibilityNetworker : NSObject
{
    IGUserSession *_userSession;
    long long _checkoutPrefetchEligibility;
    id <IGShoppingPDPCheckoutPrefetchEligibilityNetworkerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPCheckoutPrefetchEligibilityNetworkerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleRequestFailure:(id)arg1;
- (void)_handleRequestSuccessWithIsUserEligibleForCheckoutPrefetch:(_Bool)arg1 bridgedData:(id)arg2;
- (void)fetchPDPEligibilityForCheckoutPrefetchWithBridgeData:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end
