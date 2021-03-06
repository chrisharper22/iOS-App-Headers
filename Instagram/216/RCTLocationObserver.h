//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "NativeLocationObserverSpec-Protocol.h"

@class CLLocationManager, NSDictionary, NSMutableArray, NSObject, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface RCTLocationObserver : RCTEventEmitter <CLLocationManagerDelegate, NativeLocationObserverSpec>
{
    CLLocationManager *_locationManager;
    NSDictionary *_lastLocationEvent;
    NSMutableArray *_pendingRequests;
    _Bool _observingLocation;
    struct RCTLocationConfiguration _locationConfiguration;
    struct RCTLocationOptions _observerOptions;
}

+ (const struct RCTMethodInfo *)__rct_export__2684;
+ (const struct RCTMethodInfo *)__rct_export__2513;
+ (const struct RCTMethodInfo *)__rct_export__2352;
+ (const struct RCTMethodInfo *)__rct_export__2111;
+ (const struct RCTMethodInfo *)__rct_export__2060;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)getCurrentPosition:(struct LocationOptions *)arg1 withSuccessCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
- (void)stopObserving;
- (void)startObserving:(struct LocationOptions *)arg1;
- (void)requestAuthorization;
- (void)setConfiguration:(struct SpecSetConfigurationConfig *)arg1;
- (void)timeout:(id)arg1;
- (void)_beginLocationUpdatesWithDesiredAccuracy:(double)arg1 distanceFilter:(double)arg2 useSignificantChanges:(_Bool)arg3;
- (id)supportedEvents;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(nonatomic) __weak RCTBundleManager *bundleManager;
@property(nonatomic) __weak RCTCallableJSModules *callableJSModules;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak RCTModuleRegistry *moduleRegistry;
@property(readonly) Class superclass;
@property(nonatomic) __weak RCTViewRegistry *viewRegistry_DEPRECATED;

@end

