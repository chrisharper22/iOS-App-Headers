//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IGDirectMutationRequestCoordinationCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_mutationIdToProcessingToolbox;
    NSMutableDictionary *_mutationIdToSafeguard;
}

- (void).cxx_destruct;
- (void)removeAllExecutionResultSafeguards;
- (void)removeExecutionResultSafeguardForMutationId:(id)arg1;
- (void)setExecutionResultSafeguard:(id)arg1 forMutationId:(id)arg2;
- (void)removeProcessingToolboxForMutationId:(id)arg1;
- (void)setProcessingToolbox:(id)arg1 forMutationId:(id)arg2;
- (id)processingToolboxForMutationId:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

