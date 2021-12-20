//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBPCPrivacyID, NSString;
@protocol OS_dispatch_queue;

@interface FBCLLocationSubscriptionConfiguration : NSObject
{
    _Bool _requireBackgroundAccess;
    _Bool _requireUnauthenticatedAccess;
    NSString *_productID;
    FBPCPrivacyID *_privacyID;
    double _desiredAccuracy;
    double _desiredFreshness;
    CDUnknownBlockType _onLocationUpdate;
    CDUnknownBlockType _onError;
    NSObject<OS_dispatch_queue> *_queue;
    id _session;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id session; // @synthesize session=_session;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(readonly, nonatomic) CDUnknownBlockType onLocationUpdate; // @synthesize onLocationUpdate=_onLocationUpdate;
@property(readonly, nonatomic) _Bool requireUnauthenticatedAccess; // @synthesize requireUnauthenticatedAccess=_requireUnauthenticatedAccess;
@property(readonly, nonatomic) _Bool requireBackgroundAccess; // @synthesize requireBackgroundAccess=_requireBackgroundAccess;
@property(readonly, nonatomic) double desiredFreshness; // @synthesize desiredFreshness=_desiredFreshness;
@property(readonly, nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
@property(readonly, nonatomic) FBPCPrivacyID *privacyID; // @synthesize privacyID=_privacyID;
@property(readonly, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (id)initWithProductID:(id)arg1 privacyID:(id)arg2 desiredAccuracy:(double)arg3 desiredFreshness:(double)arg4 requireBackgroundAccess:(_Bool)arg5 requireUnauthenticatedAccess:(_Bool)arg6 onLocationUpdate:(CDUnknownBlockType)arg7 onError:(CDUnknownBlockType)arg8 queue:(id)arg9 session:(id)arg10;

@end
