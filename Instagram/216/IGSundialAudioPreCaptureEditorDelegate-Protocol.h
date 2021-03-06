//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAudioLyricsTrackModel, IGAudioTrackClip, IGSundialAudioBrowserViewController, IGSundialAudioPreCaptureEditor;
@protocol IGAudioModelProtocol;

@protocol IGSundialAudioPreCaptureEditorDelegate <NSObject>
- (void)sundialAudioPreCaptureEditor:(IGSundialAudioPreCaptureEditor *)arg1 didSwitchToReactiveAudioTrackClip:(id <IGAudioModelProtocol>)arg2 audioBrowserViewController:(IGSundialAudioBrowserViewController *)arg3;
- (void)sundialAudioPreCaptureEditor:(IGSundialAudioPreCaptureEditor *)arg1 didUpdateLyricsCaptureToggleOn:(_Bool)arg2 withLyrics:(IGAudioLyricsTrackModel *)arg3;
- (void)sundialAudioPreCaptureEditor:(IGSundialAudioPreCaptureEditor *)arg1 didTapDoneButtonWithAudioTrackClip:(IGAudioTrackClip *)arg2;
- (void)sundialAudioPreCaptureEditorDidTapDismissButton:(IGSundialAudioPreCaptureEditor *)arg1;
@end

