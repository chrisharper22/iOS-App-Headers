//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGMediaIconButton, IGSimpleVideoPlayerView, IGSundialReferenceVideo, NSObject, NSString, UILabel, UITapGestureRecognizer;
@protocol IGSundialReferenceVideoViewDelegate, OS_dispatch_source;

@interface IGSundialReferenceVideoView : UIView <UIGestureRecognizerDelegate>
{
    IGSimpleVideoPlayerView *_playerView;
    UIView *_overlayView;
    UILabel *_referenceLabel;
    IGMediaIconButton *_playButton;
    IGMediaIconButton *_pauseButton;
    NSObject<OS_dispatch_source> *_overlayTimer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    IGSundialReferenceVideo *_referenceVideo;
    id <IGSundialReferenceVideoViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSundialReferenceVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGSundialReferenceVideo *referenceVideo; // @synthesize referenceVideo=_referenceVideo;
- (void)_handlePauseButtonTap:(id)arg1;
- (void)_handlePlayButtonTap:(id)arg1;
- (void)_handleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_setOverlayUIVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_cancelOverlayTimer;
- (_Bool)isShowingOverlayUI;
- (void)hideOverlayUI;
- (void)brieflyShowOverlayUI;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(nonatomic) double playbackTime;
@property(nonatomic) double playbackRate;
@property(nonatomic) double startTime;
@property(nonatomic, getter=isLooping) _Bool looping;
@property(nonatomic, getter=isMuted) _Bool muted;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

