//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOutputStream.h>

@class NSMutableArray;

@interface IGStreamingVideoCacheOutputStream : NSOutputStream
{
    NSMutableArray *_observers;
}

- (void).cxx_destruct;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)close;
- (_Bool)hasSpaceAvailable;
- (void)addObserver:(id)arg1;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)open;
- (id)init;

@end

