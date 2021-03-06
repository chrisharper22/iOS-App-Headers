//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPlainTableViewController.h>

#import "IGLiveUserPaySupporterListViewControllerDelegate-Protocol.h"
#import "IGMonetizationEarningsCellDelegate-Protocol.h"
#import "IGMonetizationEarningsHeaderViewDelegate-Protocol.h"

@class IGMonetizationEarningsHeaderView, IGMonetizationEarningsViewModel, IGUserSession, NSString, UIActivityIndicatorView;

@interface IGMonetizationEarningsViewController : IGPlainTableViewController <IGMonetizationEarningsHeaderViewDelegate, IGMonetizationEarningsCellDelegate, IGLiveUserPaySupporterListViewControllerDelegate>
{
    IGMonetizationEarningsViewModel *_viewModel;
    IGUserSession *_userSession;
    IGMonetizationEarningsHeaderView *_headerView;
    UIActivityIndicatorView *_loadingIndicatorView;
}

- (void).cxx_destruct;
- (void)supporterListViewController:(id)arg1 navigateToUserProfile:(id)arg2;
- (void)monetizationEarningsCellDidTapSupporterListButton:(id)arg1;
- (void)monetizationEarningsCell:(id)arg1 didTapOpenURL:(id)arg2;
- (void)_didTapInfoButton:(id)arg1;
- (void)_displayRefreshFailure;
- (void)_displayActivityIndicatorView:(_Bool)arg1;
- (void)_reloadContentsWithResponse:(id)arg1;
- (void)_refreshInsightsResponse;
- (void)monetizationEarningsHeaderViewDidTapOpenURL:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

