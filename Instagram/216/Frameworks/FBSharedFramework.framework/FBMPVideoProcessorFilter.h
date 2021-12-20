//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMPExportableFilter-Protocol.h>
#import <FBSharedFramework/FBMPFilter-Protocol.h>
#import <FBSharedFramework/FBMPOrderedFilter-Protocol.h>
#import <FBSharedFramework/FBMPPermissiveOutput-Protocol.h>

@class FBFilter, FBMPBaseConsumerPort, FBMPBaseProducerPort, FBVideoProcessor, NSArray, NSString;
@protocol FBMPConsumerPort, OS_dispatch_queue;

@interface FBMPVideoProcessorFilter : NSObject <FBMPFilter, FBMPPermissiveOutput, FBMPExportableFilter, FBMPOrderedFilter>
{
    unsigned long long _filterIndex;
    FBMPBaseConsumerPort *_videoDataPort;
    FBMPBaseProducerPort *_producerPort;
    struct mutex _mutex;
    NSObject<OS_dispatch_queue> *_processorQueue;
    FBVideoProcessor *_processor;
    CDUnknownBlockType _consumeBlock;
    _Bool _processorPrepared;
    id <FBMPConsumerPort> _filterCommandConsumerPort;
    FBFilter *_filter;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) FBFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) id <FBMPConsumerPort> filterCommandConsumerPort; // @synthesize filterCommandConsumerPort=_filterCommandConsumerPort;
- (id)exportableConfiguration;
- (id)exportableName;
- (void)_performOnProcessorQueue:(CDUnknownBlockType)arg1;
- (void)processFilterCommandData:(id)arg1;
- (void)processVideoData:(id)arg1 withMetadata:(struct FBMPDataMetadata)arg2 performingConsumeBlock:(_Bool)arg3;
- (_Bool)allowsConnectionsWithConsumerPortMapping:(id)arg1;
- (id)consumerPorts;
- (void)invalidate;
- (void)sessionDisconnectedPort:(id)arg1 context:(id)arg2;
- (void)sessionConnectedPort:(id)arg1 context:(id)arg2;
- (void)_prepareProcessorAndFilterIndexIfNeededWithContext:(id)arg1;
- (void)sessionWillStop:(id)arg1;
- (void)sessionWillStart:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *producerPorts;
- (void)requestNextFrameRenderedCallback:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)sendFilterCommands:(id)arg1;
- (void)updateFilterIndex:(unsigned long long)arg1;
- (id)initWithVideoProcessorFilter:(id)arg1;
- (id)initWithVideoProcessorFilter:(id)arg1 videoDataConsumeBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

