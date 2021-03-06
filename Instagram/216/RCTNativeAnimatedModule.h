//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "RCTBridgeModule-Protocol.h"
#import "RCTEventDispatcherObserver-Protocol.h"
#import "RCTInitializing-Protocol.h"
#import "RCTSurfacePresenterObserver-Protocol.h"
#import "RCTUIManagerObserver-Protocol.h"
#import "RCTValueAnimatedNodeObserver-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTNativeAnimatedNodesManager, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface RCTNativeAnimatedModule : RCTEventEmitter <RCTInitializing, RCTBridgeModule, RCTValueAnimatedNodeObserver, RCTEventDispatcherObserver, RCTUIManagerObserver, RCTSurfacePresenterObserver>
{
    RCTNativeAnimatedNodesManager *_nodesManager;
    NSMutableArray *_operations;
    NSMutableArray *_preOperations;
    NSMutableDictionary *_animIdIsManagedByFabric;
}

+ (const struct RCTMethodInfo *)__rct_export__24717;
+ (const struct RCTMethodInfo *)__rct_export__24016;
+ (const struct RCTMethodInfo *)__rct_export__22415;
+ (const struct RCTMethodInfo *)__rct_export__21514;
+ (const struct RCTMethodInfo *)__rct_export__20713;
+ (const struct RCTMethodInfo *)__rct_export__20012;
+ (const struct RCTMethodInfo *)__rct_export__19311;
+ (const struct RCTMethodInfo *)__rct_export__18610;
+ (const struct RCTMethodInfo *)__rct_export__1779;
+ (const struct RCTMethodInfo *)__rct_export__1698;
+ (const struct RCTMethodInfo *)__rct_export__1627;
+ (const struct RCTMethodInfo *)__rct_export__1556;
+ (const struct RCTMethodInfo *)__rct_export__1475;
+ (const struct RCTMethodInfo *)__rct_export__1364;
+ (const struct RCTMethodInfo *)__rct_export__1183;
+ (const struct RCTMethodInfo *)__rct_export__1082;
+ (const struct RCTMethodInfo *)__rct_export__1001;
+ (const struct RCTMethodInfo *)__rct_export__920;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)eventDispatcherWillDispatchEvent:(id)arg1;
- (void)animatedNode:(id)arg1 didUpdateValue:(double)arg2;
- (id)supportedEvents;
- (void)uiManagerWillPerformMounting:(id)arg1;
- (void)didMountComponentsWithRootTag:(long long)arg1;
- (void)willMountComponentsWithRootTag:(long long)arg1;
- (void)flushOperationQueues;
- (void)addPreOperationBlock:(CDUnknownBlockType)arg1;
- (void)addOperationBlock:(CDUnknownBlockType)arg1;
- (void)getValue:(double)arg1 saveValueCallback:(CDUnknownBlockType)arg2;
- (void)removeAnimatedEventFromView:(double)arg1 eventName:(id)arg2 animatedNodeTag:(double)arg3;
- (void)addAnimatedEventToView:(double)arg1 eventName:(id)arg2 eventMapping:(struct EventMapping *)arg3;
- (void)stopListeningToAnimatedNodeValue:(double)arg1;
- (void)startListeningToAnimatedNodeValue:(double)arg1;
- (void)dropAnimatedNode:(double)arg1;
- (void)restoreDefaultValues:(double)arg1;
- (void)disconnectAnimatedNodeFromView:(double)arg1 viewTag:(double)arg2;
- (void)connectAnimatedNodeToView:(double)arg1 viewTag:(double)arg2;
- (void)extractAnimatedNodeOffset:(double)arg1;
- (void)flattenAnimatedNodeOffset:(double)arg1;
- (void)setAnimatedNodeOffset:(double)arg1 offset:(double)arg2;
- (void)setAnimatedNodeValue:(double)arg1 value:(double)arg2;
- (void)stopAnimation:(double)arg1;
- (void)startAnimatingNode:(double)arg1 nodeTag:(double)arg2 config:(id)arg3 endCallback:(CDUnknownBlockType)arg4;
- (void)disconnectAnimatedNodes:(double)arg1 childTag:(double)arg2;
- (void)connectAnimatedNodes:(double)arg1 childTag:(double)arg2;
- (void)createAnimatedNode:(double)arg1 config:(id)arg2;
- (void)setSurfacePresenter:(id)arg1;
- (void)initialize;
- (void)setBridge:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(nonatomic) __weak RCTBundleManager *bundleManager;
@property(nonatomic) __weak RCTCallableJSModules *callableJSModules;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak RCTModuleRegistry *moduleRegistry;
@property(readonly) Class superclass;
@property(nonatomic) __weak RCTViewRegistry *viewRegistry_DEPRECATED;

@end

