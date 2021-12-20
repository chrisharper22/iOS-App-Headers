//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGPromoteViewController.h"

#import "IGListAdapterDataSource-Protocol.h"
#import "IGPromoteAlertDialogViewDelegate-Protocol.h"
#import "IGPromoteRadioButtonListSectionControllerDelegate-Protocol.h"
#import "IGPromoteTitleSubtitleSectionControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGBoostTokenlessPromoteDataManager, IGBottomButtonsView, IGHeadlineViewModel, IGListAdapter, IGPromoteDataStore, IGPromoteLoginHelper, IGPromoteLoginResponseDataModel, IGPromoteRadioButtonViewListModel, IGPromoteTitleSubtitleViewModel, IGStepperHeaderControl, IGUserSession, NSString, UIActivityIndicatorView, UICollectionView;
@protocol IGTokenlessPromoteDialogViewControllerDelegate;

@interface IGTokenlessPromoteDialogViewController : IGPromoteViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGPromoteRadioButtonListSectionControllerDelegate, IGPromoteAlertDialogViewDelegate, IGPromoteTitleSubtitleSectionControllerDelegate>
{
    UICollectionView *_collectionView;
    IGListAdapter *_adapter;
    IGUserSession *_session;
    UIActivityIndicatorView *_spinner;
    IGStepperHeaderControl *_stepperHeaderControl;
    IGPromoteDataStore *_localDataStore;
    long long _pro2proScreenState;
    IGHeadlineViewModel *_headlineViewModel;
    IGPromoteRadioButtonViewListModel *_radioViewModel;
    IGPromoteTitleSubtitleViewModel *_titleSubtitleViewModel;
    long long _selectedOption;
    IGBottomButtonsView *_continueButton;
    IGBoostTokenlessPromoteDataManager *_graphqlDataManager;
    _Bool _isLoading;
    IGPromoteLoginResponseDataModel *_loginResponseDataModel;
    NSString *_adAccountName;
    long long _existingPaymentMethodCount;
    long long _numberOfSteps;
    IGPromoteLoginHelper *_promoteLoginHelper;
    id <IGTokenlessPromoteDialogViewControllerDelegate> _delegate;
    IGPromoteDataStore *_dataStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGPromoteDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(nonatomic) __weak id <IGTokenlessPromoteDialogViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_presentWebsiteWithURL:(id)arg1;
- (void)_handleCancelDialog;
- (void)_handleContinueDialog;
- (void)_clearPromoteBusinessUserAccessToken;
- (void)_handlePro2ProNavigateToIGPromoteIGBAFailureFetchFBToken;
- (void)_navigateToIGPromoteWithPref:(int)arg1 hasPermission:(_Bool)arg2;
- (void)_logErrorEventForEvent:(id)arg1 component:(id)arg2 action:(id)arg3 errorIdentifier:(id)arg4 entryPoint:(id)arg5 flow:(id)arg6 selectedValues:(id)arg7;
- (void)_logEventForEvent:(id)arg1 component:(id)arg2 action:(id)arg3 entryPoint:(id)arg4 flow:(id)arg5 selectedValues:(id)arg6;
- (void)_logTokenlessPromoteDisclosureViewedWithPrefStatus:(int)arg1 withPrefPermission:(int)arg2;
- (void)_logExitTokenlessPromoteDisclosure;
- (void)_stopLoading;
- (void)_startLoading;
- (void)_exitAndResetLocalDataStore;
- (void)_setBackButtonEnabled:(_Bool)arg1;
- (void)_setUpNavigationBarStepper;
- (void)_reloadview;
- (void)_setUpNavigationBar;
- (void)_setUpContentViews;
- (void)_showNoPermissionsDialog;
- (void)_handleSetTPSettingsSuccessWithPref:(int)arg1 andPermission:(int)arg2;
- (void)_finishInitAfterFetchWithPrefStatus:(int)arg1 withPrefPermission:(int)arg2 andResult:(id)arg3;
- (void)_handleSetTPPromotePrefWithSuccess:(_Bool)arg1 responseModel:(id)arg2 error:(id)arg3;
- (void)_setTPPrefWithAttemptedPrefStatus:(int)arg1;
- (void)_showIGBAPaymentWarningDialog;
- (void)_setTPSettings;
- (void)_handleFetchTPPromoteInfoWithSuccess:(_Bool)arg1 responseModel:(id)arg2 error:(id)arg3;
- (void)_loginWithPromoteHelperProDisclosureShouldSetUpCAL;
- (void)_loginWithPromoteHelper;
- (void)_fetchPro2ProDisclosureQuery;
- (void)_fetchPro2ProTPSettings;
- (void)_fetchTPSettings;
- (void)_updateViewModel;
- (void)_reloadRadioSelection:(id)arg1;
- (void)_logRadioTapped:(id)arg1 withIdentifier:(id)arg2;
- (void)promoteAlertDialogView:(id)arg1 didDismissAlertWithMediaId:(id)arg2;
- (void)promoteAlertDialogView:(id)arg1 didTapURL:(id)arg2 WithMediaId:(id)arg3;
- (void)promoteTitleSubtitleSectionController:(id)arg1 didTapSubtitleLink:(id)arg2;
- (void)promoteTitleSubtitleSectionController:(id)arg1 didTapCellTitleWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapURL:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapEditButtonWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapDeleteButtonWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapSubtitleWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapCellWithViewModel:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 dataStore:(id)arg2 loginResponseDataModel:(id)arg3 numberOfSteps:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

