//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBReactStartupLoggerData;
@protocol FBReactAppPerfLoggerProtocol, OS_dispatch_queue;

@interface FBReactStartupLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <FBReactAppPerfLoggerProtocol> _appPerfLogger;
    CDUnknownBlockType _completionBlock;
    FBReactStartupLoggerData *_loggerData;
}

- (void).cxx_destruct;
@property(retain) FBReactStartupLoggerData *loggerData; // @synthesize loggerData=_loggerData;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)_sendEventsIfReady;
- (void)javaScriptDidLoad:(id)arg1;
- (void)logBridgelessSurfaceLoadedWithPerformanceLogger:(id)arg1;
- (void)logHostDidInit;
- (void)logBridgeDidInit;
- (void)logSchedulePrefetchSegmentsStop;
- (void)logSchedulePrefetchSegmentsStart;
- (void)logRootViewInitStop;
- (void)logRootViewInitStart;
- (id)initWithAppPerfLogger:(id)arg1 bridgeInitializationCount:(unsigned long long)arg2;

@end

