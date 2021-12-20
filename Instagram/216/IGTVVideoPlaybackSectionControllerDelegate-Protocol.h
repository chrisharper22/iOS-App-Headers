//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLinkTapHandlingService, IGLocation, IGMedia, IGProductItem, IGTVVideoPlaybackSectionController, IGUser, NSString;

@protocol IGTVVideoPlaybackSectionControllerDelegate <NSObject>
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapViewCartForMerchantID:(NSString *)arg2;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapPinnedProduct:(IGProductItem *)arg2 forMedia:(IGMedia *)arg3;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapSwitchOrientationForMedia:(IGMedia *)arg2;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapPeopleTagsForMedia:(IGMedia *)arg2;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapViewProductsForMedia:(IGMedia *)arg2;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapBrandPartnersForMedia:(IGMedia *)arg2 withLinkService:(IGLinkTapHandlingService *)arg3;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapLocation:(IGLocation *)arg2 forMedia:(IGMedia *)arg3;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapSeriesForMedia:(IGMedia *)arg2 withUser:(IGUser *)arg3;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapDismissForMedia:(IGMedia *)arg2;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapDirectForMedia:(IGMedia *)arg2;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapCommentsForMedia:(IGMedia *)arg2;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didPlayMediaToEnd:(IGMedia *)arg2;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapLearnMoreForMedia:(IGMedia *)arg2;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapOverflowButtonForMedia:(IGMedia *)arg2;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapRemixForMedia:(IGMedia *)arg2;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapLikeCountForMedia:(IGMedia *)arg2;
- (void)videoPlaybackSectionController:(IGTVVideoPlaybackSectionController *)arg1 didTapUser:(IGUser *)arg2 fromFeedItem:(IGMedia *)arg3;
@end

