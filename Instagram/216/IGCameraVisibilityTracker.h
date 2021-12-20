//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol FBCancelable, IGCameraVisibilityTrackerDelegate, IGScheduler><IGAfterScheduler;

@interface IGCameraVisibilityTracker : NSObject
{
    UIView *_cameraPreviewView;
    id <IGScheduler><IGAfterScheduler> _scheduler;
    id <IGCameraVisibilityTrackerDelegate> _delegate;
    long long _lastViewpointState;
    double _lastPercentVisible;
    id <FBCancelable> _cancelToken;
    _Bool _applicationActive;
    _Bool _allowDelayedViolationCall;
    _Bool _monitorForApplicationActive;
    double _minimumPercentVisible;
    double _delayBeforePrivacyViolation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool monitorForApplicationActive; // @synthesize monitorForApplicationActive=_monitorForApplicationActive;
@property(nonatomic) double delayBeforePrivacyViolation; // @synthesize delayBeforePrivacyViolation=_delayBeforePrivacyViolation;
@property(nonatomic) double minimumPercentVisible; // @synthesize minimumPercentVisible=_minimumPercentVisible;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)_cancelScheduledBlock;
- (void)_scheduleBlockInAdvanceIfNeeded:(CDUnknownBlockType)arg1;
- (_Bool)viewPointActionBlockFired:(id)arg1;
- (void)startTrackingCameraPreviewView:(id)arg1;
- (void)didReceiveFrame;
- (id)initWithDelegate:(id)arg1 scheduler:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

