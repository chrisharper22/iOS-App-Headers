//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGDiscoveryGridItemCell.h"

#import "IGImageViewDelegate-Protocol.h"

@class IGGradientView, IGImageView, NSString, UILabel;

@interface IGDiscoveryGridGuideCell : IGDiscoveryGridItemCell <IGImageViewDelegate>
{
    IGImageView *_backgroundView;
    IGGradientView *_bottomLegibilityGradient;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)configureWithTitle:(id)arg1 coverMedia:(id)arg2 analyticsModule:(id)arg3 launcherSet:(id)arg4;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

