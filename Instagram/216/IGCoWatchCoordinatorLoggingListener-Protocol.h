//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCoWatchCaptionLocale, NSString;
@protocol IGCoWatchableMedia;

@protocol IGCoWatchCoordinatorLoggingListener <NSObject>
- (void)cowatchNavigateToProfile:(id <IGCoWatchableMedia>)arg1;
- (void)coWatchCoordinatorDidSelectClosedCaptionsLocale:(IGCoWatchCaptionLocale *)arg1 withMediaId:(NSString *)arg2;
- (void)coWatchCoordinatorDidTapIncallUpsell;
- (void)coWatchCoordinatorDidShowIncallUpsell;
- (void)coWatchCoordinatorDidPlayVideoFromAds:(NSString *)arg1;
- (void)coWatchPlaybackStarted:(NSString *)arg1 productType:(unsigned long long)arg2 contentSource:(long long)arg3 mediaType:(long long)arg4 tabSource:(NSString *)arg5;
- (void)coWatchCoordinatorDidFinishReporting:(NSString *)arg1 submitted:(_Bool)arg2;
- (void)coWatchCoordinatorDidStartReporting:(NSString *)arg1 isLocalMedia:(_Bool)arg2;
- (void)coWatchCoordinatorDidChangeVolume:(double)arg1;
- (void)coWatchCoordinatorDidTapAudioButtonAudioEnabled:(_Bool)arg1;
- (void)coWatchCoordinatorDidTapRemoveButton:(NSString *)arg1;
- (void)coWatchCoordinatorDidBeginScrubbing:(id <IGCoWatchableMedia>)arg1;
- (void)coWatchCoordinatorDidTapPlay:(id <IGCoWatchableMedia>)arg1;
- (void)coWatchCoordinatorDidTapPause:(id <IGCoWatchableMedia>)arg1;
- (void)coWatchCoordinatorWillStopPlaying;
- (void)coWatchCoordinatorWillStartPlaying;
- (void)coWatchNuxImpression:(NSString *)arg1;
- (void)coWatchEntryPointDidShow;
@end

