//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAudioMusicTrack, IGAudioOriginalSoundTrack, IGSundialAudioPageViewController, IGSundialReactiveAudioTrack;

@protocol IGSundialAudioPageNavigationDelegate <NSObject>
- (void)sundialAudioPageViewControllerDidTapUseAudioButton:(IGSundialAudioPageViewController *)arg1 forReactiveAudioTrack:(IGSundialReactiveAudioTrack *)arg2;
- (void)sundialAudioPageViewControllerDidTapUseAudioButton:(IGSundialAudioPageViewController *)arg1 forOriginalAudio:(IGAudioOriginalSoundTrack *)arg2;
- (void)sundialAudioPageViewControllerDidTapUseAudioButton:(IGSundialAudioPageViewController *)arg1 forMusicTrack:(IGAudioMusicTrack *)arg2;
@end

