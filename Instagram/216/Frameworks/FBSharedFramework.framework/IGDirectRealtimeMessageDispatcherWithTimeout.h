//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectRealtimeMessageDispatcher;

@interface IGDirectRealtimeMessageDispatcherWithTimeout : NSObject
{
    IGDirectRealtimeMessageDispatcher *_realtimeMessageDispatcher;
}

- (void).cxx_destruct;
- (void)_cancelMessageForKey:(id)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)_cancelMessageIfNecessaryForKey:(id)arg1 requestState:(id)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)_messageDidFailWithError:(id)arg1 requestState:(id)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)_messageDidSucceedWithAck:(id)arg1 requestState:(id)arg2 successHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 messageKey:(id)arg2 timeout:(double)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (id)initWithRealtimeMessageDispatcher:(id)arg1;

@end
