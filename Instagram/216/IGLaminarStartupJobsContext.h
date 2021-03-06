//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class IGDeviceSession, NSDictionary, NSString, NSURLSession;

@interface IGLaminarStartupJobsContext : NSObject <NSURLSessionDelegate>
{
    CDUnknownBlockType _responseBlock;
    NSDictionary *_laminarNextFeedRequestParams;
    NSURLSession *_urlSession;
    struct recursive_mutex _mutex;
    _Bool _shouldWaitForResponse;
    IGDeviceSession *_deviceSession;
    NSString *_requestId;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldWaitForResponse; // @synthesize shouldWaitForResponse=_shouldWaitForResponse;
@property(readonly, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, nonatomic) IGDeviceSession *deviceSession; // @synthesize deviceSession=_deviceSession;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dispatchLaminarURLRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLaminarResponse:(CDUnknownBlockType)arg1;
- (void)setLaminarNextFeedRequestParams:(id)arg1;
- (id)initWithDeviceSession:(id)arg1 requestId:(id)arg2 shouldWaitForResponse:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

