//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol IGVideoPlayerOverlayStatusAdapterType;

@protocol IGVideoPlayerOverlayStatusAdapterListener <NSObject>
- (void)overlayStatusAdapter:(id <IGVideoPlayerOverlayStatusAdapterType>)arg1 didReceiveError:(NSError *)arg2;
- (void)overlayStatusAdapter:(id <IGVideoPlayerOverlayStatusAdapterType>)arg1 didToggleAudioStatusWithReason:(long long)arg2;
- (void)overlayStatusAdapterDidPauseVideo:(id <IGVideoPlayerOverlayStatusAdapterType>)arg1;
- (void)overlayStatusAdapterDidStopVideo:(id <IGVideoPlayerOverlayStatusAdapterType>)arg1;
- (void)overlayStatusAdapterDidPlayThroughToCompletion:(id <IGVideoPlayerOverlayStatusAdapterType>)arg1;
- (void)overlayStatusAdapterDidStallToBufferContent:(id <IGVideoPlayerOverlayStatusAdapterType>)arg1;
- (void)overlayStatusAdapterDidUpdatePlaybackProgress:(id <IGVideoPlayerOverlayStatusAdapterType>)arg1;
- (void)overlayStatusAdapterDidBeginPlayingVideo:(id <IGVideoPlayerOverlayStatusAdapterType>)arg1;
- (void)overlayStatusAdapterDidLoadVideo:(id <IGVideoPlayerOverlayStatusAdapterType>)arg1;
- (void)overlayStatusAdapter:(id <IGVideoPlayerOverlayStatusAdapterType>)arg1 didUpdateImageLoadStatus:(unsigned long long)arg2;
- (void)overlayStatusAdapterDidUpdatePlaybackEligibility:(id <IGVideoPlayerOverlayStatusAdapterType>)arg1;
@end

