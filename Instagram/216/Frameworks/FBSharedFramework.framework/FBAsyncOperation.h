//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface FBAsyncOperation : NSOperation
{
    struct {
        unsigned int isCancelled:1;
        unsigned int isExecuting:1;
        unsigned int isFinished:1;
    } _flags;
    struct _opaque_pthread_mutex_t _recursiveMutex;
}

- (void)start;
- (void)run:(id)arg1;
- (void)finish;
- (void)cancel;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isCancelled;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;

@end

