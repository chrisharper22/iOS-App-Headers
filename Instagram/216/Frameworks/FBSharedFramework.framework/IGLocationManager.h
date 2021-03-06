//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGLocationManagerBroadcastListener-Protocol.h>
#import <FBSharedFramework/IGThreadedLocationManagerDelegate-Protocol.h>

@class CLLocation, IGThreadedLocationManager, NSDate, NSString, NSTimer;
@protocol FBPCPrivacyContext, IGAnalyticsEventLoggingProtocol;

@interface IGLocationManager : NSObject <IGThreadedLocationManagerDelegate, IGLocationManagerBroadcastListener>
{
    IGThreadedLocationManager *_locationManager;
    CLLocation *_lastGoodLocation;
    CLLocation *_lastLocation;
    NSTimer *_locationTimer;
    NSDate *_appOpenDate;
    id <IGAnalyticsEventLoggingProtocol> _logger;
    struct atomic<CLAuthorizationStatus> _authorizationStatus;
    struct atomic<bool> _isAuthorizationStatusInitialized;
    struct atomic<bool> _isAuthorizedForPreciseLocation;
    id <FBPCPrivacyContext> _privacyContext;
    _Bool _isLocating;
}

+ (id)sharedBroadcastListener;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isLocating; // @synthesize isLocating=_isLocating;
- (void)_logCoreLocationAuthorizationStatus;
- (void)_timeoutLocationUpdateImpl;
- (void)_timeoutLocationUpdate;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)_locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 reducedAccuracy:(_Bool)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)shouldStopUpdatingLocation;
- (void)_logLocationRequestWithLocationAvailable:(_Bool)arg1 requestType:(unsigned long long)arg2;
- (void)logLocationAuthorizationStatusWithLogger:(id)arg1;
- (void)requestAuthorization;
- (void)_stopUpdatingLocation;
- (_Bool)isAcceptablyAccurateLocation:(id)arg1;
- (_Bool)_isRecentLocation:(id)arg1;
- (_Bool)isCachedLocation:(id)arg1;
- (void)_startUpdatingLocationAfterAuthorizationWithTimeout:(double)arg1;
- (void)startUpdatingLocationWithTimeout:(double)arg1;
- (void)startUpdatingLocation;
- (int)authorizationStatus;
- (_Bool)isLocationUseAuthorized;
- (_Bool)locationServicesEnabled;
@property(readonly, nonatomic) _Bool isReducedAccuracy;
@property(readonly, nonatomic) CLLocation *currentLocation;
- (id)cachedLocationWithDesiredFreshness:(double)arg1;
- (id)cachedLocationNoLogging;
- (id)cachedLocation;
- (void)dealloc;
- (id)initWithLauncherSet:(id)arg1 withPrivacyContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

