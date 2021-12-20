//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import <FBSharedFramework/IGActionableConfirmationDualButtonToastViewDelegate-Protocol.h>
#import <FBSharedFramework/IGActionableConfirmationToastViewDelegate-Protocol.h>

@class NSString;
@protocol IGActionableConfirmationToastSectionControllerDelegate, IGActionableConfirmationToastSectionControllerDualButtonDelegate;

@interface IGActionableConfirmationToastSectionController : IGListGenericSectionController <IGActionableConfirmationToastViewDelegate, IGActionableConfirmationDualButtonToastViewDelegate>
{
    id <IGActionableConfirmationToastSectionControllerDelegate> _delegate;
    id <IGActionableConfirmationToastSectionControllerDualButtonDelegate> _dualButtonDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGActionableConfirmationToastSectionControllerDualButtonDelegate> dualButtonDelegate; // @synthesize dualButtonDelegate=_dualButtonDelegate;
@property(nonatomic) __weak id <IGActionableConfirmationToastSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionableConfirmationToastViewDidTapRightButton:(id)arg1;
- (void)actionableConfirmationToastViewDidTapLeftButton:(id)arg1;
- (void)actionableConfirmationToastViewDidToastView:(id)arg1;
- (void)actionableConfirmationToastViewDidTapActionButton:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
