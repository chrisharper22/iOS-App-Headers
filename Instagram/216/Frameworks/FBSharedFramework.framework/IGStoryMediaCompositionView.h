//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGGestureHandler-Protocol.h>
#import <FBSharedFramework/IGMediaCompositionViewDelegate-Protocol.h>
#import <FBSharedFramework/IGMediaCompositionViewStickerLayerDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryMediaCompositionViewDeprecatedDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryMediaPlaybackControllerProtocol-Protocol.h>

@class AVAsset, IGAREffectModel, IGAnimationCurve, IGAsyncTask, IGAudioTrack, IGBackgroundGradient, IGDrawCanvasView, IGIOSLink, IGMediaCompositionView, IGPassthroughView, IGStoryBrandedContentModel, IGStoryMediaCompositionState, IGStoryMediaCompositionView_DEPRECATED, IGStoryMediaLoadingIndicatorView, IGStoryVideoTrimState, IGTooltipView, IGUserSession, IGVisualSearchInteractiveHighlightView, NSArray, NSDictionary, NSMutableDictionary, NSString, UIImage;
@protocol IGMediaCompositionViewProtocol, IGStoryMediaAsset, IGStoryMediaCompositionViewDelegate, IGStoryMediaEffectProtocol, IGStorySuperHackyPostcaptureAREffectControllerProtocol;

@interface IGStoryMediaCompositionView : UIView <IGStoryMediaPlaybackControllerProtocol, IGMediaCompositionViewDelegate, IGMediaCompositionViewStickerLayerDelegate, IGStoryMediaCompositionViewDeprecatedDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    IGStoryMediaLoadingIndicatorView *_loadingIndicatorView;
    IGTooltipView *_mediaTooltip;
    NSMutableDictionary *_playbackTimeObservers;
    double _selectedAudioVolume;
    double _voiceoverVolume;
    _Bool _muted;
    _Bool _videoAudioMuted;
    IGAsyncTask *_reactiveAudioAsset;
    AVAsset *_voiceoverAudio;
    IGStoryMediaCompositionView_DEPRECATED *_storyMediaCompositionView;
    IGMediaCompositionView *_mediaCompositionView;
    id <IGStorySuperHackyPostcaptureAREffectControllerProtocol> _postCaptureAREffectController;
    NSArray *_postcaptureAREffects;
    NSArray *_cachedPostcaptureAREffects;
    UIView *_snapshotView;
    IGVisualSearchInteractiveHighlightView *_visualSearchInteractiveHighlightView;
    IGStoryVideoTrimState *_videoTrimState;
    _Bool _loadingIndicatorViewVisible;
    _Bool _isBoomerangAsset;
    NSDictionary *_extraLoggingMetadata;
    NSDictionary *_effectPersistedMetadata;
    IGStoryBrandedContentModel *_brandedContentModel;
    NSDictionary *_ageGatingInfo;
    NSArray *_geoGatingCountries;
    IGIOSLink *_storyLink;
    id <IGStoryMediaCompositionViewDelegate> _delegate;
    NSArray *_audioTrackClips;
    AVAsset *_textToSpeechAudio;
    IGAudioTrack *_soundboardAudioTrack;
    double _soundboardVolume;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isBoomerangAsset; // @synthesize isBoomerangAsset=_isBoomerangAsset;
@property(nonatomic) double soundboardVolume; // @synthesize soundboardVolume=_soundboardVolume;
@property(retain, nonatomic) IGAudioTrack *soundboardAudioTrack; // @synthesize soundboardAudioTrack=_soundboardAudioTrack;
@property(retain, nonatomic) AVAsset *textToSpeechAudio; // @synthesize textToSpeechAudio=_textToSpeechAudio;
@property(copy, nonatomic) NSArray *audioTrackClips; // @synthesize audioTrackClips=_audioTrackClips;
@property(nonatomic) __weak id <IGStoryMediaCompositionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *geoGatingCountries; // @synthesize geoGatingCountries=_geoGatingCountries;
@property(copy, nonatomic) NSDictionary *ageGatingInfo; // @synthesize ageGatingInfo=_ageGatingInfo;
@property(retain, nonatomic) IGStoryBrandedContentModel *brandedContentModel; // @synthesize brandedContentModel=_brandedContentModel;
@property(retain, nonatomic) IGIOSLink *storyLink; // @synthesize storyLink=_storyLink;
@property(readonly, nonatomic) UIImage *currentSnapshotImage;
- (void)playExpressingLoveHeartsAnimationIfNeeded;
- (void)updateWithVisualSearchDetectedObjects:(id)arg1;
- (void)dismissMediaTooltip;
- (void)presentMediaTooltipIfNeeded:(id)arg1 verticalOffsetFromCenter:(double)arg2 analyticsTag:(id)arg3;
- (void)animateMessageOnScreen:(id)arg1;
- (void)removePlaybackTimeObserver:(id)arg1;
- (id)addPlaybackTimeObserver:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) IGAREffectModel *postcaptureAREffect;
@property(retain, nonatomic) AVAsset *voiceoverAudio;
- (void)_cleanupAudioTrackClips:(id)arg1 newTrackClips:(id)arg2;
- (void)_cleanupReactiveAudio:(id)arg1;
@property(retain, nonatomic) IGAsyncTask *reactiveAudioAsset;
- (id)originalSoundTracks;
@property(readonly, copy, nonatomic) NSArray *musicTrackClips;
@property(copy, nonatomic) NSArray *voiceoverAudioEffects;
@property(copy, nonatomic) NSArray *assetAudioEffects;
@property(nonatomic) double stickerPlaybackTime;
@property(nonatomic) _Bool stickerMediaSynchronizationDisabled;
@property(nonatomic) struct IGTimeRange playableRange;
- (void)seekToTime:(double)arg1;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) double playbackDuration;
@property(nonatomic) double currentPlaybackTime;
@property(nonatomic) _Bool muted;
@property(retain, nonatomic) IGAnimationCurve *assetVolumeCurve;
@property(retain, nonatomic) IGAudioTrack *bleepAudioTrack;
@property(retain, nonatomic) IGAnimationCurve *voiceoverVolumeCurve;
@property(nonatomic) double voiceoverVolume;
- (void)_setMusicAndOAVolume:(double)arg1;
@property(nonatomic) double selectedAudioVolume;
@property(nonatomic) double videoVolume;
@property(nonatomic) double overallVolume;
- (void)_updateMuteState;
@property(nonatomic) _Bool videoAudioMuted;
@property(readonly, nonatomic) _Bool mediaSupportsUserInteraction;
@property(readonly, nonatomic) IGPassthroughView *burnedInStickerContainerView;
@property(readonly, nonatomic) UIView *stickerContainerView;
- (void)stickerLayer:(id)arg1 didUpdateMediaRegion:(struct IGRegion)arg2;
- (void)stickerLayer:(id)arg1 stickerWillBeRemovedFromLayer:(id)arg2;
- (void)stickerLayer:(id)arg1 stickerWasAddedToLayer:(id)arg2;
@property(readonly, nonatomic) NSArray *stickers;
- (void)mediaCompositionViewDidPlayToEnd:(id)arg1;
- (void)mediaCompositionView:(id)arg1 didUpdatePlayableMediaCurrentTime:(double)arg2;
- (void)mediaCompositionView:(id)arg1 didUpdateCurrentTime:(double)arg2;
- (void)mediaCompositionViewDidUpdatePlaybackTimelineState:(id)arg1;
- (void)mediaCompositionView:(id)arg1 didUpdateMediaDisplayTexture:(struct __CVBuffer *)arg2 withPreferredTransform:(struct CGAffineTransform)arg3;
- (void)mediaCompositionView:(id)arg1 didUpdateLoadingState:(_Bool)arg2;
- (_Bool)mediaCompositionViewCanRespondToGestures:(id)arg1;
- (void)mediaCompositionViewColorFilterDidFinishLoading:(id)arg1;
- (void)mediaCompositionView:(id)arg1 stickerWillBeRemovedFromComposition:(id)arg2;
- (void)mediaCompositionView:(id)arg1 stickerWasAddedToComposition:(id)arg2;
- (void)mediaCompositionView:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)mediaCompositionView:(id)arg1 didPlayVideoToTime:(double)arg2;
- (void)mediaCompositionViewDidFinishPositioningAndResizingMedia:(id)arg1;
- (void)mediaCompositionViewWillBeginPositioningAndResizingMedia:(id)arg1;
- (_Bool)mediaCompositionView:(id)arg1 shouldBeginPositioningAndResizingMediaWithGesture:(id)arg2;
- (void)mediaCompositionView:(id)arg1 didSettleOnColorFilter:(id)arg2;
- (void)mediaCompositionViewWillSettleOnNewColorFilter:(id)arg1;
@property(retain, nonatomic) NSArray *postProcessFilters;
- (void)setIsColorFilterPickerEnabled:(_Bool)arg1;
@property(retain, nonatomic) NSArray *colorFilters;
- (_Bool)canRespondToGesture:(id)arg1;
@property(readonly, nonatomic) IGDrawCanvasView *drawingCanvasView;
@property(readonly, nonatomic) IGBackgroundGradient *currentBackgroundGradient;
@property(retain, nonatomic) IGBackgroundGradient *customGradient;
@property(nonatomic) long long currentBackgroundGradientIndex;
@property(copy, nonatomic) NSArray *availableBackgroundGradients;
@property(readonly, nonatomic) struct IGRegion mediaRegion;
- (void)_removeSnapshot;
- (void)_setLoadingIndicatorViewVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool loadingIndicatorViewVisible; // @synthesize loadingIndicatorViewVisible=_loadingIndicatorViewVisible;
@property(retain, nonatomic) id <IGStoryMediaEffectProtocol> mediaEffect;
@property(nonatomic) double mediaScale;
@property(retain, nonatomic) IGStoryVideoTrimState *videoTrimState;
- (void)setVideoTrimState:(id)arg1 playMedia:(_Bool)arg2;
- (void)setCurrentPlaybackTime:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) id <IGStoryMediaAsset> asset;
@property(retain, nonatomic) IGStoryMediaCompositionState *mediaCompositionState;
@property(copy, nonatomic) NSDictionary *effectPersistedMetadata; // @synthesize effectPersistedMetadata=_effectPersistedMetadata;
@property(copy, nonatomic) NSDictionary *extraLoggingMetadata; // @synthesize extraLoggingMetadata=_extraLoggingMetadata;
@property(readonly, nonatomic) UIView<IGMediaCompositionViewProtocol> *genericMediaCompositionView;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1 colorFilters:(id)arg2 igglkSession:(id)arg3;
- (id)initWithUserSession:(id)arg1 igglkSession:(id)arg2;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(nonatomic) double playbackRate;
@property(nonatomic) double volume;
@property(retain, nonatomic) id <IGStorySuperHackyPostcaptureAREffectControllerProtocol> postcaptureARController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
