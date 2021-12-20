//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation;

@interface FBCLLocationCache : NSObject
{
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _rwlock;
    CLLocation *_locationNearestTenMeters;
    CLLocation *_locationHundredMeters;
    CLLocation *_locationKilometer;
    CLLocation *_locationOther;
}

- (void).cxx_destruct;
- (void)clearLocations;
- (void)addLocations:(id)arg1;
- (id)locationWithAccuracy:(double)arg1 freshness:(double)arg2 privacyID:(id)arg3;
- (void)dealloc;
- (id)init;

@end

