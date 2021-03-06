//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAccountLinkingIneligibleMainAccountSectionControllerDelegate-Protocol.h"
#import "IGAccountLinkingMainAccountSelectionSectionDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGTooltipViewDelegate-Protocol.h"

@class IGBottomButtonsView, IGCoreTextView, IGListAdapter, IGListCollectionView, IGTooltipView, IGUser, IGUserSession, NSMutableOrderedSet, NSString, UIButton, UILabel;

@interface IGAccountLinkingMainAccountSelectionViewController : IGViewController <IGListAdapterDataSource, IGAccountLinkingMainAccountSelectionSectionDelegate, IGAccountLinkingIneligibleMainAccountSectionControllerDelegate, IGTooltipViewDelegate>
{
    UIButton *_backButton;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    IGListCollectionView *_accountListView;
    IGCoreTextView *_footerTextView;
    IGBottomButtonsView *_nextButton;
    IGTooltipView *_ineligibilityTooltipView;
    _Bool _shouldShowShortenedFlow;
    IGListAdapter *_listAdapter;
    IGUserSession *_userSession;
    NSString *_sessionId;
    _Bool _isFirstScreen;
    IGUser *_mainAccountSelected;
    NSString *_usernameShownInIneligibilityTooltip;
    NSMutableOrderedSet *_mainAccountEligibleCandidateAccounts;
    NSMutableOrderedSet *_childAccountEligibleCandidateAccounts;
    NSMutableOrderedSet *_ineligibleCandidateAccounts;
}

- (void).cxx_destruct;
- (void)_logDataWithEventName:(id)arg1 extraDict:(id)arg2;
- (void)_logSetMainAccountChooseImpressionEvent;
- (void)_hideIneligibilityTooltipViewIfShown;
- (void)_pushToNextScreenWithChildAccounts:(id)arg1;
- (void)_linkMainAccountSelectedWithChildAccounts:(id)arg1;
- (void)_continueTapped;
- (void)_nextButtonTapped;
- (void)_closeButtonTapped;
- (void)_backButtonTapped;
- (void)_configureFooterTextView;
- (void)_configureNextButton;
- (void)_configureMainAccoutListView;
- (void)_configureBodyLabel;
- (void)_configureTitleLabel;
- (void)_createCloseButton;
- (void)_createBackButton;
- (double)_accoutListViewWidth;
- (id)_theOtherAccount;
- (void)_categorizeAccountsByEligibilityWithLoggedInAccounts:(id)arg1;
- (id)_accountViewModelFromAccount:(id)arg1;
- (void)didTapTooltipView:(id)arg1;
- (void)registrationAccountLinkingIneligibleMainAccountSectionController:(id)arg1 didTapInfoButtonInView:(id)arg2 username:(id)arg3 tooltipPlacedPoint:(struct CGPoint)arg4;
- (void)registrationAccountLinkingIneligibleMainAccountSectionControllerDidTapCell:(id)arg1;
- (id)currentSelectedMainAccount;
- (void)accountLinkingMainAccountSelectionSectionController:(id)arg1 didSelectMainAccount:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)analyticsModule;
- (long long)preferredTabBarBehavior;
- (_Bool)prefersNavigationBarHidden;
- (long long)statusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 sessionId:(id)arg2 isFirstScreen:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

