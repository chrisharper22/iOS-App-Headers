//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMedia, NSDictionary;

@protocol IGContextualFeedLogger <NSObject>
@property(readonly, nonatomic) _Bool isSessionAlive;
- (NSDictionary *)navigationExtras;
- (void)logReachedEndOfFeed;
- (void)logContextualFeedBottomNuxWasTapped;
- (void)logSessionDidEndWithMedia:(IGMedia *)arg1;
- (void)logSessionDidStartWithMedia:(IGMedia *)arg1;
@end

