//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, RCTBridge, RCTViewManager;
@protocol RCTComponent, RCTEventDispatcherProtocol;

@interface RCTComponentData : NSObject
{
    id <RCTComponent> _defaultView;
    NSMutableDictionary *_viewPropBlocks;
    NSMutableDictionary *_shadowPropBlocks;
    RCTBridge *_bridge;
    id <RCTEventDispatcherProtocol> _eventDispatcher;
    RCTViewManager *_manager;
    RCTViewManager *_bridgelessViewManager;
    Class _managerClass;
    NSString *_name;
    CDUnknownBlockType _eventInterceptor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType eventInterceptor; // @synthesize eventInterceptor=_eventInterceptor;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) Class managerClass; // @synthesize managerClass=_managerClass;
@property(readonly, nonatomic) RCTViewManager *bridgelessViewManager; // @synthesize bridgelessViewManager=_bridgelessViewManager;
- (id)viewConfig;
- (void)setProps:(id)arg1 forShadowView:(id)arg2;
- (void)setProps:(id)arg1 forView:(id)arg2;
- (CDUnknownBlockType)propBlockForKey:(id)arg1 isShadowView:(_Bool)arg2;
- (CDUnknownBlockType)createPropBlock:(id)arg1 isShadowView:(_Bool)arg2;
- (void)callCustomSetter:(SEL)arg1 onView:(id)arg2 withProp:(id)arg3 isShadowView:(_Bool)arg4;
- (id)createShadowViewWithTag:(id)arg1;
- (id)createViewWithTag:(id)arg1 rootTag:(id)arg2;
- (id)init;
@property(readonly, nonatomic) __weak RCTViewManager *manager; // @synthesize manager=_manager;
- (id)initWithManagerClass:(Class)arg1 bridge:(id)arg2 eventDispatcher:(id)arg3;

@end

