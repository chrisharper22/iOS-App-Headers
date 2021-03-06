//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAPIClient-Protocol.h>
#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class IGScopedNetworker, NSString;
@protocol IGSystemMessageListener;

@interface IGUserSessionNetworker : NSObject <IGUserSessionEndingObject, IGAPIClient>
{
    IGScopedNetworker *_scopedNetworker;
}

- (void).cxx_destruct;
- (id)currentUserPK;
- (id)authHeaderForSSOToken;
- (id)startRequest:(id)arg1 policy:(id)arg2 callbackQueue:(id)arg3 retryHandler:(CDUnknownBlockType)arg4 cachedResponseHandler:(CDUnknownBlockType)arg5 startHandler:(CDUnknownBlockType)arg6 bytesSentHandler:(CDUnknownBlockType)arg7 firstByteFlushedHandler:(CDUnknownBlockType)arg8 lastByteAckedHandler:(CDUnknownBlockType)arg9 responseReceivedHandler:(CDUnknownBlockType)arg10 bytesReceivedHandler:(CDUnknownBlockType)arg11 successHandler:(CDUnknownBlockType)arg12 failureHandler:(CDUnknownBlockType)arg13;
- (void)cancelAllRequestsWithCancellationIdentifier:(id)arg1;
- (void)getOffProcessTasksForHandlerKey:(id)arg1 userPk:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)startOffProcessRequest:(id)arg1 policy:(id)arg2 requestInfo:(id)arg3;
- (id)startRequestWithoutCallbackQueue:(id)arg1 policy:(id)arg2 callbacks:(id)arg3;
- (id)startRequest:(id)arg1 policy:(id)arg2 completionQueue:(id)arg3 cacheHandler:(CDUnknownBlockType)arg4 bytesSentHandler:(CDUnknownBlockType)arg5 firstByteFlushedHandler:(CDUnknownBlockType)arg6 lastByteAckedHandler:(CDUnknownBlockType)arg7 bytesReceivedHandler:(CDUnknownBlockType)arg8 successHandler:(CDUnknownBlockType)arg9 failureHandler:(CDUnknownBlockType)arg10;
- (id)startRequest:(id)arg1 policy:(id)arg2 completionQueue:(id)arg3 cacheHandler:(CDUnknownBlockType)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6;
- (id)routingHeaders;
- (id)APIHeadersAsCookies;
- (id)startStreamingAPIRequest:(id)arg1 policy:(id)arg2 completionQueue:(id)arg3 cacheHandler:(CDUnknownBlockType)arg4 bytesSentHandler:(CDUnknownBlockType)arg5 firstByteFlushedHandler:(CDUnknownBlockType)arg6 lastByteAckedHandler:(CDUnknownBlockType)arg7 bytesReceivedHandler:(CDUnknownBlockType)arg8 parsingHandler:(CDUnknownBlockType)arg9 successHandler:(CDUnknownBlockType)arg10 failureHandler:(CDUnknownBlockType)arg11;
- (id)startAPIRequest:(id)arg1 policy:(id)arg2 completionQueue:(id)arg3 cacheHandler:(CDUnknownBlockType)arg4 bytesSentHandler:(CDUnknownBlockType)arg5 firstByteFlushedHandler:(CDUnknownBlockType)arg6 lastByteAckedHandler:(CDUnknownBlockType)arg7 parsingHandler:(CDUnknownBlockType)arg8 successHandler:(CDUnknownBlockType)arg9 failureHandler:(CDUnknownBlockType)arg10;
- (id)startAPIRequest:(id)arg1 policy:(id)arg2 completionQueue:(id)arg3 cacheHandler:(CDUnknownBlockType)arg4 parsingHandler:(CDUnknownBlockType)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7;
- (id)startAPIRequest:(id)arg1 policy:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)userSessionWillEnd;
@property(nonatomic) __weak id <IGSystemMessageListener> systemMessageDelegate;
- (id)initWithScopedNetworker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

