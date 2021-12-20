//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface IGSeenStateTimeInfo : NSObject
{
    double _maxDuration;
    NSDate *_startTime;
    double _minVisiblePercentage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double minVisiblePercentage; // @synthesize minVisiblePercentage=_minVisiblePercentage;
@property(readonly, copy, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)seenStateTimeInfoDataWithDate:(id)arg1;
- (_Bool)isMeasuringDuration;
- (_Bool)noLongerVisibleWithCurrentDate:(id)arg1;
- (_Bool)updatePhotoViewedPercentage:(double)arg1 currentDate:(id)arg2;
- (double)maxDurationWithCurrentDate:(id)arg1;
- (id)_initWithMinVisiblePercentage:(double)arg1 startTime:(id)arg2 maxDuration:(double)arg3;
- (id)initWithTimeInfoData:(id)arg1;
- (id)initWithMinVisiblePercentage:(double)arg1;

@end
