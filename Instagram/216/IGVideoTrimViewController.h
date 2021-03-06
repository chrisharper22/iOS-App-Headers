//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGVideoTrimViewControlDelegate-Protocol.h"
#import "IGVideoTrimViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGVideoClip, IGVideoTrimView, NSString;
@protocol IGVideoTrimConfirmationDelegate, IGVideoTrimControllerDelegate;

@interface IGVideoTrimViewController : UIViewController <IGVideoTrimViewDelegate, IGVideoTrimViewControlDelegate, UIScrollViewDelegate>
{
    _Bool _alwaysClampsTrimmedRange;
    _Bool _clampTrimmedRange;
    _Bool _pendingTrimHandleJustification;
    IGVideoClip *_videoClip;
    id <IGVideoTrimControllerDelegate> _trimRangeDelegate;
    unsigned long long _confirmationDisplayType;
    id <IGVideoTrimConfirmationDelegate> _confirmationDelegate;
    double _timeScale;
    double _minClipLength;
    double _maxClipLength;
    IGVideoTrimView *_trimView;
    double _fixedPlaybackSpeed;
    double _dynamicPlaybackSpeed;
    double _previousContentOffset;
    struct _IGRange _workingTrimmedRange;
    struct _IGRange _committedTrimmedRange;
    CDStruct_1b6d18a9 _clipDuration;
    struct UIEdgeInsets _trimViewContentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool pendingTrimHandleJustification; // @synthesize pendingTrimHandleJustification=_pendingTrimHandleJustification;
@property(nonatomic) double previousContentOffset; // @synthesize previousContentOffset=_previousContentOffset;
@property(nonatomic) _Bool clampTrimmedRange; // @synthesize clampTrimmedRange=_clampTrimmedRange;
@property(nonatomic) double dynamicPlaybackSpeed; // @synthesize dynamicPlaybackSpeed=_dynamicPlaybackSpeed;
@property(nonatomic) double fixedPlaybackSpeed; // @synthesize fixedPlaybackSpeed=_fixedPlaybackSpeed;
@property(retain, nonatomic) IGVideoTrimView *trimView; // @synthesize trimView=_trimView;
@property(nonatomic) struct _IGRange committedTrimmedRange; // @synthesize committedTrimmedRange=_committedTrimmedRange;
@property(nonatomic) struct _IGRange workingTrimmedRange; // @synthesize workingTrimmedRange=_workingTrimmedRange;
@property(nonatomic) CDStruct_1b6d18a9 clipDuration; // @synthesize clipDuration=_clipDuration;
@property(nonatomic) double maxClipLength; // @synthesize maxClipLength=_maxClipLength;
@property(nonatomic) double minClipLength; // @synthesize minClipLength=_minClipLength;
@property(nonatomic) struct UIEdgeInsets trimViewContentInsets; // @synthesize trimViewContentInsets=_trimViewContentInsets;
@property(nonatomic) double timeScale; // @synthesize timeScale=_timeScale;
@property(nonatomic) _Bool alwaysClampsTrimmedRange; // @synthesize alwaysClampsTrimmedRange=_alwaysClampsTrimmedRange;
@property(nonatomic) __weak id <IGVideoTrimConfirmationDelegate> confirmationDelegate; // @synthesize confirmationDelegate=_confirmationDelegate;
@property(nonatomic) unsigned long long confirmationDisplayType; // @synthesize confirmationDisplayType=_confirmationDisplayType;
@property(nonatomic) __weak id <IGVideoTrimControllerDelegate> trimRangeDelegate; // @synthesize trimRangeDelegate=_trimRangeDelegate;
@property(retain, nonatomic) IGVideoClip *videoClip; // @synthesize videoClip=_videoClip;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)trimViewDidEndUpdatingTrimmedRange:(id)arg1;
- (void)trimView:(id)arg1 didUpdateTrimmedRange:(struct _IGRange)arg2;
- (void)trimViewWillBeginUpdatingTrimmedRange:(id)arg1;
- (void)videoTrimViewDidPressCancel;
- (void)videoTrimViewDidPressDone;
- (void)_confirmTrim;
- (void)_rejectTrim;
- (unsigned long long)_currentRubberbandingType;
- (void)_finishTrimming;
- (void)_configureNavItems;
- (void)_updateVideoTrimmedTimesWithTrimmedRange:(struct _IGRange)arg1;
@property(readonly, nonatomic) unsigned long long panningTrimHandle;
- (void)updatePlaybackTime:(CDStruct_1b6d18a9)arg1;
- (void)updateWithVideoClip:(id)arg1 minClipLength:(double)arg2 maxClipLength:(double)arg3 clipDuration:(CDStruct_1b6d18a9)arg4;
- (void)viewDidLayoutSubviews;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

