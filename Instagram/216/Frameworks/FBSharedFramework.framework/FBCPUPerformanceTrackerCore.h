//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBCPUPerformanceTrackerCore : NSObject
{
    struct mutex _mutex;
    CDUnknownBlockType _callstacksBlock;
    CDUnknownBlockType _completionBlock;
    unsigned int _captureInterval;
    long long _timestampOfActivationNanoseconds;
    unsigned long long _threadSamplingPolicy;
    unsigned int _portToSample;
    _Bool _enableDirectCpuStackCapture;
    _Bool _isBacktraceCaptureSetup;
}

+ (id)shared;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setupBacktraceCapture;
- (void)_trackerLoop:(id)arg1;
- (void)stopSampling;
- (_Bool)startSamplingThread:(unsigned long long)arg1 withRate:(unsigned int)arg2 singleMachPort:(unsigned int)arg3 enableDirectCpuStackCapture:(_Bool)arg4 enableThreadMetadataCapture:(_Bool)arg5 callstacksBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;

@end

