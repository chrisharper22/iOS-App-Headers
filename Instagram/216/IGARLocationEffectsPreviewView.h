//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGImageViewDelegate-Protocol.h"

@class CAGradientLayer, IGImageView, NSString, UIImageView, UILabel;

@interface IGARLocationEffectsPreviewView : UIView <IGImageViewDelegate>
{
    CAGradientLayer *_gradientLayer;
    IGImageView *_iconImageView;
    IGImageView *_backgroundImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_effectTypeImageView;
    CAGradientLayer *_backgroundGradientLayer;
    _Bool _isSticker;
}

- (void).cxx_destruct;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (id)accessibilityLabel;
- (void)setEffectTypeImage:(id)arg1;
- (void)cancelBackgroundImageRequest;
- (void)setBackgroundImageWithURL:(id)arg1;
- (void)cancelIconImageRequest;
- (void)setIconImageWithURL:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setIsSticker:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

