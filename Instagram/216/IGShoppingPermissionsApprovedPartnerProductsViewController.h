//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFeedScrollViewListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListSingleSectionControllerDelegate-Protocol.h"
#import "IGShoppingPermissionsProductSearchViewControllerDelegate-Protocol.h"
#import "IGShoppingSearchProductListResultSectionControllerDelegate-Protocol.h"

@class IGFeedScrollViewAnnouncer, IGListAdapter, IGShoppingPermissionsLogger, IGShoppingPermissionsNetworker, IGShoppingProductFeedDataModel, IGStatefulNetworker, IGUser, IGUserSession, NSString, UICollectionView;
@protocol IGShoppingPermissionsApprovedPartnerProductsViewControllerDelegate;

@interface IGShoppingPermissionsApprovedPartnerProductsViewController : IGViewController <IGFeedScrollViewListener, IGListAdapterDataSource, IGListSingleSectionControllerDelegate, IGShoppingPermissionsProductSearchViewControllerDelegate, IGShoppingSearchProductListResultSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGUser *_user;
    IGShoppingPermissionsNetworker *_permissionsNetworker;
    IGStatefulNetworker *_networker;
    IGShoppingPermissionsLogger *_logger;
    IGShoppingProductFeedDataModel *_productFeed;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    id <IGShoppingPermissionsApprovedPartnerProductsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPermissionsApprovedPartnerProductsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_presentErrorToast:(id)arg1 errorResponse:(id)arg2;
- (void)_onFailedRemoveHighlightedProduct:(id)arg1 error:(id)arg2;
- (void)_onSuccessfulRemoveHighlightedProduct:(id)arg1;
- (void)_onFailedAddHighlightedProduct:(id)arg1 error:(id)arg2 errorResponse:(id)arg3;
- (void)_onSuccessfulAddHighlightedProduct:(id)arg1;
- (void)_removeHighlightedProduct:(id)arg1;
- (void)_networkResponseLoaded:(id)arg1 networkRequestConfiguration:(id)arg2;
- (void)_networkFetchStateUpdated:(id)arg1;
- (void)_requestFeedWithAction:(long long)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)shoppingPermissionsProductSearchViewControllerDidCancel:(id)arg1;
- (void)shoppingPermissionsProductSearchViewController:(id)arg1 didSelectProduct:(id)arg2;
- (void)sectionController:(id)arg1 didTapDecoratorForItemWithViewModel:(id)arg2;
- (void)sectionController:(id)arg1 didSelectItemWithViewModel:(id)arg2;
- (void)didSelectSectionController:(id)arg1 withObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (long long)preferredTabBarBehavior;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 user:(id)arg2 priorModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

