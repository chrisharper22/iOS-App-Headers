//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGBusinessLocationLinkingReportViewControllerDelegate-Protocol.h"
#import "IGLocationInfoPageClaimFlowDelegate-Protocol.h"
#import "IGLocationInfoPageDataSourceDelegate-Protocol.h"
#import "IGLocationInfoPageLinkedBusinessSectionControllerDelegate-Protocol.h"
#import "IGLocationNavigationItemsDelegate-Protocol.h"

@class IG4BLogger, IGBusinessReportLocationLinkingDataSource, IGInfoLinkedBusinessViewModel, IGListAdapter, IGLocation, IGLocationDetailNavigationItemsController, IGLocationInfoPageClaimFlow, IGLocationInfoPageDataSource, IGLocationInfoPageEditFlow, IGLocationInfoPageModel, IGUserSession, NSString, UICollectionView;

@interface IGInfoPageMainFeedViewController : IGViewController <IGLocationNavigationItemsDelegate, IGBusinessLocationLinkingReportViewControllerDelegate, IGLocationInfoPageClaimFlowDelegate, IGLocationInfoPageDataSourceDelegate, IGLocationInfoPageLinkedBusinessSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGLocationInfoPageModel *_infoPageModel;
    IGInfoLinkedBusinessViewModel *_linkedBusinessModel;
    IGLocationInfoPageDataSource *_dataSource;
    IGListAdapter *_adapter;
    UICollectionView *_collectionView;
    IGLocation *_location;
    IGLocationInfoPageEditFlow *_infoPageEditFlow;
    IG4BLogger *_logger;
    IGLocationInfoPageClaimFlow *_infoPageClaimFlow;
    IGLocationDetailNavigationItemsController *_locationDetailNavigationItemsController;
    IGBusinessReportLocationLinkingDataSource *_businessReportDataSource;
}

- (void).cxx_destruct;
- (void)_logTapForComponent:(id)arg1;
- (void)_didTapBackButton;
- (void)_didSelectBusinessCard;
- (void)locationInfoPageLinkedBusinessSectionControllerDidTapTitle;
- (void)locationInfoPageLinkedBusinessSectionControllerDidTapFeedItem:(id)arg1;
- (void)locationInfoPageLinkedBusinessSectionControllerDidTapProfilePic;
- (void)locationInfoPageLinkedBusinessSectionControllerDidTapViewProfileButton;
- (void)infoPageDetailsDidTapHIAWithType:(long long)arg1;
- (void)locationInfoPageLinkedBusinessSectionControllerDidAppear;
- (void)infoPageDidTapLabelItemWithType:(unsigned long long)arg1;
- (void)infoPageDidSelectHoursToExpand:(_Bool)arg1;
- (void)businessLocationLinkingReportViewController:(id)arg1 didSelectReportReason:(id)arg2 atIndex:(long long)arg3;
- (void)locationDetailViewControllerDidTapSave;
- (void)locationDetailViewControllerDidTapShare;
- (void)locationDetailViewControllerDidTapMore;
- (void)_presentBusinessReportViewController;
- (void)_reportLinkedBusiness;
- (id)_buildPageInfoFromInfoPageModel:(id)arg1 linkedBusinessModel:(id)arg2;
- (void)locationInfoPageClaim:(id)arg1 didFinishClaimWithError:(id)arg2;
- (void)_progressToClaimPageInfo;
- (void)_setupCollectionViewAndAdapter;
- (void)_progressToEditPageInfo;
- (_Bool)_isBusinessOwner;
- (_Bool)_shouldShowClaimButton;
- (void)_setupNextButton;
- (void)_setupNavBarController;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 infoPageModel:(id)arg2 linkedBusinessModel:(id)arg3 location:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

