//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectMutationEligibleRequestQuerying-Protocol.h>

@class NSString;
@protocol IGDirectMutationRequestStateStoreReading, IGNetworkingConnectionManagerProtocol;

@interface IGDirectMutationEligibleRequestQuerier : NSObject <IGDirectMutationEligibleRequestQuerying>
{
    id <IGDirectMutationRequestStateStoreReading> _requestStateStoreReader;
    id <IGNetworkingConnectionManagerProtocol> _networkConnectionManager;
    _Bool _shouldRequireNetwork;
}

- (void).cxx_destruct;
- (id)_findFirstEligibleJobInQueue:(id)arg1;
- (id)_findAllEligibleJobsFromCache;
- (id)findNextEligibleMutation;
- (id)initWithMutationRequestStateStoreReader:(id)arg1 networkConnectionManager:(id)arg2 shouldRequireNetwork:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
