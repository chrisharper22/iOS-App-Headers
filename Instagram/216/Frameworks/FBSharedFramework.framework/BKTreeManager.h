//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKModel, BKObjectSet, NSDictionary, NSMutableDictionary, NSString;
@protocol NSObject;

@interface BKTreeManager : NSObject
{
    BKObjectSet *_objectSet;
    id <NSObject> _updaterScope;
    CDUnknownBlockType _modelPreprocessor;
    CDUnknownBlockType _observer;
    BKModel *_unboundTree;
    BKModel *_enqueuedUnboundTree;
    _Bool _treeChangeIsEnqueued;
    NSDictionary *_internalVariables;
    NSDictionary *_manifestEntries;
    NSDictionary *_embeddedPayloads;
    BKModel *_committedBoundTree;
    NSDictionary *_committedVariables;
    long long _batchCount;
    struct vector<BKQueuedTreeModification, std::allocator<BKQueuedTreeModification>> _queuedModifications;
    NSMutableDictionary *_queuedVariableUpdates;
    _Bool _didScheduleUpdateProcessing;
    NSDictionary *_controllerMutationsModels;
    NSString *_loggingIDForInternalFrameworkUseOnly;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy) NSString *loggingIDForInternalFrameworkUseOnly; // @synthesize loggingIDForInternalFrameworkUseOnly=_loggingIDForInternalFrameworkUseOnly;
- (id)controllerMutationsModels;
- (void)setAttributeValue:(id)arg1 forMinifiedKey:(id)arg2 forModelWithClientId:(id)arg3;
- (void)setAttributeValue:(id)arg1 forMinifiedKey:(id)arg2 forModelWithId:(id)arg3;
- (void)removeModelsBetween:(id)arg1 endId:(id)arg2;
- (void)removeModelWithId:(id)arg1;
- (void)replaceModelsAfterModelWithId:(id)arg1 withModels:(id)arg2 withTreeResources:(id)arg3;
- (void)replaceChildrenInModelWithId:(id)arg1 withModels:(id)arg2 withTreeResources:(id)arg3;
- (void)replaceModels:(id)arg1 withTreeResources:(id)arg2 forModelWithId:(id)arg3;
- (void)insertModels:(id)arg1 withTreeResources:(id)arg2 beforeModelWithId:(id)arg3;
- (void)insertModels:(id)arg1 withTreeResources:(id)arg2 afterModelWithId:(id)arg3;
- (void)prependChildren:(id)arg1 withTreeResources:(id)arg2 toModelWithId:(id)arg3;
- (void)appendChildren:(id)arg1 withTreeResources:(id)arg2 toModelWithId:(id)arg3;
- (void)endUpdates;
- (void)beginUpdates;
- (id)embeddedPayloads;
- (id)manifestEntries;
- (id)manifestEntryForIdentifier:(id)arg1;
- (id)committedVariables;
- (id)committedBoundTree;
- (id)internalVariables;
- (id)unboundTree;
- (void)_processQueuedUpdates;
- (void)_scheduleUpdateProcessingIfNeeded;
- (void)enqueueUpdateForVariableWithIdentifier:(id)arg1 newValue:(id)arg2;
- (void)enqueueModificationForModel:(struct BKTreeManagerTargetModel)arg1 key:(struct BKTreeManagerTargetKey)arg2 valueFunction:(CDUnknownFunctionPointerType)arg3 context:(id)arg4;
- (void)synchronouslyAddManifestEntries:(id)arg1 embeddedPayloads:(id)arg2 externalVariables:(id)arg3;
- (void)dangerouslyEnqueueReplaceTree:(id)arg1 withTreeResources:(id)arg2;
- (struct BKProcessManifestResult)processNewManifestEntriesWithUpdater:(id)arg1 baseVariables:(id)arg2;
- (void)commitBoundTree:(id)arg1 computedFromBindingTo:(id)arg2 controllerMutationsModels:(id)arg3;
- (pair_41707745)initializeWithParseResult:(id)arg1 observer:(CDUnknownBlockType)arg2 modelPreprocessor:(CDUnknownBlockType)arg3;
- (id)initWithObjectSet:(id)arg1;

@end
