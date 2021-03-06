//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGDismissableViewController-Protocol.h>
#import <FBSharedFramework/IGListAdapterDataSource-Protocol.h>
#import <FBSharedFramework/IGProCategorySelectionViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGProFBPageNameCellSectionControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGProListItemSectionControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGProViewControllerLoadingAware-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IG4BLogger, IGBottomButtonsView, IGListAdapter, IGProAccountLoggingProvider, IGProConnectFBPageCreationNetworker, IGProFBPageCreationViewControllerConfig, IGProFBPageNameViewModel, IGProHeaderViewModel, IGProListItemViewModel, IGProSwitchFBPageNetworker, IGStepperHeaderControl, IGUserSession, NSMutableArray, NSString, UICollectionView;
@protocol IGListDiffable, IGProFBPageCreationViewControllerDelegate;

@interface IGProFBPageCreationViewController : IGViewController <IGDismissableViewController, IGProCategorySelectionViewControllerDelegate, IGListAdapterDataSource, IGProListItemSectionControllerDelegate, IGProFBPageNameCellSectionControllerDelegate, UIGestureRecognizerDelegate, IGProViewControllerLoadingAware>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    NSMutableArray<IGListDiffable> *_viewModels;
    id <IGProFBPageCreationViewControllerDelegate> _delegate;
    IGBottomButtonsView *_dockedNavigationButtons;
    IGProAccountLoggingProvider *_loggingProvider;
    IGStepperHeaderControl *_stepperHeaderControl;
    _Bool _isInitialLoad;
    NSString *_navigationTitle;
    IGProFBPageCreationViewControllerConfig *_config;
    IGProConnectFBPageCreationNetworker *_pageCreationNetworker;
    IGProSwitchFBPageNetworker *_switchFBPageNetworker;
    IGProHeaderViewModel *_headerViewModel;
    IGProFBPageNameViewModel *_pageNameViewModel;
    IGProListItemViewModel *_categoryViewModel;
    _Bool _ignoreCancelEventLogging;
    NSString *_categoryID;
    NSString *_pageName;
    IG4BLogger *_logger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IG4BLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) _Bool ignoreCancelEventLogging; // @synthesize ignoreCancelEventLogging=_ignoreCancelEventLogging;
- (void)_logPageCreationCancelByLogger:(id)arg1;
- (void)_logPageCreationFinishStepByLogger:(id)arg1 withPageID:(id)arg2 pageName:(id)arg3 subcategoryID:(id)arg4;
- (void)_logPageCreationSubmitErrorByLogger:(id)arg1 errorMessage:(id)arg2;
- (void)_logPageCreationSubmitByLogger:(id)arg1 withPageName:(id)arg2 subcategoryID:(id)arg3 subcategoryName:(id)arg4;
- (void)_logPageCreationPageNameCheckErrorByLogger:(id)arg1 withInputPageName:(id)arg2 errorMessage:(id)arg3;
- (void)_logPageCreationPageNameCheckByLogger:(id)arg1 withInputPageName:(id)arg2 suggestedPageName:(id)arg3;
- (void)updateToLoadingState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didDismissViewController;
- (void)categorySelectionViewControllerDidDimiss:(id)arg1;
- (void)categorySelectionViewController:(id)arg1 didCompleteWithResultModel:(id)arg2;
- (void)listItemSectionController:(id)arg1 didTapSelectButtonWithViewModel:(id)arg2;
- (void)pageNameCellSectionController:(id)arg1 didValidatePageName:(id)arg2 errorMessage:(id)arg3 suggestedPageName:(id)arg4;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)preferredTabBarBehavior;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)_setIsLoading:(_Bool)arg1;
- (void)_finishStepWithPageInfo:(id)arg1;
- (void)_createPageCompletedWithCreatedPageInfo:(id)arg1 error:(id)arg2;
- (void)_createButtonTapped:(id)arg1;
- (void)_updateStatus;
- (void)_viewTapped:(id)arg1;
- (void)_initializeViewModels;
- (void)_setupNavigationButtons;
- (void)_setupCollectionView;
- (void)_setupStepperHeaderIfNecessary;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 logger:(id)arg3 suggestedPageName:(id)arg4 navigationTitle:(id)arg5 config:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

