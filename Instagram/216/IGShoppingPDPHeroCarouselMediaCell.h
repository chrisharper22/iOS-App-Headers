//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGImageProgressViewDelegate-Protocol.h"
#import "IGShoppingPDPHeroCarouselImageAnimatedTransitionProviderDelegate-Protocol.h"
#import "IGShoppingPDPMediaWithFeaturedProductPendingOverlayDelegate-Protocol.h"

@class CALayer, IGGradientView, IGImageProgressView, IGShoppingPDPMediaWithFeaturedProductPendingOverlay, IGStoryOverlayTapModel, IGZoomController, NSString, UIButton, UITapGestureRecognizer, UIView;
@protocol IGShoppingPDPHeroCarouselMediaCellDelegate, IGZoomControllerZoomingDelegate;

@interface IGShoppingPDPHeroCarouselMediaCell : UICollectionViewCell <IGImageProgressViewDelegate, IGShoppingPDPMediaWithFeaturedProductPendingOverlayDelegate, IGShoppingPDPHeroCarouselImageAnimatedTransitionProviderDelegate>
{
    UIView *_mediaContainerView;
    UIView *_videoView;
    IGImageProgressView *_imageView;
    struct CGSize _imageSize;
    IGStoryOverlayTapModel *_overlayTapModel;
    struct CGSize _storyViewerMediaSize;
    IGGradientView *_gradientView;
    UIButton *_moreButton;
    CALayer *_dimmingLayer;
    IGShoppingPDPMediaWithFeaturedProductPendingOverlay *_pendingRequestOverlay;
    IGZoomController *_zoomController;
    UIView *_mediaZoomRecognizerView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_productSticker;
    id <IGShoppingPDPHeroCarouselMediaCellDelegate> _delegate;
    id <IGZoomControllerZoomingDelegate> _zoomingDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGZoomControllerZoomingDelegate> zoomingDelegate; // @synthesize zoomingDelegate=_zoomingDelegate;
@property(nonatomic) __weak id <IGShoppingPDPHeroCarouselMediaCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *productSticker; // @synthesize productSticker=_productSticker;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
- (void)_didTapMoreButton:(id)arg1;
- (void)_didTapCell:(id)arg1;
- (void)shoppingPDPMediaWithFeaturedProductPendingOverlay:(id)arg1 didTapCancelButton:(id)arg2;
- (_Bool)shoppingPDPHeroCarouselImageAnimationTransitionProvider:(id)arg1 shouldAnimationTransitionFromState:(id)arg2 toState:(id)arg3;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)progressImageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)prepareForReuse;
- (void)configureWithConfiguration:(id)arg1 gradientColors:(id)arg2 gradientViewAlpha:(double)arg3;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView *animationTransitionMediaView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
