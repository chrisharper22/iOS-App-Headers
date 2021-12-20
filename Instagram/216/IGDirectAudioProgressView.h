//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGDirectAudioProgressViewModel, IGDirectAudioWaveformView;

@interface IGDirectAudioProgressView : UIView
{
    IGDirectAudioWaveformView *_waveformView;
    UIView *_progressView;
    IGDirectAudioProgressViewModel *_audioProgressViewModel;
    double _progress;
}

- (void).cxx_destruct;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) IGDirectAudioProgressViewModel *audioProgressViewModel; // @synthesize audioProgressViewModel=_audioProgressViewModel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateColor;
- (void)_updateWaveform;
- (id)initWithFrame:(struct CGRect)arg1;

@end

