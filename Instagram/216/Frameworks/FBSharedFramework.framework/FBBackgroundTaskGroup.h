//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBDebouncer, NSMutableDictionary, NSString;

@interface FBBackgroundTaskGroup : NSObject
{
    struct mutex _taskMutex;
    NSMutableDictionary *_taskMap;
    unsigned long long _osTaskIdentifier;
    _Bool _expired;
    CDUnknownBlockType _expirationHandler;
    struct atomic<unsigned long> _overallTaskCount;
    struct atomic<unsigned long> _overallOSTaskCount;
    struct atomic<bool> _makesOSTasks;
    FBDebouncer *_debouncer;
    NSString *_label;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)_callExpirationHandler;
- (void)_endUIKitBackgroundTaskForIdentifier:(unsigned long long)arg1 expired:(_Bool)arg2;
- (void)_debounceEndUIKitBackgroundTaskForIdentifier:(unsigned long long)arg1;
- (void)_endOSBackgroundTaskIfNeededWithTaskIdentifier:(unsigned long long)arg1;
- (void)_beginOSBackgroundTaskIfNeeded;
- (void)endTask:(unsigned long long)arg1;
- (unsigned long long)beginTaskWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (void)_didBecomeActiveNotification:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (unsigned long long)numberOfTasks;
- (void)dealloc;
- (id)initWithLabel:(id)arg1;

@end

