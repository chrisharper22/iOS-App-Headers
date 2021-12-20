//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGVideoTimelineViewDelegate-Protocol.h>

@class AVAsset, IGVideoCachingTimelineView, NSString;
@protocol IGStoryBoomerangTrimmerDelegate;

@interface IGStoryBoomerangTrimmer : UIView <IGVideoTimelineViewDelegate>
{
    IGVideoCachingTimelineView *_timelineView;
    _Bool _shouldSetInitialTimelineSelectedRangeDurations;
    id <IGStoryBoomerangTrimmerDelegate> _delegate;
    AVAsset *_asset;
    double _playbackTime;
    double _totalDurationOfVideoClips;
    double _originalMediaDuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGVideoCachingTimelineView *timelineView; // @synthesize timelineView=_timelineView;
@property(nonatomic) double originalMediaDuration; // @synthesize originalMediaDuration=_originalMediaDuration;
@property(nonatomic) double totalDurationOfVideoClips; // @synthesize totalDurationOfVideoClips=_totalDurationOfVideoClips;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <IGStoryBoomerangTrimmerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double minimumAllowableDuration;
@property(nonatomic) double maximumAllowableDuration;
- (void)videoTimelineDidGenerateThumbnails:(id)arg1;
- (void)videoTimeline:(id)arg1 didChangeSelectedRange:(id)arg2;
- (void)videoTimeline:(id)arg1 didScrubPlayheadToProgress:(double)arg2;
- (void)videoTimelineDidEndScrubbing:(id)arg1;
- (void)videoTimelineDidBeginScrubbing:(id)arg1;
@property(readonly, nonatomic) long long activeDragHandle;
@property(readonly, nonatomic) _Bool isScrubbing;
@property(readonly, nonatomic) double rightHandlePosition;
@property(readonly, nonatomic) double leftHandlePosition;
@property(nonatomic) double amountTrimmedFromEnd;
@property(nonatomic) double amountTrimmedFromStart;
@property(readonly, nonatomic) double assetDuration;
- (void)_setInitialTimelineSelectedRangeDurations;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithLauncherSetProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
