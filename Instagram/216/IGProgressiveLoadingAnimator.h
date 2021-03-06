//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGProgressiveLoadingAnimator : NSObject
{
    struct CGPoint _c1;
    struct CGPoint _c2;
    double _startTime;
    double _previousAnimatedProgressDelta;
    CDUnknownBlockType _updateBlock;
    _Bool _isInCompletion;
    double _currentProgressValue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInCompletion; // @synthesize isInCompletion=_isInCompletion;
@property(readonly, nonatomic) double currentProgressValue; // @synthesize currentProgressValue=_currentProgressValue;
- (void)reset;
- (id)_newProgressAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)setProgressValue:(double)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;

@end

