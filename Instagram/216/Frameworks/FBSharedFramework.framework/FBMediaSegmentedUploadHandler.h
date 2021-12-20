//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMediaUploading-Protocol.h>

@class FBMediaSegmentStreamConfig, FBMediaSegmentStreamHandler, FBMediaUploadPreviewFetcher, NSString;
@protocol FBMediaNetworkDispatch, FBMediaSegmentStream, FBMediaUploadCache, FBMediaUploadEncrypting, FBMediaUploadLogging, FBMediaUploadingDelegate, OS_dispatch_queue;

@interface FBMediaSegmentedUploadHandler : NSObject <FBMediaUploading>
{
    FBMediaSegmentStreamConfig *_config;
    FBMediaUploadPreviewFetcher *_previewFetcher;
    id <FBMediaNetworkDispatch> _networkDispatcher;
    id <FBMediaUploadCache> _cache;
    id <FBMediaSegmentStream> _segmentStream;
    FBMediaSegmentStreamHandler *_streamHandler;
    id <FBMediaUploadEncrypting> _encryptor;
    id <FBMediaUploadLogging> _logger;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _addedFirstSegment;
    id <FBMediaUploadingDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBMediaUploadingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleCompletion:(id)arg1 error:(id)arg2;
- (void)_handleProgress:(CDStruct_60aa3504)arg1;
- (void)didFinishAddingAllSegments:(unsigned long long)arg1;
- (void)appendLoggingDataWithDictionary:(id)arg1;
- (_Bool)shouldRestartUploadForNewMediaUploader:(id)arg1;
- (void)addSegment:(id)arg1 streamAnnouncer:(id)arg2;
- (void)addSegment:(id)arg1;
- (void)cancelUpload;
- (void)recoverStateAndUploadIfStateFoundInCache:(CDUnknownBlockType)arg1;
- (void)startUploadWithSettings:(id)arg1 estimatedFileSize:(unsigned long long)arg2;
- (id)initWithConfig:(id)arg1 previewFetcher:(id)arg2 networkDispatcher:(id)arg3 jobFactory:(id)arg4 encryptor:(id)arg5 offProcessNetworkRequestProvider:(id)arg6 cache:(id)arg7 logger:(id)arg8 queue:(id)arg9;
- (id)initWithConfig:(id)arg1 networkDispatcher:(id)arg2 jobFactory:(id)arg3 encryptor:(id)arg4 offProcessNetworkRequestProvider:(id)arg5 cache:(id)arg6 logger:(id)arg7 queue:(id)arg8;
- (id)initWithConfig:(id)arg1 networkDispatcher:(id)arg2 jobFactory:(id)arg3 encryptor:(id)arg4 cache:(id)arg5 logger:(id)arg6 queue:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

