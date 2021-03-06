//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeMethod-Protocol.h"

@class NSArray, NSInvocation, NSMutableArray, NSString;

@interface RCTModuleMethod : NSObject <RCTBridgeMethod>
{
    Class _moduleClass;
    const struct RCTMethodInfo *_methodInfo;
    NSString *_JSMethodName;
    SEL _selector;
    NSInvocation *_invocation;
    NSArray *_argumentBlocks;
    NSMutableArray *_retainedObjects;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) Class moduleClass; // @synthesize moduleClass=_moduleClass;
@property(readonly, copy) NSString *description;
- (id)methodName;
- (id)invokeWithBridge:(id)arg1 module:(id)arg2 arguments:(id)arg3;
@property(readonly, nonatomic) long long functionType;
@property(readonly, nonatomic) const char *JSMethodName;
@property(readonly, nonatomic) SEL selector;
- (void)processMethodSignature;
- (id)initWithExportedMethod:(const struct RCTMethodInfo *)arg1 moduleClass:(Class)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

