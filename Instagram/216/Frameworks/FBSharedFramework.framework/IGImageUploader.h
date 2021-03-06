//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMediaUploadListener-Protocol.h>

@class IGFBMediaUploadListenerWrapper, IGUploadOffProcessNetworkRequestUserScopedObjects, NSString;
@protocol FBMediaUploadJob, IGNetworking, OS_dispatch_queue;

@interface IGImageUploader : NSObject <FBMediaUploadListener>
{
    id <IGNetworking> _networker;
    IGUploadOffProcessNetworkRequestUserScopedObjects *_offProcessNetworkRequestUserScopedObjects;
    _Bool _cancelled;
    NSObject<OS_dispatch_queue> *_callBackQueue;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _progressBlock;
    id <FBMediaUploadJob> _uploadJob;
    IGFBMediaUploadListenerWrapper *_uploadJobListener;
}

- (void).cxx_destruct;
- (void)uploadWasCancelled:(id)arg1 metrics:(id)arg2;
- (void)uploadHasProgressed:(id)arg1 withProgressInformation:(CDStruct_60aa3504)arg2;
- (void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(_Bool)arg3 metrics:(id)arg4;
- (void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3;
- (void)_cleanup;
- (id)_fbMediaUploadConfigWithFbUploadJobId:(id)arg1 uploadParams:(id)arg2 imageUploadConfig:(id)arg3 imageEncoding:(id)arg4 allowOffProcessPOSTNetworkRequest:(_Bool)arg5;
- (void)cancel;
- (void)uploadWithUserPk:(id)arg1 imageEncoding:(id)arg2 imageUploadConfig:(id)arg3 fbUploadJobId:(id)arg4 uploadParams:(id)arg5 completionBlock:(CDUnknownBlockType)arg6 progressBlock:(CDUnknownBlockType)arg7 callBackQueue:(id)arg8 launcherSetProviding:(id)arg9;
- (id)initWithNetworker:(id)arg1 offProcessNetworkRequestUserScopedObjects:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

