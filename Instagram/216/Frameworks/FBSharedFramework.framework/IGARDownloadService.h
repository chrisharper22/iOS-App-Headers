//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGARFileURLEvictor, NSOperationQueue;
@protocol IGAPIClient, OS_dispatch_queue;

@interface IGARDownloadService : NSObject
{
    id <IGAPIClient> _networker;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_executionQueue;
    IGARFileURLEvictor *_evictor;
}

- (void).cxx_destruct;
- (id)fetchWithRemoteURL:(id)arg1 priority:(long long)arg2 callbackQueue:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (id)initWithNetworker:(id)arg1 temporarySpaceSizeLimit:(unsigned long long)arg2;

@end

