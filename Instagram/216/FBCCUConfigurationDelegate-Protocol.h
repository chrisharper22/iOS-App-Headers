//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBUserSession, NSArray, NSDate, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol FBCCUConfigurationDelegate <NSObject>
- (void)reportContactUploadProgressWithCompletedBatchCount:(int)arg1 totalBatchCount:(int)arg2;
- (void)reportError:(NSString *)arg1;
- (void)logUploadContactSuccessWithCompletedBatchCount:(int)arg1 totalBatchCount:(int)arg2 batchIndex:(int)arg3 batchRetryCount:(int)arg4;
- (void)logUploadContactFailure:(NSError *)arg1 contactCount:(int)arg2 batchIndex:(int)arg3 batchRetryCount:(int)arg4;
- (void)logAddressBookReadError:(int)arg1;
- (void)logAddressBookReadEmpty;
- (void)logAddressBookNoChange;
- (void)logContactSyncFinished;
- (void)logClientCacheDeletionFailure:(NSError *)arg1;
- (void)logClientCachePersistenceFailureWithContactsCount:(int)arg1;
- (void)logContactSyncFired;
- (int)maxConcurrentBatchCount;
- (int)maxRetryCount;
- (int)batchSize;
- (unsigned long long)schedulingInterval;
- (void)getRemoteSetting:(void (^)(_Bool))arg1 errorBlock:(void (^)(NSError *))arg2;
- (void)updateCCUServerSetting:(NSString *)arg1 source:(NSString *)arg2 successBlock:(void (^)(void))arg3 errorBlock:(void (^)(NSError *))arg4;
- (void)closeContactsUploadSessionWithRootHash:(NSString *)arg1 successBlock:(void (^)(_Bool))arg2 errorBlock:(void (^)(NSError *))arg3;
- (void)uploadContactsInBatch:(NSArray *)arg1 batchIndex:(int)arg2 onCompletion:(void (^)(NSError *))arg3;
- (void)uploadPersistedRootHash:(NSString *)arg1 withHashAlgorithm:(NSString *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 onSuccess:(void (^)(FBContactSnapshot *))arg4 onFailure:(void (^)(NSError *))arg5;

@optional
- (id)initWithSession:(FBUserSession *)arg1;
- (_Bool)shouldApplyRunStateFix;
- (void)logUploadContactReadRootHash;
- (void)logCCUBackgroundJobExitedWithReasonNoAppPermission;
- (void)logCCUBackgroundJobExitedWithReasonNoOSPermission;
- (void)logCCUBackgroundJobExitedWithReasonTimeInterval;
- (void)logCCUBackgroundJobGetRemoteSettingFailedWithEntryPoint:(NSString *)arg1 error:(NSError *)arg2;
- (void)logCCUBackgroundJobGetRemoteSettingSuccessWithEntryPoint:(NSString *)arg1;
- (void)logCCUBackgroundJobGetRemoteSettingWithEntryPoint:(NSString *)arg1;
- (void)logCCUBackgroundJobStartedWithEntryPoint:(NSString *)arg1;
- (void)logContactsUploadFailedEventWithFailureReason:(NSString *)arg1;
- (void)logContactUploadCcuSettingCheckEventWithAgreedToTerms:(_Bool)arg1 authGranted:(_Bool)arg2 lastSyncDateTime:(NSDate *)arg3;
- (void)uploadCCUServerSetting:(NSString *)arg1 osSetting:(_Bool)arg2;
@end

