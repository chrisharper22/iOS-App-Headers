//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGRTCVideoView, IGRTCVideoViewManager, NSCoder, NSString;

@protocol IGRTCVideoViewManagerDelegate <NSObject>
+ (id)new;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(NSCoder *)arg1;
- (id)init;
- (void)videoViewManager:(IGRTCVideoViewManager *)arg1 didResumeVideoStreamId:(NSString *)arg2;
- (void)videoViewManager:(IGRTCVideoViewManager *)arg1 didStallVideoStreamId:(NSString *)arg2;
- (void)videoViewManager:(IGRTCVideoViewManager *)arg1 didRemoveReadyToDisplayVideoStreamId:(NSString *)arg2;
- (void)videoViewManager:(IGRTCVideoViewManager *)arg1 didHaveVideoViewReadyToDisplay:(IGRTCVideoView *)arg2;
@end
