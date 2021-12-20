//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSoundStateListenerDelegate-Protocol.h"

@class IGFNFVideoPlayer, IGSoundStateListener, IGUserSession, IGVideo, NSString;
@protocol IGTVAutoplayingSoundStateDelegate;

@interface IGTVAutoplayingSoundState : NSObject <IGSoundStateListenerDelegate>
{
    IGSoundStateListener *_soundStateListener;
    IGUserSession *_userSession;
    _Bool _isAudioEnabled;
    id <IGTVAutoplayingSoundStateDelegate> _delegate;
    IGVideo *_video;
    IGFNFVideoPlayer *_videoPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGFNFVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(nonatomic) __weak id <IGTVAutoplayingSoundStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isAudioEnabled; // @synthesize isAudioEnabled=_isAudioEnabled;
- (_Bool)_videoHasAudio;
- (_Bool)_videoHasAudioEnabled;
- (_Bool)_shouldEnableAudio;
- (void)_updateAudioEnabledIfNeededForReason:(long long)arg1;
- (void)_resetAudioState;
- (void)soundListenerDidUpdate:(id)arg1;
- (void)soundListenerDidSetStickySoundState:(id)arg1;
@property(readonly, nonatomic) long long soundIndicatorType;
- (void)toggleAudioEnabled;
- (void)stopPlayback;
- (void)startPlayback;
- (void)preparePlayback;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
