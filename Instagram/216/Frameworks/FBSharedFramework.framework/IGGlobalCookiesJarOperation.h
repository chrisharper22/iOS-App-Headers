//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <FBSharedFramework/IGCookieOperationEnumeratorDelegate-Protocol.h>

@class IGCookieOperationEnumerator, NSArray, NSObject, NSString, NSTimer;
@protocol IGCookieOperationDelegate, OS_dispatch_queue;

@interface IGGlobalCookiesJarOperation : NSOperation <IGCookieOperationEnumeratorDelegate>
{
    id <IGCookieOperationDelegate> _delegate;
    NSTimer *_executionTimer;
    long long _currentIndex;
    unsigned long long _batchSize;
    double _delayBetweenSteps;
    double _delayBetweenBatches;
    IGCookieOperationEnumerator *_currentEnumerator;
    _Bool _stopEumeration;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _finished;
    _Bool _executing;
    _Bool _triggeredOnFocus;
    NSString *_jarIdentifier;
    NSArray *_cookies;
    long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool triggeredOnFocus; // @synthesize triggeredOnFocus=_triggeredOnFocus;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
@property(readonly, nonatomic) NSString *jarIdentifier; // @synthesize jarIdentifier=_jarIdentifier;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void)_finishOperation;
- (void)_stopEumeration;
- (void)cancel;
- (void)start;
- (void)didFinishEnumeration:(long long)arg1;
- (void)_perfromOperationBatch;
- (void)_killTimerOnMainQueue;
- (void)_onTimer;
- (void)_resetExecutionTimerOnMainQueue;
- (void)_resetExecutionTimer;
- (id)syncCancelAndGetCookiesToEnumerate;
- (id)initWithJarIdentifier:(id)arg1 cookies:(id)arg2 operationType:(long long)arg3 triggeredOnFocus:(_Bool)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

