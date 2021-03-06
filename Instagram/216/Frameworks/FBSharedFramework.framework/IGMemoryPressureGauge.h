//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGMemoryPressureGauge : NSObject
{
    long long _criticalThreshold;
    long long _highThreshold;
}

@property(readonly, nonatomic) long long bytesAvailableBeforeMemoryCrash;
@property(readonly, nonatomic) unsigned long long currentMemoryPressureState;
- (id)initWithCriticalThreshold:(long long)arg1 highThreshold:(long long)arg2;

@end

