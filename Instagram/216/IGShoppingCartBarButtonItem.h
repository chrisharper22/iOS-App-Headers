//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

#import "IGShoppingCartBadgeable-Protocol.h"
#import "IGShoppingCartTooltipAttachable-Protocol.h"

@class IGShoppingCartBarButtonControl, NSString, UIView;

@interface IGShoppingCartBarButtonItem : UIBarButtonItem <IGShoppingCartBadgeable, IGShoppingCartTooltipAttachable>
{
    IGShoppingCartBarButtonControl *_control;
    CDUnknownBlockType _tapHandler;
    _Bool _supportsAddToCartAnimation;
    CDUnknownBlockType _addToCartAnimationCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType addToCartAnimationCompletion; // @synthesize addToCartAnimationCompletion=_addToCartAnimationCompletion;
@property(nonatomic) _Bool supportsAddToCartAnimation; // @synthesize supportsAddToCartAnimation=_supportsAddToCartAnimation;
@property(readonly, nonatomic) long long arrowDirection;
@property(readonly, nonatomic) UIView *attachableView;
@property(readonly, nonatomic) UIView *buttonView;
@property(readonly, nonatomic) NSString *badgeDatasource;
@property(nonatomic) unsigned long long totalItemCount;
- (void)_didTap;
- (id)_initWithSizeType:(long long)arg1 cartButtonType:(long long)arg2;
- (id)initWithTapHandler:(CDUnknownBlockType)arg1 sizeType:(long long)arg2 cartButtonType:(long long)arg3;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 sizeType:(long long)arg3 cartButtonType:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

