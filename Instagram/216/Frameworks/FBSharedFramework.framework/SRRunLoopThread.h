//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSObject, NSRunLoop;
@protocol OS_dispatch_group;

@interface SRRunLoopThread : NSThread
{
    NSObject<OS_dispatch_group> *_waitGroup;
    NSRunLoop *_runLoop;
}

+ (id)sharedThread;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void)main;
- (id)init;

@end

