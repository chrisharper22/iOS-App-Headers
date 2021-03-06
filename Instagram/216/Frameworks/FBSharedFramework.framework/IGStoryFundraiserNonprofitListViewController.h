//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FBSharedFramework/IGAnalyticsModule-Protocol.h>
#import <FBSharedFramework/IGGestureHandler-Protocol.h>
#import <FBSharedFramework/IGSearchBarDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryFundraiserNonprofitNullstateListViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryFundraiserNonprofitSearchListViewControllerDelegate-Protocol.h>

@class IGSearchBarWithCancel, IGStoryFundraiserNonprofitNullstateListViewController, IGStoryFundraiserNonprofitSearchListViewController, IGUserSession, NSString;
@protocol IGStoryFundraiserNonprofitListViewControllerDelegate;

@interface IGStoryFundraiserNonprofitListViewController : UIViewController <IGSearchBarDelegate, IGStoryFundraiserNonprofitNullstateListViewControllerDelegate, IGStoryFundraiserNonprofitSearchListViewControllerDelegate, IGGestureHandler, IGAnalyticsModule>
{
    IGUserSession *_userSession;
    NSString *_sourceName;
    IGSearchBarWithCancel *_searchBarWithCancel;
    UIViewController *_contentViewController;
    IGStoryFundraiserNonprofitNullstateListViewController *_nullstateViewController;
    IGStoryFundraiserNonprofitSearchListViewController *_searchViewController;
    id <IGStoryFundraiserNonprofitListViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryFundraiserNonprofitListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)analyticsModule;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_setContentViewController:(id)arg1;
- (void)_didTapCancelButton;
- (void)_launchFundraiserDetailsForFundraiser:(id)arg1;
- (void)_handleMoreButtonTappedForStandaloneFundraiser:(id)arg1;
- (void)_handleDidTapStandaloneFundraiser:(id)arg1;
- (void)_pushProfileForNonprofit:(id)arg1;
- (void)_handleMoreButtonTappedForNonprofit:(id)arg1;
- (void)_handleDidTapNonprofit:(id)arg1 analyticsModule:(id)arg2;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)fundraiserNonprofitSearchListViewController:(id)arg1 didTapOnMoreButtonForNonprofit:(id)arg2;
- (void)fundraiserNonprofitSearchListViewController:(id)arg1 didSelectNonprofit:(id)arg2;
- (void)fundraiserNonprofitNullstateListViewController:(id)arg1 didTapOnMoreButtonForStandaloneFundraiser:(id)arg2;
- (void)fundraiserNonprofitNullstateListViewController:(id)arg1 didSelectStandaloneFundraiser:(id)arg2;
- (void)fundraiserNonprofitNullstateListViewController:(id)arg1 didTapOnMoreButtonForNonprofit:(id)arg2;
- (void)fundraiserNonprofitNullstateListViewController:(id)arg1 didSelectNonprofit:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 sourceName:(id)arg2 canShowStandaloneFundraiser:(_Bool)arg3 surface:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

