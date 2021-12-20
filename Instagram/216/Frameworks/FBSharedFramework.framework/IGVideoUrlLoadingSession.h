//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGVideoProxyListener-Protocol.h>

@class IGVideoProxy, NSMutableDictionary, NSString;
@protocol IGStreamingVideoCachePerformanceEventListener, IGUserLauncherSet, IGVideoURLProvider, OS_dispatch_queue;

@interface IGVideoUrlLoadingSession : NSObject <IGVideoProxyListener>
{
    NSMutableDictionary *_urlToSpecs;
    IGVideoProxy *_proxy;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionBlock;
    _Bool _synchronousMode;
    id <IGStreamingVideoCachePerformanceEventListener> _performanceEventListener;
    id <IGUserLauncherSet> _launcherSet;
    NSMutableDictionary *_urlToSpecsThreadSafeCopy;
    struct mutex _urlToSpecsThreadSafeMutex;
    id <IGVideoURLProvider> _video;
    NSString *_module;
    long long _index;
    unsigned long long _priority;
    unsigned long long _status;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) id <IGVideoURLProvider> video; // @synthesize video=_video;
- (void)videoProxyDidEndRequestForURL:(id)arg1 requestRange:(struct _NSRange)arg2 error:(id)arg3 cancelRequestTime:(double)arg4;
- (void)_cancelAllRequestsWithError:(id)arg1 cancelRequestTime:(double)arg2;
- (void)cancelLoadingWithCancelRequestTime:(double)arg1;
- (void)startLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLoadingSpecs:(id)arg1 video:(id)arg2 module:(id)arg3 index:(long long)arg4 priority:(unsigned long long)arg5 proxy:(id)arg6 performanceEventListner:(id)arg7 queue:(id)arg8 synchronousMode:(_Bool)arg9 launcherSet:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

