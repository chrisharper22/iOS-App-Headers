//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGScopedListener-Protocol.h"

@class IGLiveBroadcast, NSString;

@protocol IGLiveBroadcastListener <IGScopedListener>
- (void)liveBroadcastDeleted:(NSString *)arg1;
- (void)liveBroadcastUpdated:(IGLiveBroadcast *)arg1;
@end

