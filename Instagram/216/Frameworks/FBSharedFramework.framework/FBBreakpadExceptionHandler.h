//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface FBBreakpadExceptionHandler : NSObject
{
    _Bool _hadCrashesOnStartup;
    NSMutableSet *_breakpadExtraParameters;
    long long _currentSessionGeneratedStackTracesCount;
    void *_breakpad;
}

- (void).cxx_destruct;
- (id)_crashReportsToUpload;
- (void)saveLastFatalCrashReport:(id)arg1;
- (void)cleanupCrashReport:(id)arg1;
- (int)processReports:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)shouldEnableEXC_GUARDForBreakpad:(_Bool)arg1;
- (void)enableBufferedStringWrites;
- (id)generateReportWithParams:(id)arg1 isQuickReport:(_Bool)arg2 quickReportOverride:(CDUnknownBlockType)arg3;
- (id)breakpadCopyLargeParamsToNewExtraFile;
- (id)generateExtraFileName;
- (void)processSingleReport:(id)arg1 crashReportConfigName:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)processSynchronously:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)send;
- (void)resetGeneratedStackTracesCountFromUserDefaults;
- (void)incrementGeneratedStackTracesCounter;
- (int)crashReportCountExcludingExplicitlyGeneratedStacktraces;
- (int)fatalCrashReportCount;
- (int)crashReportCount;
- (_Bool)hadCrashesOnStartup;
- (id)_latestBreakpadReportIncludingUnprocessedReports:(_Bool)arg1 startWithLatest:(_Bool)arg2;
- (id)latestUnsentBreakpadCrashReport;
- (id)latestBreakpadCrashReportIncludingUnprocessedReports;
- (id)latestBreakpadCrashReport;
- (id)genericGetBreakpadParamForKey:(id)arg1;
- (void)setExceptionInfoStringTruncatingToAvoidExpensiveWrite:(id)arg1 forKey:(id)arg2;
- (void)setWillGenerateMinidumpCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setExceptionInfoStringWithExpensiveWrite:(id)arg1 forKey:(id)arg2;
- (id)initWithExceptionParams:(id)arg1;

@end

