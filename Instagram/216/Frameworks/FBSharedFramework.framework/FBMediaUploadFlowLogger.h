//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;
@protocol FBMediaUploadEventLogging;

@interface FBMediaUploadFlowLogger : NSObject
{
    NSString *_moduleName;
    NSMutableDictionary *_extras;
    id <FBMediaUploadEventLogging> _eventLogger;
    NSDate *_flowStartDate;
    _Bool _flowStarted;
}

- (void).cxx_destruct;
- (void)_logEvent:(id)arg1 extras:(id)arg2;
- (void)_logEvent:(id)arg1;
- (void)logStoryFetchFailed:(id)arg1;
- (void)logStoryFetchFinished;
- (void)logServerProcessingFailed:(id)arg1;
- (void)logServerProcessingFinished;
- (void)logFlowUploadStart;
- (void)logFlowStart;
- (void)logFlowFailed:(id)arg1 extras:(id)arg2;
- (void)logFlowCanceled:(id)arg1;
- (void)logFlowSuccess;
- (void)logFlowPause;
- (id)initWithModuleName:(id)arg1 uploadSessionID:(id)arg2 sourceType:(id)arg3 mediaType:(id)arg4 extras:(id)arg5 eventLogger:(id)arg6;

@end

