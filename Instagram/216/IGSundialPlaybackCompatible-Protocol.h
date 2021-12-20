//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IGSundialPlaybackCompatible <NSObject>
- (void)seekToTime:(double)arg1 preciseTime:(_Bool)arg2 trigger:(long long)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)prepareForPlayback;
- (void)pauseWithReason:(long long)arg1;
- (void)stopWithReason:(long long)arg1;
- (void)playWithReason:(long long)arg1;
@end

