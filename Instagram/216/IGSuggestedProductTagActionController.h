//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShoppingInlineVariantSelectionControllerDelegate-Protocol.h"

@class IGActionSheetController, IGShoppingInlineVariantSelectionController, IGSuggestedProductItemTagView, IGUserSession, NSString;
@protocol IGSuggestedProductTagActionControllerDelegate;

@interface IGSuggestedProductTagActionController : NSObject <IGShoppingInlineVariantSelectionControllerDelegate>
{
    IGUserSession *_userSession;
    _Bool _productItemHasVariants;
    IGActionSheetController *_actionSheetController;
    IGShoppingInlineVariantSelectionController *_variantSelectionController;
    id <IGSuggestedProductTagActionControllerDelegate> _delegate;
    IGSuggestedProductItemTagView *_suggestedProductItemTagView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSuggestedProductItemTagView *suggestedProductItemTagView; // @synthesize suggestedProductItemTagView=_suggestedProductItemTagView;
@property(nonatomic) __weak id <IGSuggestedProductTagActionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleActionFromActionSheet:(long long)arg1;
- (void)_setupActionSheetController;
- (void)shoppingInlineVariantSelectionController:(id)arg1 didResolveWithProductItem:(id)arg2 productSelectionBehavior:(id)arg3;
- (void)showActionSheetController;
- (id)initWithUserSession:(id)arg1 suggestedProductItemTagView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

