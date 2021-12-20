//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGShoppingSDPSquareImageCellDelegate-Protocol.h"

@class IGSessionTracker, IGShoppingSDPSquareImageViewModel, IGUserSession, NSString;
@protocol IGShoppingSDPSquareImageSectionControllerDelegate;

@interface IGShoppingSDPSquareImageSectionController : IGListSectionController <IGShoppingSDPSquareImageCellDelegate>
{
    IGShoppingSDPSquareImageViewModel *_viewModel;
    IGUserSession *_userSession;
    IGSessionTracker *_shoppingSessionTracker;
    id <IGShoppingSDPSquareImageSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingSDPSquareImageSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shoppingSDPSquareImageCell:(id)arg1 didTapViewPostButton:(id)arg2;
- (void)shoppingSDPSquareImageCell:(id)arg1 didTapUsernameButton:(id)arg2;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 shoppingSessionTracker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
