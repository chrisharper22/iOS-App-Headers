//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGBrandedContentPartnerAdItemSectionControllerDelegate-Protocol.h"
#import "IGCreatorPartnershipBrandPartnerSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGListAdapter, IGUserReference, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGBrandedContentBrandPartnerAdsViewController : IGViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGBrandedContentPartnerAdItemSectionControllerDelegate, IGCreatorPartnershipBrandPartnerSectionControllerDelegate>
{
    IGUserSession *_userSession;
    NSString *_priorModule;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGUserReference *_brandPartnerReference;
    long long _adStatusType;
    NSArray *_adItems;
    _Bool _showBrandPartnerHeader;
}

- (void).cxx_destruct;
- (void)brandPartnerSectionController:(id)arg1 didSelectBrandPartner:(id)arg2;
- (void)brandedContentAdItemSectionController:(id)arg1 didSelectAdItem:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_fetchAdItems;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewWillLayoutSubviews;
- (id)analyticsModule;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 brandPartnerReference:(id)arg2 adStatusType:(long long)arg3 priorModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

