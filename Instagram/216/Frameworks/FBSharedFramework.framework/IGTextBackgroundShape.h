//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IGTextBackgroundShape : NSObject
{
    _Bool _drawAsRoundRect;
    _Bool _snapToMatchAdjacentLine;
    NSMutableArray *_leftSidePoints;
    NSMutableArray *_rightSidePoints;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *rightSidePoints; // @synthesize rightSidePoints=_rightSidePoints;
@property(readonly, nonatomic) NSMutableArray *leftSidePoints; // @synthesize leftSidePoints=_leftSidePoints;
@property(nonatomic) _Bool snapToMatchAdjacentLine; // @synthesize snapToMatchAdjacentLine=_snapToMatchAdjacentLine;
@property(nonatomic) _Bool drawAsRoundRect; // @synthesize drawAsRoundRect=_drawAsRoundRect;
- (id)_clockwisePointsWithMinimumHorizontalSeparation:(double)arg1;
- (id)_clockwisePointsForDrawingBoundingRect;
- (void)drawShapeOutlineWithColor:(id)arg1 cornerRadius:(double)arg2 outlineWidth:(double)arg3;
- (void)drawWithColor:(id)arg1 cornerRadius:(double)arg2;
- (_Bool)hasPoints;
- (void)addRectToShape:(struct CGRect)arg1;
- (id)init;

@end

