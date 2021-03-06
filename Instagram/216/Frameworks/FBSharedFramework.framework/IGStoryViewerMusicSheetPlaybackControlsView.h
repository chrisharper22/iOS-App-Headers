//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import <FBSharedFramework/IGSundialAudioPageScrubberProtocol-Protocol.h>

@class IGStoryViewerMusicSheetPlayPauseButton, IGTVProgressScrubber, NSString, UILabel;

@interface IGStoryViewerMusicSheetPlaybackControlsView : IGPassthroughView <IGSundialAudioPageScrubberProtocol>
{
    UILabel *_currentTimeLabel;
    IGStoryViewerMusicSheetPlayPauseButton *_playPauseButton;
    IGTVProgressScrubber *_scrubber;
    double _currentTime;
}

- (void).cxx_destruct;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, nonatomic) IGTVProgressScrubber *scrubber; // @synthesize scrubber=_scrubber;
@property(readonly, nonatomic) IGStoryViewerMusicSheetPlayPauseButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

