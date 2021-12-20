//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGGestureHandler-Protocol.h"
#import "IGWideSliderDelegate-Protocol.h"

@class IGSundialAudioMixAddTrackButton, IGTapButton, IGWideSlider, NSString, UIControl, UIImage, UILabel;
@protocol IGSundialAudioMixSliderDelegate;

@interface IGSundialAudioMixSlider : IGPassthroughView <IGWideSliderDelegate, IGGestureHandler>
{
    IGSundialAudioMixAddTrackButton *_addAudioButton;
    IGWideSlider *_volumeSlider;
    IGTapButton *_editAudioButton;
    UILabel *_volumeLabel;
    UILabel *_titleLabel;
    id <IGSundialAudioMixSliderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIControl *editAudioButton; // @synthesize editAudioButton=_editAudioButton;
@property(readonly, nonatomic) UIControl *addAudioButton; // @synthesize addAudioButton=_addAudioButton;
@property(readonly, nonatomic) UIControl *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(nonatomic) __weak id <IGSundialAudioMixSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)wideSliderWillEndSliding:(id)arg1;
- (void)wideSliderWillBeginSliding:(id)arg1;
- (void)_didChangeVolume;
@property(retain, nonatomic) NSString *titleText;
@property(nonatomic) _Bool addLabelHidden;
@property(nonatomic) _Bool volumeLabelHidden;
@property(nonatomic) _Bool titleLabelHidden;
@property(nonatomic) double value;
@property(retain, nonatomic) UIImage *addAudioButtonIcon;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

