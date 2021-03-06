//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDismissableViewController-Protocol.h"
#import "IGEditBusinessProfileViewControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGProProfileVisibilitySectionControllerDelegate-Protocol.h"
#import "IGProViewControllerLoadingAware-Protocol.h"

@class IG4BLogger, IGBusinessConversionFacebookPageCategory, IGListAdapter, IGProHeaderViewModel, IGProProfileDisplayOptionsProfilePreviewModel, IGProProfileVisibilityCellViewModel, IGUser, IGUserSession, NSString, UICollectionView;
@protocol IGProProfileDisplayOptionsViewControllerDelegate, IGProfileLayoutMetrics;

@interface IGProProfileDisplayOptionsViewController : IGViewController <IGProViewControllerLoadingAware, IGDismissableViewController, IGEditBusinessProfileViewControllerDelegate, IGListAdapterDataSource, IGProProfileVisibilitySectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IG4BLogger *_logger;
    id <IGProProfileDisplayOptionsViewControllerDelegate> _delegate;
    _Bool _defaultShouldShowCategory;
    _Bool _defaultShouldShowPublicContacts;
    _Bool _shouldShowCategory;
    _Bool _shouldShowPublicContacts;
    _Bool _didCancelDisplayOptionsChange;
    NSString *_navigationTitle;
    NSString *_headerViewTitle;
    id <IGProfileLayoutMetrics> _layoutMetrics;
    IGBusinessConversionFacebookPageCategory *_category;
    IGUser *_mockedUserForPreview;
    IGProHeaderViewModel *_headerViewModel;
    IGProProfileVisibilityCellViewModel *_displayCategoryViewModel;
    IGProProfileVisibilityCellViewModel *_displayContactViewModel;
    IGProProfileDisplayOptionsProfilePreviewModel *_previewModel;
}

- (void).cxx_destruct;
- (void)didSaveEditBusinessProfileViewController:(id)arg1 turnedOnBookingFromOff:(_Bool)arg2;
- (void)didCancelEditBusinessProfileViewController:(id)arg1;
- (void)didDismissViewController;
- (void)updateToLoadingState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_logSelectedValuesSubmitAndFinish;
- (id)_loggedValuesIsDefaultValues:(_Bool)arg1;
- (id)_loggedSwitchToggleForInfoSection:(long long)arg1 isDefault:(_Bool)arg2;
- (id)_valueForInfoSection:(long long)arg1 isDefault:(_Bool)arg2;
- (void)_handleUpdateProfileDisplayOptionsCompleted:(_Bool)arg1 error:(id)arg2;
- (void)_updateAccountProfileDisplayOptions;
- (void)_nextButtonTapped;
- (void)_setupNavigationButtons;
- (void)_buildMockUserAndAddPreviewViewModels;
- (void)_updateDisplayContactViewModel;
- (void)_updateDisplayCategoryViewModel;
- (_Bool)_isContactInfoRequiredAndMissing;
- (_Bool)_isAnyPublicContactSetToUser;
- (id)_headerViewModel;
- (void)_pushEditBusinessProfileViewController;
- (void)_logTapComponentOnNoContactInfoSavedAlert:(id)arg1;
- (void)_showAlertContactInfoRequired;
- (void)profileVisibilitySectionController:(id)arg1 shouldShowProfileInfo:(_Bool)arg2 profileInfoSection:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_validateShowPublicContactsState;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_setupCollectionView;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 logger:(id)arg3 navigationTitle:(id)arg4 headerViewTitle:(id)arg5 category:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

