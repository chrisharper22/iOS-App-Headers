//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGSoundSyncSuggestedMusicPickerDelegate-Protocol.h"
#import "IGSundialAudioBrowserViewControllerDelegate-Protocol.h"

@class IGAsyncTask, IGAudioBrowserCameraLogger, IGAudioMusicTrack, IGBouncyTextButton, IGSoundSyncCompositionPreviewView, IGSoundSyncSuggestedMusicPicker, IGSundialCircleIconButton, IGSundialComposition, IGSundialSoundSyncDebugView, IGTapButton, IGUserSession, NSString, UIImpactFeedbackGenerator, UILabel;
@protocol IGSundialAuditionViewControllerDelegate;

@interface IGSundialAuditionViewController : UIViewController <IGSundialAudioBrowserViewControllerDelegate, IGSoundSyncSuggestedMusicPickerDelegate>
{
    IGUserSession *_userSession;
    IGSundialComposition *_originalComposition;
    UILabel *_audioTitle;
    UILabel *_audioDescription;
    IGTapButton *_backButton;
    IGBouncyTextButton *_auxiliaryButton;
    IGSundialCircleIconButton *_nextButton;
    IGSoundSyncSuggestedMusicPicker *_suggestedMusicPicker;
    IGAsyncTask *_suggestedSongsRequest;
    IGAsyncTask *_audioBrowserCatalogRequest;
    IGAudioBrowserCameraLogger *_audioBrowserCameraLogger;
    UIImpactFeedbackGenerator *_impactGenerator;
    IGSundialSoundSyncDebugView *_soundSyncDebugView;
    IGAudioMusicTrack *_selectedMusicTrack;
    id <IGSundialAuditionViewControllerDelegate> _delegate;
    unsigned long long _auxiliaryButtonType;
    IGSoundSyncCompositionPreviewView *_compositionPreviewView;
    IGAsyncTask *_compositionCreationTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGAsyncTask *compositionCreationTask; // @synthesize compositionCreationTask=_compositionCreationTask;
@property(readonly, nonatomic) IGSoundSyncCompositionPreviewView *compositionPreviewView; // @synthesize compositionPreviewView=_compositionPreviewView;
@property(nonatomic) unsigned long long auxiliaryButtonType; // @synthesize auxiliaryButtonType=_auxiliaryButtonType;
@property(nonatomic) __weak id <IGSundialAuditionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGAudioMusicTrack *selectedMusicTrack; // @synthesize selectedMusicTrack=_selectedMusicTrack;
- (long long)preferredStatusBarStyle;
- (void)_didTapNextButton;
- (void)_didTapEditClipsButton;
- (void)_didTapSkipButton;
- (void)_didTapAuxiliaryButton;
- (void)_didTapBackButton;
- (void)_audioBrowserViewController:(id)arg1 didSelectAudioTrack:(id)arg2;
- (void)audioBrowserViewController:(id)arg1 didExtractAudioTrack:(id)arg2;
- (void)audioBrowserViewController:(id)arg1 didTapAudioTrack:(id)arg2 context:(CDStruct_61bbf500)arg3;
- (void)audioBrowserViewControllerDidCancel:(id)arg1;
- (void)suggestedMusicPicker:(id)arg1 willDisplaySong:(id)arg2;
- (void)suggestedMusicPickerDidTapSearchButton:(id)arg1;
- (void)suggestedMusicPicker:(id)arg1 didTapCurrentlySelectedSong:(id)arg2;
- (void)suggestedMusicPicker:(id)arg1 didUpdateSelectedSong:(id)arg2;
- (void)suggestedMusicPicker:(id)arg1 didUpdateLoadingState:(_Bool)arg2;
- (void)_updateAuxiliaryButtonText;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithComposition:(id)arg1 suggestedMusicTask:(id)arg2 compositionPreviewImage:(id)arg3 audioBrowserCameraLogger:(id)arg4 userSession:(id)arg5;
- (id)initWithComposition:(id)arg1 suggestedMusicTask:(id)arg2 compositionPreviewImage:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

