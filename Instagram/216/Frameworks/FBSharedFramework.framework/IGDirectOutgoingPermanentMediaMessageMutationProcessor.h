//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectMutationRequestProcessing-Protocol.h>

@class IGDirectMutationMediaUploadObserver, IGDirectMutationNetworker, IGDirectOutgoingMessagePayload, IGDirectOutgoingMessagePermanentMedia, IGPostExternalShareLogger, NSString;
@protocol IGDirectMutationRequestProcessorExecutionResultHandling, IGUserLauncherSetProviding;

@interface IGDirectOutgoingPermanentMediaMessageMutationProcessor : NSObject <IGDirectMutationRequestProcessing>
{
    IGDirectMutationMediaUploadObserver *_mediaUploadObserver;
    IGDirectOutgoingMessagePermanentMedia *_outgoingPermanentMedia;
    IGDirectOutgoingMessagePayload *_outgoingMessage;
    IGDirectMutationNetworker *_mutationNetworker;
    IGPostExternalShareLogger *_externalShareLogger;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    NSString *_uploadId;
    id <IGDirectMutationRequestProcessorExecutionResultHandling> _resultHandler;
    NSString *_mutationId;
}

- (void).cxx_destruct;
- (void)_didFailWithError:(id)arg1;
- (void)_shareSucceeded;
- (void)_performShare;
- (void)handleMutationStateChange:(id)arg1;
- (void)executeWithResultHandler:(id)arg1 accessoryPackage:(id)arg2;
- (id)initWithOutgoingPermanentMedia:(id)arg1 outgoingMessage:(id)arg2 mediaUploadObserver:(id)arg3 mutationNetworker:(id)arg4 externalShareLogger:(id)arg5 launcherSetProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

