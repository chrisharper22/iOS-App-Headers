//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTBridgeModule-Protocol.h"
#import "RCTTurboModule-Protocol.h"

@class NSDictionary, NSString;

@protocol NativeAnalyticsFunnelLoggerSpec <RCTBridgeModule, RCTTurboModule>
- (void)cancelFunnel:(NSString *)arg1 instanceID:(double)arg2;
- (void)addFunnelTag:(NSString *)arg1 instanceID:(double)arg2 tag:(NSString *)arg3;
- (void)endFunnel:(NSString *)arg1 instanceID:(double)arg2;
- (void)addActionToFunnel:(NSString *)arg1 instanceID:(double)arg2 actionName:(NSString *)arg3 tag:(NSString *)arg4 payload:(NSDictionary *)arg5;
- (void)startFunnel_DEV_MODE:(NSString *)arg1 instanceID:(double)arg2;
- (void)startFunnel:(NSString *)arg1 instanceID:(double)arg2;
@end
