//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IGNativeRoomsCallControllerIntf <NSObject>
- (void)leaveRoom;
- (void)joinRoomURL:(NSString *)arg1 isE2eeMandated:(_Bool)arg2;
- (void)openRoomURL:(NSString *)arg1 selfVideoEnabled:(_Bool)arg2 autoJoin:(_Bool)arg3 userIdsToRing:(NSArray *)arg4 isE2eeMandated:(_Bool)arg5 ttrcTraceId:(NSString *)arg6 completion:(void (^)(IGRTCKragleCall *))arg7;
@end

