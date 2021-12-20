//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTSurfaceProtocol-Protocol.h"
#import "RCTSurfaceRootShadowViewDelegate-Protocol.h"
#import "RCTUIManagerObserver-Protocol.h"

@class NSDictionary, NSNumber, NSString, RCTBridge, RCTSurfaceView, RCTTouchHandler;
@protocol OS_dispatch_semaphore, RCTSurfaceDelegate;

@interface RCTSurface : NSObject <RCTSurfaceRootShadowViewDelegate, RCTUIManagerObserver, RCTSurfaceProtocol>
{
    RCTBridge *_bridge;
    NSString *_moduleName;
    NSNumber *_rootViewTag;
    struct mutex _mutex;
    RCTBridge *_batchedBridge;
    long long _stage;
    NSDictionary *_properties;
    struct CGSize _minimumSize;
    struct CGSize _maximumSize;
    struct CGSize _intrinsicSize;
    CDUnknownBlockType _mountingBlock;
    RCTSurfaceView *_view;
    RCTTouchHandler *_touchHandler;
    NSObject<OS_dispatch_semaphore> *_rootShadowViewDidStartRenderingSemaphore;
    NSObject<OS_dispatch_semaphore> *_rootShadowViewDidStartLayingOutSemaphore;
    NSObject<OS_dispatch_semaphore> *_uiManagerDidPerformMountingSemaphore;
    _Atomic _Bool _waitingForMountingStageOnMainQueue;
    id <RCTSurfaceDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property __weak id <RCTSurfaceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) long long rootTag;
- (void)unmountReactComponentWithBridge:(id)arg1 rootViewTag:(id)arg2;
- (void)mountReactComponentWithBridge:(id)arg1 moduleName:(id)arg2 params:(id)arg3;
- (void)stop;
- (void)start;
- (void)uiManagerDidPerformMounting:(id)arg1;
- (_Bool)uiManager:(id)arg1 performMountingWithBlock:(CDUnknownBlockType)arg2;
- (void)rootShadowViewDidStartLayingOut:(id)arg1;
- (void)rootShadowViewDidStartRendering:(id)arg1;
- (void)rootShadowView:(id)arg1 didChangeIntrinsicSize:(struct CGSize)arg2;
- (_Bool)synchronouslyWaitForStage:(long long)arg1 timeout:(double)arg2;
@property(readonly) struct CGSize intrinsicSize;
- (void)setIntrinsicSize:(struct CGSize)arg1;
@property(readonly) struct CGSize maximumSize;
@property(readonly) struct CGSize minimumSize;
- (void)setMinimumSize:(struct CGSize)arg1 maximumSize:(struct CGSize)arg2;
- (void)setMinimumSize:(struct CGSize)arg1 maximumSize:(struct CGSize)arg2 viewportOffset:(struct CGPoint)arg3;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFitsMinimumSize:(struct CGSize)arg1 maximumSize:(struct CGSize)arg2;
- (void)_registerRootView;
- (void)_stop;
- (void)_run;
@property(copy) NSDictionary *properties;
- (void)_propagateStageChange:(long long)arg1;
- (void)_setStage:(long long)arg1;
@property(readonly) long long stage;
- (void)handleBridgeDidLoadJavaScriptNotification:(id)arg1;
- (void)handleBridgeWillLoadJavaScriptNotification:(id)arg1;
- (void)_mountRootViewIfNeeded;
- (id)view;
- (id)_uiManager;
- (id)_batchedBridge;
@property(readonly) NSNumber *rootViewTag;
@property(readonly) NSString *moduleName;
- (id)bridge;
- (void)dealloc;
- (id)initWithBridge:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
