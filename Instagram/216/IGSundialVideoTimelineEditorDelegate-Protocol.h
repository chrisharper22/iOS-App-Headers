//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSundialVideoTimelineEditor, NSString, NSURL, UIImage;

@protocol IGSundialVideoTimelineEditorDelegate <NSObject>
- (NSString *)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 igluFilterNameWithIndex:(long long)arg2;
- (void)videoTimelineEditorDidUpdateTransitions:(IGSundialVideoTimelineEditor *)arg1;
- (NSString *)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 accessibilityHintForItemAtIndex:(long long)arg2;
- (NSString *)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 accessibilityLabelForItemAtIndex:(long long)arg2;
- (UIImage *)videoTimelineEditorGetTransitionDefaultIconImage;
- (UIImage *)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 getTransitionRemoteIconImage:(long long)arg2;
- (NSURL *)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 getTransitionRemoteIconImageURL:(long long)arg2;
- (unsigned long long)videoTimelineEditorGetNumberOfTransitionEffects;
- (void)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 addTakesToClipIndex:(long long)arg2;
- (void)videoTimelineEditorDidEndTrimming:(IGSundialVideoTimelineEditor *)arg1;
- (void)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 didAdjustAmountTrimmedFromEnd:(double)arg2 OfVideoClipAtIndex:(long long)arg3;
- (void)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 didAdjustAmountTrimmedFromStart:(double)arg2 OfVideoClipAtIndex:(long long)arg3;
- (void)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 setPlayableRangeStart:(double)arg2 duration:(double)arg3;
- (void)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 setPlayableRangeVideoClipAtIndex:(long long)arg2;
- (void)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 didBeginAdjustingAmountTrimmedFromEndOfVideoClipAtIndex:(long long)arg2;
- (void)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 didBeginAdjustingAmountTrimmedFromStartOfVideoClipAtIndex:(long long)arg2;
- (void)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 mightBeginAdjustingAmountTrimmedFromEndOfVideoClipAtIndex:(long long)arg2;
- (void)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 mightBeginAdjustingAmountTrimmedFromStartOfVideoClipAtIndex:(long long)arg2;
- (void)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 didScrubToTime:(double)arg2;
- (void)videoTimelineEditorDidEndScrubbing:(IGSundialVideoTimelineEditor *)arg1;
- (void)videoTimelineEditorDidBeginScrubbing:(IGSundialVideoTimelineEditor *)arg1;
- (void)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 didSelectThumbnailAtIndex:(long long)arg2;
- (void)videoTimelineEditorDidUpdateVideoClips:(IGSundialVideoTimelineEditor *)arg1;
- (void)videoTimelineEditorDidDeleteAllClips:(IGSundialVideoTimelineEditor *)arg1;
- (void)videoTimelineEditorDidTapDoneButton:(IGSundialVideoTimelineEditor *)arg1;
- (void)videoTimelineEditorDidTapCancelButton:(IGSundialVideoTimelineEditor *)arg1;
- (void)videoTimelineEditor:(IGSundialVideoTimelineEditor *)arg1 shouldUpdatePlaybackState:(_Bool)arg2;
@end

