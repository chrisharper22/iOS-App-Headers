//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGDirectInboxMetadata, NSDictionary, NSOrderedSet;

@interface IGDirectCacheDiskWarmupStepResult : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGDirectInboxMetadata *_inboxMetadata;
    NSOrderedSet *_sanitizedThreads;
    NSDictionary *_threadClientStateByIds;
}

+ (id)threadClientStateByIds:(id)arg1;
+ (id)singleWarmupStep;
+ (id)sanitizedThreads:(id)arg1;
+ (id)inboxMetadata:(id)arg1;
- (void).cxx_destruct;
- (void)matchInboxMetadata:(CDUnknownBlockType)arg1 sanitizedThreads:(CDUnknownBlockType)arg2 threadClientStateByIds:(CDUnknownBlockType)arg3 singleWarmupStep:(CDUnknownBlockType)arg4;

@end

