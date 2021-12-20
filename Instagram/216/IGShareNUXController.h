//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGTooltipViewDelegate-Protocol.h"

@class IGAlertDialogView, IGTooltipView, IGUserSession, IGXPostingToFbUpsellManager, NSString, UITapGestureRecognizer, UIViewController;
@protocol IGShareNUXControllerDelegate, IGViewControllerType;

@interface IGShareNUXController : NSObject <IGTooltipViewDelegate, IGCoreTextLinkHandler>
{
    UIViewController *_viewController;
    IGTooltipView *_NUXView;
    IGAlertDialogView *_alertDialogView;
    UITapGestureRecognizer *_mainNuxDismissTap;
    UITapGestureRecognizer *_titleNuxDismissTap;
    IGUserSession *_userSession;
    IGXPostingToFbUpsellManager *_xPostingUpsellManager;
    UIViewController<IGViewControllerType> *_alertViewController;
    id <IGShareNUXControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShareNUXControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapTooltipView:(id)arg1;
- (void)_disableNuxGestures;
- (void)_enableNuxGestures;
- (_Bool)_viewIsShownInWindow;
- (_Bool)_viewControllerIsTopMost;
- (void)_showNUXWithTitle:(id)arg1 atPoint:(struct CGPoint)arg2 constraints:(struct UIEdgeInsets)arg3 inView:(id)arg4 inDirection:(long long)arg5 identifier:(id)arg6 shouldOverwriteTipAnchor:(_Bool)arg7 overwriteTipAnchor:(double)arg8;
- (void)_showNUXWithTitle:(id)arg1 atPoint:(struct CGPoint)arg2 constraints:(struct UIEdgeInsets)arg3 inView:(id)arg4 inDirection:(long long)arg5 identifier:(id)arg6;
- (void)_showNUXWithTitle:(id)arg1 atPoint:(struct CGPoint)arg2 inView:(id)arg3 inDirection:(long long)arg4 identifier:(id)arg5;
- (void)_showAffiliateProductTagTooltipOnLabel:(id)arg1;
- (void)_showTurnOffCountsTooltipOnLabel:(id)arg1;
- (void)_showAddFundraiserTooltipOnCell:(id)arg1;
- (void)_showShareToFacebookSecondTimeExperienceTooltipOnCell:(id)arg1;
- (void)_showShareToFacebookTooltipOnCell:(id)arg1;
- (void)showTagProductsFromBrandsTooltipAfterDelayOnCell:(id)arg1;
- (void)_showTagProductsWithTooltipOverrideOnCell:(id)arg1;
- (void)_showTagCollectionsAndPromotionsTooltipOnCell:(id)arg1;
- (void)_showTagProductsTooltipOnCell:(id)arg1;
- (void)_showCrossPostNUXOnView:(id)arg1;
- (void)_showShareToOtherAccountsTooltipOnCell:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)maybeShowAffiliateProductTagTooltipOnLabel:(id)arg1;
- (void)maybeShowTurnOffLikeAndViewCountsTooltipOnLabel:(id)arg1;
- (void)maybeShowAddFundraiserTooltipOnCell:(id)arg1;
- (void)maybeShowAddAFundraiserDialogWithCompletion:(CDUnknownBlockType)arg1;
- (void)showUpcomingEventDialog;
- (void)showShareToOtherAccountsTooltipOnCell:(id)arg1;
- (void)showAutoSharingToFacebookFeedOnlyOptionDialog:(id)arg1;
- (void)showTagFBFriendsTooltipOnCell:(id)arg1;
- (void)showShareToFacebookSecondTimeExperienceTooltipOnCell:(id)arg1;
- (void)showShareToFacebookTooltipOnCell:(id)arg1;
- (void)showUpdateFacebookSharingTooltipOnCell:(id)arg1;
- (void)showTagProductsTooltipAfterDelayOnCell:(id)arg1 withTooltip:(id)arg2;
- (void)showTagCollectionsAndPromotionsTooltipAfterDelayOnCell:(id)arg1;
- (void)showTagProductsTooltipAfterDelayOnCell:(id)arg1;
- (void)showCrossPostTooltipIfPossibleOnView:(id)arg1 onCell:(id)arg2 withTitle:(id)arg3;
- (void)hideTooltip;
- (id)initWithViewController:(id)arg1 andUserSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

