//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectMutationRequestExecutionAdditionalDataUpdating-Protocol.h>
#import <FBSharedFramework/IGDirectMutationRequestExecutionAttemptExtraPayloadLogging-Protocol.h>
#import <FBSharedFramework/IGDirectMutationRequestProcessorExecutionResultHandling-Protocol.h>

@class NSDictionary, NSString;
@protocol IGDirectMutationRequestProcessorCallbackInteractionSafeguardDelegate, OS_dispatch_queue;

@interface IGDirectMutationRequestProcessorCallbackInteractionSafeguard : NSObject <IGDirectMutationRequestExecutionAdditionalDataUpdating, IGDirectMutationRequestExecutionAttemptExtraPayloadLogging, IGDirectMutationRequestProcessorExecutionResultHandling>
{
    id <IGDirectMutationRequestProcessorCallbackInteractionSafeguardDelegate> _delegate;
    NSString *_mutationId;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isValid;
    NSDictionary *_extraPayload;
}

- (void).cxx_destruct;
- (void)attachExtraPayloadToMutationAttemptedLog:(id)arg1;
- (void)updateAdditionalData:(id)arg1;
- (void)handleExecutionResult:(id)arg1;
- (id)extraPayloadToAttachToAttemptLog;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1 mutationId:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
