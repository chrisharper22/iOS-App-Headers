//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFollowControllerLoggingProvider-Protocol.h"
#import "IGHScrollAYMFCellDelegate-Protocol.h"

@class IGAccountDiscoveryItemViewModel, IGUserSession, NSString;

@interface IGAccountDiscoveryItemSectionController : IGListSectionController <IGHScrollAYMFCellDelegate, IGFollowControllerLoggingProvider>
{
    IGUserSession *_userSession;
    NSString *_module;
    struct CGSize _cardSize;
    IGAccountDiscoveryItemViewModel *_viewModel;
}

- (void).cxx_destruct;
- (id)analyticsExtras;
- (void)didTapSeeAll:(id)arg1;
- (void)didTapDiscoverAccounts:(id)arg1;
- (void)didTapShop:(id)arg1;
- (void)didTapAddCloseFriendForUser:(id)arg1 didAdd:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hScrollAymfCellDidTapConnectContacts:(id)arg1;
- (void)didTapConnectToFB:(id)arg1;
- (void)didTapFollowRequestButtonInCell:(id)arg1 withAction:(long long)arg2;
- (void)didTapFollowButtonInCell:(id)arg1 withAction:(long long)arg2;
- (void)didTapAYMFCell:(id)arg1;
- (void)didDismissAYMFCell:(id)arg1;
- (void)_navigateToProfile:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithItemViewModel:(id)arg1 cardSize:(struct CGSize)arg2 userSession:(id)arg3 module:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

