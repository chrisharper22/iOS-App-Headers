//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGRTCVideoCallCoWatchMediaInfo, IGUserSession, NSArray, NSString;

@protocol IGVideoCallCreatorProtocol <NSObject>
- (void)createThreadAndCallUsers:(NSArray *)arg1 callType:(long long)arg2 callTrigger:(long long)arg3;
- (void)presentVideoCallCreationVCForUserSession:(IGUserSession *)arg1 entryPoint:(unsigned long long)arg2 cowatchMedia:(IGRTCVideoCallCoWatchMediaInfo *)arg3 arEffectId:(NSString *)arg4 trigger:(long long)arg5;
@end

