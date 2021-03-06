//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGMediaAssetRenderer-Protocol.h>
#import <FBSharedFramework/IGPlaybackTimelineDelegate-Protocol.h>

@class IGAnimationCurve, IGAsyncTask, IGPlaybackTimeline, NSArray, NSString;
@protocol IGMediaAssetRendererDelegate;

@interface IGMediaAssetBoomerangRenderer : NSObject <IGPlaybackTimelineDelegate, IGMediaAssetRenderer>
{
    NSArray *_pixelBufferRefs;
    double _durationPerFrame;
    IGPlaybackTimeline *_playbackTimeline;
    _Bool _muted;
    struct __CVBuffer *_displayTexture;
    id <IGMediaAssetRendererDelegate> _delegate;
    double _volume;
    IGAnimationCurve *_volumeCurve;
    NSArray *_audioEffects;
    IGAsyncTask *_boomerangAsset;
    IGAsyncTask *_previewImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGAsyncTask *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) IGAsyncTask *boomerangAsset; // @synthesize boomerangAsset=_boomerangAsset;
@property(copy, nonatomic) NSArray *audioEffects; // @synthesize audioEffects=_audioEffects;
@property(copy, nonatomic) IGAnimationCurve *volumeCurve; // @synthesize volumeCurve=_volumeCurve;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak id <IGMediaAssetRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct __CVBuffer *displayTexture; // @synthesize displayTexture=_displayTexture;
- (void)playbackTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
- (struct __CVBuffer *)_pixelBufferForTime:(double)arg1;
@property(readonly, nonatomic) _Bool readyForDisplay;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(readonly, nonatomic) double currentPlaybackRate;
@property(readonly, nonatomic) double currentPlaybackTime;
- (void)dealloc;
- (id)initWithBoomerangAsset:(id)arg1 previewImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

