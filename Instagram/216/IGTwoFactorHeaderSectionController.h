//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGTwoFactorHeaderCellDelegate-Protocol.h"

@class IGTwoFactorHeaderViewModel, NSString;
@protocol IGTwoFactorHeaderSectionControllerDelegate;

@interface IGTwoFactorHeaderSectionController : IGListSectionController <IGTwoFactorHeaderCellDelegate>
{
    IGTwoFactorHeaderViewModel *_viewModel;
    id <IGTwoFactorHeaderSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTwoFactorHeaderSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)twoFactorHeaderCell:(id)arg1 didTapOnLinkWithURL:(id)arg2;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)didUpdateToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

