//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary;
@protocol IGKragleTransport;

@protocol IGKragleTransportDelegate <NSObject>
- (void)transport:(id <IGKragleTransport>)arg1 didReceiveMqttMessage:(NSDictionary *)arg2;
- (void)transport:(id <IGKragleTransport>)arg1 didReceiveSignalingMessage:(NSData *)arg2;
@end

