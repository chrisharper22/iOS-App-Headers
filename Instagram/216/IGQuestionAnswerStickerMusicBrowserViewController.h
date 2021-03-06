//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGKeyboardObserverHideDelegate-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"
#import "IGQuestionAnswerStickerMusicBrowserSongNotAvailableViewDelegate-Protocol.h"
#import "IGStoryMusicBrowserViewControllerDelegate-Protocol.h"
#import "IGStoryMusicBrowserViewControllerSearchDelegate-Protocol.h"

@class IGGradientView, IGKeyboardObserver, IGQuestionAnswerStickerMusicBrowserKeyboardBannerView, IGQuestionAnswerStickerMusicBrowserSendButton, IGQuestionAnswerStickerMusicBrowserSongNotAvailableView, IGStoryMusicBrowserViewController, IGUserSession, NSArray, NSString;
@protocol IGQuestionAnswerStickerMusicBrowserViewControllerDelegate;

@interface IGQuestionAnswerStickerMusicBrowserViewController : UIViewController <IGStoryMusicBrowserViewControllerDelegate, IGStoryMusicBrowserViewControllerSearchDelegate, IGQuestionAnswerStickerMusicBrowserSongNotAvailableViewDelegate, IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    IGStoryMusicBrowserViewController *_musicBrowserViewController;
    IGGradientView *_sendButtonProtectionGradient;
    IGQuestionAnswerStickerMusicBrowserSendButton *_sendButton;
    IGQuestionAnswerStickerMusicBrowserKeyboardBannerView *_keyboardBannerView;
    IGQuestionAnswerStickerMusicBrowserSongNotAvailableView *_songNotAvailableView;
    IGKeyboardObserver *_keyboardObserver;
    _Bool _sendButtonVisible;
    _Bool _songNotAvailableViewVisible;
    _Bool _musicBrowserVCVisible;
    id <IGQuestionAnswerStickerMusicBrowserViewControllerDelegate> _delegate;
    double _sendButtonVisibilityPercentage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool musicBrowserVCVisible; // @synthesize musicBrowserVCVisible=_musicBrowserVCVisible;
@property(nonatomic) _Bool songNotAvailableViewVisible; // @synthesize songNotAvailableViewVisible=_songNotAvailableViewVisible;
@property(nonatomic) double sendButtonVisibilityPercentage; // @synthesize sendButtonVisibilityPercentage=_sendButtonVisibilityPercentage;
@property(nonatomic) _Bool sendButtonVisible; // @synthesize sendButtonVisible=_sendButtonVisible;
@property(nonatomic) __weak id <IGQuestionAnswerStickerMusicBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)_keyboardWillBecomeVisible:(_Bool)arg1 withBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)setSendButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setSongNotAvailableViewVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *selectedTracks;
- (void)didTapSongNotAvailableView:(id)arg1;
- (void)_didTapSendButton:(id)arg1;
- (void)musicBrowserViewController:(id)arg1 didUpdateSearchResults:(id)arg2 searchQuery:(id)arg3;
- (void)musicBrowserViewController:(id)arg1 didTapAudioTrack:(id)arg2;
- (void)musicBrowserViewControllerDidCancel:(id)arg1;
- (_Bool)isMusicBrowserVCVisible;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMediaCreatorUsername:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

