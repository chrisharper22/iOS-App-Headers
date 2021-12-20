//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, FBCLLocationCache, FBTimer, NSError, NSMutableDictionary, NSMutableSet, NSString;
@protocol FBBackgroundStateManaging, FBCLAuthorizationHandler, FBCLLocationHandler, FBCLRegionHandler, FBCLVisitHandler, OS_dispatch_queue;

@interface FBCLLocationManager : NSObject <CLLocationManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <FBBackgroundStateManaging> _applicationStateManager;
    struct atomic<CLAuthorizationStatus> _authorizationStatus;
    struct atomic<bool> _isAuthorizedForPreciseLocation;
    struct atomic<bool> _authorizationStatusInitialized;
    struct atomic<bool> _locationUpdatesStarted;
    CLLocationManager *_locationManager;
    FBCLLocationCache *_locationCache;
    NSMutableDictionary *_regionStateByRegionIdentifier;
    NSMutableSet *_rangedBeaconRegionIdentifiers;
    id _applicationWillResignActiveObserver;
    id _applicationDidBecomeActiveObserver;
    id _applicationDidEnterInBackgroundObserver;
    _Bool _isLocationManagerSuspended;
    NSString *_sessionID;
    double _initializationTimestamp;
    _Bool _createLocationManagerOnMainThread;
    id <FBCLAuthorizationHandler> _authorizationHandler;
    id <FBCLLocationHandler> _locationHandler;
    id <FBCLRegionHandler> _regionHandler;
    id <FBCLVisitHandler> _visitHandler;
    NSError *_lastError;
    FBTimer *_restartTimer;
    FBTimer *_errorHandlerTimer;
}

+ (id)sharedManager;
+ (void)makeSharedManagerThreadsafe;
- (void).cxx_destruct;
@property(retain, nonatomic) FBTimer *errorHandlerTimer; // @synthesize errorHandlerTimer=_errorHandlerTimer;
@property(retain, nonatomic) FBTimer *restartTimer; // @synthesize restartTimer=_restartTimer;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(nonatomic) __weak id <FBCLVisitHandler> visitHandler; // @synthesize visitHandler=_visitHandler;
@property(nonatomic) __weak id <FBCLRegionHandler> regionHandler; // @synthesize regionHandler=_regionHandler;
@property(nonatomic) __weak id <FBCLLocationHandler> locationHandler; // @synthesize locationHandler=_locationHandler;
@property(nonatomic) __weak id <FBCLAuthorizationHandler> authorizationHandler; // @synthesize authorizationHandler=_authorizationHandler;
- (double)initializationTimestamp;
- (id)sessionID;
- (void)_dispatchToLocationManager:(CDUnknownBlockType)arg1;
- (void)_waitForLocationManagerAndDispatch:(CDUnknownBlockType)arg1;
- (void)requestTemporaryFullAccuracyAuthorizationWithUsageDescriptionKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestAlwaysPermission;
- (void)requestWhenInUsePermission;
- (id)systemLocation;
- (id)locationWithAccuracy:(double)arg1 freshness:(double)arg2 privacyID:(id)arg3;
- (void)_stopUpdatingLocationForLocationManager:(id)arg1;
- (void)_stopUpdatingLocation;
- (void)_startUpdatingLocation;
- (void)_restartLocationManagerAfterDelay:(double)arg1;
- (void)_restartLocationManager;
- (long long)_stateForRegion:(id)arg1;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)_stopRangingBeaconsForRegion:(id)arg1;
- (void)stopRangingBeaconsForRegion:(id)arg1;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)handleLocationManagerError:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onApplicationDidEnterInBackground:(id)arg1;
- (void)stopMonitoringVisits;
- (void)startMonitoringVisits;
- (void)stopMonitoringForRegion:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1;
- (void)stopMonitoringSignificantLocationChanges;
- (void)startMonitoringSignificantLocationChanges;
- (void)setAllowsBackgroundLocationUpdates:(_Bool)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (_Bool)locationServicesEnabled;
- (void)_initializeAuthorizationStatus;
- (_Bool)authorizationStatusInitialized;
- (_Bool)isAuthorizedForPreciseLocation;
- (int)authorizationStatus;
- (void)dealloc;
- (id)initWithLocationManagerProvider:(CDUnknownBlockType)arg1 locationCache:(id)arg2 applicationStateManager:(id)arg3 queue:(id)arg4;
- (id)initWithLocationManager:(id)arg1 locationCache:(id)arg2 applicationStateManager:(id)arg3 queue:(id)arg4;
- (id)initWithLocationManagerProvider:(CDUnknownBlockType)arg1 createLocationManagerOnMainThread:(_Bool)arg2 locationCache:(id)arg3 applicationStateManager:(id)arg4 queue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
