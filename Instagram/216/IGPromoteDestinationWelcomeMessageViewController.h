//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGPromoteViewController.h"

#import "IGCustomAlertViewDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGNavigationControllerDelegate-Protocol.h"
#import "IGPromoteChevronSectionControllerDelegate-Protocol.h"
#import "IGPromoteSwitchSectionControllerDelegate-Protocol.h"
#import "IGPromoteTitleSubtitleSectionControllerDelegate-Protocol.h"
#import "IGPromoteWelcomeMessageDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGBoostPostLogger, IGListAdapter, IGPromoteDataStore, IGUserSession, NSString, UICollectionView;

@interface IGPromoteDestinationWelcomeMessageViewController : IGPromoteViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGPromoteTitleSubtitleSectionControllerDelegate, IGPromoteChevronSectionControllerDelegate, IGPromoteSwitchSectionControllerDelegate, IGNavigationControllerDelegate, IGCustomAlertViewDelegate, IGPromoteWelcomeMessageDelegate>
{
    IGUserSession *_userSession;
    IGPromoteDataStore *_dataStore;
    IGBoostPostLogger *_logger;
    UICollectionView *_contentView;
    IGListAdapter *_adapter;
    IGPromoteDataStore *_localDataStore;
    _Bool _isWelcomeMessageFAQPreivewEnabledPeek;
}

- (void).cxx_destruct;
- (void)reloadWelcomeMessageView;
- (void)customAlertViewDidTapFooter:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)customAlertViewDidCancel:(id)arg1;
- (void)customAlertView:(id)arg1 didTapAction:(id)arg2;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_onBackBarButtonTapped;
- (void)_saveLocalState;
- (void)switchDidInterceptToggling:(id)arg1;
- (void)switchDidSucceedToggling:(id)arg1;
- (_Bool)switchShouldInterceptToggling:(id)arg1;
- (void)promoteChevronSectionController:(id)arg1 didTapCellWithViewModel:(id)arg2;
- (void)promoteTitleSubtitleSectionController:(id)arg1 didTapSubtitleLink:(id)arg2;
- (void)promoteTitleSubtitleSectionController:(id)arg1 didTapCellTitleWithViewModel:(id)arg2;
- (void)_handleSuccess;
- (void)_saveToggleChange;
- (void)_showAlertDialog;
- (void)_logWelcomeMessageToggle;
- (void)_navigateToEditMessage;
- (void)_reloadView;
- (void)_setUpContentView;
- (void)_setUpNavigationBar;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 dataStore:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
