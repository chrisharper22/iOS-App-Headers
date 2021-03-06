//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShoppingVariantSelectionNavigationControllerDelegate-Protocol.h"

@class IGProductItem, IGShoppingVariantSelectionNavigationController, IGUser, IGUserSession, NSString, UIViewController;
@protocol IGShoppingPDPDefaultProductVariantSelectionControllerDelegate, IGShoppingVariantSelectionResolving;

@interface IGShoppingPDPDefaultProductVariantSelectionController : NSObject <IGShoppingVariantSelectionNavigationControllerDelegate>
{
    IGUserSession *_userSession;
    UIViewController *_presentingViewController;
    IGShoppingVariantSelectionNavigationController *_variantSelectionNavigationController;
    IGUser *_merchant;
    IGProductItem *_initialProductItem;
    id <IGShoppingVariantSelectionResolving> _variantResolver;
    NSString *_analyticsModule;
    NSString *_priorAnalyticsModule;
    id <IGShoppingPDPDefaultProductVariantSelectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPDefaultProductVariantSelectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shoppingVariantSelectionNavigationController:(id)arg1 didPushViewControllerForVariantDimension:(id)arg2;
- (void)shoppingVariantSelectionNavigationController:(id)arg1 didSelectValueForVariantDimension:(id)arg2 selectedValue:(id)arg3;
- (void)shoppingVariantSelectionNavigationController:(id)arg1 didTapInfoView:(id)arg2;
- (void)shoppingVariantSelectionNavigationController:(id)arg1 didCompleteWithProductItem:(id)arg2;
- (void)_handleRequestFailureForProductItem:(id)arg1;
- (void)_handleRequestSuccessForProductItem:(id)arg1;
- (void)presentVariantSelectionFlow;
- (id)initWithUserSession:(id)arg1 presentingViewController:(id)arg2 merchant:(id)arg3 initialProductItem:(id)arg4 variantResolver:(id)arg5 analyticsModule:(id)arg6 priorAnalyticsModule:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

