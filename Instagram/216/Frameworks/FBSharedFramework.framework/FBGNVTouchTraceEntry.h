//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBGNVTouchTraceEntry : NSObject
{
    _Bool _isInView;
    long long _touchPhase;
    struct CGPoint _touchLocation;
}

@property(readonly, nonatomic) _Bool isInView; // @synthesize isInView=_isInView;
@property(readonly, nonatomic) long long touchPhase; // @synthesize touchPhase=_touchPhase;
@property(readonly, nonatomic) struct CGPoint touchLocation; // @synthesize touchLocation=_touchLocation;
- (id)initWithTouchLocation:(struct CGPoint)arg1 touchPhase:(long long)arg2 isInView:(_Bool)arg3;

@end
