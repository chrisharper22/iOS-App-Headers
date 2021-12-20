//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

@class IGImageView, IGStoryGradientRingView;

@interface IGStoryViewerMusicSheetSongArtButton : IGBouncyButton
{
    _Bool _ringViewVisible;
    IGImageView *_artImageView;
    IGStoryGradientRingView *_ringView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ringViewVisible; // @synthesize ringViewVisible=_ringViewVisible;
@property(readonly, nonatomic) IGStoryGradientRingView *ringView; // @synthesize ringView=_ringView;
@property(readonly, nonatomic) IGImageView *artImageView; // @synthesize artImageView=_artImageView;
- (void)setRingViewVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

