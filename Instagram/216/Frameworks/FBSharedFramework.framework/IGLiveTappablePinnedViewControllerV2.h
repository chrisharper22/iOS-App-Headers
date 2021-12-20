//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FBSharedFramework/IGLiveTappablePinnedViewDelegate-Protocol.h>

@class IGLiveFundraiserViewV2, IGLiveShoppingPinnedViewV2, IGLiveTappablePinnedViewModel, IGLiveUserPayPinnedInfoViewV2, IGLiveViewerUserPayPinnedInfoViewModel, NSString, UIButton, UIView;
@protocol IGLiveTappablePinnedViewControllerDelegateV2;

@interface IGLiveTappablePinnedViewControllerV2 : UIViewController <IGLiveTappablePinnedViewDelegate>
{
    IGLiveUserPayPinnedInfoViewV2 *_userPayView;
    IGLiveFundraiserViewV2 *_fundraiserView;
    IGLiveShoppingPinnedViewV2 *_shoppingView;
    UIView *_pinnedView;
    UIButton *_userPayDebugButton;
    UIButton *_clearCacheButton;
    IGLiveViewerUserPayPinnedInfoViewModel *_userPayViewerViewModel;
    _Bool _shouldHideBadgesSystemComment;
    IGLiveTappablePinnedViewModel *_viewModel;
    id <IGLiveTappablePinnedViewControllerDelegateV2> _delegate;
    UIButton *_liveViewerUserPayCtaButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldHideBadgesSystemComment; // @synthesize shouldHideBadgesSystemComment=_shouldHideBadgesSystemComment;
@property(readonly, nonatomic) UIButton *liveViewerUserPayCtaButton; // @synthesize liveViewerUserPayCtaButton=_liveViewerUserPayCtaButton;
@property(nonatomic) __weak id <IGLiveTappablePinnedViewControllerDelegateV2> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGLiveTappablePinnedViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)liveTappablePinnedView:(id)arg1 didTapOnTextWithViewModel:(id)arg2 text:(id)arg3 URL:(id)arg4;
- (void)liveTappablePinnedView:(id)arg1 didTapButtonWithViewModel:(id)arg2;
- (void)_clearCacheButtonTapped;
- (double)determineTappablePinnedViewHeightForSize:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)_logViewerPaymentBarUpdate;
- (void)updateTappablePinnedViewWithUpdate:(id)arg1;
- (void)_viewTapped:(id)arg1;
- (void)_configureWithPinnedView:(id)arg1;
- (void)_configureShoppingView:(id)arg1;
- (void)_configureBroadcasterUserPayView:(id)arg1;
- (void)_configureViewerUserPayView:(id)arg1;
- (void)_debugButtonTapped;
- (void)configureTappablePinnedViewWithViewModel:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

