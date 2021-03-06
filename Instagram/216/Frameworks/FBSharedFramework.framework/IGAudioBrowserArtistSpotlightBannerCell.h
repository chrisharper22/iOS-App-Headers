//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyCollectionViewCell.h>

#import <FBSharedFramework/IGImageViewDelegate-Protocol.h>

@class IGAudioExplicitLabel, IGAudioFeaturedLabel, IGImageView, NSString, NSURL, POPBasicAnimation, UILabel, UIScrollView, UIView;

@interface IGAudioBrowserArtistSpotlightBannerCell : IGBouncyCollectionViewCell <IGImageViewDelegate>
{
    UIScrollView *_imageContainer;
    POPBasicAnimation *_panningAnimation;
    IGImageView *_albumArtImageView;
    UIView *_backgroundView;
    IGAudioExplicitLabel *_artistNameLabel;
    UILabel *_songTitleLabel;
    IGAudioFeaturedLabel *_featuredLabel;
    _Bool _isAnimationEnabled;
    NSURL *_albumArtURL;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAnimationEnabled; // @synthesize isAnimationEnabled=_isAnimationEnabled;
@property(retain, nonatomic) NSURL *albumArtURL; // @synthesize albumArtURL=_albumArtURL;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)_resetAnimationValues;
@property(nonatomic, getter=isAnimating) _Bool animating;
@property(nonatomic) _Bool isExplicit;
@property(copy, nonatomic) NSString *featuredText;
@property(copy, nonatomic) NSString *artistName;
@property(copy, nonatomic) NSString *songTitle;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

