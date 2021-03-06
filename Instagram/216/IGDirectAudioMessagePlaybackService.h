//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectAudioMessagePlaybackServicePlaying-Protocol.h"
#import "IGDirectAudioMessagePlaybackServiceQuerying-Protocol.h"
#import "IGDirectAudioMessagePlaybackServiceSeeking-Protocol.h"
#import "IGDirectAudioPlayingDelegate-Protocol.h"

@class IGAudioSessionClient, IGDirectAudioFNFPlayer, IGDirectAudioMessagePlaybackLogger, IGDirectUIMessageMetadata, IGUser, NSMutableDictionary, NSString;
@protocol IGDirectAudioMessagePlaybackServiceAnnouncer, IGDirectOutgoingUpdateSending;

@interface IGDirectAudioMessagePlaybackService : NSObject <IGDirectAudioMessagePlaybackServicePlaying, IGDirectAudioMessagePlaybackServiceSeeking, IGDirectAudioMessagePlaybackServiceQuerying, IGDirectAudioPlayingDelegate>
{
    id <IGDirectAudioMessagePlaybackServiceAnnouncer> _announcer;
    IGDirectUIMessageMetadata *_currentlyPlayingMetadata;
    _Bool _currentlyPlayingMessageIsShhMode;
    NSString *_currentPlayingContentType;
    IGDirectAudioFNFPlayer *_player;
    NSMutableDictionary *_playbackSessionStateForMetadata;
    NSString *_sessionId;
    id <IGDirectOutgoingUpdateSending> _outgoingUpdateSender;
    IGAudioSessionClient *_audioSessionClient;
    IGDirectAudioMessagePlaybackLogger *_logger;
    IGUser *_currentUser;
    long long _state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void)finishAudioMessageSeekWithMetadata:(id)arg1 audio:(id)arg2 progress:(double)arg3 isShhMode:(_Bool)arg4;
- (void)updateAudioMessageSeekWithMetadata:(id)arg1 progress:(double)arg2 isShhMode:(_Bool)arg3;
- (void)beginAudioMessageSeekWithMetadata:(id)arg1 progress:(double)arg2 isShhMode:(_Bool)arg3;
- (void)markPlaybackSessionEndedWithThreadKey:(id)arg1;
- (void)markPlaybackSessionStarted;
- (void)pauseCurrentlyPlayingMessage;
- (void)playAudioMessageWithMetadata:(id)arg1 audio:(id)arg2 isShhMode:(_Bool)arg3 playerMode:(long long)arg4 contentType:(id)arg5;
- (id)currentlyPlayingMetadata;
- (double)progressForAudioMessageWithMetadata:(id)arg1;
- (_Bool)isAudioMessagePlayingWithMetadata:(id)arg1;
- (void)audioPlaybackDidPlayToEnd;
- (void)audioPlaybackDidProgress:(double)arg1;
- (void)audioPlaybackDidResumeWithDuration:(double)arg1 progress:(double)arg2;
- (void)audioPlaybackDidPause;
- (void)audioPlaybackDidStartWithDuration:(double)arg1;
- (void)audioPlaybackDidFailWithError:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_updatePlaybackSessionStateForMetadata:(id)arg1 sessionId:(id)arg2 progress:(double)arg3 isShhMode:(_Bool)arg4;
- (void)_markMessageAsSeenWithMetadata:(id)arg1 isShhMode:(_Bool)arg2;
- (void)_setPlaybackServiceStateIdle;
- (void)_setPlaybackServiceStatePlayingWithAudio:(id)arg1;
- (void)_updatePlaybackServiceStateWithAudio:(id)arg1;
- (void)_setCurrentlyPlayingMetadata:(id)arg1 audio:(id)arg2 isShhMode:(_Bool)arg3 contentType:(id)arg4;
- (id)initWithVideoPlayerManager:(id)arg1 outgoingUpdateSender:(id)arg2 soundStateListener:(id)arg3 analyticsLogger:(id)arg4 currentUser:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

