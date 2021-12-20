//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, NSMutableOrderedSet;
@protocol IGLiveTwoLevelBufferedQueueDelegate, IGLiveTwoLevelBufferedQueueHandler;

@interface IGLiveTwoLevelBufferedQueue : NSObject
{
    NSMutableOrderedSet *_buffer;
    long long _bufferSize;
    long long _bufferCount;
    id <IGLiveTwoLevelBufferedQueueHandler> _handler;
    id <IGLiveTwoLevelBufferedQueueDelegate> _delegate;
    FBTimer *_timer;
    _Bool _suspended;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
- (void)_update;
- (void)enqueue:(id)arg1;
- (id)initWithDequeueInterval:(double)arg1 bufferSize:(long long)arg2 queueHandler:(id)arg3 delegate:(id)arg4;

@end

