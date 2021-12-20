//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMediaNetworkRequestDelegate-Protocol.h>

@class NSString;
@protocol FBMediaNetworkDispatch, FBMediaNetworkRequest, OS_dispatch_queue;

@interface FBMediaStreamingUploadSegmentEndSender : NSObject <FBMediaNetworkRequestDelegate>
{
    id <FBMediaNetworkDispatch> _networkDispatcher;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _cancellationBlock;
    id <FBMediaNetworkRequest> _downloadRequest;
}

- (void).cxx_destruct;
- (void)networkerRequest:(id)arg1 didUpdateUploadProgress:(double)arg2 complete:(_Bool)arg3;
- (void)networkerRequestDidCancel:(id)arg1;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2;
- (id)endStream:(id)arg1 streamId:(id)arg2 config:(id)arg3 withSuccess:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5 cancellation:(CDUnknownBlockType)arg6;
- (id)initWithNetworkDispatcher:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

