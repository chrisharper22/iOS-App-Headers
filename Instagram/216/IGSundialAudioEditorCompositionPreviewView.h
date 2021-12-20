//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGAssetPlayerViewDelegate-Protocol.h"

@class IGAssetPlayerView, IGSundialComposition, NSString, UIImageView;
@protocol IGSundialAudioEditorCompositionPreviewViewDelegate, IGUserLauncherSetProviding;

@interface IGSundialAudioEditorCompositionPreviewView : UIView <IGAssetPlayerViewDelegate>
{
    UIImageView *_previewImageView;
    IGAssetPlayerView *_videoView;
    id <IGUserLauncherSetProviding> _launcherSetProviding;
    id <IGSundialAudioEditorCompositionPreviewViewDelegate> _delegate;
    IGSundialComposition *_composition;
    double _effectivePlaybackRate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double effectivePlaybackRate; // @synthesize effectivePlaybackRate=_effectivePlaybackRate;
@property(retain, nonatomic) IGSundialComposition *composition; // @synthesize composition=_composition;
@property(nonatomic) __weak id <IGSundialAudioEditorCompositionPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)assetPlayerView:(id)arg1 readyToSyncAndPlay:(_Bool)arg2;
- (void)assetPlayerViewPlayStateDidChange:(id)arg1;
- (void)assetPlayerViewAssetLoaded:(id)arg1;
- (void)assetPlayerView:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)assetPlayerViewDidPlayToEnd:(id)arg1;
- (void)assetPlayerView:(id)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)seekToTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(double)arg1;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) _Bool isPlaying;
@property(nonatomic) double volume;
@property(nonatomic) _Bool muted;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 launcherSetProviding:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
