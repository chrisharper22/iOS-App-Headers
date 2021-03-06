//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCoWatchAddBirthdayViewControllerDelegate-Protocol.h"
#import "IGCoWatchPremiumContentDataSourceDelegate-Protocol.h"
#import "IGCoWatchPremiumContentDetailsViewControllerDelegate-Protocol.h"
#import "IGDirectScrollingTabChildViewControllerProtocol-Protocol.h"
#import "IGInfoViewDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGCoWatchAgeRequiredBanner, IGCoWatchPremiumContentDataSource, IGCoWatchPremiumContentDetailNetworkSource, IGInfoView, IGListAdapter, IGUserSession, NSString, UICollectionView;
@protocol IGCoWatchPremiumContentViewControllerDelegate, IGDirectMediaPickerTabAppearanceProtocol;

@interface IGCoWatchPremiumContentViewController : IGViewController <IGPartialModalSheetListener, IGInfoViewDelegate, IGCoWatchPremiumContentDataSourceDelegate, IGCoWatchPremiumContentDetailsViewControllerDelegate, IGCoWatchAddBirthdayViewControllerDelegate, UIScrollViewDelegate, IGDirectScrollingTabChildViewControllerProtocol>
{
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGUserSession *_userSession;
    IGInfoView *_infoView;
    IGCoWatchPremiumContentDataSource *_dataSource;
    IGCoWatchPremiumContentDetailNetworkSource *_detailNetworkDataSource;
    IGCoWatchAgeRequiredBanner *_ageRequiredView;
    _Bool _useCustomContentInsets;
    double _bottomInset;
    id <IGCoWatchPremiumContentViewControllerDelegate> _delegate;
    id <IGDirectMediaPickerTabAppearanceProtocol> _tabBarAppearanceDelegate;
    _Bool _isShowingSecondaryPage;
}

- (void).cxx_destruct;
- (void)addAgeViewControllerDidEnterAge:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)premiumContentDetailsViewController:(id)arg1 didSelectCatalogItem:(id)arg2;
- (void)premiumContentDataSource:(id)arg1 didSelectCatalogItem:(id)arg2;
- (void)premiumContentDataSource:(id)arg1 didFailToLoadItemsIsInternetConnected:(_Bool)arg2;
- (void)premiumContentDataSourceDidFinishLoadingItems:(id)arg1;
- (id)analyticsModule;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)infoViewWasTapped:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)containerDidTapSend;
- (void)containerDidUpdateBottomInset:(double)arg1;
- (void)_onTapAgeRequiredView:(id)arg1;
- (void)_setupAgeRequiredView;
- (void)_setupTitleView;
- (void)_setupInfoView;
- (void)_setupEmptyView;
- (void)_setupCollectionViewAndListAdapter;
- (void)_setupDataSource;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 tabBarAppearanceDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

