//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSURLSessionDataDelegate-Protocol.h>
#import <FBSharedFramework/NSURLSessionDelegate-Protocol.h>
#import <FBSharedFramework/NSURLSessionDownloadDelegate-Protocol.h>
#import <FBSharedFramework/NSURLSessionTaskDelegate-Protocol.h>

@class MBICertPinning, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSURLSession;

@interface MBIHTTPExtensionContext : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionDownloadDelegate, NSURLSessionTaskDelegate>
{
    CDUnknownBlockType _backgroundTaskBeginHandler;
    CDUnknownBlockType _backgroundTaskEndHandler;
    NSMutableDictionary *_backgroundURLSessions;
    NSMutableDictionary *_backgroundURLSessionCompletionHandlers;
    MBICertPinning *_certPinning;
    NSURLSession *_dataURLSession;
    NSURLSession *_downloadURLSession;
    NSURLSession *_fireAndForgetURLSession;
    NSOperationQueue *_networkOperationQueue;
    struct __MCINetworkSession *_networkSession;
    NSURLSession *_uploadURLSession;
    NSURLSession *_uploadURLStreamingSession;
    _Bool _allowBuildBackgroundSessions;
    NSMutableSet *_pendingBackgroundURLSessionIdentifiers;
    NSMutableDictionary *_taskIdentifierToAppBackgroundTaskMap_MAIN;
    NSMutableDictionary *_taskIdentifierToDataMap_NETWORK;
    NSMutableDictionary *_taskIdentifierToRequestContextMap_NETWORK;
    NSMutableDictionary *_taskIdentifierToTaskMap_NETWORK;
    NSMutableDictionary *_taskIdentifierToUploadProgressContextMap_NETWORK;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)updateStreamingUploadStreamWithTaskIdentifier:(id)arg1 payload:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_closeStreamWithTask:(id)arg1 error:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)processBackgroundSessions;
- (void)reset;
- (void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureNetworkSession:(struct __MCINetworkSession *)arg1;
- (void)cancelWithTaskIdentifier:(id)arg1;
@property(readonly, nonatomic) NSURLSession *uploadURLStreamingSession;
@property(readonly, nonatomic) NSURLSession *uploadURLSession;
@property(readonly, nonatomic) __weak struct __MCINetworkSession *networkSession;
@property(readonly, nonatomic) NSURLSession *fireAndForgetURLSession;
@property(readonly, nonatomic) NSURLSession *downloadURLSession;
@property(readonly, nonatomic) NSURLSession *dataURLSession;
- (id)initWithCertPinning:(id)arg1 backgroundTaskBeginHandler:(CDUnknownBlockType)arg2 backgroundTaskEndHandler:(CDUnknownBlockType)arg3;
- (void)_buildURLSessionForIndentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

