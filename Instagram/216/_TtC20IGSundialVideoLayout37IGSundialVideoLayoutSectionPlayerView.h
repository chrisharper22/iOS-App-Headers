//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class MISSING_TYPE;

@interface _TtC20IGSundialVideoLayout37IGSundialVideoLayoutSectionPlayerView : IGPassthroughView
{
    MISSING_TYPE *normalizedViewPort;
    MISSING_TYPE *normalizedCameraFrame;
    MISSING_TYPE *contentView;
    MISSING_TYPE *playerView;
    MISSING_TYPE *tintView;
    MISSING_TYPE *trashButton;
    MISSING_TYPE *audioToggleButton;
    MISSING_TYPE *clip;
    MISSING_TYPE *sectionDeletedHandler;
    MISSING_TYPE *sectionSelectedHandler;
    MISSING_TYPE *toggleButtonLeftAligned;
    MISSING_TYPE *didToggleAudioHandler;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didTapAudioToggle;
- (void)didTapDeleteCapture;
- (void)didSelectPlayer;

@end

