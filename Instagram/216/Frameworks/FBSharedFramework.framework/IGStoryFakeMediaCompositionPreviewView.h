//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGBackgroundGradient, IGLinearGradientView, UIImageView;
@protocol IGStoryMediaAsset;

@interface IGStoryFakeMediaCompositionPreviewView : UIView
{
    IGLinearGradientView *_gradientBackground;
    UIImageView *_imageView;
    _Bool _didFetchAssetImage;
    id <IGStoryMediaAsset> _asset;
    IGBackgroundGradient *_backgroundGradient;
    struct IGRegion _mediaRegion;
}

- (void).cxx_destruct;
@property(nonatomic) struct IGRegion mediaRegion; // @synthesize mediaRegion=_mediaRegion;
@property(retain, nonatomic) IGBackgroundGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(retain, nonatomic) id <IGStoryMediaAsset> asset; // @synthesize asset=_asset;
- (void)_fetchAndDisplayAssetImage;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
