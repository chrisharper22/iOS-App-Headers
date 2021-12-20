//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface STETimestretchHelper : NSObject
{
}

+ (id)isAnyWithin:(id)arg1 a:(double)arg2 b:(double)arg3;
+ (_Bool)isWithin:(double)arg1 a:(double)arg2 b:(double)arg3;
+ (double)calculateTimestretchRatio:(double)arg1 bpm:(double)arg2 multiplier:(int)arg3;
+ (id)evalTimestretchForSegment:(double)arg1 bpm:(double)arg2 timeSignature:(int)arg3 timestretchLimits:(id)arg4;
+ (id)evalTimestretchForSegment:(double)arg1 bpm:(double)arg2 timeSignature:(int)arg3;
+ (id)evalTimestretchForSegment:(double)arg1 track:(id)arg2 timestretchLimits:(id)arg3;
+ (id)evalTimestretchForSegment:(double)arg1 track:(id)arg2;
+ (id)evalDesirableBeatMultipliers:(int)arg1;
+ (_Bool)soundtrackSignatureAllowsHalfBars:(id)arg1;
+ (_Bool)signatureAllowsHalfBars:(int)arg1;
+ (double)TimestretchLimitDefaultMax;
+ (double)TimestretchLimitDefaultMin;

@end
