//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBCLSubscription.h"

@class CLLocation, FBPCPrivacyID, FBTimer, NSDate, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface FBCLLocationSubscription : FBCLSubscription
{
    FBPCPrivacyID *_privacyID;
    NSDate *_creationDate;
    FBTimer *_inaccurateLocationFixTimer;
    FBTimer *_timeoutTimer;
    double _timeout;
    NSError *_lastError;
    CLLocation *_lastLocation;
    CLLocation *_inacccurateLocation;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _errorHandler;
    id _session;
    _Bool _allowsUnauthenticatedAccess;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    double _acceptableAccuracy;
    _Bool _shouldAutoCancel;
    _Bool _allowsBackgroundUpdates;
    double _desiredAccuracy;
    double _desiredFreshness;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id session; // @synthesize session=_session;
@property(readonly, nonatomic) _Bool allowsBackgroundUpdates; // @synthesize allowsBackgroundUpdates=_allowsBackgroundUpdates;
@property(readonly, nonatomic) _Bool shouldAutoCancel; // @synthesize shouldAutoCancel=_shouldAutoCancel;
@property(readonly, nonatomic) double desiredFreshness; // @synthesize desiredFreshness=_desiredFreshness;
@property(readonly, nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
@property(readonly, nonatomic) FBPCPrivacyID *privacyID; // @synthesize privacyID=_privacyID;
- (void)unsubscribe;
- (void)cancelTimeoutForAutoCancelledRequest;
- (void)scheduleTimeoutForAutoCancelledRequest;
- (void)cancelInaccurateLocationFix;
- (void)scheduleInaccurateLocationFix;
- (void)_invokeBlockWithError:(id)arg1;
- (void)_invokeBlockWithLocation:(id)arg1;
- (void)handleError:(id)arg1;
- (void)handleLocation:(id)arg1;
- (_Bool)shouldRelayLocationWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithDesiredAccuracy:(double)arg1 desiredFreshness:(double)arg2 autoCancels:(_Bool)arg3 timeout:(double)arg4 allowsBackgroundUpdates:(_Bool)arg5 allowsUnauthenticatedAccess:(_Bool)arg6 session:(id)arg7 privacyID:(id)arg8 dispatchQueue:(id)arg9 internalQueue:(id)arg10 onUpdate:(CDUnknownBlockType)arg11 onError:(CDUnknownBlockType)arg12;

@end

