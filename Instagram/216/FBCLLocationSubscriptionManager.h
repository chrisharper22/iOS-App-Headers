//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBCLLocationHandler-Protocol.h"
#import "FBCLSubscriptionDelegate-Protocol.h"

@class FBCLLocationManager, NSMutableArray, NSString;
@protocol FBBackgroundStateManaging, OS_dispatch_queue;

@interface FBCLLocationSubscriptionManager : NSObject <FBCLLocationHandler, FBCLSubscriptionDelegate>
{
    FBCLLocationManager *_locationManager;
    id <FBBackgroundStateManaging> _applicationStateManager;
    NSMutableArray *_subscriptions;
    NSMutableArray *_significantLocationChangeSubscriptions;
    struct atomic<long> _subscriptionCountAllowingBackgroundUpdates;
    double _bestDesiredAccuracy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)internalQueue;
- (void)subscriptionDidPause:(id)arg1;
- (_Bool)_canForwardLocationsToSubscription:(id)arg1 withError:(id *)arg2;
- (_Bool)shouldAllowBackgroundLocationUpdates;
- (void)suspendInaccurateLocationFixes;
- (void)handleError:(id)arg1;
- (void)_addDebugEventWithName:(id)arg1 location:(id)arg2 withSubscription:(id)arg3;
- (void)handleLocation:(id)arg1;
- (void)removeSignificantLocationChangeSubscription:(id)arg1;
- (void)addSignificantLocationChangeSubscription:(id)arg1;
- (void)removeSubscription:(id)arg1;
- (void)addSubscription:(id)arg1;
- (id)initWithLocationManager:(id)arg1 applicationStateManager:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

