//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class STEFileManager;
@protocol OS_dispatch_queue;

@interface STEAbstractSoundEngine : NSObject
{
    struct SoundtrackPlayer *_player;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    STEFileManager *_manager;
    struct SoundtrackAudioConfiguration _config;
    double _volumePreMute;
    _Bool _playWasInvokedOnce;
    _Bool _isPaused;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (double)speed;
- (_Bool)setIntensity:(double)arg1 syncUnit:(int)arg2 error:(id *)arg3;
- (_Bool)setIntensity:(double)arg1 error:(id *)arg2;
- (double)intensity;
- (_Bool)setVariation:(double)arg1 syncUnit:(int)arg2 error:(id *)arg3;
- (_Bool)setVariation:(double)arg1 error:(id *)arg2;
- (double)variation;
- (double)getParameter:(int)arg1;
- (_Bool)setParameter:(double)arg1 parameter:(int)arg2 syncUnit:(int)arg3;
- (void)unmute;
- (void)mute;
- (_Bool)setVolume:(double)arg1 error:(id *)arg2;
- (double)volume;
- (_Bool)isReady;
- (_Bool)isPlaying;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)playFrom:(CDStruct_1b6d18a9)arg1 handler:(CDUnknownBlockType)arg2;
- (void)play:(CDUnknownBlockType)arg1;
- (CDStruct_1b6d18a9)positionInSoundtrack;
- (CDStruct_1b6d18a9)position;
- (id)soundtracks;
- (id)findSoundtrackByTitle:(id)arg1;
- (id)findSoundtrackById:(id)arg1;
- (void)importMooFromPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)initPlayerWithUserSession;
- (void)initPlayer;
- (id)initWithCallbackQueue:(id)arg1 userSession:(_Bool)arg2;
- (id)initWithUserSession:(_Bool)arg1;
- (id)initWithCallbackQueue:(id)arg1;
- (id)init;

@end

