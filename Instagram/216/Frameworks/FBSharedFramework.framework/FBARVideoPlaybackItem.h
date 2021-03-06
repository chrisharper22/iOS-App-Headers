//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput;

@interface FBARVideoPlaybackItem : NSObject
{
    AVAsset *_videoAsset;
    struct shared_ptr<msqrd::dataprovider::VideoDataProvider> _engineDataProvider;
    struct mutex _mutex;
    unsigned char _requestedState;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerItemVideoOutput *_playerItemVideoOutput;
    struct Optional<msqrd::renderer::Transform> _preferredTransform;
    struct Optional<CGSize> _textureSize;
    unsigned int _loopCount;
    unsigned int _completeCount;
    _Bool _seeking;
    _Bool _looped;
}

+ (id)playbackItemWithVideoURL:(id)arg1 domainAllowlist:(shared_ref_3fe27c92)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic, getter=isLooped) _Bool looped; // @synthesize looped=_looped;
@property(readonly, nonatomic) shared_ptr_53c346d1 engineDataProvider;
@property(readonly, nonatomic) unsigned int completeCount;
@property(readonly, nonatomic) unsigned int loopCount;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentPosition;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (_Bool)looped;
- (void)_updatePlaybackResult:(const void *)arg1;
- (void)renderPendingFramesUsingIglTextureCreator:(id)arg1 renderContext:(void *)arg2;
- (void)_playerItemDidPlayToEndTime:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)seek:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (void)resume;
- (void)tearDown;
- (void)prepareToPlay;
- (void)dealloc;
- (id)initWithVideoURL:(id)arg1 domainAllowlist:(shared_ref_3fe27c92)arg2;

@end

