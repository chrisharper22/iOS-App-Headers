//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGPlaybackTimelineDelegate-Protocol.h"
#import "IGSundialAudioEditorToolType-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGAsyncTask, IGAudioEngine, IGPlaybackTimeline, IGSundialAudioEditorPlaybackScrubber, IGUserSession, NSMutableArray, NSMutableDictionary, NSString, UICollectionView;
@protocol IGStoryMediaPlaybackControllerProtocol, IGSundialAudioEditorToolTypeDelegate, IGSundialSoundboardViewControllerDelegate;

@interface IGSundialSoundboardViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGPlaybackTimelineDelegate, IGGestureHandler, IGSundialAudioEditorToolType>
{
    id <IGStoryMediaPlaybackControllerProtocol> _mediaPlaybackController;
    UICollectionView *_collectionView;
    IGSundialAudioEditorPlaybackScrubber *_scrubber;
    IGAsyncTask *_soundboardEffectsData;
    IGPlaybackTimeline *_playbackTimeline;
    IGAudioEngine *_audioEngine;
    NSMutableArray *_soundboardEffectsPointMap;
    double _compositionDuration;
    IGUserSession *_userSession;
    _Bool _audioEnginePlayStateBeforeBackground;
    _Bool _isLoading;
    double _playbackRateBeforeScrubbing;
    _Bool _hasLoggedUserDraggingCollectionView;
    NSMutableDictionary *_matchingVisibleCellsForEffects;
    float _volume;
    id <IGSundialAudioEditorToolTypeDelegate> _audioEditorToolDelegate;
    id <IGSundialSoundboardViewControllerDelegate> _delegate;
    IGAsyncTask *_selectedPlaylistTask;
}

- (void).cxx_destruct;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) IGAsyncTask *selectedPlaylistTask; // @synthesize selectedPlaylistTask=_selectedPlaylistTask;
@property(nonatomic) __weak id <IGSundialSoundboardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGSundialAudioEditorToolTypeDelegate> audioEditorToolDelegate; // @synthesize audioEditorToolDelegate=_audioEditorToolDelegate;
- (void)_clearAllProgressAnimations;
- (void)_scrubbingEnded:(id)arg1;
- (void)_scrubbingBegan:(id)arg1;
- (void)_applicationDidEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)handlePlayPauseButtonAction;
- (void)handleUndoButtonAction;
@property(readonly, nonatomic) _Bool footerUndoButtonInteractionEnabled;
@property(readonly, nonatomic) _Bool footerUndoButtonHidden;
- (void)_loadSoundboardEffectPointInAudioEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)reloadSavedDict:(id)arg1 savedVolume:(double)arg2;
- (void)playbackTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
- (void)_saveAsAudioTrack;
- (void)_clearAll;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)_prefetchAudioFileForIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 compositionDuration:(double)arg2 mediaPlaybackController:(id)arg3 soundboardEffectsPointMap:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

