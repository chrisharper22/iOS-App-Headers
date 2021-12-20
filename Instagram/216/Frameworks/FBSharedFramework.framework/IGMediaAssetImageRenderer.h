//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGMediaAssetRenderer-Protocol.h>

@class IGAnimationCurve, IGAsyncTask, NSArray, NSString;
@protocol IGMediaAssetRendererDelegate;

@interface IGMediaAssetImageRenderer : NSObject <IGMediaAssetRenderer>
{
    id _lock;
    _Bool _muted;
    id <IGMediaAssetRendererDelegate> _delegate;
    double _volume;
    IGAnimationCurve *_volumeCurve;
    NSArray *_audioEffects;
    IGAsyncTask *_image;
    IGAsyncTask *_previewImage;
    struct __CVBuffer *_imageBuffer;
    struct CGSize _maxSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct __CVBuffer *imageBuffer; // @synthesize imageBuffer=_imageBuffer;
@property(readonly, nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(readonly, nonatomic) IGAsyncTask *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) IGAsyncTask *image; // @synthesize image=_image;
@property(copy, nonatomic) NSArray *audioEffects; // @synthesize audioEffects=_audioEffects;
@property(copy, nonatomic) IGAnimationCurve *volumeCurve; // @synthesize volumeCurve=_volumeCurve;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak id <IGMediaAssetRendererDelegate> delegate; // @synthesize delegate=_delegate;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(readonly, nonatomic) double currentPlaybackRate;
@property(readonly, nonatomic) double currentPlaybackTime;
@property(readonly, nonatomic) struct __CVBuffer *displayTexture;
@property(readonly, nonatomic) _Bool readyForDisplay;
- (void)_processAsyncTasks;
- (void)dealloc;
- (id)initWithImage:(id)arg1 previewImage:(id)arg2 maxSize:(struct CGSize)arg3;
- (id)initWithImage:(id)arg1 previewImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

