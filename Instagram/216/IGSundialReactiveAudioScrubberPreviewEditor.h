//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGAudioEditorHandDragScrubberViewDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGSundialAudioBrowserViewControllerDelegate-Protocol.h"
#import "IGSundialAudioEditorCompositionPreviewViewDelegate-Protocol.h"

@class IGAudioBrowserCameraLogger, IGAudioEditorHandDragScrubberView, IGAudioEditorSundialHeaderView, IGAudioLyricsTrackModel, IGAudioTrackClip, IGSundialAudioBrowserViewController, IGSundialAudioEditorCompositionPreviewView, IGSundialComposition, IGSundialReactiveAudioEngine, IGUserSession, NSArray, NSString, UIImage, UIImageView, UILabel, UISelectionFeedbackGenerator, UIVisualEffectView;
@protocol IGSundialReactiveAudioScrubberPreviewEditorDelegate;

@interface IGSundialReactiveAudioScrubberPreviewEditor : UIViewController <IGAudioEditorHandDragScrubberViewDelegate, IGSundialAudioEditorCompositionPreviewViewDelegate, IGSundialAudioBrowserViewControllerDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    IGSundialComposition *_composition;
    IGSundialAudioEditorCompositionPreviewView *_compositionPreviewView;
    IGAudioBrowserCameraLogger *_logger;
    UIVisualEffectView *_backdropView;
    IGAudioEditorSundialHeaderView *_headerView;
    UIImage *_lowVolumeImage;
    UIImage *_midVolumeImage;
    UIImage *_highVolumeImage;
    UIImage *_handDragImage;
    UIImage *_musicIcon;
    UIImageView *_volumeImageView;
    UILabel *_instructionText;
    IGAudioEditorHandDragScrubberView *_volumeSlider;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    IGSundialReactiveAudioEngine *_soundEngine;
    IGSundialAudioBrowserViewController *_audioBrowserViewController;
    _Bool _scrubbing;
    IGAudioTrackClip *_audioTrackClip;
    id <IGSundialReactiveAudioScrubberPreviewEditorDelegate> _delegate;
    double _compositionPreviewCornerRadius;
    double _compositionStartTime;
    IGAudioLyricsTrackModel *_lyrics;
    double _clipStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) double clipStartTime; // @synthesize clipStartTime=_clipStartTime;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(retain, nonatomic) IGAudioLyricsTrackModel *lyrics; // @synthesize lyrics=_lyrics;
@property(nonatomic) double compositionStartTime; // @synthesize compositionStartTime=_compositionStartTime;
@property(nonatomic) double compositionPreviewCornerRadius; // @synthesize compositionPreviewCornerRadius=_compositionPreviewCornerRadius;
@property(nonatomic) __weak id <IGSundialReactiveAudioScrubberPreviewEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)analyticsModule;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_launchAudioBrowser;
- (void)_didTapAddButton:(id)arg1;
- (void)_didTapDoneButton:(id)arg1;
- (void)_didTapSongDetailsButton:(id)arg1;
- (void)_didTapDismissButton:(id)arg1;
- (void)_audioBrowserViewController:(id)arg1 didSelectAudioTrack:(id)arg2;
- (void)audioBrowserViewController:(id)arg1 didExtractAudioTrack:(id)arg2;
- (void)audioBrowserViewController:(id)arg1 didTapAudioTrack:(id)arg2 context:(CDStruct_61bbf500)arg3;
- (void)audioBrowserViewControllerDidCancel:(id)arg1;
- (void)handDragScrubberViewDidEndSliding:(id)arg1;
- (void)handDragScrubberView:(id)arg1 didSlideToValue:(double)arg2;
- (void)handDragScrubberViewDidBeginSliding:(id)arg1;
- (void)sundialAudioEditorCompositionPreviewView:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)sundialAudioEditorCompositionPreviewViewDidPlayVideoToEnd:(id)arg1;
- (void)sundialAudioEditorCompositionPreviewView:(id)arg1 didUpdateToPlaybackTime:(double)arg2;
- (void)_syncCompositionPreviewViewWithMusicPlayback;
@property(nonatomic) _Bool deleteButtonVisible;
@property(retain, nonatomic) IGAudioTrackClip *audioTrackClip; // @synthesize audioTrackClip=_audioTrackClip;
- (void)_updateReactiveAudioTrackInEngine;
@property(retain, nonatomic) NSArray *selectedTracks;
- (void)_setClipStartTime:(double)arg1 animated:(_Bool)arg2;
- (void)_setVolumeImageView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_applicationDidEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)_initWithSundialAudioBrowser:(id)arg1 composition:(id)arg2 userSession:(id)arg3;
- (id)initWithAudioTrack:(id)arg1 audioBrowserViewController:(id)arg2 composition:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

