//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeAsyncLocalStorageSpec-Protocol.h"
#import "RCTBridgeModule-Protocol.h"
#import "RCTInvalidating-Protocol.h"

@class NSMutableDictionary, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface RCTAsyncLocalStorage : NSObject <NativeAsyncLocalStorageSpec, RCTBridgeModule, RCTInvalidating>
{
    _Bool _haveSetup;
    NSMutableDictionary *_manifest;
    _Bool _clearOnInvalidate;
}

+ (const struct RCTMethodInfo *)__rct_export__4495;
+ (const struct RCTMethodInfo *)__rct_export__4414;
+ (const struct RCTMethodInfo *)__rct_export__4113;
+ (const struct RCTMethodInfo *)__rct_export__3762;
+ (const struct RCTMethodInfo *)__rct_export__3571;
+ (const struct RCTMethodInfo *)__rct_export__3390;
+ (void)clearAllData;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(nonatomic) _Bool clearOnInvalidate; // @synthesize clearOnInvalidate=_clearOnInvalidate;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)getAllKeys:(CDUnknownBlockType)arg1;
- (void)clear:(CDUnknownBlockType)arg1;
- (void)multiRemove:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)multiMerge:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)multiSet:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)multiGet:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)_writeEntry:(id)arg1 changedManifest:(_Bool *)arg2;
- (id)_getValueForKey:(id)arg1 errorOut:(id *)arg2;
- (id)_appendItemForKey:(id)arg1 toArray:(id)arg2;
- (id)_writeManifest:(id *)arg1;
- (id)_ensureSetup;
- (id)_filePathForKey:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidate;
- (void)clearAllData;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

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

