//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBCCUConfigurationDelegate-Protocol.h"

@class IGContactUploadSetting, IGUserSession, NSString;
@protocol IGAPIClient, IGAnalyticsEventLoggingProtocol;

@interface IGCCUGraphQLIntegrationDelegate : NSObject <FBCCUConfigurationDelegate>
{
    id <IGAPIClient> _networker;
    IGContactUploadSetting *_contactUploadSetting;
    NSString *_sessionId;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    _Bool _useCompression;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)reportContactUploadProgressWithCompletedBatchCount:(int)arg1 totalBatchCount:(int)arg2;
- (void)logContactUploadCcuSettingCheckEventWithAgreedToTerms:(_Bool)arg1 authGranted:(_Bool)arg2 lastSyncDateTime:(id)arg3;
- (void)logUploadContactSuccessWithCompletedBatchCount:(int)arg1 totalBatchCount:(int)arg2 batchIndex:(int)arg3 batchRetryCount:(int)arg4;
- (void)logUploadContactFailure:(id)arg1 contactCount:(int)arg2 batchIndex:(int)arg3 batchRetryCount:(int)arg4;
- (void)logAddressBookReadError:(int)arg1;
- (void)logAddressBookReadEmpty;
- (void)logAddressBookNoChange;
- (void)logContactSyncFinished;
- (void)logClientCacheDeletionFailure:(id)arg1;
- (void)logClientCachePersistenceFailureWithContactsCount:(int)arg1;
- (void)logContactSyncFired;
- (int)maxConcurrentBatchCount;
- (int)maxRetryCount;
- (int)batchSize;
- (unsigned long long)schedulingInterval;
- (void)reportError:(id)arg1;
- (void)_handleCCUSessionCreateSuccess:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)getRemoteSetting:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)updateCCUServerSetting:(id)arg1 source:(id)arg2 successBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)closeContactsUploadSessionWithRootHash:(id)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)uploadContactsInBatch:(id)arg1 batchIndex:(int)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)uploadPersistedRootHash:(id)arg1 withHashAlgorithm:(id)arg2 queue:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
- (id)initWithNetworker:(id)arg1 userSession:(id)arg2 analyticsLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

