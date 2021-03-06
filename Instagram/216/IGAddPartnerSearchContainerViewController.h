//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAddPartnerTaggingNullStateDataSourceDelegate-Protocol.h"
#import "IGBrandedContentAddBrandPartnerSearchClickHandlerDelegate-Protocol.h"
#import "IGBrandedContentPartnersListViewControllerDelegate-Protocol.h"
#import "IGGenericSearchViewControllerDelegate-Protocol.h"
#import "IGSearchTypeaheadSearchResultViewModelProvider-Protocol.h"

@class IGAddPartnerTaggingNullStateDataSource, IGBrandedContentPartnersListViewController, IGBrandedContentPartnersLoggerContext, IGUserSession, NSArray, NSString;
@protocol IGAddPartnerSearchContainerViewControllerDelegate, IGAddPartnerTaggingViewControllerDelegate, IGSearchClickHandler;

@interface IGAddPartnerSearchContainerViewController : IGViewController <IGGenericSearchViewControllerDelegate, IGSearchTypeaheadSearchResultViewModelProvider, IGBrandedContentAddBrandPartnerSearchClickHandlerDelegate, IGAddPartnerTaggingNullStateDataSourceDelegate, IGBrandedContentPartnersListViewControllerDelegate>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGViewController *_searchViewController;
    long long _mediaType;
    NSString *_mediaId;
    _Bool _isEditing;
    NSString *_entryPoint;
    _Bool _shouldShowRequestApprovalsDesign;
    _Bool _isDisclosureRedesignEnabled;
    id <IGAddPartnerTaggingViewControllerDelegate> _taggingDelegate;
    id <IGAddPartnerSearchContainerViewControllerDelegate> _delegate;
    IGAddPartnerTaggingNullStateDataSource *_searchNullStateDataSource;
    id <IGSearchClickHandler> _searchClickHandler;
    NSArray *_addedBrandPartners;
    NSArray *_addedPendingApprovalBrandPartners;
    IGBrandedContentPartnersListViewController *_seeAllViewController;
    IGBrandedContentPartnersLoggerContext *_logger;
    unsigned long long _originalUserInterfaceStyle;
}

- (void).cxx_destruct;
- (void)_logRemoveBrandPartner;
- (void)_logAddBrandPartner:(id)arg1;
- (_Bool)_hasApprovalFromBrandPartner:(id)arg1;
- (void)_onNextButtonTapped;
- (void)_onBackButtonTapped;
- (id)_seeAllViewModel;
- (void)didTapSeeAllButton;
- (id)viewModelWithDataModel:(id)arg1 sourceType:(unsigned long long)arg2 userSession:(id)arg3 analyticsModule:(id)arg4;
- (void)_continueToAddPendingApprovalBrandPartner:(id)arg1;
- (void)_showRequestApprovalAlertWithBrandPartner:(id)arg1;
- (void)_showApprovalPendingAlertWithBrandPartner:(id)arg1;
- (void)_tryToAddPendingApprovalBrandPartner:(id)arg1;
- (void)_reloadTableViews;
- (void)_updateAddedPendingApprovalBrandPartners:(id)arg1;
- (_Bool)_hasReachedMaxNumberOfBrandPartnersToAdd;
- (void)didTapOnTextViewString:(id)arg1 URL:(id)arg2;
- (void)didClickOnBrandPartner:(id)arg1;
- (void)partnersListViewControllerDidClickOnBrandPartner:(id)arg1;
- (void)searchViewController:(id)arg1 didChangeSearchText:(id)arg2 searchSessionId:(id)arg3;
- (_Bool)searchViewControllerShouldTriggerSearchWithReturnKeyClick:(id)arg1;
- (void)searchViewControllerDidExitSearch:(id)arg1;
- (void)searchViewControllerDidCancelSearch:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 taggingDelegate:(id)arg2 delegate:(id)arg3 selectedPartnerSponsors:(id)arg4 taggedMerchantId:(id)arg5 mediaId:(id)arg6 mediaType:(long long)arg7 isEditing:(_Bool)arg8 shouldShowRequestApprovalsDesign:(_Bool)arg9 isDisclosureRedesignEnabled:(_Bool)arg10 modifiedBrandPartners:(id)arg11 entryPoint:(id)arg12 analyticsModule:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

