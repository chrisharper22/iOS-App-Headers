//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMediaUploadDispatcherConfig, IGRequestPolicy, IGURLRequest, NSError;
@protocol IGAPIClient, IGRequestToken;

@interface IGMediaUploadDispatcher : NSObject
{
    id <IGAPIClient> _dispatcher;
    id <IGRequestToken> _token;
    IGURLRequest *_request;
    IGRequestPolicy *_policy;
    IGMediaUploadDispatcherConfig *_config;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _progress;
    unsigned long long _backgroundTaskIdentifier;
    long long _retryNumber;
    _Bool _cancelled;
    _Bool _executing;
    NSError *_lastError;
}

- (void).cxx_destruct;
- (void)_repeatRequestAfterDelay:(double)arg1;
- (void)_invalidatePendingRequest;
- (void)_endDispatcherInBackground;
- (void)_startDispatcherInBackground;
- (void)_onNetworkReachabilityChange:(id)arg1;
- (_Bool)isExecuting;
- (void)cancel;
- (void)_startRequesting;
- (void)startRequest:(id)arg1 policy:(id)arg2 config:(id)arg3 completion:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithDispatcher:(id)arg1;

@end

