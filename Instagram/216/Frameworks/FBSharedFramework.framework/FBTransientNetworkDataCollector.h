//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBReachabilityListener-Protocol.h>
#import <FBSharedFramework/FBTransientDataCollectorInterface-Protocol.h>

@class FBTransientTigonLigerDataCollector, NSString;

@interface FBTransientNetworkDataCollector : NSObject <FBTransientDataCollectorInterface, FBReachabilityListener>
{
    FBTransientTigonLigerDataCollector *_transientTigonLigerDataCollector;
    struct mutex _operationsLock;
    _Bool _trackingEnabled;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unregisterListeners;
- (void)registerListeners;
- (void)startTracking:(id)arg1;
- (void)recordNetworkChangeIfRelevant:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)recordConnectionQuality:(unsigned long long)arg1;
- (void)downloadBandwidthStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)stopDataCollection:(id)arg1;
- (void)startDataCollection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
