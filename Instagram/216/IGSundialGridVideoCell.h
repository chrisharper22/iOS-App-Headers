//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGFeedPreviewableCell-Protocol.h"
#import "IGImageViewDelegate-Protocol.h"

@class IGAnimatedThumbnailView, IGGradientView, IGImageURL, IGImageView, IGMedia, IGSensitivityView, IGSundialGridBlackOverlay, IGSundialGridPill, IGVideoPlayCountLabel, NSNumber, NSString, UIImageView;
@protocol IGSundialGridPerformanceLogger;

@interface IGSundialGridVideoCell : UICollectionViewCell <IGImageViewDelegate, IGFeedPreviewableCell>
{
    IGImageView *_previewImageView;
    IGGradientView *_legibilityGradient;
    IGSundialGridPill *_pill;
    IGSundialGridBlackOverlay *_blackOverlay;
    IGVideoPlayCountLabel *_playCountLabel;
    IGSensitivityView *_mediaGatingOverlay;
    UIImageView *_shoppingCartIcon;
    IGMedia *_media;
    IGImageURL *_previewImageURL;
    IGAnimatedThumbnailView *_animatedThumbnailView;
    id <IGSundialGridPerformanceLogger> _perfLogger;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSundialGridPerformanceLogger> perfLogger; // @synthesize perfLogger=_perfLogger;
- (void)setMediaGatingEnabled:(_Bool)arg1 withGatingType:(unsigned long long)arg2;
@property(readonly, nonatomic) NSNumber *currentPlaybackTime;
- (_Bool)shouldAllowPreviewForLocation:(struct CGPoint)arg1;
- (id)image;
- (id)sessionId;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
@property(nonatomic) _Bool showShoppingCartIcon;
- (void)setAnimatedThumbnailInfo:(id)arg1 speed:(double)arg2 playPercentage:(double)arg3;
- (void)setMedia:(id)arg1 previewImageURL:(id)arg2;
@property(nonatomic) long long playCount;
@property(copy, nonatomic) NSString *blackOverlayText;
@property(copy, nonatomic) NSString *pillText;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

