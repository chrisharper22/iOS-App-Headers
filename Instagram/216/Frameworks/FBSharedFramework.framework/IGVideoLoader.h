//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IGVideoLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_videoIdToSessions;
}

- (void).cxx_destruct;
- (void)_queuedCancelLoadingVideo:(id)arg1 cancelRequestTime:(double)arg2;
- (void)_queuedLoadVideo:(id)arg1 config:(id)arg2 videoProxy:(id)arg3 launcherSetProvider:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)cancelLoadingVideo:(id)arg1;
- (void)loadVideo:(id)arg1 config:(id)arg2 videoProxy:(id)arg3 launcherSetProvider:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

@end

