//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGImageTitleSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGMonetizationPlatformMultiLineViewSectionControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGListAdapter, IGMonetizationPlatformPayoutAccountsDataSource, IGPayoutHubEditScreenLogging, IGUserSession, NSString, UICollectionView;

@interface IGMonetizationPlatformPayoutAccountsViewController : IGViewController <IGListAdapterDataSource, IGImageTitleSectionControllerDelegate, IGMonetizationPlatformMultiLineViewSectionControllerDelegate, UICollectionViewDelegate>
{
    IGUserSession *_userSession;
    long long _origin;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGMonetizationPlatformPayoutAccountsDataSource *_dataSource;
    IGPayoutHubEditScreenLogging *_editLogger;
}

- (void).cxx_destruct;
- (void)multiLineViewSectionControllerDidSelectSectionController:(id)arg1 viewModelCollection:(id)arg2;
- (void)imageTitleSectionController:(id)arg1 didSelectActionForViewModel:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_showPayoutInfoViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 origin:(long long)arg2 dataSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

