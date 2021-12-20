//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGImageProgressViewDelegate-Protocol.h"
#import "IGShoppingPDPLightboxVideoPlayerOverlayDelegate-Protocol.h"
#import "IGShoppingPDPZoomablePhotoListener-Protocol.h"

@class IGImageProgressView, IGShoppingPDPLightboxVideoPlayerOverlay, IGShoppingPDPZoomablePhotoView, IGStoryOverlayTapModel, IGTapButton, IGZoomController, NSShadow, NSString, UILabel, UIView;
@protocol IGShoppingPDPLightboxMediaCellDelegate, IGZoomControllerZoomingDelegate;

@interface IGShoppingPDPLightboxMediaCell : UICollectionViewCell <IGImageProgressViewDelegate, IGShoppingPDPLightboxVideoPlayerOverlayDelegate, IGShoppingPDPZoomablePhotoListener>
{
    UIView *_videoView;
    IGImageProgressView *_imageView;
    IGTapButton *_usernameButton;
    NSShadow *_attributionTextShadow;
    UILabel *_dotLabel;
    IGTapButton *_viewMediaButton;
    IGShoppingPDPLightboxVideoPlayerOverlay *_audioIndicatorOverlay;
    IGStoryOverlayTapModel *_overlayTapModel;
    struct CGSize _storyViewerMediaSize;
    struct CGSize _mediaSize;
    IGZoomController *_zoomController;
    UIView *_mediaZoomRecognizerView;
    IGShoppingPDPZoomablePhotoView *_mediaZoomExposeRecognizerView;
    _Bool _audioEnabled;
    _Bool _zoomExposeEnabled;
    _Bool _showAttributionButtons;
    UIView *_productSticker;
    id <IGShoppingPDPLightboxMediaCellDelegate> _delegate;
    id <IGZoomControllerZoomingDelegate> _zoomingDelegate;
    UIView *_mediaContainerView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *mediaContainerView; // @synthesize mediaContainerView=_mediaContainerView;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) __weak id <IGZoomControllerZoomingDelegate> zoomingDelegate; // @synthesize zoomingDelegate=_zoomingDelegate;
@property(nonatomic) __weak id <IGShoppingPDPLightboxMediaCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *productSticker; // @synthesize productSticker=_productSticker;
@property(nonatomic) _Bool showAttributionButtons; // @synthesize showAttributionButtons=_showAttributionButtons;
@property(nonatomic) _Bool zoomExposeEnabled; // @synthesize zoomExposeEnabled=_zoomExposeEnabled;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
- (void)setFocusMode:(_Bool)arg1;
- (void)didZoomOut;
- (void)didZoomIn;
- (void)willBeginZooming;
- (void)_didTapViewMediaCTA;
- (void)_didTapAttribution;
- (void)_setUpAttributionButtonsWithAttributionUsername:(id)arg1 viewMediaCtaText:(id)arg2;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)progressImageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)didTapOnVideoPlayerOverlay:(id)arg1 withAudioEnabled:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setAnnouncer:(id)arg1;
- (void)passVideoView:(id)arg1 videoHasAudio:(_Bool)arg2;
- (void)configureWithVideoView:(id)arg1 videoSize:(struct CGSize)arg2 attributionUsername:(id)arg3 viewMediaCtaText:(id)arg4;
- (void)configureWithPhoto:(id)arg1 width:(double)arg2 attributionUsername:(id)arg3 viewMediaCtaText:(id)arg4 analyticsModule:(id)arg5 productID:(id)arg6;
- (void)configureWithProductSticker:(id)arg1 overlayTapModel:(id)arg2 storyViewerMediaSize:(struct CGSize)arg3;
- (void)setShowAttributionButtons:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setZoomExposeEnabled;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView *animationTransitionMediaView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

