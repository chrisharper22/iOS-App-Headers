//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol IGVideoPlaybackViewType;

@protocol IGVideoPlaybackViewDelegate <NSObject>
- (void)playbackView:(UIView<IGVideoPlaybackViewType> *)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)playbackView:(UIView<IGVideoPlaybackViewType> *)arg1 didCompleteLoopWithPlaybackRate:(double)arg2;
- (void)playbackView:(UIView<IGVideoPlaybackViewType> *)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)filterPlayerViewDidFinishPlayingWithAnimation:(_Bool)arg1;
@end

