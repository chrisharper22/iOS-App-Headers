//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkCallbackMergerDelegate-Protocol.h>
#import <FBSharedFramework/IGNetworkLayer-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol IGNetworkLayer, IGScheduler><IGSynchronousScheduler;

@interface IGRequestsMergingLayer : NSObject <IGNetworkCallbackMergerDelegate, IGNetworkLayer>
{
    id <IGNetworkLayer> _nextLayer;
    id <IGScheduler><IGSynchronousScheduler> _queueScheduler;
    NSMutableDictionary *_mergedRequests;
}

- (void).cxx_destruct;
- (void)requestDidFinish:(id)arg1 success:(_Bool)arg2 summary:(id)arg3 error:(id)arg4 mergedPolicies:(id)arg5;
- (id)startRequest:(id)arg1 policy:(id)arg2 callbacks:(id)arg3;
- (id)initWithNextLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

