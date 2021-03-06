//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "IGDirectVoiceRecordInputViewDelegate-Protocol.h"

@class AVAudioPlayer, FBTimer, IGDirectAudioRecorder, IGDirectVoiceRecordAppearance, IGDirectVoiceRecordInputView, IGDirectVoiceRecordLockView, IGDirectVoiceRecordLogger, NSDate, NSString, UIImageView, UILabel;
@protocol IGDirectVoiceRecordViewControllerDelegate;

@interface IGDirectVoiceRecordViewController : UIViewController <IGDirectVoiceRecordInputViewDelegate, AVAudioPlayerDelegate>
{
    long long _state;
    struct CGPoint _touchPoint;
    IGDirectVoiceRecordInputView *_inputView;
    IGDirectVoiceRecordLockView *_handsFreeLockView;
    UILabel *_instructionLabel;
    UIImageView *_smokeView;
    NSDate *_startTime;
    FBTimer *_timer;
    struct CGRect _composerOvalFrame;
    IGDirectAudioRecorder *_audioRecorder;
    double _currentMaxAudioValue;
    AVAudioPlayer *_startRecordingSoundEffectAudioPlayer;
    AVAudioPlayer *_stopRecordingSoundEffectAudioPlayer;
    IGDirectVoiceRecordAppearance *_appearance;
    IGDirectVoiceRecordLogger *_voiceRecordLogger;
    id <IGDirectVoiceRecordViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectVoiceRecordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_playStopRecordingSoundEffectWithVolume:(double)arg1;
- (void)_stopStartRecordingSoundEffect;
- (void)_playStartRecordingSoundEffect;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)_playStopRecordingSoundEffectIfNeededForExitPoint:(long long)arg1;
- (void)_startRecordingWithSoundEffectIfNeededForEntryPoint:(long long)arg1;
- (void)_updateRecordingDuration;
- (void)_stopTimer;
- (void)_startTimer;
- (void)_updateState:(long long)arg1;
- (void)_performSuspendRecordingAnimationForExitPoint:(long long)arg1;
- (void)_performDidCancelAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performSlideToCancelAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performHighlightHandsFreeAnimation;
- (void)_performHighlightCancelAnimation;
- (void)_performRecordAnimationWithState:(long long)arg1;
- (double)_normalizeAudioValue:(double)arg1;
- (void)_updateRecordingProgressWithAudioValue:(double)arg1;
- (void)_showSuspendedRecordingViewForExitPoint:(long long)arg1;
- (void)_highlightHandsFree;
- (void)_highlightCancel;
- (void)_switchToHandsFreeRecordingWithDeviceRaised:(_Bool)arg1;
- (void)_hideRecordingViewWithFadeAnimation;
- (void)_hideRecordingViewWithSlideAnimation;
- (void)_hideRecordingViewAndNotifyDelegate:(_Bool)arg1;
- (void)_hideRecordingView;
- (void)_reshowRecordingView;
- (void)_showRecordingViewWithEntryPoint:(long long)arg1;
- (void)_cancelRecordingIfNeeded;
- (void)_didFailToRecordAudio;
- (void)_didRecordAudioWithURL:(id)arg1 waveform:(id)arg2 duration:(double)arg3;
- (void)_cancelRecordingWithEntryPoint:(long long)arg1;
- (void)_stopRecording;
- (void)_suspendRecordingWithExitPoint:(long long)arg1;
- (void)_suspendRecordingWithSoundIfNeededWithExitPoint:(long long)arg1;
- (void)_startRecordingWithEntryPoint:(long long)arg1;
- (void)_startRecordingAndAskForPermissionsWithEntryPoint:(long long)arg1;
- (void)_applyAppearance;
- (void)voiceRecordInputViewDidTapSend:(id)arg1;
- (void)voiceRecordInputViewDidTapCancel:(id)arg1;
- (void)_handleHighlightHandsFreeStateTouchMoved;
- (void)_handleHighlightCancelStateTouchMoved;
- (void)_handleRecordingStateTouchMoved;
- (void)_handleGestureRecognizerStateChanged;
- (void)_handleGestureRecognizerStateEnded;
- (void)_handleGestureRecognizerStateBegan;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
- (void)updateComposerOvalFrame:(struct CGRect)arg1;
- (void)layoutGradientBackgroundIfNecessaryWithGradientBubbleTracker:(id)arg1;
- (void)configureWithAppearance:(id)arg1;
- (void)stopRecordingFromInterruption;
- (void)startRecordingFromButtonTap;
- (void)stopRecordingFromDeviceRaised;
- (void)startRecordingFromDeviceRaised;
- (void)updateWithGestureRecognizer:(id)arg1;
- (void)_layoutSmokeView;
- (void)_layoutHandsFreeLockView;
- (void)_layoutInstructionLabel;
- (void)viewDidLayoutSubviews;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_observeNotifications;
- (void)_setupSmokeView;
- (void)_setupHandsFreeLockView;
- (void)_setupInstructionLabel;
- (void)_setupInputView;
- (void)_setup;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithAnalyticsLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

