//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBAnnouncing-Protocol.h>

@class NSArray, NSHashTable, NSString;

@interface IGRuntimeAnnouncer : NSObject <FBAnnouncing>
{
    struct mutex _mutex;
    NSHashTable *_listeners;
    NSArray *_strongListeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (_Bool)hasListeners;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

