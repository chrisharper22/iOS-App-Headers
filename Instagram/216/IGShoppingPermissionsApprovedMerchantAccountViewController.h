//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGShoppingPermissionsApprovedPartnerDetailedDisclosureSectionControllerDelegate-Protocol.h"
#import "IGShoppingPermissionsApprovedPartnerSectionControllerDelegate-Protocol.h"
#import "IGShoppingPermissionsApprovedPartnerSwitchSectionControllerDelegate-Protocol.h"

@class IGListAdapter, IGShoppingPermissionsLogger, IGShoppingPermissionsNetworker, IGUser, IGUserSession, NSString, UICollectionView;
@protocol IGShoppingPermissionsApprovedMerchantAccountViewControllerDelegate;

@interface IGShoppingPermissionsApprovedMerchantAccountViewController : IGViewController <IGListAdapterDataSource, IGShoppingPermissionsApprovedPartnerSectionControllerDelegate, IGShoppingPermissionsApprovedPartnerDetailedDisclosureSectionControllerDelegate, IGShoppingPermissionsApprovedPartnerSwitchSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGUser *_user;
    long long _productsCount;
    long long _shopLinkingSettingStatus;
    long long _productTaggingSettingStatus;
    IGShoppingPermissionsNetworker *_permissionsNetworker;
    IGShoppingPermissionsLogger *_logger;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    _Bool _isNonCheckoutMerchant;
    id <IGShoppingPermissionsApprovedMerchantAccountViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPermissionsApprovedMerchantAccountViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updatePermissionsWithShopLinkingSettingStatus:(long long)arg1 failure:(CDUnknownBlockType)arg2;
- (void)_presentRemoveShopOnProfileDialogForUser:(id)arg1 switchView:(id)arg2;
- (void)_presentAddShopOnProfileDialogForUser:(id)arg1 switchView:(id)arg2;
- (void)shoppingPermissionsAccountDetailedDisclosureSectionController:(id)arg1 didSelectCellWithRowType:(unsigned long long)arg2;
- (void)shoppingPermissionsApprovedPartnerSwitchSectionController:(id)arg1 didToggleSwitchTo:(_Bool)arg2 forIdentifier:(id)arg3 switchView:(id)arg4;
- (void)shoppingPermissionsAccountSectionController:(id)arg1 didSelectViewUser:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (long long)preferredTabBarBehavior;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 approvedPartner:(id)arg2 priorModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

