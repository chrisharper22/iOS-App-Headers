//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGSoundStateListenerDelegate-Protocol.h"
#import "IGVideoEditingCoverPickerViewControllerDelegate-Protocol.h"
#import "IGVideoEditingFiltersViewControllerDelegate-Protocol.h"
#import "IGVideoEditingTabBarDelegate-Protocol.h"
#import "IGVideoPlaybackViewDelegate-Protocol.h"
#import "IGVideoTrimmerViewDelegate-Protocol.h"

@class IGAudioSessionClient, IGFBVideoPlaybackAndCoverView, IGIGLContext, IGMediaMetadata, IGSoundStateListener, IGTapButton, IGUserSession, IGVideoClip, IGVideoComposition, IGVideoEditingAudioActionsOverlayView, IGVideoEditingCoverPickerViewController, IGVideoEditingFiltersViewController, IGVideoEditingTabBar, IGVideoEditingTrimmerViewController, NSString, UIView;
@protocol IGVideoEditingViewControllerDelegate;

@interface IGVideoEditingViewController : IGViewController <IGSoundStateListenerDelegate, IGVideoEditingFiltersViewControllerDelegate, IGVideoTrimmerViewDelegate, IGVideoEditingTabBarDelegate, IGVideoPlaybackViewDelegate, IGVideoEditingCoverPickerViewControllerDelegate>
{
    IGMediaMetadata *_mediaMetadata;
    IGVideoComposition *_videoComposition;
    IGUserSession *_userSession;
    id <IGVideoEditingViewControllerDelegate> _delegate;
    IGVideoEditingTabBar *_tabBar;
    IGVideoEditingFiltersViewController *_filtersViewController;
    IGVideoEditingTrimmerViewController *_trimmerViewController;
    IGVideoEditingCoverPickerViewController *_coverPickerViewController;
    UIView *_currentToolView;
    IGTapButton *_toggleAudioButton;
    _Bool _shouldMuteVideoPlayer;
    IGSoundStateListener *_soundStateListener;
    IGAudioSessionClient *_audioSessionClient;
    IGFBVideoPlaybackAndCoverView *_playbackView;
    IGVideoEditingAudioActionsOverlayView *_audioOverlayView;
    IGVideoClip *_videoClip;
    double _amountTrimmedFromStart;
    double _amountTrimmedFromEnd;
    _Bool _useFbIgluFilters;
    IGIGLContext *_iglContext;
    _Bool _isDirectToShareFlow;
}

- (void).cxx_destruct;
- (void)videoEditingCoverPickerViewController:(id)arg1 didSelectCoverAtScrubberKeyPosition:(double)arg2;
- (void)videoEditingCoverPickerViewController:(id)arg1 didSelectCoverImage:(id)arg2;
- (void)_setPlaybackMode:(long long)arg1;
- (void)_playbackViewTapped:(id)arg1;
- (void)playbackView:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)playbackView:(id)arg1 didCompleteLoopWithPlaybackRate:(double)arg2;
- (void)filterPlayerViewDidFinishPlayingWithAnimation:(_Bool)arg1;
- (void)playbackView:(id)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (id)_coverPhotoFromVideoComposition;
- (void)_updateVideoCompositionFiltersAndStrength;
- (void)_trimVideo:(CDUnknownBlockType)arg1;
- (void)_configureVideoCompositionIfNeeded;
- (void)_muteButtonTapped:(id)arg1;
- (void)_nextButtonTapped;
- (void)_backButtonTapped;
- (void)_setupNavigationBar;
- (id)_coverPickerViewController;
- (void)_showToolView:(id)arg1 ofToolType:(long long)arg2;
- (void)videoEditingTabBar:(id)arg1 didSelectToolType:(long long)arg2;
- (void)videoTrimmer:(id)arg1 didScrubPlayheadToTime:(double)arg2;
- (void)videoTrimmerDidEndTrimming:(id)arg1;
- (void)videoTrimmerDidBeginTrimming:(id)arg1;
- (id)currentFilterName;
- (double)currentFilterStrentgth;
- (void)videoEditingFiltersViewControllerDidPressDone:(id)arg1 withFilterStrength:(double)arg2;
- (void)videoEditingFiltersViewControllerDidPressCancel:(id)arg1 withFilterPriorValue:(double)arg2;
- (void)videoEditingFiltersViewController:(id)arg1 didSelectFilterStrength:(double)arg2;
- (void)videoEditingFiltersViewController:(id)arg1 didSelectFilterIdentifier:(id)arg2 filterStrength:(double)arg3;
- (void)videoEditingFiltersViewController:(id)arg1 didSelectFilterWithClass:(Class)arg2 filter:(id)arg3 filterStrength:(double)arg4;
- (void)soundListenerDidSetStickySoundState:(id)arg1;
- (void)soundListenerDidUpdate:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMediaMetadata:(id)arg1 userSession:(id)arg2 delegate:(id)arg3 useFbIgluFilters:(_Bool)arg4 iglContext:(id)arg5 isDirectToShareFlow:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

