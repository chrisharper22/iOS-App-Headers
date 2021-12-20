//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGShoppingCartMutating-Protocol.h>

@class IGObjectStores, IGProductSaveStatusStore, IGShoppingCartStore, NSMutableDictionary, NSMutableSet, NSString;
@protocol IGAPIClient, IGAnalyticsEventLoggingProtocol, IGScheduler><IGSynchronousScheduler, IGShoppingCartMutationHandlerDelegate, IGShoppingCartNetworkTaskManaging;

@interface IGShoppingCartMutationHandler : NSObject <IGShoppingCartMutating>
{
    id <IGShoppingCartNetworkTaskManaging> _networkTaskManager;
    id <IGAPIClient> _networker;
    IGObjectStores *_objectStores;
    IGProductSaveStatusStore *_saveStatusStore;
    id <IGScheduler><IGSynchronousScheduler> _workScheduler;
    id <IGAnalyticsEventLoggingProtocol> _analyticsEventLogger;
    NSMutableDictionary *_identifierToMutationMap;
    NSMutableDictionary *_queryToDataStateMap;
    NSMutableSet *_completedQueries;
    unsigned long long _maxCartItemCount;
    unsigned long long _sequenceCounter;
    IGShoppingCartStore *_currentCartStore;
    id <IGShoppingCartMutationHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingCartMutationHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) IGShoppingCartStore *currentCartStore; // @synthesize currentCartStore=_currentCartStore;
- (id)_syncNetworkTaskForBagsWithMerchantPks:(id)arg1;
- (id)_networkTaskForMutation:(id)arg1;
- (void)_updateDataStates;
- (void)_cleanupCommitedMutations;
- (void)_handleFailureForNetworkTask:(id)arg1 error:(id)arg2;
- (void)_handleUserErrorsForNetworkTask:(id)arg1 response:(id)arg2;
- (void)_handleCompletionForNetworkTask:(id)arg1 response:(id)arg2;
- (id)_executeNetworkTask:(id)arg1;
- (void)_updateCurrentCartStore:(id)arg1 withMutations:(id)arg2;
- (void)removeIgFundedIncentive;
- (void)syncChanges;
- (id)stateForQuery:(id)arg1;
- (void)fetchDataWithQuery:(id)arg1 options:(CDStruct_4508418e)arg2;
- (void)fetchDataWithQuery:(id)arg1;
- (id)commitMutation:(id)arg1 withOptions:(CDStruct_39e1c37c)arg2 analyticsModule:(id)arg3;
- (id)commitMutation:(id)arg1 analyticsModule:(id)arg2;
- (id)initWithNetworkTaskManager:(id)arg1 networker:(id)arg2 objectStores:(id)arg3 saveStatusStore:(id)arg4 workScheduler:(id)arg5 analyticsEventLogger:(id)arg6 maxCartItemCount:(unsigned long long)arg7 initialCartStore:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
