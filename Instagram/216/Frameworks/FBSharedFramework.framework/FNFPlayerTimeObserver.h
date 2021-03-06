//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface FNFPlayerTimeObserver : NSObject
{
    _Bool _fireOnceAtExactTime;
    _Bool _followMasterClock;
    _Bool _suspended;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_source> *_timer;
    CDStruct_1b6d18a9 _interval;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) _Bool followMasterClock; // @synthesize followMasterClock=_followMasterClock;
@property(nonatomic) _Bool fireOnceAtExactTime; // @synthesize fireOnceAtExactTime=_fireOnceAtExactTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) CDStruct_1b6d18a9 interval; // @synthesize interval=_interval;

@end

