//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGDropsProductStickerViewConsumptionDelegate-Protocol.h"
#import "IGFNFVideoPlayerDelegate-Protocol.h"
#import "IGListWorkingRangeDelegate-Protocol.h"
#import "IGShoppingPDPHeroCarouselMediaCellDelegate-Protocol.h"
#import "IGZoomLoggerProtocol-Protocol.h"

@class IGFNFVideoPlayer, IGMedia, IGMediaPreloader, IGShoppingConsumptionFeedItemLogger, IGShoppingPDPHeroCarouselMediaZoomController, IGShoppingPDPHeroCarouselReelViewModel, IGUserSession, IGZoomViewPresenter, NSString;
@protocol IGShoppingPDPHeroCarouselReelSectionControllerDelegate, IGShoppingPDPHeroCarouselSectionMediaTransitioningDelegate;

@interface IGShoppingPDPHeroCarouselReelSectionController : IGListSectionController <IGDropsProductStickerViewConsumptionDelegate, IGFNFVideoPlayerDelegate, IGListWorkingRangeDelegate, IGShoppingPDPHeroCarouselMediaCellDelegate, IGZoomLoggerProtocol>
{
    IGUserSession *_userSession;
    NSString *_productItemPk;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGShoppingPDPHeroCarouselReelViewModel *_viewModel;
    IGMedia *_media;
    IGMediaPreloader *_mediaPreloader;
    long long _viewpointLevel;
    IGShoppingPDPHeroCarouselMediaZoomController *_heroCarouselZoomController;
    IGZoomViewPresenter *_zoomViewPresenter;
    id <IGShoppingPDPHeroCarouselReelSectionControllerDelegate> _delegate;
    id <IGShoppingPDPHeroCarouselSectionMediaTransitioningDelegate> _mediaTransitioningDelegate;
    IGFNFVideoPlayer *_videoPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGFNFVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(nonatomic) __weak id <IGShoppingPDPHeroCarouselSectionMediaTransitioningDelegate> mediaTransitioningDelegate; // @synthesize mediaTransitioningDelegate=_mediaTransitioningDelegate;
@property(nonatomic) __weak id <IGShoppingPDPHeroCarouselReelSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_preloadMedia;
- (void)_finishPlayingVideoIfNeeded;
- (void)_loadVideoIfNeeded;
- (id)_visibleCell;
- (void)_addProductStickerToCell:(id)arg1;
- (void)dropStickerViewDidRequestSave:(id)arg1 shoppingDestination:(id)arg2;
- (void)dropStickerViewDidReachLaunchDate:(id)arg1 stickerModel:(id)arg2;
- (void)logZoomWillEndWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomDidEndWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomDidBeginWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomWillBeginWithZoomController:(id)arg1 extras:(id)arg2;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 playbackReason:(long long)arg3;
- (void)shoppingPDPHeroCarouselMediaCell:(id)arg1 didTapCancelButton:(id)arg2;
- (void)shoppingPDPHeroCarouselMediaCell:(id)arg1 didComputeGradientColors:(id)arg2;
- (_Bool)shoppingPDPHeroCarouselMediaCellCanPerformAnimatedImageTransition:(id)arg1;
- (void)shoppingPDPHeroCarouselMediaCell:(id)arg1 didTapMoreButton:(id)arg2;
- (void)shoppingPDPHeroCarouselMediaCellWasTapped:(id)arg1;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)addProductSticker;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 productItemPk:(id)arg2 merchantId:(id)arg3 logger:(id)arg4 viewpointLevel:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

