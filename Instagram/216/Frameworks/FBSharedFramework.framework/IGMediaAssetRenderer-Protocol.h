//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGAnimationCurve, NSArray;
@protocol IGMediaAssetRendererDelegate;

@protocol IGMediaAssetRenderer <NSObject>
@property(copy, nonatomic) IGAnimationCurve *volumeCurve;
@property(copy, nonatomic) NSArray *audioEffects;
@property(nonatomic) double volume;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(readonly, nonatomic) double currentPlaybackTime;
@property(readonly, nonatomic) double currentPlaybackRate;
@property(readonly, nonatomic) _Bool readyForDisplay;
@property(readonly, nonatomic) struct __CVBuffer *displayTexture;
@property(nonatomic) __weak id <IGMediaAssetRendererDelegate> delegate;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@end
