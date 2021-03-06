//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAudioTrack, IGSundialAudioEditorViewController, IGSundialAudioPostCaptureEditor, IGSundialComposition;

@protocol IGSundialAudioEditorViewControllerDelegate <NSObject>
- (void)audioEditorViewController:(IGSundialAudioEditorViewController *)arg1 didApplyEffectsToVoiceoverInComposition:(IGSundialComposition *)arg2;
- (void)audioEditorViewController:(IGSundialAudioEditorViewController *)arg1 didApplyEffectsToAssetAudioInComposition:(IGSundialComposition *)arg2;
- (void)audioEditorViewController:(IGSundialAudioEditorViewController *)arg1 willPresentAudioEditor:(IGSundialAudioPostCaptureEditor *)arg2 visibleDeleteButton:(_Bool)arg3;
- (void)audioEditorViewControllerDidUpdateCompositionSelectedAudio:(IGSundialAudioEditorViewController *)arg1;
- (void)audioEditorViewController:(IGSundialAudioEditorViewController *)arg1 didChangeCompositionVoiceoverAudioClips:(IGSundialComposition *)arg2;
- (void)audioEditorViewControllerDidUpdateSoundboardAudioTrack:(IGSundialAudioEditorViewController *)arg1 withAudioTrack:(IGAudioTrack *)arg2;
- (void)audioEditorViewControllerDidTapSoundboard:(IGSundialAudioEditorViewController *)arg1;
- (void)audioEditorViewControllerDidTapFadeOutSoundboardEffect:(IGSundialAudioEditorViewController *)arg1;
- (void)audioEditorViewControllerDidTapFadeOutSelectedAudio:(IGSundialAudioEditorViewController *)arg1;
- (void)audioEditorViewControllerDidTapFadeOutVoiceover:(IGSundialAudioEditorViewController *)arg1;
- (void)audioEditorViewControllerDidTapFadeOutAssetAudio:(IGSundialAudioEditorViewController *)arg1;
- (void)audioEditorViewControllerDidTapFadeInSoundboardEffect:(IGSundialAudioEditorViewController *)arg1;
- (void)audioEditorViewControllerDidTapFadeInSelectedAudio:(IGSundialAudioEditorViewController *)arg1;
- (void)audioEditorViewControllerDidTapFadeInAssetAudio:(IGSundialAudioEditorViewController *)arg1;
- (void)audioEditorViewControllerDidTapFadeInVoiceover:(IGSundialAudioEditorViewController *)arg1;
- (void)audioEditorViewControllerDidTapRemoveSoundboardEffect:(IGSundialAudioEditorViewController *)arg1;
- (void)audioEditorViewControllerDidTapRemoveVoiceover:(IGSundialAudioEditorViewController *)arg1;
- (void)audioEditorViewControllerDidTapRemoveSelectedAudio:(IGSundialAudioEditorViewController *)arg1;
- (void)audioEditorViewControllerDidChangeCompositionSelectedAudioVolume:(IGSundialAudioEditorViewController *)arg1 toVolume:(double)arg2;
- (void)audioEditorViewControllerDidChangeCompositionSoundboardVolume:(IGSundialAudioEditorViewController *)arg1 fromVolume:(double)arg2 toVolume:(double)arg3;
- (void)audioEditorViewControllerDidChangeCompositionVoiceoverVolume:(IGSundialAudioEditorViewController *)arg1 fromVolume:(double)arg2 toVolume:(double)arg3;
- (void)audioEditorViewControllerDidChangeCompositionVideoVolume:(IGSundialAudioEditorViewController *)arg1 fromVolume:(double)arg2 toVolume:(double)arg3;
- (void)audioEditorViewController:(IGSundialAudioEditorViewController *)arg1 shouldUpdatePlaybackState:(_Bool)arg2;
- (void)audioEditorViewControllerDidDismissViewController:(IGSundialAudioEditorViewController *)arg1;
@end

