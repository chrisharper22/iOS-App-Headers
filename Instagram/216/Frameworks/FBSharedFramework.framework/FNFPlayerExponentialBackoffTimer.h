//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface FNFPlayerExponentialBackoffTimer : NSObject
{
    unsigned long long _baseDurationMs;
    int _maxExponent;
    unsigned long long _maxBackoffTimeMs;
    _Bool _isRandomized;
    _Bool _isSuspended;
    int _currentExponent;
    NSDate *_fireDate;
}

- (void).cxx_destruct;
@property(nonatomic) int currentExponent; // @synthesize currentExponent=_currentExponent;
@property(retain, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (void)_clear;
- (void)_cancel;
- (double)scheduleNextTimer:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (double)scheduleNextTimer:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithBaseDurationMs:(int)arg1 maxExponent:(int)arg2 isRandomized:(_Bool)arg3;
- (id)initWithBaseDuration:(int)arg1 maxExponent:(int)arg2 isRandomized:(_Bool)arg3;
- (id)initWithMaxBackoffTime:(unsigned long long)arg1 baseDuration:(unsigned long long)arg2 isRandomized:(_Bool)arg3;
- (id)initWithBaseDuration:(int)arg1 maxExponent:(int)arg2;

@end

