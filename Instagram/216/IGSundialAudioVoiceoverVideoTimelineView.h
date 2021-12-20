//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGPlaybackTimelineDelegate-Protocol.h"

@class IGPlaybackTimeline, IGVideoTimelineMaskedRangeView, NSArray, NSString, UIGestureRecognizer, UIImpactFeedbackGenerator;
@protocol IGSundialAudioVoiceoverVideoTimelineDelegate;

@interface IGSundialAudioVoiceoverVideoTimelineView : UIView <IGPlaybackTimelineDelegate>
{
    NSArray *_videoSegments;
    UIView *_videoSegmentsContainer;
    UIView *_recordingRangeView;
    IGVideoTimelineMaskedRangeView *_maskedRangeView;
    UIView *_playheadView;
    IGPlaybackTimeline *_recordingTimeline;
    double _totalDuration;
    UIImpactFeedbackGenerator *_impactGenerator;
    UIGestureRecognizer *_scrubbingGesture;
    NSArray *_snapTimestamps;
    id <IGSundialAudioVoiceoverVideoTimelineDelegate> _delegate;
    double _currentTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) __weak id <IGSundialAudioVoiceoverVideoTimelineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *snapTimestamps; // @synthesize snapTimestamps=_snapTimestamps;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)playbackTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
- (void)removeAllRecordedRanges;
- (void)removeLastRecordedRange;
- (void)stopRecording;
- (void)startRecordingAtRate:(double)arg1;
- (void)addRecordedRange:(id)arg1;
- (void)_handleScrubbingGesture:(id)arg1;
- (void)cancelScrubbing;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithVideoClips:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
