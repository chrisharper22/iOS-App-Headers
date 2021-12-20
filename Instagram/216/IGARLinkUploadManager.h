//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserStore;
@protocol IGAPIClient, IGARLinkScannerLoggingProtocol, IGRequestToken;

@interface IGARLinkUploadManager : NSObject
{
    id <IGAPIClient> _networker;
    IGUserStore *_userStore;
    id <IGRequestToken> _currentRequestToken;
    id <IGARLinkScannerLoggingProtocol> _loggingContext;
}

- (void).cxx_destruct;
- (void)_failedLookingUpUserAndEffect:(double)arg1 username:(id)arg2 deeplinkCode:(long long)arg3 isFromCamera:(_Bool)arg4 error:(id)arg5 responseDict:(id)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)_handleDeeplinkLookupFailureWithErrorCode:(long long)arg1 username:(id)arg2 deeplinkCode:(long long)arg3 timeElapse:(double)arg4 isFromCamera:(_Bool)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)_handleUserLookupFailureWithErrorCode:(long long)arg1 username:(id)arg2 timeElapse:(double)arg3 isFromCamera:(_Bool)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)_handleDeeplinkLookupSuccessWithUser:(id)arg1 ARLinkEffect:(id)arg2 deeplinkCode:(long long)arg3 timeElapse:(double)arg4 isFromCamera:(_Bool)arg5 successBlock:(CDUnknownBlockType)arg6;
- (void)_handleUserLookupSuccessWithUser:(id)arg1 timeElapse:(double)arg2 isFromCamera:(_Bool)arg3 confidenceScore:(double)arg4 successBlock:(CDUnknownBlockType)arg5;
- (void)_didSucceedLookingUpUserAndEffect:(long long)arg1 startTime:(double)arg2 username:(id)arg3 isFromCamera:(_Bool)arg4 confidenceScore:(double)arg5 responseDict:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)setLoggingContext:(id)arg1;
- (long long)lookupUserAndEffectWithUsername:(id)arg1 deeplinkCode:(long long)arg2 isFromCamera:(_Bool)arg3 confidenceScore:(double)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)cancelRequest;
- (id)initWithNetworker:(id)arg1 userSession:(id)arg2 loggingContext:(id)arg3;

@end

