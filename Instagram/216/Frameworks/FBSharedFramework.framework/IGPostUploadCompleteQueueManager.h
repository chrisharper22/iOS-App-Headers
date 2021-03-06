//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IGPostUploadCompleteQueueManager : NSObject
{
    NSMutableDictionary *_taskMap;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)cleanUpTasksForUpload:(id)arg1;
- (void)triggerTasksForUpload:(id)arg1 withItem:(id)arg2;
- (void)removeTaskForUpload:(id)arg1 withKey:(id)arg2;
- (void)addTask:(id)arg1 forUpload:(id)arg2 withKey:(id)arg3;
- (id)init;

@end

