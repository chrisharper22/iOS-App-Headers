//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAudioEditorQuickScrubberView;

@protocol IGAudioEditorQuickScrubberViewDelegate <NSObject>
- (void)quickScrubberViewDidEndSliding:(IGAudioEditorQuickScrubberView *)arg1;
- (void)quickScrubberView:(IGAudioEditorQuickScrubberView *)arg1 didSlideToTime:(double)arg2;
- (void)quickScrubberViewDidBeginSliding:(IGAudioEditorQuickScrubberView *)arg1;
@end
