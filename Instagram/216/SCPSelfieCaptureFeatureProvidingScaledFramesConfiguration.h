//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCPSelfieCaptureFeatureProvidingScaledFramesConfiguration : NSObject <NSCopying>
{
    long long _numberOfFrames;
    double _lenghtOfLongerEdgeOfScaledFrame;
    double _xAxisOffsetRationFromFaceRect;
    double _yAxisOffsetRationFromFaceRect;
}

@property(readonly, nonatomic) double yAxisOffsetRationFromFaceRect; // @synthesize yAxisOffsetRationFromFaceRect=_yAxisOffsetRationFromFaceRect;
@property(readonly, nonatomic) double xAxisOffsetRationFromFaceRect; // @synthesize xAxisOffsetRationFromFaceRect=_xAxisOffsetRationFromFaceRect;
@property(readonly, nonatomic) double lenghtOfLongerEdgeOfScaledFrame; // @synthesize lenghtOfLongerEdgeOfScaledFrame=_lenghtOfLongerEdgeOfScaledFrame;
@property(readonly, nonatomic) long long numberOfFrames; // @synthesize numberOfFrames=_numberOfFrames;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNumberOfFrames:(long long)arg1 lenghtOfLongerEdgeOfScaledFrame:(double)arg2 xAxisOffsetRationFromFaceRect:(double)arg3 yAxisOffsetRationFromFaceRect:(double)arg4;

@end

