//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGPromoteViewController.h"

#import "IGListAdapterDataSource-Protocol.h"
#import "IGPromoteHeaderSectionControllerDelegate-Protocol.h"
#import "IGPromoteSliderViewSectionControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGBoostPostLogger, IGListAdapter, IGPromoteCampaignControlsDataStore, IGPromoteErrorDataModel, IGPromoteHeaderViewModel, IGPromoteSliderViewModel, IGPromoteTitleSubtitleViewModel, IGUserSession, NSString, UIActivityIndicatorView, UICollectionView;
@protocol IGPromoteEditBudgetAndDurationViewControllerDelegate;

@interface IGPromoteEditBudgetAndDurationViewController : IGPromoteViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGPromoteSliderViewSectionControllerDelegate, IGPromoteHeaderSectionControllerDelegate>
{
    IGUserSession *_session;
    IGBoostPostLogger *_logger;
    UICollectionView *_contentView;
    IGListAdapter *_adapter;
    UIActivityIndicatorView *_spinner;
    IGPromoteErrorDataModel *_errorDataModel;
    _Bool _isEditing;
    _Bool _prevalidateError;
    _Bool _isFetching;
    id <IGPromoteEditBudgetAndDurationViewControllerDelegate> _delegate;
    IGPromoteCampaignControlsDataStore *_campaignControlsDataStore;
    IGPromoteHeaderViewModel *_headerViewModel;
    IGPromoteHeaderViewModel *_warningViewModel;
    IGPromoteTitleSubtitleViewModel *_campaignDescriptionViewModel;
    IGPromoteSliderViewModel *_budgetSliderViewModel;
    IGPromoteSliderViewModel *_durationSliderViewModel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) IGPromoteSliderViewModel *durationSliderViewModel; // @synthesize durationSliderViewModel=_durationSliderViewModel;
@property(copy, nonatomic) IGPromoteSliderViewModel *budgetSliderViewModel; // @synthesize budgetSliderViewModel=_budgetSliderViewModel;
@property(copy, nonatomic) IGPromoteTitleSubtitleViewModel *campaignDescriptionViewModel; // @synthesize campaignDescriptionViewModel=_campaignDescriptionViewModel;
@property(copy, nonatomic) IGPromoteHeaderViewModel *warningViewModel; // @synthesize warningViewModel=_warningViewModel;
@property(copy, nonatomic) IGPromoteHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(retain, nonatomic) IGPromoteCampaignControlsDataStore *campaignControlsDataStore; // @synthesize campaignControlsDataStore=_campaignControlsDataStore;
@property(nonatomic) __weak id <IGPromoteEditBudgetAndDurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)promoteHeaderSectionController:(id)arg1 didTapURL:(id)arg2;
- (void)promoteHeaderSectionController:(id)arg1 didTapSubtitle:(id)arg2;
- (void)_updateSliderViewModels;
- (void)promoteSliderViewSectionController:(id)arg1 didRespondToTapOutsideThumbWithCell:(id)arg2;
- (void)promoteSliderViewSectionController:(id)arg1 didEndSlidingOnCell:(id)arg2;
- (void)promoteSliderViewSectionController:(id)arg1 didSlideOnCell:(id)arg2 withValue:(id)arg3;
- (void)_handleUpdate;
- (id)_updateAlertDescriptionText;
- (void)_prevalidateAndFetchInitData;
- (void)_onSaveBarButtonTapped;
- (void)_onBackBarButtonTapped;
- (void)_hideSaveButton;
- (void)_setSaveButtonEnabled:(_Bool)arg1;
- (void)_setBackButtonEnabled:(_Bool)arg1;
- (void)_setUpContentView;
- (void)_setUpNavigationBar;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_updateViewModels;
- (void)_reloadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 campaignControlsDataStore:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
