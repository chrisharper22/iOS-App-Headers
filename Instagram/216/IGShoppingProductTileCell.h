//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGFeedPreviewableCell-Protocol.h"
#import "IGImageViewDelegate-Protocol.h"
#import "IGShoppingDropsTimerDelegate-Protocol.h"
#import "IGShoppingProductTileMediaCarouselViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CALayer, IGCoreTextView, IGGradientView, IGShoppingDropsTimer, IGShoppingProductThumbnailImageView, IGShoppingProductTileBannerView, IGShoppingProductTileMediaCarouselView, IGShoppingProductTileMediaOverlayFooterView, IGShoppingProductTileMediaOverlayHeaderView, IGTapButton, IGUserSession, NSNumber, NSString, UIButton, UITapGestureRecognizer, UIView;
@protocol IGShoppingGenericProductTileViewModel, IGShoppingProductTileCellDelegate;

@interface IGShoppingProductTileCell : UICollectionViewCell <IGImageViewDelegate, IGShoppingProductTileMediaCarouselViewDelegate, IGShoppingDropsTimerDelegate, UIGestureRecognizerDelegate, IGFeedPreviewableCell>
{
    id <IGShoppingGenericProductTileViewModel> _viewModel;
    IGUserSession *_userSession;
    NSString *_shoppingSessionId;
    NSString *_analyticsModule;
    UITapGestureRecognizer *_mediaTapGestureRecognizer;
    UITapGestureRecognizer *_cellTapGestureRecognizer;
    UIView *_cardContainerView;
    CALayer *_highlightOverlay;
    IGShoppingProductThumbnailImageView *_productThumbnail;
    UIView *_overlayView;
    UIView *_videoContainerView;
    UIView *_videoView;
    IGShoppingProductTileMediaCarouselView *_mediaCarouselView;
    IGShoppingProductTileMediaOverlayHeaderView *_headerView;
    IGShoppingProductTileMediaOverlayFooterView *_footerView;
    IGGradientView *_gradientView;
    IGCoreTextView *_titleLabel;
    IGCoreTextView *_firstSubtitleLabel;
    IGCoreTextView *_secondSubtitleLabel;
    IGTapButton *_ctaButton;
    UIButton *_saveButton;
    UIButton *_threeDotMenu;
    IGShoppingProductTileBannerView *_bannerView;
    IGShoppingDropsTimer *_dropsTimer;
    id <IGShoppingProductTileCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingProductTileCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shoppingDropsTimerDidFire:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)shoppingProductTileMediaCarouselView:(id)arg1 didSwipeToMedia:(id)arg2;
- (void)shoppingProductTileMediaCarouselView:(id)arg1 didTapMedia:(id)arg2;
@property(readonly, nonatomic) NSNumber *currentPlaybackTime;
- (_Bool)shouldAllowPreviewForLocation:(struct CGPoint)arg1;
- (id)image;
- (id)sessionId;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)_hideGradientView;
- (void)_setupGradientView;
- (void)_setupFooterViewIfNeeded;
- (void)_setupHeaderView;
- (void)_updateOverlay;
- (void)_setupGradientHeaderFooterViews;
- (void)_updateDropsLaunchInfo;
- (void)_configureVideoView:(id)arg1;
- (void)_configureVideoPlaybackIfNeeded:(id)arg1 videoManager:(id)arg2 cellWidth:(double)arg3;
- (void)_cellTapped;
- (void)_mediaViewTapped:(id)arg1;
- (void)_setupCtaButtonIfNeededWithTitle:(id)arg1;
- (void)_setupMediaCarouselViewIfNeededWithVideoManager:(id)arg1;
- (void)_setupProductThumbnailViewIfNeeded;
- (void)_configureAccessibility;
- (void)_didTapCtaButton:(id)arg1;
- (void)_didTapSaveButton:(id)arg1;
- (void)_didTapDismissButton:(id)arg1;
- (void)_didTapThreeDotMenu:(id)arg1;
- (id)threeDotMenuAction;
- (void)scrollToCoverMedia:(id)arg1 animated:(_Bool)arg2;
- (id)displayedCoverMedia;
- (void)undoSaveAction;
- (void)configureWithViewModel:(id)arg1 cellWidth:(double)arg2 analyticsModule:(id)arg3 shoppingSessionId:(id)arg4 videoManager:(id)arg5 userSession:(id)arg6;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)transitionZoomView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

