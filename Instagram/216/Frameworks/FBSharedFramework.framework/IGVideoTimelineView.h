//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGVideoTimelineThumbnailsViewDelegate-Protocol.h>
#import <FBSharedFramework/IGVideoTimelineViewInterface-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>
#import <FBSharedFramework/UIScrollViewDelegate-Protocol.h>

@class AVAsset, IGPassthroughView, IGVideoTimelineMaskedRangeView, IGVideoTimelineRange, IGVideoTimelineRangeView, IGVideoTimelineThumbnailsView, NSArray, NSString, UIColor, UIGestureRecognizer, UIImpactFeedbackGenerator, UILabel, UIScrollView;
@protocol IGVideoTimelineThumbnailProvider, IGVideoTimelineViewDelegate;

@interface IGVideoTimelineView : UIView <IGVideoTimelineThumbnailsViewDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, IGVideoTimelineViewInterface>
{
    UIScrollView *_timelineScrollView;
    IGVideoTimelineThumbnailsView *_thumbnailsView;
    UIView *_leftDimmingView;
    UIView *_rightDimmingView;
    IGVideoTimelineRangeView *_rangeView;
    IGPassthroughView *_passthroughView;
    IGVideoTimelineMaskedRangeView *_maskedRangeView;
    IGVideoTimelineRange *_initialScrubSelectedRange;
    NSArray *_disabledIndicatorViews;
    UILabel *_currentTimeLabel;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _Bool _isSnappedToClipBounds;
    double _newRangeBound;
    double _scrollingLastContentOffsetX;
    double _scrollingRelativeStart;
    double _scrollingDecelerationVelocityX;
    _Bool _isScrubbing;
    _Bool _rangeDraggingEnabled;
    _Bool _playheadConstrainedToSelectedRange;
    _Bool _playheadInteractionDisabled;
    _Bool _snappingEnabled;
    _Bool _longVideoUXEnabled;
    _Bool _showCurrentTimeLabel;
    id <IGVideoTimelineViewDelegate> _delegate;
    double _playheadProgress;
    IGVideoTimelineRange *_selectedRange;
    NSArray *_highlightedRanges;
    long long _activeRangeDragHandle;
    double _minimumSelectedRangeDuration;
    double _maximumSelectedRangeDuration;
    UIView *_playheadView;
    NSArray *_snapTimestamps;
    UIGestureRecognizer *_scrubbingGesture;
    double _leftHandlePosition;
    double _rightHandlePosition;
    NSArray *_disabledTimeRanges;
    id <IGVideoTimelineThumbnailProvider> _thumbnailProvider;
    struct UIEdgeInsets _tapPadding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGVideoTimelineThumbnailProvider> thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
@property(nonatomic) _Bool showCurrentTimeLabel; // @synthesize showCurrentTimeLabel=_showCurrentTimeLabel;
@property(retain, nonatomic) NSArray *disabledTimeRanges; // @synthesize disabledTimeRanges=_disabledTimeRanges;
@property(readonly, nonatomic) double rightHandlePosition; // @synthesize rightHandlePosition=_rightHandlePosition;
@property(readonly, nonatomic) double leftHandlePosition; // @synthesize leftHandlePosition=_leftHandlePosition;
@property(nonatomic, getter=isLongVideoUXEnabled) _Bool longVideoUXEnabled; // @synthesize longVideoUXEnabled=_longVideoUXEnabled;
@property(readonly, nonatomic) UIGestureRecognizer *scrubbingGesture; // @synthesize scrubbingGesture=_scrubbingGesture;
@property(retain, nonatomic) NSArray *snapTimestamps; // @synthesize snapTimestamps=_snapTimestamps;
@property(nonatomic) _Bool snappingEnabled; // @synthesize snappingEnabled=_snappingEnabled;
@property(readonly, nonatomic) UIView *playheadView; // @synthesize playheadView=_playheadView;
@property(nonatomic) _Bool playheadInteractionDisabled; // @synthesize playheadInteractionDisabled=_playheadInteractionDisabled;
@property(nonatomic) _Bool playheadConstrainedToSelectedRange; // @synthesize playheadConstrainedToSelectedRange=_playheadConstrainedToSelectedRange;
@property(nonatomic) _Bool rangeDraggingEnabled; // @synthesize rangeDraggingEnabled=_rangeDraggingEnabled;
@property(nonatomic) double maximumSelectedRangeDuration; // @synthesize maximumSelectedRangeDuration=_maximumSelectedRangeDuration;
@property(nonatomic) double minimumSelectedRangeDuration; // @synthesize minimumSelectedRangeDuration=_minimumSelectedRangeDuration;
@property(nonatomic) long long activeRangeDragHandle; // @synthesize activeRangeDragHandle=_activeRangeDragHandle;
@property(retain, nonatomic) NSArray *highlightedRanges; // @synthesize highlightedRanges=_highlightedRanges;
@property(retain, nonatomic) IGVideoTimelineRange *selectedRange; // @synthesize selectedRange=_selectedRange;
@property(nonatomic) struct UIEdgeInsets tapPadding; // @synthesize tapPadding=_tapPadding;
@property(nonatomic) _Bool isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(nonatomic) double playheadProgress; // @synthesize playheadProgress=_playheadProgress;
@property(nonatomic) __weak id <IGVideoTimelineViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_scrollViewDidEndScrolling:(id)arg1;
- (void)_scrollViewWillBeginScrolling:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_updateSubviewVisibility;
- (void)timelineThumbnailsViewDidGenerateThumbnails:(id)arg1;
- (void)timelineThumbnailsViewWillGenerateThumbnails:(id)arg1;
@property(retain, nonatomic) UIColor *highlightColor;
@property(retain, nonatomic) UIColor *dimmingColor;
- (void)_updateCurrentTimeLabel;
- (void)_configureCurrentTimeLabel;
- (void)_handleScrubbingGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(retain, nonatomic) AVAsset *thumbnailProvidingAsset;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithLauncherSetProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

