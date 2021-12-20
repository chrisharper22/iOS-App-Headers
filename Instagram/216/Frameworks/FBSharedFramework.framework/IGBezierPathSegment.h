//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IGBezierPathSegment : NSObject
{
    long long _type;
    NSArray *_points;
}

+ (id)newWithType:(long long)arg1 points:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *points; // @synthesize points=_points;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)pointsThatIntersectSegment:(id)arg1;
- (id)split;
- (struct CGPoint)positionAtTime:(double)arg1;
@property(readonly, nonatomic) struct CGRect boundingBox;

@end
