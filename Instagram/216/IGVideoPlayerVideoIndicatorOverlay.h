//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGVideoPlayerOverlay.h"

@class IGVideoIndicatorView;

@interface IGVideoPlayerVideoIndicatorOverlay : IGVideoPlayerOverlay
{
    IGVideoIndicatorView *_indicatorView;
}

- (void).cxx_destruct;
- (void)overlayStatusAdapter:(id)arg1 didReceiveError:(id)arg2;
- (void)overlayStatusAdapterDidPlayThroughToCompletion:(id)arg1;
- (void)overlayStatusAdapterDidBeginPlayingVideo:(id)arg1;
- (void)reset;
- (struct CGRect)preferredFrameInsideRect:(struct CGRect)arg1;
- (void)loadView;
- (void)setStyle:(long long)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)initWithStatusAdapter:(id)arg1;

@end

