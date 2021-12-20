//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class IGEmojiModel, IGParticleAnimationParameterTuningValues, IGParticleType, NSArray, NSString;

@interface IGParticleAnimatorView : UIView <CAAnimationDelegate>
{
    IGEmojiModel *_emoji;
    IGParticleType *_particle;
    unsigned long long _animationType;
    struct CGPoint _animationOrigin;
    struct CGPoint _animationDestination;
    CDUnknownBlockType _completionBlock;
    NSArray *_variableCountSpawnedParticles;
    IGParticleAnimationParameterTuningValues *_parameterTuningValues;
}

- (void).cxx_destruct;
- (void)_hasFinishedSmokyEmberSublayerAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_playCompositeAnimation;
- (void)_playSpiralCenterAnimation:(unsigned long long)arg1;
- (void)_playSmokyEmberParticlesAnimation:(unsigned long long)arg1;
- (void)_playFlyToDestinationAnimation:(unsigned long long)arg1;
- (void)_playLineBurstAnimation:(unsigned long long)arg1;
- (void)_playBurstHybridAnimation;
- (void)_singleEmojiExpandAndFadeWithType:(unsigned long long)arg1;
- (void)_playConfettiBurstAnimation:(unsigned long long)arg1;
- (void)_playEmojiBurstAnimationWithType:(unsigned long long)arg1;
- (void)_playParticleBurstAnimationWithType:(unsigned long long)arg1;
- (void)_playEmojiParticleBurstAnimationWithType:(unsigned long long)arg1;
- (void)_playFloatUpRainAnimationWithPulse:(_Bool)arg1 animationType:(unsigned long long)arg2;
- (void)_playFloatUpWaveSingleEmojiAnimationWithType:(unsigned long long)arg1;
- (void)_playSpringUpAndDropAnimationWithType:(unsigned long long)arg1;
- (void)_playFloatUpWaveAnimationWithType:(unsigned long long)arg1;
- (void)_playAnimationWithType:(id)arg1;
- (void)removeAnimation:(id)arg1;
- (void)showAnimation:(unsigned long long)arg1 forParticle:(id)arg2 animationOrigin:(struct CGPoint)arg3 animationDestination:(struct CGPoint)arg4 parameterTuningValues:(id)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
