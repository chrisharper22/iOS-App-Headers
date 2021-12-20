//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCPFaceRotation : NSObject <NSCopying>
{
    double _x;
    double _y;
    double _leftAngle;
    double _rightAngle;
    double _upAngle;
    double _downPositiveAngle;
    double _downNegativeAngle;
}

@property(readonly, nonatomic) double downNegativeAngle; // @synthesize downNegativeAngle=_downNegativeAngle;
@property(readonly, nonatomic) double downPositiveAngle; // @synthesize downPositiveAngle=_downPositiveAngle;
@property(readonly, nonatomic) double upAngle; // @synthesize upAngle=_upAngle;
@property(readonly, nonatomic) double rightAngle; // @synthesize rightAngle=_rightAngle;
@property(readonly, nonatomic) double leftAngle; // @synthesize leftAngle=_leftAngle;
@property(readonly, nonatomic) double y; // @synthesize y=_y;
@property(readonly, nonatomic) double x; // @synthesize x=_x;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 leftAngle:(double)arg3 rightAngle:(double)arg4 upAngle:(double)arg5 downPositiveAngle:(double)arg6 downNegativeAngle:(double)arg7;

@end

