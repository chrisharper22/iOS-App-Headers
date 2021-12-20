//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRealtimePatchEventListener-Protocol.h"

@class IGLiveRealtimeTopicHandler, IGRealtimeMqttClient, IGRealtimePatchEventForwarder, NSString;

@interface IGLiveRealtimeTopicHandlingService : NSObject <IGRealtimePatchEventListener>
{
    IGRealtimeMqttClient *_realtimeClient;
    IGRealtimePatchEventForwarder *_realtimePatchEventForwarder;
    IGLiveRealtimeTopicHandler *_realtimeTopicHandler;
    _Bool _serviceDidStart;
}

- (void).cxx_destruct;
- (void)_handleRealtimeOperation:(id)arg1;
- (void)handleRealtimePatchEvent:(id)arg1 rawPayload:(id)arg2;
- (void)startService;
- (id)initWithUserSession:(id)arg1 realtimeClient:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

