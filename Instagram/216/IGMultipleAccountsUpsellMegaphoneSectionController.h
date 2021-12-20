//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGMultipleAccountsUpsellMegaphoneCellDelegate-Protocol.h"

@class IGMultipleAccountsUpsellMegaphoneConfiguration, NSString;
@protocol IGMultipleAccountsUpsellMegaphoneSectionDelegate;

@interface IGMultipleAccountsUpsellMegaphoneSectionController : IGListSectionController <IGMultipleAccountsUpsellMegaphoneCellDelegate>
{
    IGMultipleAccountsUpsellMegaphoneConfiguration *_config;
    id <IGMultipleAccountsUpsellMegaphoneSectionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGMultipleAccountsUpsellMegaphoneSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)multipleAccountsUpsellMegaphoneCellDidTapNextButton:(id)arg1;
- (void)multipleAccountsUpsellMegaphoneCellDidTapDismissButton:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
