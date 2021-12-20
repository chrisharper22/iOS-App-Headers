//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGBackgroundSchedulerTaskDelegate-Protocol.h>
#import <FBSharedFramework/IGBackgroundTaskScheduling-Protocol.h>

@class IGBackgroundTaskConfig, NSMutableDictionary, NSString, UIApplication;
@protocol IGScheduler;

@interface IGBackgroundTaskScheduler : NSObject <IGBackgroundSchedulerTaskDelegate, IGBackgroundTaskScheduling>
{
    UIApplication *_application;
    IGBackgroundTaskConfig *_config;
    id <IGScheduler> _queueScheduler;
    NSMutableDictionary *_scheduledTasks;
    NSMutableDictionary *_pendingTasks;
    _Bool _shouldCreateIntenalTasks;
    _Bool _applicationIsInBackground;
    unsigned long long _taskIdentifierCounter;
    _Bool _locked;
    struct recursive_mutex _mutex;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)lockSchedulerThatWillBeUnclockedOnWillEnterForeground_I_KNOW_WHAT_IM_DOING;
- (void)taskDidExpire:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)applicationDidStart;
- (void)endIGBackgroundTask:(unsigned long long)arg1;
- (void)_afterTaskScheduling:(unsigned long long)arg1 name:(id)arg2 expirationHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)beginIGBackgroundTaskWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (void)updateBackgroundTasksConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
