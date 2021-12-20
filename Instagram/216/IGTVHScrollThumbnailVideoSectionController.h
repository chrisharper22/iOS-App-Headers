//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGTVFeedItemThumbnailSectionCoordinatorDelegate-Protocol.h"

@class IGTVFeedItemThumbnailSectionCoordinator, IGTVHScrollInsets, IGUserSession, NSString;

@interface IGTVHScrollThumbnailVideoSectionController : IGListGenericSectionController <IGTVFeedItemThumbnailSectionCoordinatorDelegate>
{
    IGTVHScrollInsets *_hScrollInsets;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGTVFeedItemThumbnailSectionCoordinator *_feedItemCoordinator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTVFeedItemThumbnailSectionCoordinator *feedItemCoordinator; // @synthesize feedItemCoordinator=_feedItemCoordinator;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)reconfigureVisibleCell;
- (void)didLongPressTrayItem:(id)arg1;
- (void)didTapTrayItem:(id)arg1;
- (void)didLongPressFeedItem:(id)arg1;
- (void)didTapFeedItem:(id)arg1;
- (double)imageWidthForItem;
- (void)thumbnailSectionCoordinator:(id)arg1 didUnhideFeedItem:(id)arg2;
- (void)thumbnailSectionCoordinator:(id)arg1 didHideFeedItem:(id)arg2;
- (void)thumbnailSectionCoordinator:(id)arg1 didUpdateFeedItem:(id)arg2;
- (void)thumbnailSectionCoordinator:(id)arg1 didUpdateSeenDuration:(double)arg2 forFeedItem:(id)arg3;
- (double)imageWidthForFeedItemInThumbnailSectionCoordinator:(id)arg1;
- (struct UIEdgeInsets)inset;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithUserSession:(id)arg1 hScrollInsets:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

