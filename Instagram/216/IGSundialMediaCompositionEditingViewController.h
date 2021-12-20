//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGKaraokeCaptionStickerCombinationDataSourceAndDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "IGStoryMediaCompositionEditingViewControllerDelegate-Protocol.h"
#import "IGStoryMediaCompositionEditingViewControllerEditingEventsDelegate-Protocol.h"
#import "IGStoryPostCaptureCameraTrayViewControllerDelegate-Protocol.h"
#import "IGStoryPostCaptureEditingViewControllerType-Protocol.h"
#import "IGSundialAudioEditorViewControllerDelegate-Protocol.h"
#import "IGSundialAudioPostCaptureEditorDelegate-Protocol.h"
#import "IGSundialAudioVoiceoverViewControllerDelegate-Protocol.h"
#import "IGSundialPostCaptureAudioControllerDelegate-Protocol.h"
#import "IGSundialSettingsViewControllerDelegate-Protocol.h"
#import "IGSundialSlideAndZoomTransitionControllerDelegate-Protocol.h"
#import "IGSundialTextToSpeechViewControllerDelegate-Protocol.h"
#import "IGSundialVideoClipsEditorViewControllerDelegate-Protocol.h"
#import "IGSundialVideoTimelineEditorDelegate-Protocol.h"
#import "IGViewerOverlayPreviewProvider-Protocol.h"

@class IGAREffectModel, IGActionSheetController, IGCameraEffectMiniGalleryDataFetcher, IGCreationActionBar, IGCreationActionBarButton, IGMenu, IGPartialModalSheetViewController, IGPostCaptureARController, IGStoryMediaCompositionEditingViewController, IGStoryPostCaptureCameraTrayViewController, IGSundialAudioVoiceoverVideoTimelineView, IGSundialComposition, IGSundialDraftStore, IGSundialPostCaptureAudioController, IGSundialVideoTimelineEditor, IGSundialViewerOverlayPreviewView, IGTransitionFilterRemoteAssets, IGUserSession, NSArray, NSMutableDictionary, NSString, NSTimer, UIControl, UIView;
@protocol IGAlertHUDHandling, IGCameraEffectCollectionDataSource, IGSpeechSynthesizerEngine, IGStoryMediaCompositionEditingControlsOverlayViewProtocol, IGStoryPostCaptureEditingViewControllerDelegate, IGSundialEditingControlsOverlayViewProtocol;

@interface IGSundialMediaCompositionEditingViewController : IGViewController <IGPartialModalSheetListener, IGStoryMediaCompositionEditingViewControllerEditingEventsDelegate, IGStoryMediaCompositionEditingViewControllerDelegate, IGViewerOverlayPreviewProvider, IGSundialAudioVoiceoverViewControllerDelegate, IGSundialPostCaptureAudioControllerDelegate, IGSundialSlideAndZoomTransitionControllerDelegate, IGSundialVideoTimelineEditorDelegate, IGSundialVideoClipsEditorViewControllerDelegate, IGKaraokeCaptionStickerCombinationDataSourceAndDelegate, IGStoryPostCaptureCameraTrayViewControllerDelegate, IGSundialAudioEditorViewControllerDelegate, IGSundialTextToSpeechViewControllerDelegate, IGSundialAudioPostCaptureEditorDelegate, IGSundialSettingsViewControllerDelegate, IGStoryPostCaptureEditingViewControllerType>
{
    IGUserSession *_userSession;
    IGSundialDraftStore *_autosaveDraftStore;
    IGSundialComposition *_cachedComposition;
    IGStoryMediaCompositionEditingViewController *_mediaCompositionEditingViewController;
    IGSundialViewerOverlayPreviewView *_overlayPreviewView;
    IGSundialPostCaptureAudioController *_audioController;
    IGSundialAudioVoiceoverVideoTimelineView *_voiceoverVideoTimeline;
    _Bool _isSavingMediaToCameraRoll;
    IGSundialVideoTimelineEditor *_videoTimelineEditor;
    NSArray *_videoClipsBeforeOpeningVideoTimelineEditor;
    _Bool _wasPlayingWhenVideoTimelineEditorBeganScrubbing;
    _Bool _wasPlayingWhenVideoTimelineEditorBeganTrimming;
    double _videoTimelineZoomScale;
    UIView *_flickerPreventingSnapshotView;
    UIView<IGSundialEditingControlsOverlayViewProtocol> *_editingControlsOverlayView;
    NSMutableDictionary *_stickerToTimeRangeBeforeEditsMap;
    _Bool _isEditingTimedStickers;
    _Bool _hasSeenTimedTextNUX;
    IGStoryPostCaptureCameraTrayViewController *_cameraTrayViewController;
    IGAREffectModel *_previouslySelectedEffect;
    id <IGCameraEffectCollectionDataSource> _trayDataSource;
    IGCameraEffectMiniGalleryDataFetcher *_effectMiniGalleryDataFetcher;
    IGActionSheetController *_actionSheetController;
    NSString *_loggingSessionID;
    NSTimer *_loadingIndicatorDelayTimer;
    IGCreationActionBar *_footerBar;
    IGCreationActionBarButton *_addClipsButton;
    long long _clipsTrimmingIndex;
    IGMenu *_timedObjectsContextMenu;
    id <IGSpeechSynthesizerEngine> _speechSynthesizer;
    id <IGAlertHUDHandling> _textToSpeechLoadingPresenter;
    IGPartialModalSheetViewController *_textToSpeechBottomSheet;
    IGTransitionFilterRemoteAssets *_transitionAssets;
    _Bool _shouldImmediatelyPresentShareSheet;
    id <IGStoryPostCaptureEditingViewControllerDelegate> _delegate;
    NSString *_sendButtonText;
    NSArray *_captureToolsForLogging;
    double _timelineEditorPresentationProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double timelineEditorPresentationProgress; // @synthesize timelineEditorPresentationProgress=_timelineEditorPresentationProgress;
@property(nonatomic) _Bool shouldImmediatelyPresentShareSheet; // @synthesize shouldImmediatelyPresentShareSheet=_shouldImmediatelyPresentShareSheet;
@property(retain, nonatomic) NSArray *captureToolsForLogging; // @synthesize captureToolsForLogging=_captureToolsForLogging;
@property(copy, nonatomic) NSString *sendButtonText; // @synthesize sendButtonText=_sendButtonText;
@property(nonatomic) __weak id <IGStoryPostCaptureEditingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sundialSettingsViewControllerDidTapDone:(id)arg1;
- (void)_didTapLearnMoreButton;
- (void)_didTapSettingsButton;
- (void)_showPanavisionNuxIfNeeded;
- (void)_resetLoadingIndicatorDelayTimer;
- (void)setIsLoading:(_Bool)arg1 withDelay:(double)arg2;
- (struct UIEdgeInsets)marginPadding;
- (id)newViewerOverlayPreviewView;
@property(readonly, nonatomic) IGStoryMediaCompositionEditingViewController *mediaEditor;
@property(readonly, nonatomic) UIControl *cameraButton;
- (void)_updatePreviewImageIfNeeded;
- (void)_didTapCameraEffectButton;
- (void)_prefetchEffects;
- (void)_didTapCameraEffectCancelButton;
- (void)_setupAREffectControllerIfNeeded;
- (void)_setupAREffectControllerIfNeededWithEffectModel:(id)arg1;
@property(readonly, nonatomic) IGPostCaptureARController *postcaptureAREffectController;
- (void)exitTimelineEditorWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setEffectTarget:(id)arg1;
- (void)postCaptureCameraTrayViewController:(id)arg1 didSelectEffect:(id)arg2;
- (void)postCaptureCameraTrayViewControllerDidDismissMinigallery:(id)arg1;
- (void)postCaptureCameraTrayViewControllerWillPresentMinigallery:(id)arg1;
- (void)postCaptureCameraTrayViewControllerDidConfirmSelection:(id)arg1;
- (void)_updateVoiceoverTracksAfterEditingComposition:(id)arg1;
- (void)sundialPostCaptureAudioController:(id)arg1 didChangeCompositionVoiceoverAudioClips:(id)arg2;
- (void)sundialPostCaptureAudioControllerDidUpdateSoundboardAudioTrack:(id)arg1;
- (void)sundialPostCaptureAudioControllerDidChangeCompositionVideoVolume:(id)arg1 fromVolume:(double)arg2 toVolume:(double)arg3;
- (void)sundialPostCaptureAudioControllerDidUpdateCompositionSelectedAudioVolume:(id)arg1;
- (void)sundialPostCaptureAudioControllerDidUpdateCompositionSelectedAudio:(id)arg1;
- (struct CGRect)mediaCompositionRegion;
@property(readonly, nonatomic) UIView<IGStoryMediaCompositionEditingControlsOverlayViewProtocol> *editingControlsOverlayView;
- (_Bool)canRespondToGesture:(id)arg1;
@property(retain, nonatomic) IGSundialComposition *composition;
- (void)slideAndZoomTransitionControllerDidDismiss:(id)arg1;
- (void)_displayFlickerPreventingSnapshotViewForDuration:(double)arg1 fadeOutDuration:(double)arg2;
- (void)_generateNewFlickerPreventingSnapshotView;
- (void)videoClipsEditorViewController:(id)arg1 didDeleteClipAtIndex:(long long)arg2;
- (void)videoClipsEditorViewControllerDidTapDoneButton:(id)arg1;
- (void)videoTimelineEditorDidEndTrimming:(id)arg1;
- (void)videoTimelineEditor:(id)arg1 didAdjustAmountTrimmedFromEnd:(double)arg2 OfVideoClipAtIndex:(long long)arg3;
- (void)videoTimelineEditor:(id)arg1 didAdjustAmountTrimmedFromStart:(double)arg2 OfVideoClipAtIndex:(long long)arg3;
- (void)videoTimelineEditor:(id)arg1 didBeginAdjustingAmountTrimmedFromEndOfVideoClipAtIndex:(long long)arg2;
- (void)videoTimelineEditor:(id)arg1 didBeginAdjustingAmountTrimmedFromStartOfVideoClipAtIndex:(long long)arg2;
- (void)videoTimelineEditor:(id)arg1 setPlayableRangeStart:(double)arg2 duration:(double)arg3;
- (void)videoTimelineEditor:(id)arg1 setPlayableRangeVideoClipAtIndex:(long long)arg2;
- (void)_setPlayableRangeForClipsAtIndex:(long long)arg1;
- (void)_setPlayableRangeStart:(double)arg1 duration:(double)arg2;
- (void)videoTimelineEditor:(id)arg1 mightBeginAdjustingAmountTrimmedFromEndOfVideoClipAtIndex:(long long)arg2;
- (void)videoTimelineEditor:(id)arg1 mightBeginAdjustingAmountTrimmedFromStartOfVideoClipAtIndex:(long long)arg2;
- (void)sundialAudioPostCaptureEditor:(id)arg1 didTapDoneButtonWithAudioTrackClip:(id)arg2 initialAudioTrackClip:(id)arg3;
- (void)sundialAudioPostCaptureEditorDidTapDismissButton:(id)arg1;
- (void)audioEditorViewController:(id)arg1 didApplyEffectsToVoiceoverInComposition:(id)arg2;
- (void)audioEditorViewController:(id)arg1 didApplyEffectsToAssetAudioInComposition:(id)arg2;
- (void)_updateVoiceoverAttribution;
- (void)audioEditorViewController:(id)arg1 willPresentAudioEditor:(id)arg2 visibleDeleteButton:(_Bool)arg3;
- (void)audioEditorViewControllerDidUpdateCompositionSelectedAudio:(id)arg1;
- (void)audioEditorViewController:(id)arg1 didChangeCompositionVoiceoverAudioClips:(id)arg2;
- (void)_recomputeSelectedAudioVolumeCurve;
- (void)audioEditorViewControllerDidUpdateSoundboardAudioTrack:(id)arg1 withAudioTrack:(id)arg2;
- (void)audioEditorViewControllerDidTapSoundboard:(id)arg1;
- (void)audioEditorViewControllerDidTapFadeOutSoundboardEffect:(id)arg1;
- (void)audioEditorViewControllerDidTapFadeInSoundboardEffect:(id)arg1;
- (void)audioEditorViewControllerDidTapFadeOutSelectedAudio:(id)arg1;
- (void)audioEditorViewControllerDidTapFadeInSelectedAudio:(id)arg1;
- (void)_recomputeAssetVolumeCurve;
- (void)audioEditorViewControllerDidTapFadeOutAssetAudio:(id)arg1;
- (void)audioEditorViewControllerDidTapFadeInAssetAudio:(id)arg1;
- (void)_recomputeVoiceoverVolumeCurve;
- (void)audioEditorViewControllerDidTapFadeOutVoiceover:(id)arg1;
- (void)audioEditorViewControllerDidTapFadeInVoiceover:(id)arg1;
- (void)audioEditorViewControllerDidTapRemoveSoundboardEffect:(id)arg1;
- (void)audioEditorViewControllerDidTapRemoveVoiceover:(id)arg1;
- (void)audioEditorViewControllerDidTapRemoveSelectedAudio:(id)arg1;
- (void)audioEditorViewControllerDidChangeCompositionSelectedAudioVolume:(id)arg1 toVolume:(double)arg2;
- (void)audioEditorViewControllerDidChangeCompositionSoundboardVolume:(id)arg1 fromVolume:(double)arg2 toVolume:(double)arg3;
- (void)audioEditorViewControllerDidChangeCompositionVoiceoverVolume:(id)arg1 fromVolume:(double)arg2 toVolume:(double)arg3;
- (void)audioEditorViewControllerDidChangeCompositionVideoVolume:(id)arg1 fromVolume:(double)arg2 toVolume:(double)arg3;
- (void)audioEditorViewController:(id)arg1 shouldUpdatePlaybackState:(_Bool)arg2;
- (void)audioEditorViewControllerDidDismissViewController:(id)arg1;
- (id)videoTimelineEditor:(id)arg1 igluFilterNameWithIndex:(long long)arg2;
- (void)videoTimelineEditorDidUpdateTransitions:(id)arg1;
- (id)videoTimelineEditorGetTransitionDefaultIconImage;
- (id)videoTimelineEditor:(id)arg1 accessibilityHintForItemAtIndex:(long long)arg2;
- (id)videoTimelineEditor:(id)arg1 accessibilityLabelForItemAtIndex:(long long)arg2;
- (id)videoTimelineEditor:(id)arg1 getTransitionRemoteIconImage:(long long)arg2;
- (id)videoTimelineEditor:(id)arg1 getTransitionRemoteIconImageURL:(long long)arg2;
- (unsigned long long)videoTimelineEditorGetNumberOfTransitionEffects;
- (void)videoTimelineEditor:(id)arg1 addTakesToClipIndex:(long long)arg2;
- (void)videoTimelineEditorDidDeleteAllClips:(id)arg1;
- (void)videoTimelineEditorDidTapDoneButton:(id)arg1;
- (void)videoTimelineEditorDidTapCancelButton:(id)arg1;
- (void)videoTimelineEditor:(id)arg1 didSelectThumbnailAtIndex:(long long)arg2;
- (void)videoTimelineEditorDidUpdateVideoClips:(id)arg1;
- (void)videoTimelineEditorDidEndScrubbing:(id)arg1;
- (void)videoTimelineEditor:(id)arg1 didScrubToTime:(double)arg2;
- (void)videoTimelineEditorDidBeginScrubbing:(id)arg1;
- (void)videoTimelineEditor:(id)arg1 shouldUpdatePlaybackState:(_Bool)arg2;
- (void)_openAudioEditor;
- (void)_didTapEditButton:(id)arg1;
- (void)_saveCompositionToCameraRoll;
- (void)_presentAudioHubAndVoiceEffectsSoundEffectsTooltipIfNeeded;
- (void)_openAudioMixing;
- (void)_didTapAudioMixButton;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)sundialAudioVoiceoverViewControllerDidTapDoneButton:(id)arg1;
- (void)sundialAudioVoiceoverViewController:(id)arg1 didChangeCompositionVoiceoverAudioClips:(id)arg2;
- (void)_openVoiceoverCreation;
- (void)_updateBleepsForCaptionTokens:(id)arg1;
- (void)didLoadCaptions:(id)arg1;
- (void)didEditCaptions:(id)arg1;
- (void)didFinishEditingKaraokeCaptionStickerView:(id)arg1;
- (id)captions;
- (void)_updateKaraokeCaptionsStickerIfNeeded;
- (void)_karaokeCaptionsStickerDidUpdateDisplayedCaptions:(id)arg1;
- (void)_karaokeCaptionsStickerDidFinishLoadingCaptions:(id)arg1;
- (void)_karaokeCaptionsStickerDidBeginLoadingCaptions:(id)arg1;
- (_Bool)_presentTimedStickersTooltipNuxIfNeeded;
- (void)_presentTimedStickersPillTooltip:(id)arg1;
- (void)_presentTimedStickersTooltipNux;
- (void)_toggleTimedTextModeWithTimedObject:(id)arg1;
- (void)_didTapEditTimedStickersModeDoneButton:(id)arg1;
- (void)_didTapEditTimedStickersModeCancelButton:(id)arg1;
- (id)mediaCompositionEditingViewController:(id)arg1 sectionControllerConfigForTimedObject:(id)arg2;
- (void)mediaCompositionEditingViewController:(id)arg1 didPlayVideoToTime:(double)arg2;
- (void)mediaEditingViewController:(id)arg1 userTappedTimedObject:(id)arg2;
- (void)mediaCompositionEditingViewController:(id)arg1 didChangeSelectedRangeForTimedObject:(id)arg2;
- (void)mediaEditingViewController:(id)arg1 userDidChangeSelectedStateForTimedObject:(id)arg2;
- (void)mediaEditingViewController:(id)arg1 userRemovedTimedObjectFromCurrentComposition:(id)arg2;
- (void)mediaEditingViewController:(id)arg1 userAddedTimedObjectToCurrentComposition:(id)arg2;
- (void)mediaEditingViewController:(id)arg1 didApplyColorFilter:(id)arg2;
- (void)mediaEditingViewControllerEnterSelectTextFormat:(id)arg1;
- (void)mediaEditingViewControllerDidSelectTextFormat:(id)arg1 formatString:(id)arg2;
- (void)mediaEditingViewControllerDidSelectTextAlignment:(id)arg1 alignmentString:(id)arg2;
- (void)mediaEditingViewControllerDidToggleColorPickerFormatPickerButton:(id)arg1 formatPickerSelected:(_Bool)arg2;
- (void)mediaEditingViewControllerDidToggleTextAnimation:(id)arg1 textFormatName:(id)arg2;
- (void)mediaEditingViewControllerDidToggleTextEffect:(id)arg1 emphasisType:(long long)arg2 isAppliedOnFullCaption:(_Bool)arg3;
- (void)mediaEditingViewControllerDidChangeTextColor:(id)arg1 colorSource:(long long)arg2 color:(id)arg3;
- (void)mediaEditingViewControllerDidExitTextEditingMode:(id)arg1 text:(id)arg2 mentionCount:(long long)arg3 hashtagCount:(long long)arg4;
- (void)mediaEditingViewControllerDidEnterTextEditingMode:(id)arg1 entryPoint:(long long)arg2;
- (void)_updateSoundboardAudioTrackAfterEditingComposition:(id)arg1;
- (void)_updateSoundboardAudioTrack;
- (void)textToSpeechViewController:(id)arg1 didUpdateVoice:(unsigned long long)arg2;
- (void)_setTextToSpeechLoading:(_Bool)arg1;
- (void)_presentTextToSpeechTooltipNux;
- (_Bool)_presentTextToSpeechTooltipNuxIfNeeded;
- (id)_enableTextToSpeech:(id)arg1 withVoice:(unsigned long long)arg2;
- (void)_disableTextToSpeech:(id)arg1;
- (id)_updateTextToSpeechAudioTrack;
- (void)mediaCompositionEditingViewControllerWillMakeUndoableChange:(id)arg1;
- (void)mediaCompositionEditingViewControllerDidSetEffect:(id)arg1;
- (void)_presentContextMenuForSticker:(id)arg1;
- (void)mediaCompositionEditingViewControllerDidDismissCurrentMedia:(id)arg1;
- (void)mediaCompositionEditingViewController:(id)arg1 didTapMoreForTimedObject:(id)arg2;
- (void)mediaCompositionEditingViewControllerDidFinishPositioningAndResizingMedia:(id)arg1;
- (void)mediaCompositionEditingViewController:(id)arg1 didTapLayerForTimedObject:(id)arg2;
- (void)mediaCompositionEditingViewController:(id)arg1 didLongPressBackgroundWithBoomerangConversionSupport:(_Bool)arg2;
- (void)mediaCompositionEditingViewController:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)mediaCompositionEditingViewController:(id)arg1 didFinishEditingTextView:(id)arg2;
- (void)mediaCompositionEditingViewController:(id)arg1 didBeginEditingTextView:(id)arg2;
- (void)mediaCompositionEditingViewController:(id)arg1 didChangeBoomerangSelectedFormatVariant:(id)arg2;
- (void)mediaCompositionEditingViewControllerDidTapEditBoomerangButton:(id)arg1;
- (void)mediaCompositionEditingViewController:(id)arg1 didDeleteSticker:(id)arg2;
- (void)mediaCompositionEditingViewController:(id)arg1 didFinishPositioningSticker:(id)arg2;
- (void)mediaCompositionEditingViewController:(id)arg1 willBeginPositioningSticker:(id)arg2;
- (long long)preferredTabBarBehavior;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithComposition:(id)arg1 overlayView:(id)arg2 autosaveDraftStore:(id)arg3 analyticsModule:(id)arg4 userSession:(id)arg5 footerBar:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
