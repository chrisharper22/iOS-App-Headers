//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGDrawMarkPointIGL.h>

@class NSMutableArray;

@interface IGDrawMarkArrowIGL : IGDrawMarkPointIGL
{
    NSMutableArray *_touchPositions;
}

- (void).cxx_destruct;
- (struct _GLKVector2)_getLastPointWithMinimumDistance:(float)arg1 fromCurrentPoint:(struct _GLKVector2)arg2;
- (void)endWith:(struct _IGDrawTouchSample)arg1;
- (void)addSample:(struct _IGDrawTouchSample)arg1;
- (id)initWithBrush:(id)arg1;

@end
