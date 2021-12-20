//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUploadSessionInternalDelegate-Protocol.h>

@class IGUploadSessionContext, IGUploadSessionInternal, NSString;
@protocol IGUploadSessionDelegate;

@interface IGUploadSession : NSObject <IGUploadSessionInternalDelegate>
{
    IGUploadSessionInternal *_uploadSessionInternal;
    IGUploadSessionContext *_context;
    _Bool _isPermanentlyFailed;
    id <IGUploadSessionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isPermanentlyFailed; // @synthesize isPermanentlyFailed=_isPermanentlyFailed;
@property(nonatomic) __weak id <IGUploadSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)uploadSession:(id)arg1 didUpdateWithContext:(id)arg2;
- (void)uploadSession:(id)arg1 didUpdateTotalProgress:(double)arg2;
- (void)uploadSession:(id)arg1 didRenderVideoUrl:(id)arg2 forMediaId:(id)arg3;
- (void)uploadSession:(id)arg1 didGenerateVideoCoverImageSource:(id)arg2 forMediaId:(id)arg3;
- (void)uploadSession:(id)arg1 didRenderImageSource:(id)arg2 forMediaId:(id)arg3;
- (void)uploadSession:(id)arg1 didChangeStatus:(long long)arg2 serverResponse:(id)arg3 error:(id)arg4;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) long long retryCount;
- (id)anyRenderedVideoUrl;
- (void)cancelWithResumable:(_Bool)arg1;
@property(readonly, copy, nonatomic) IGUploadSessionContext *context;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) long long status;
- (id)initWithUploadService:(id)arg1 uploadTaskMediaKeyMaps:(id)arg2 context:(id)arg3 videoUrlRenderedOptimistically:(id)arg4 launcherSetProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

