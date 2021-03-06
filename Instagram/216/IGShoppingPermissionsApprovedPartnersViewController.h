//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFeedScrollViewListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListSingleSectionControllerDelegate-Protocol.h"
#import "IGSearchBarDelegate-Protocol.h"
#import "IGShoppingPermissionsAccountSectionControllerDelegate-Protocol.h"
#import "IGShoppingPermissionsAddApprovedPartnersViewControllerDelegate-Protocol.h"
#import "IGShoppingPermissionsApprovedCreatorAccountViewControllerDelegate-Protocol.h"
#import "IGShoppingPermissionsApprovedMerchantAccountViewControllerDelegate-Protocol.h"
#import "IGTextViewSectionControllerDelegate-Protocol.h"

@class IGActionableConfirmationToastController, IGFullscreenSearchTransitionController, IGFullscreenSearchViewController, IGListAdapter, IGSearchBar, IGShoppingPermissionsApprovedPartnersFeedDataModel, IGShoppingPermissionsLogger, IGShoppingPermissionsNetworker, IGStatefulNetworker, IGUserSession, NSString, UICollectionView;
@protocol IGSearchThrottlingType;

@interface IGShoppingPermissionsApprovedPartnersViewController : IGViewController <IGFeedScrollViewListener, IGListAdapterDataSource, IGListSingleSectionControllerDelegate, IGSearchBarDelegate, IGShoppingPermissionsApprovedCreatorAccountViewControllerDelegate, IGShoppingPermissionsApprovedMerchantAccountViewControllerDelegate, IGShoppingPermissionsAddApprovedPartnersViewControllerDelegate, IGShoppingPermissionsAccountSectionControllerDelegate, IGTextViewSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGStatefulNetworker *_networker;
    IGStatefulNetworker *_searchNetworker;
    IGShoppingPermissionsNetworker *_permissionsNetworker;
    IGShoppingPermissionsLogger *_logger;
    unsigned long long _context;
    IGSearchBar *_searchBar;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGActionableConfirmationToastController *_toastController;
    IGFullscreenSearchViewController *_searchViewController;
    IGFullscreenSearchTransitionController *_searchTransitionController;
    IGShoppingPermissionsApprovedPartnersFeedDataModel *_approvedPartnersDataModel;
    IGShoppingPermissionsApprovedPartnersFeedDataModel *_searchApprovedPartnersDataModel;
    _Bool _isPresentingSearch;
    id <IGSearchThrottlingType> _searchThrottler;
}

- (void).cxx_destruct;
- (void)_updateToastControllerContainerView;
- (id)_currentNavigationController;
- (void)_searchCancelTapped;
- (void)_onSuccessfulUndoRemoveUser:(id)arg1;
- (void)_addUserBackToWhitelist:(id)arg1;
- (void)_presentUndoActionableToastViewForUser:(id)arg1;
- (void)_onSuccessfulRemoveUser:(id)arg1 shouldPresentToast:(_Bool)arg2;
- (void)_presentShoppingFromCreatorsEducationFlow:(_Bool)arg1;
- (void)_presentIntroductoryNuxIfNeeded;
- (void)_searchNetworkResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (void)_feedNetworkResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (void)_searchNetworkFetchStateUpdated:(id)arg1;
- (void)_feedNetworkFetchStateUpdated:(id)arg1;
- (void)_requestFeedWithAction:(long long)arg1 networker:(id)arg2 shouldCancelPendingRequests:(_Bool)arg3;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)shoppingPermissionsApprovedMerchantAccountViewController:(id)arg1 didUpdateApprovedPartnerDataModel:(id)arg2;
- (void)shoppingPermissionsApprovedCreatorAccountViewController:(id)arg1 didUpdateApprovedPartnerDataModel:(id)arg2;
- (void)shoppingPermissionsApprovedCreatorAccountViewController:(id)arg1 didRemoveApprovedPartner:(id)arg2;
- (void)textViewSectionController:(id)arg1 didTapOnNonLinkedString:(id)arg2 touchEvent:(unsigned long long)arg3;
- (void)textViewSectionController:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)textViewSectionController:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)didSelectTextViewSectionController:(id)arg1;
- (void)didSelectSectionController:(id)arg1 withObject:(id)arg2;
- (void)shoppingAddApprovedPartnersViewControllerDidUpdateAccounts:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)shoppingPermissionsAccountSectionController:(id)arg1 didSelectDismissUser:(id)arg2;
- (void)shoppingPermissionsAccountSectionController:(id)arg1 didSelectViewProfile:(id)arg2;
- (void)shoppingPermissionsAccountSectionController:(id)arg1 didSelectViewApprovedPartner:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (long long)preferredTabBarBehavior;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 priorModule:(id)arg2 context:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

