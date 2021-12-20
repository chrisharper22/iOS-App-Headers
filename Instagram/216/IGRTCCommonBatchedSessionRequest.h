//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGRTCCommonBatchedSessionRequest : NSObject
{
    unsigned long long _setupOptions;
    CDUnknownBlockType _requestParamsProvider;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    CDUnknownBlockType _loggingHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType loggingHandler; // @synthesize loggingHandler=_loggingHandler;
@property(readonly, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(readonly, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(readonly, nonatomic) CDUnknownBlockType requestParamsProvider; // @synthesize requestParamsProvider=_requestParamsProvider;
@property(readonly, nonatomic) unsigned long long setupOptions; // @synthesize setupOptions=_setupOptions;
- (id)initWithSetupOptions:(unsigned long long)arg1 requestParamsProvider:(CDUnknownBlockType)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4 loggingHandler:(CDUnknownBlockType)arg5;

@end

