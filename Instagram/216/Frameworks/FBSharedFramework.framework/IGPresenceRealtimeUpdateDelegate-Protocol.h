//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGPresenceRealtimeDataProvider, NSArray, NSString;

@protocol IGPresenceRealtimeUpdateDelegate <NSObject>
- (_Bool)shouldUseNewLastActivityTimeParsing;
- (void)presenceRealtimeDataProvider:(IGPresenceRealtimeDataProvider *)arg1 didReceiveUpdateForUserPk:(NSString *)arg2 isActive:(_Bool)arg3 lastActivityAtMs:(double)arg4 capabilities:(unsigned long long)arg5 correlationId:(NSString *)arg6 threadPresencePayload:(NSArray *)arg7 isCloseFriend:(_Bool)arg8;
@end

