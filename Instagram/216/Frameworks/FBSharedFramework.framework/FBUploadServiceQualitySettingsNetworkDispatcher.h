//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMediaNetworkRequestDelegate-Protocol.h>
#import <FBSharedFramework/FBMediaUploadQualitySettingsNetworkDispatching-Protocol.h>

@class NSString;
@protocol FBMediaNetworkDispatch, FBMediaNetworkRequest, FBMediaUploadProtocolProvider, OS_dispatch_queue;

@interface FBUploadServiceQualitySettingsNetworkDispatcher : NSObject <FBMediaNetworkRequestDelegate, FBMediaUploadQualitySettingsNetworkDispatching>
{
    id <FBMediaNetworkDispatch> _networkDispatcher;
    id <FBMediaUploadProtocolProvider> _protocolProvider;
    id <FBMediaNetworkRequest> _request;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _finished;
}

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1 error:(id)arg2;
- (void)networkerRequest:(id)arg1 didUpdateUploadProgress:(double)arg2 complete:(_Bool)arg3;
- (void)networkerRequestDidCancel:(id)arg1;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2;
- (void)cancel;
- (void)sendUploadSettingsRequest:(id)arg1 waterfallID:(id)arg2 actorID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (id)initWithMediaNetworkDispatcher:(id)arg1 protocolProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

