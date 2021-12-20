//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGRequestTask-Protocol.h>
#import <FBSharedFramework/IGResourceOperation-Protocol.h>

@class IGNetworkingRequest, IGRequestPolicy, IGResourceOperationStateHandler, NSDate, NSString;
@protocol IGNetworkCallbacks, IGNetworkLayer, IGRequestTask, IGSchedulerRequestTaskDelegate;

@interface IGSchedulerRequestTask : NSObject <IGResourceOperation, IGRequestTask>
{
    id <IGRequestTask> _networkToken;
    IGNetworkingRequest *_request;
    IGRequestPolicy *_policy;
    unsigned long long _requestBehavior;
    _Bool _isCanceled;
    _Bool _isFinished;
    _Bool _didElevatePrivilages;
    IGResourceOperationStateHandler *_stateHandler;
    id <IGSchedulerRequestTaskDelegate> _delegate;
    id <IGNetworkCallbacks> _callbacks;
    id <IGNetworkLayer> _layer;
    NSDate *_timeEnqueued;
    struct unique_ptr<std::mutex, std::default_delete<std::mutex>> _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_onRequestFailed;
- (void)_onRequestSucceeded;
- (void)flushStream;
- (void)closeStream;
- (void)cancel;
- (void)elevatePrivileges;
- (void)updateRequestToType:(unsigned long long)arg1 behavior:(unsigned long long)arg2;
- (unsigned long long)behavior;
- (void)terminate;
- (void)start;
- (id)identifier;
- (unsigned long long)requestType;
- (id)stateHandler;
- (id)timeEnqueued;
- (id)initWithRequest:(id)arg1 policy:(id)arg2 layer:(id)arg3 callbacks:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

