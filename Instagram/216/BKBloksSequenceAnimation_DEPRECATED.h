//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKBloksBasicAnimation_DEPRECATED.h"

@class NSArray;

@interface BKBloksSequenceAnimation_DEPRECATED : BKBloksBasicAnimation_DEPRECATED
{
    NSArray *_animations;
    BKBloksBasicAnimation_DEPRECATED *_runningAnimation;
}

- (void).cxx_destruct;
- (void)startAnimationAfter:(id)arg1;
- (void)run:(double)arg1;
- (void)reset;
- (id)initWithAnimations:(id)arg1;

@end

