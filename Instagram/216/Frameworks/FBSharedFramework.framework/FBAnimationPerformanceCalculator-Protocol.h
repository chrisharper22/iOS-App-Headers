//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@protocol FBAnimationPerformanceCalculator <NSObject>
- (struct FBAnimationPerformanceTrackingResult)report;
- (_Bool)needReport;
- (void)reset;
- (long long)calculateFrameDropsFromActualFrameTime:(double)arg1 idealFrameTime:(double)arg2;
- (id)initWithConfiguration:(struct FBAnimationPerformanceTrackerConfiguration)arg1;
@end

