//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDjangoTransport, NSError;

@protocol IGRTCDjangoTransportLoggingDelegate <NSObject>
- (void)djangoTransport:(IGDjangoTransport *)arg1 receivedJoinResponseWithResult:(_Bool)arg2 error:(NSError *)arg3;
- (void)djangoTransportDidSendJoinRequest:(IGDjangoTransport *)arg1;
@end
