//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;
@protocol IGBreakpadExceptionHandler, OS_dispatch_queue;

@interface IGAssertManager : NSObject
{
    NSMutableArray *_unhandledExceptions;
    id <IGBreakpadExceptionHandler> _exceptionHandler;
    NSMutableSet *_loggedAssertions;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableSet *loggedAssertions; // @synthesize loggedAssertions=_loggedAssertions;
@property(retain) id <IGBreakpadExceptionHandler> exceptionHandler; // @synthesize exceptionHandler=_exceptionHandler;
- (_Bool)_areTestsRunning;
- (_Bool)_isRunningSnapshotOrIntegrationTests;
- (_Bool)_isRunningUnitTest;
- (_Bool)shouldStopInDebuggerOnAssertionFailureForFile:(const char *)arg1 line:(int)arg2;
- (id)handleAssertionFailureInFile:(const char *)arg1 line:(int)arg2 function:(const char *)arg3 conditionString:(const char *)arg4 quickReport:(_Bool)arg5 allowMultipleAsserts:(_Bool)arg6 parameters:(id)arg7 descriptionFormat:(id)arg8;
- (id)handleAssertionFailureInFile:(const char *)arg1 line:(int)arg2 function:(const char *)arg3 conditionString:(const char *)arg4 quickReport:(_Bool)arg5 allowMultipleAsserts:(_Bool)arg6 parameters:(id)arg7 description:(id)arg8;
- (id)reportAssertionFailureInFile:(const char *)arg1 atLine:(int)arg2 withMessage:(id)arg3 parameters:(id)arg4 quickReport:(_Bool)arg5 allowMultipleAsserts:(_Bool)arg6;
- (id)init;

@end

