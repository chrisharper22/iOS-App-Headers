//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import <FBSharedFramework/IGSpriteImageViewDelegate-Protocol.h>

@class IGSpriteImageView, IGSundialReactiveAudioLiveIndicatorView, NSString, UILabel;

@interface IGSundialReactiveAudioTutorialView : IGPassthroughView <IGSpriteImageViewDelegate>
{
    UILabel *_preparationLabel;
    UILabel *_internalInfoLabel;
    IGSpriteImageView *_preparationImageView;
    IGSundialReactiveAudioLiveIndicatorView *_reactiveAudioLiveIndicatorView;
    struct CGSize _animationImageSize;
    double _lastTimeBodyDetected;
    int _numberOfTimesAnimationPerformed;
    _Bool _isBodyDetected;
    _Bool _isRecording;
    _Bool _isAnimating;
    _Bool _isPrecaptureAlphaApplied;
    _Bool _isContentHidden;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isContentHidden; // @synthesize isContentHidden=_isContentHidden;
@property(nonatomic) _Bool isPrecaptureAlphaApplied; // @synthesize isPrecaptureAlphaApplied=_isPrecaptureAlphaApplied;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) _Bool isBodyDetected; // @synthesize isBodyDetected=_isBodyDetected;
- (id)_spriteImageViewForJsonString:(id)arg1 holdBeginning:(int)arg2 holdEnd:(int)arg3 image:(unsigned long long)arg4 isReversed:(_Bool)arg5;
@property(nonatomic) _Bool isInternalInfoHidden;
@property(nonatomic) double intensity;
- (void)animationDidStop;
@property(retain, nonatomic) NSString *tutorialPreparationText;
- (void)_checkBackAnimationAfter:(double)arg1;
- (void)_animate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

