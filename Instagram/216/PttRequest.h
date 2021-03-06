//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ServerKey;

@interface PttRequest : NSObject
{
    id <ServerKey> _serverKey;
    CDUnknownBlockType _backgroundDispatcher;
    CDUnknownBlockType _requestExecutionDelegate;
    CDUnknownBlockType _signPayloadDelegate;
    struct unique_ptr<fbpay::ptt::Ptt, std::default_delete<fbpay::ptt::Ptt>> _ptt;
    _Bool _isExecutionStarted;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property _Bool isExecutionStarted; // @synthesize isExecutionStarted=_isExecutionStarted;
- (void)createPttWithSign:(id)arg1 withResponseCallback:(CDUnknownBlockType)arg2 withDispatcher:(CDUnknownBlockType)arg3;
- (void)prepareAndSignPayload:(id)arg1 sensitiveKeys:(id)arg2 operation:(id)arg3 signByATs:(id)arg4 withResponseCallback:(CDUnknownBlockType)arg5 withServerKey:(id)arg6 withDispatcher:(CDUnknownBlockType)arg7;
- (void)executeWithData:(id)arg1 sensitiveKeys:(id)arg2 operation:(id)arg3 signByATFingerprints:(id)arg4 responseCallback:(CDUnknownBlockType)arg5 dispatcher:(CDUnknownBlockType)arg6;
- (id)initWithServerKey:(id)arg1 signPayload:(CDUnknownBlockType)arg2 executePttRequest:(CDUnknownBlockType)arg3 backgroundDispatcher:(CDUnknownBlockType)arg4;
- (id)initWithServerKey:(id)arg1 signPayload:(CDUnknownBlockType)arg2 executePttRequest:(CDUnknownBlockType)arg3;

@end

