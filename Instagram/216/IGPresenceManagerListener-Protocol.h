//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGPresenceManager, IGUserPresenceUpdate, NSArray, NSDictionary;

@protocol IGPresenceManagerListener <NSObject>
- (void)presenceManager:(IGPresenceManager *)arg1 didReceiveThreadPresenceUpdates:(NSArray *)arg2;
- (void)presenceManager:(IGPresenceManager *)arg1 didReceiveSnapshot:(NSDictionary *)arg2;
- (void)presenceManager:(IGPresenceManager *)arg1 didReceiveUpdate:(IGUserPresenceUpdate *)arg2;
@end

