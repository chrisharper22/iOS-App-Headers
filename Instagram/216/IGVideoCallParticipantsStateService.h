//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRealtimeServerPayloadHandler-Protocol.h"

@class NSMapTable, NSString;

@interface IGVideoCallParticipantsStateService : NSObject <IGRealtimeServerPayloadHandler>
{
    NSMapTable *_publishers;
}

- (void).cxx_destruct;
- (void)handlePayload:(id)arg1;
- (void)unsubscribeForPublisher:(id)arg1;
- (void)subscribeWithPublisher:(id)arg1 forVideoCallId:(id)arg2;
- (id)initWithRealtimeMQTTClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

