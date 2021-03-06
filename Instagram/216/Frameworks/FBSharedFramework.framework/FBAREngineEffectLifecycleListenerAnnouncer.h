//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSHashTable;
@protocol FBAREngineEffectLifecycleEffectDescriptor, OS_dispatch_queue;

@interface FBAREngineEffectLifecycleListenerAnnouncer : NSObject <NSSecureCoding>
{
    id <FBAREngineEffectLifecycleEffectDescriptor> _effectDescriptor;
    NSHashTable *_listeners;
    NSObject<OS_dispatch_queue> *_listenerQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithEffectDescriptor:(id)arg1 listenerQueue:(id)arg2;
- (void).cxx_destruct;
- (void)notifyDidChangeToDifferentEffectForEffectWithEffectID:(id)arg1 analyticsIdentifier:(id)arg2 instanceAnalyticsIdentifier:(id)arg3;
- (void)notifyDidFailRenderFirstFrameWithFailureReason:(id)arg1 effectId:(id)arg2 analyticsIdentifier:(id)arg3 instanceAnalyticsIdentifier:(id)arg4;
- (void)notifyDidRenderFirstFrameForEffectWithEffectID:(id)arg1 analyticsIdentifier:(id)arg2 instanceAnalyticsIdentifier:(id)arg3;
- (void)notifyDidFailToLoadEffectWithFailureReason:(id)arg1 effectID:(id)arg2 analyticsIdentifier:(id)arg3 instanceAnalyticsIdentifier:(id)arg4;
- (void)notifyDidLoadEffectWithEffectID:(id)arg1 analyticsIdentifier:(id)arg2 instanceAnalyticsIdentifier:(id)arg3 manifest:(shared_ptr_8f3f58d1)arg4 effectAttribution:(shared_ptr_f86b0e66)arg5;
- (void)_notifyAllListeners:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithEffectDescriptor:(id)arg1 listenerQueue:(id)arg2;

@end

