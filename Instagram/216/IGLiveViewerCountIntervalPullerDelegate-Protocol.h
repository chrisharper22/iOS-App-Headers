//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveBroadcastUpdate, IGLiveViewerCountIntervalPuller, NSDate;

@protocol IGLiveViewerCountIntervalPullerDelegate <NSObject>
- (void)viewerCountIntervalPuller:(IGLiveViewerCountIntervalPuller *)arg1 didHaveBroadcastUpdate:(IGLiveBroadcastUpdate *)arg2 requestTimestamp:(NSDate *)arg3;
@end

