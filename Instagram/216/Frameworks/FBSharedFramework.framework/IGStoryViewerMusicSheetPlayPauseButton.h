//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

@class IGAudioPlayPauseButtonRing, UIImageView;

@interface IGStoryViewerMusicSheetPlayPauseButton : IGBouncyButton
{
    IGAudioPlayPauseButtonRing *_outlineRing;
    UIImageView *_playIconImageView;
    UIImageView *_pauseIconImageView;
    _Bool _showsOutlineRingWhenNotLoading;
    _Bool _disabled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool showsOutlineRingWhenNotLoading; // @synthesize showsOutlineRingWhenNotLoading=_showsOutlineRingWhenNotLoading;
@property(nonatomic) _Bool isShowingPauseSymbol;
@property(nonatomic) _Bool isShowingPlaySymbol;
@property(nonatomic, getter=isLoading) _Bool loading;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

