//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGShoppingDropsTimerDelegate-Protocol.h"
#import "IGShoppingPDPPrimaryButtonCellDelegate-Protocol.h"

@class IGShoppingConsumptionFeedItemLogger, IGShoppingDropsLaunchDateFormatter, IGShoppingDropsTimer, IGShoppingHomeRankingInfo, IGUserSession, NSString;
@protocol IGShoppingPDPPrimaryButtonSectionControllerDelegate;

@interface IGShoppingPDPPrimaryButtonSectionController : IGListSectionController <IGShoppingPDPPrimaryButtonCellDelegate, IGShoppingDropsTimerDelegate>
{
    IGShoppingConsumptionFeedItemLogger *_logger;
    id _viewModel;
    IGShoppingDropsTimer *_timer;
    IGShoppingDropsLaunchDateFormatter *_formatter;
    long long _viewpointLevel;
    IGShoppingHomeRankingInfo *_rankingInfo;
    IGUserSession *_userSession;
    id <IGShoppingPDPPrimaryButtonSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPPrimaryButtonSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shoppingPrimaryButtonCell:(id)arg1 didCaptureCTAFrame:(struct CGRect)arg2 submodule:(id)arg3;
- (void)shoppingPrimaryButtonCell:(id)arg1 didBecomeVisibleWithSectionId:(id)arg2 impressionType:(long long)arg3;
- (void)shoppingPrimaryButtonCell:(id)arg1 didTapSecondaryButton:(id)arg2;
- (void)shoppingPrimaryButtonCell:(id)arg1 didTapPrimaryButton:(id)arg2;
- (void)shoppingDropsTimerDidFire:(id)arg1;
- (void)_presentDestination:(long long)arg1 sectionIdentifier:(id)arg2;
- (void)_configureCountdownButtonCell:(id)arg1 withViewModel:(id)arg2;
- (id)_configureCountdownButtonCellAtIndex:(long long)arg1 withViewModel:(id)arg2;
- (id)_configurePrimaryButtonCellAtIndex:(long long)arg1 withViewModel:(id)arg2;
- (void)captureCTAVisibility;
- (struct UIEdgeInsets)inset;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 viewpointLevel:(long long)arg3 rankingInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

