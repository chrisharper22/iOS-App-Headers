//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGAccountLinkingIneligibleMainAccountCellDelegate-Protocol.h"

@class IGLoginAccount, NSString;
@protocol IGAccountLinkingIneligibleMainAccountSectionControllerDelegate;

@interface IGAccountLinkingIneligibleMainAccountSectionController : IGListSectionController <IGAccountLinkingIneligibleMainAccountCellDelegate>
{
    double _cellWidth;
    double _horizontalPadding;
    IGLoginAccount *_account;
    id <IGAccountLinkingIneligibleMainAccountSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)accountLinkingIneligibleMainAccountCell:(id)arg1 didTapInfoButtonWithTooltipPlacedPoint:(struct CGPoint)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithCellWidth:(double)arg1 horizontalPadding:(double)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
