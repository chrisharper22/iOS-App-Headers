//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGOffProcessCompletionHandling-Protocol.h"
#import "IGOffProcessNetworking-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class IGBackgroundTaskScheduler, IGOffProcessResponseFileManager, NSOperationQueue, NSString, NSURLSession;
@protocol IGConcurrentSessionHandling, IGDataUsageLogging, IGNetworkingUserSessionAnalyticsLogger;

@interface IGOffProcessNetworkLayer : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate, IGOffProcessCompletionHandling, IGOffProcessNetworking>
{
    NSURLSession *_session;
    NSOperationQueue *_operationQueue;
    IGOffProcessResponseFileManager *_responseFileManager;
    id <IGDataUsageLogging> _dataUsageLogger;
    id <IGNetworkingUserSessionAnalyticsLogger> _analyticsLogger;
    IGBackgroundTaskScheduler *_taskScheduler;
    id <IGConcurrentSessionHandling> _concurrentSessionHandler;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
- (void)_logOffProcessNetworkResponse:(id)arg1 requestInfo:(id)arg2 requestInitialDate:(id)arg3 task:(id)arg4;
- (void)completeOffProcessRequest:(id)arg1 response:(id)arg2 handlerKey:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)backgroundTransfersDidFinishWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getOffProcessTasksForHandlerKey:(id)arg1 userPk:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) _Bool appOnScreen;
- (id)startRequest:(id)arg1 policy:(id)arg2 requestInfo:(id)arg3;
- (id)_initWithDataUsageLogger:(id)arg1 analyticsLogger:(id)arg2 taskScheduler:(id)arg3 concurrentSessionHandler:(id)arg4 URLSessionBlock:(CDUnknownBlockType)arg5 operationQueue:(id)arg6 responseFileManager:(id)arg7;
- (id)initWithDataUsageLogger:(id)arg1 analyticsLogger:(id)arg2 taskScheduler:(id)arg3 concurrentSessionHandler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
