//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGARLocationEffectCircleLocationCheckerDelegate-Protocol.h"
#import "IGARLocationStickerHandler-Protocol.h"
#import "IGBusinessLocationLinkingReportViewControllerDelegate-Protocol.h"
#import "IGDirectShareSheetControllerDelegate-Protocol.h"
#import "IGDiscoveryMapLocationDetailGridViewControllerDelegate-Protocol.h"
#import "IGDiscoveryMapMapPinsHydrationListener-Protocol.h"
#import "IGDiscoveryMapPartialModalSheetContentProvider-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGStoryDataControllerStoryItemListener-Protocol.h"

@class IGARLocationEffect, IGDiscoveryMapDataSource, IGDiscoveryMapLocationDetailGridViewController, IGDiscoveryMapLocationDetailViewModel, IGDiscoveryMapLoggingContext, IGDiscoveryMapNavigationBar, IGLocation, IGUser, IGUserSession, NSDate, NSString;
@protocol IGDirectShareSheetControlling, IGDiscoveryMapLocationDetailViewControllerDelegate><IGARLocationStickerHandler><IGARLocationEffectCircleLocationCheckerDelegate;

@interface IGDiscoveryMapLocationDetailViewController : IGViewController <IGBusinessLocationLinkingReportViewControllerDelegate, IGDirectShareSheetControllerDelegate, IGDiscoveryMapLocationDetailGridViewControllerDelegate, IGDiscoveryMapMapPinsHydrationListener, IGStoryDataControllerStoryItemListener, IGARLocationStickerHandler, IGARLocationEffectCircleLocationCheckerDelegate, IGDiscoveryMapPartialModalSheetContentProvider, IGGestureHandler>
{
    IGUserSession *_userSession;
    IGDiscoveryMapLocationDetailViewModel *_viewModel;
    IGDiscoveryMapDataSource *_dataSource;
    IGDiscoveryMapLoggingContext *_loggingContext;
    NSDate *_enteredDate;
    IGDiscoveryMapNavigationBar *_navigationBar;
    IGDiscoveryMapLocationDetailGridViewController *_gridViewController;
    IGUser *_businessUser;
    id <IGDirectShareSheetControlling> _reshareController;
    IGARLocationEffect *_sticker;
    NSString *_takeoverLocationPK;
    id <IGDiscoveryMapLocationDetailViewControllerDelegate><IGARLocationStickerHandler><IGARLocationEffectCircleLocationCheckerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDiscoveryMapLocationDetailViewControllerDelegate><IGARLocationStickerHandler><IGARLocationEffectCircleLocationCheckerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)storyDataController:(id)arg1 didReturnNoStoryItemResultsForReelPK:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyDataController:(id)arg1 fetchItemsDidFailForReelPK:(id)arg2 error:(id)arg3 refreshType:(long long)arg4 updateDuration:(double)arg5;
- (void)storyDataController:(id)arg1 didUpdateReel:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)guideViewController:(id)arg1 didSelectLocation:(id)arg2 forGuide:(id)arg3 guideItemsResponse:(id)arg4 guideItem:(id)arg5;
- (void)guideViewController:(id)arg1 didTapMapButtonForGuide:(id)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)contentScrollView;
- (double)heightForPartialModalSheet;
- (void)sender:(id)arg1 didShareSticker:(id)arg2;
- (void)sender:(id)arg1 didTapDismissForSticker:(id)arg2;
- (void)sender:(id)arg1 didTapViewStickers:(id)arg2;
- (void)sender:(id)arg1 didTapFindThisSticker:(id)arg2 isInRadius:(_Bool)arg3;
- (void)discoveryMapDataSourceDidFailToFetchHydratedMapPins:(id)arg1;
- (void)_handleHydrationForMapPin:(id)arg1;
- (void)discoveryMapDataSource:(id)arg1 didFetchHydratedMapPins:(id)arg2;
- (void)locationDetailGridViewController:(id)arg1 didScrollToOffset:(double)arg2;
- (void)locationDetailGridViewController:(id)arg1 didSelectBusinessUser:(id)arg2;
- (void)locationDetailGridViewController:(id)arg1 didTapViewInformationForInfoPageModel:(id)arg2;
- (void)locationDetailGridViewControllerDidTapSend:(id)arg1;
- (void)locationDetailGridViewController:(id)arg1 didReceiveBusinessUser:(id)arg2;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPostPk:(id)arg6;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2 hasShared:(_Bool)arg3;
- (void)circleLocationCheckerLocationDidExitCircle:(id)arg1;
- (void)circleLocationCheckerLocationDidEnterCircle:(id)arg1;
- (void)businessLocationLinkingReportViewController:(id)arg1 didSelectReportReason:(id)arg2 atIndex:(long long)arg3;
- (void)_didTapMoreButton:(id)arg1;
- (void)_didTapDismissButton:(id)arg1;
- (void)_didTapAvatarView:(id)arg1;
@property(readonly, nonatomic) IGLocation *location;
- (void)viewWillLayoutSubviews;
- (void)_setupGridViewController;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 viewModel:(id)arg2 dataSource:(id)arg3 sticker:(id)arg4 loggingContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

