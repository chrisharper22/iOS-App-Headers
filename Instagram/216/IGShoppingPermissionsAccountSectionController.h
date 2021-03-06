//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGProfileAndTrailingButtonControllerDelegate-Protocol.h"

@class IGShoppingPermissionsApprovedPartnerDataModel, IGUser, NSString;
@protocol IGShoppingPermissionsAccountSectionControllerDelegate;

@interface IGShoppingPermissionsAccountSectionController : IGListSectionController <IGProfileAndTrailingButtonControllerDelegate>
{
    long long _highlightedProductsCount;
    IGUser *_user;
    IGShoppingPermissionsApprovedPartnerDataModel *_approvedPartner;
    unsigned long long _context;
    id <IGShoppingPermissionsAccountSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPermissionsAccountSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)profileAndTrailingButtonViewButtonTapped:(id)arg1;
- (void)profileAndTrailingButtonViewProfileBodyTapped:(id)arg1;
- (void)profileAndTrailingButtonViewProfilePictureTapped:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithContext:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

