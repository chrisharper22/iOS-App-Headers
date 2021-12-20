//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBStateTimeIntervalsManager : NSObject
{
    double _applicationMemoryWarningTimestamp;
    double _foregroundCumulativeTime;
    double _backgroundCumulativeTime;
    double _lastStateChangeTimestamp;
    _Bool _foreground;
    double _applicationStartTime;
}

+ (id)sharedManager;
@property(readonly, nonatomic) double applicationStartTime; // @synthesize applicationStartTime=_applicationStartTime;
- (void)appReceivedMemoryWarning;
- (void)appResignedActive;
- (void)appBecameActive;
- (void)appWillEnterForeground;
- (void)appWillTerminate;
- (void)appEnteredBackground;
- (void)appDidFinishLaunchingInState:(long long)arg1;
- (double)timeSinceLastBackgrounding;
- (double)timeSinceLastForegrounding;
- (double)timeSinceLastMemoryWarning;
- (double)backgroundTimeSinceInit;
- (double)timeSinceInit;
- (double)activeTimeSinceInit;
- (void)_updateForegroundState:(_Bool)arg1;
- (id)init;

@end

