//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGAssetPlayerViewDelegate-Protocol.h"
#import "IGCameraToolsMenuPickerButtonDelegate-Protocol.h"
#import "IGScrollingSelectorViewDataSource-Protocol.h"
#import "IGScrollingSelectorViewDelegate-Protocol.h"
#import "IGStoryAudioPlayerDelegate-Protocol.h"
#import "IGStoryGalleryZoomTransitionViewController-Protocol.h"
#import "IGSundialEdgeTapNavigationViewDelegate-Protocol.h"
#import "IGSundialVideoTrimmerDelegate-Protocol.h"
#import "IGTransitionZoomFromCapable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGAssetPlayerView, IGAsyncTask, IGCameraInstructionView, IGGradientView, IGScrollingSelectorView, IGSimpleVideoPlayerView, IGStoryAudioPlayer, IGStoryMediaLoadingIndicatorView, IGSundialCapturePreviewPlaybackProgressIndicator, IGSundialEdgeTapNavigationView, IGSundialReactiveAudioTrack, IGSundialRemixedVideo, IGSundialRemixedVideoWatermarkView, IGSundialSingleVideoClipEditorControlsOverlayView, IGSundialVideoClip, IGSundialVideoClipEditorCaptionLoadingIndicator, IGSundialVideoTrimmingFooterView, IGUserSession, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PHAsset, UIImage, UIImageView, UIImpactFeedbackGenerator, UILabel, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UIView;
@protocol IGSundialSingleVideoClipEditorViewControllerDelegate;

@interface IGSundialSingleVideoClipEditorViewController : UIViewController <IGAssetPlayerViewDelegate, IGSundialVideoTrimmerDelegate, IGStoryAudioPlayerDelegate, IGSundialEdgeTapNavigationViewDelegate, UIGestureRecognizerDelegate, IGCameraToolsMenuPickerButtonDelegate, IGTransitionZoomFromCapable, IGScrollingSelectorViewDelegate, IGScrollingSelectorViewDataSource, IGStoryGalleryZoomTransitionViewController>
{
    IGUserSession *_userSession;
    double _maxOverallDuration;
    unsigned long long _initialClipIndex;
    IGSundialVideoClip *_untrimmedCurrentClip;
    IGGradientView *_gradientBackgroundView;
    IGAsyncTask *_audioAsset;
    IGSundialReactiveAudioTrack *_reactiveAudioTrack;
    IGSundialRemixedVideo *_remixedVideo;
    IGSundialEdgeTapNavigationView *_edgeTapNavigationView;
    UIView *_videoPreviewWrapperView;
    IGAssetPlayerView *_videoPlayerView;
    IGStoryAudioPlayer *_musicAudioPlayer;
    UIImageView *_previewImageView;
    IGStoryMediaLoadingIndicatorView *_loadingIndicatorView;
    IGSimpleVideoPlayerView *_remixedVideoPlayer;
    IGSundialRemixedVideoWatermarkView *_remixStickerWatermark;
    UIView *_cancelButton;
    UIView *_trimButton;
    UIView *_addButton;
    _Bool _showV3Timeline;
    IGSundialCapturePreviewPlaybackProgressIndicator *_playbackProgressIndicator;
    IGSundialVideoTrimmingFooterView *_videoTrimmingFooterView;
    UILabel *_videoClipCountLabel;
    UIView *_timeIndicatorLabelWrapperView;
    UILabel *_timeIndicatorLabel;
    UILabel *_v3TimelinePlaybackTimeLabel;
    _Bool _shouldShowTimeIndicatorLabel;
    double _currentTimeBeforeTrim;
    _Bool _isTrimming;
    UIPanGestureRecognizer *_mediaPanGesture;
    UIPinchGestureRecognizer *_mediaPinchGesture;
    UIRotationGestureRecognizer *_mediaRotationGesture;
    UIPanGestureRecognizer *_scrubGesture;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    IGSundialSingleVideoClipEditorControlsOverlayView *_controlsOverlayView;
    struct CGPoint _mediaOffsetFromCenter;
    double _mediaRotation;
    double _mediaScale;
    struct CGPoint _mediaAnchorPoint;
    NSMutableArray *_loadedAVAssets;
    IGSundialVideoClipEditorCaptionLoadingIndicator *_captionLoadingIndicator;
    NSDictionary *_audios;
    IGScrollingSelectorView *_livePhotoToolsView;
    IGCameraInstructionView *_livePhotoModesInstructionView;
    _Bool _livePhotoToolsInitialized;
    NSMutableDictionary *_livePhotoModesConvertedClips;
    _Bool _videoClipsEdited;
    _Bool _showControlsOverlay;
    _Bool _showTrimButton;
    _Bool _showSpeedPicker;
    _Bool _enableEdgeTapNavigation;
    _Bool _isAudioDisabled;
    _Bool _isMultitouchEditingDisabled;
    _Bool _hideScaleButton;
    _Bool _muteAudioPlayer;
    _Bool _isLivePhotoModeLive;
    _Bool _loadingIndicatorViewVisible;
    _Bool _isPrecapture;
    id <IGSundialSingleVideoClipEditorViewControllerDelegate> _delegate;
    NSArray *_videoClips;
    long long _currentClipIndex;
    double _capturePreviewCornerRadius;
    UIImage *_previewImage;
    double _totalDurationOfVideoClips;
    double _originalMediaDuration;
    NSString *_rightTrimButtonText;
    PHAsset *_livePhotoAsset;
    NSString *_videoClipCountLabelText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPrecapture; // @synthesize isPrecapture=_isPrecapture;
@property(nonatomic) _Bool loadingIndicatorViewVisible; // @synthesize loadingIndicatorViewVisible=_loadingIndicatorViewVisible;
@property(retain, nonatomic) NSString *videoClipCountLabelText; // @synthesize videoClipCountLabelText=_videoClipCountLabelText;
@property(nonatomic) _Bool isLivePhotoModeLive; // @synthesize isLivePhotoModeLive=_isLivePhotoModeLive;
@property(retain, nonatomic) PHAsset *livePhotoAsset; // @synthesize livePhotoAsset=_livePhotoAsset;
@property(retain, nonatomic) NSString *rightTrimButtonText; // @synthesize rightTrimButtonText=_rightTrimButtonText;
@property(nonatomic) _Bool muteAudioPlayer; // @synthesize muteAudioPlayer=_muteAudioPlayer;
@property(nonatomic) _Bool hideScaleButton; // @synthesize hideScaleButton=_hideScaleButton;
@property(nonatomic) double originalMediaDuration; // @synthesize originalMediaDuration=_originalMediaDuration;
@property(nonatomic) double totalDurationOfVideoClips; // @synthesize totalDurationOfVideoClips=_totalDurationOfVideoClips;
@property(nonatomic) _Bool isMultitouchEditingDisabled; // @synthesize isMultitouchEditingDisabled=_isMultitouchEditingDisabled;
@property(nonatomic) _Bool isAudioDisabled; // @synthesize isAudioDisabled=_isAudioDisabled;
@property(nonatomic) _Bool enableEdgeTapNavigation; // @synthesize enableEdgeTapNavigation=_enableEdgeTapNavigation;
@property(nonatomic) _Bool showSpeedPicker; // @synthesize showSpeedPicker=_showSpeedPicker;
@property(nonatomic) _Bool showTrimButton; // @synthesize showTrimButton=_showTrimButton;
@property(nonatomic) _Bool showControlsOverlay; // @synthesize showControlsOverlay=_showControlsOverlay;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(nonatomic) double capturePreviewCornerRadius; // @synthesize capturePreviewCornerRadius=_capturePreviewCornerRadius;
@property(readonly, nonatomic) long long currentClipIndex; // @synthesize currentClipIndex=_currentClipIndex;
@property(readonly, nonatomic) _Bool videoClipsEdited; // @synthesize videoClipsEdited=_videoClipsEdited;
@property(readonly, copy, nonatomic) NSArray *videoClips; // @synthesize videoClips=_videoClips;
@property(nonatomic) __weak id <IGSundialSingleVideoClipEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollingSelectorView:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (void)scrollingSelectorView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollingSelectorView:(id)arg1 didEndScrollingAtIndexPath:(id)arg2;
- (_Bool)scrollingSelectorView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)scrollingSelectorView:(id)arg1 didChangeSelectedIndexPath:(id)arg2;
- (void)_applyNewVideoClipFromPhoto:(id)arg1 livePhotoMode:(unsigned long long)arg2;
- (id)scrollingSelectorView:(id)arg1 itemAtIndexPath:(id)arg2;
- (long long)numberOfItemsInScrollingSelectorView:(id)arg1;
- (_Bool)shouldZoomFromTransition;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)edgeTapNavigationView:(id)arg1 didTapEdge:(unsigned long long)arg2;
- (_Bool)edgeTapNavigationView:(id)arg1 tapNavigationGestureCanBegin:(id)arg2;
- (id)_getTimeLabelText:(double)arg1;
- (void)_handleV3Trimming:(_Bool)arg1;
- (void)_animateV3TimeIndicator:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateLivePhotoTools:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateTimeIndicator:(double)arg1 amountTrimmedFromEnd:(double)arg2;
- (void)_handleResetMedia;
- (void)_didTapResetTransformsButton:(id)arg1;
- (void)_didTapScaleFitButton:(id)arg1;
- (void)_updateVideoClips:(id)arg1;
- (_Bool)_mediaIsTransformed;
- (void)setCurrentClipIndex:(long long)arg1;
@property(readonly, nonatomic) struct CGRect contentRegion;
- (void)_handleScrubGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_isMultiTouchEditingEnabled;
- (void)_handleMediaRotationGesture:(id)arg1;
- (void)_handleMediaPinchGesture:(id)arg1;
- (void)_handleMediaPanGesture:(id)arg1;
- (void)_multitouchTransformsBegan;
- (void)_updateModelWithMediaTransforms;
- (void)_updateMediaScalePositionRotation;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_fadeOutAndHideTimeIndicator;
@property(readonly, nonatomic) IGSundialVideoClip *currentVideoClip;
@property(readonly, nonatomic) double currentClipMaxDuration;
- (void)_syncAudioClipsToVideos;
- (void)_synchronizeMediaPlayers;
- (void)audioPlayer:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)audioPlayer:(id)arg1 didDetermineDuration:(double)arg2 ofAsset:(id)arg3;
- (void)audioPlayerDidPlayToEnd:(id)arg1;
- (void)audioPlayer:(id)arg1 didUpdateStallState:(_Bool)arg2;
- (void)audioPlayer:(id)arg1 didUpdateToPlaybackTime:(double)arg2;
- (void)audioPlayer:(id)arg1 didDetermineAssetPlayabilityStatus:(_Bool)arg2;
- (void)pickerButton:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)pickerButtonDidCollapsePicker:(id)arg1;
- (void)pickerButtonDidExpandPicker:(id)arg1;
- (void)videoTrimmer:(id)arg1 didUpdateAmountTrimmedFromStart:(double)arg2 amountTrimmedFromEnd:(double)arg3;
- (void)videoTrimmer:(id)arg1 didScrubPlayheadToTime:(double)arg2;
- (void)_videoTrimmerDidEndEditingReactiveAudio:(id)arg1 shouldMuteAudioWhileReconstructingTrack:(_Bool)arg2;
- (void)videoTrimmerDidEndTrimming:(id)arg1;
- (void)videoTrimmerDidBeginTrimming:(id)arg1;
- (void)_didTapCancelButton:(id)arg1;
- (void)_didTapAddButton:(id)arg1;
- (void)_didTapTrimButton:(id)arg1;
- (void)assetPlayerView:(id)arg1 readyToSyncAndPlay:(_Bool)arg2;
- (void)assetPlayerViewPlayStateDidChange:(id)arg1;
- (void)assetPlayerViewAssetLoaded:(id)arg1;
- (void)assetPlayerView:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)_didPlayToEndOfCurrentClip;
- (void)assetPlayerViewDidPlayToEnd:(id)arg1;
- (void)assetPlayerView:(id)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVideoClips:(id)arg1 audioAsset:(id)arg2 audioTrackClips:(id)arg3 reactiveAudioTrack:(id)arg4 remixedVideo:(id)arg5 initialClipIndex:(unsigned long long)arg6 maxOverallDuration:(double)arg7 userSession:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
