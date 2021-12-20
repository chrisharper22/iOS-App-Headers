//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTVPlayPauseButton, IGTVProgressScrubber, UIButton, UILabel;
@protocol IGTVVideoControlsViewDelegate;

@interface IGTVVideoControlsView : UIView
{
    IGTVProgressScrubber *_progressScrubber;
    IGTVPlayPauseButton *_playPauseButton;
    UILabel *_durationLabel;
    UIButton *_exitLandscapeButton;
    _Bool _showsPlayPauseButton;
    _Bool _showsProgressScrubberHandle;
    _Bool _showsExitLandscapeButton;
    id <IGTVVideoControlsViewDelegate> _delegate;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showsExitLandscapeButton; // @synthesize showsExitLandscapeButton=_showsExitLandscapeButton;
@property(nonatomic) _Bool showsProgressScrubberHandle; // @synthesize showsProgressScrubberHandle=_showsProgressScrubberHandle;
@property(nonatomic) _Bool showsPlayPauseButton; // @synthesize showsPlayPauseButton=_showsPlayPauseButton;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <IGTVVideoControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateExitLandscapeButton;
- (void)_updateProgressScrubberHandle;
- (void)_updatePlayPauseButton;
- (void)_updateDurationLabel;
- (void)_exitLandscapeTapped:(id)arg1;
- (void)_playPauseTapped:(id)arg1;
- (void)_scrubbingEnded:(id)arg1;
- (void)_scrubbingChanged:(id)arg1;
- (void)_scrubbingBegan:(id)arg1;
- (struct UIEdgeInsets)scrubberInsets;
@property(nonatomic) double progress;
@property(nonatomic) long long playPauseButtonState;
- (void)setTintColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 delegate:(id)arg2;

@end

