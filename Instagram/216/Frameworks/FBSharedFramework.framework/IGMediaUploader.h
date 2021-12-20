//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMediaUploadListener-Protocol.h>

@class IGFBMediaUploadListenerWrapper, IGUserSession, NSString;
@protocol FBMediaUploadJob, IGMediaUploaderDelegate;

@interface IGMediaUploader : NSObject <FBMediaUploadListener>
{
    IGUserSession *_userSession;
    IGFBMediaUploadListenerWrapper *_uploadJobListener;
    id <FBMediaUploadJob> _uploadJob;
    id <IGMediaUploaderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGMediaUploaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)uploadHasProgressed:(id)arg1 withProgressInformation:(CDStruct_60aa3504)arg2;
- (void)uploadWasCancelled:(id)arg1 metrics:(id)arg2;
- (void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(_Bool)arg3 metrics:(id)arg4;
- (void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3;
- (void)cancelUpload;
- (id)uploadMediaWithModel:(id)arg1 uploadParams:(id)arg2 extraHeaderParams:(id)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

