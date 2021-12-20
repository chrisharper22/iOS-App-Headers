//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IGShoppingProductThumbnailImageView, IGTVShoppingPinnedProductDetailsView, IGTVShoppingPinnedProductViewModel, IGTapButton, UIView;
@protocol IGTVShoppingPinnedProductViewV2Delegate;

@interface IGTVShoppingPinnedProductViewV2 : UIControl
{
    id <IGTVShoppingPinnedProductViewV2Delegate> _delegate;
    IGShoppingProductThumbnailImageView *_thumbnailView;
    IGTVShoppingPinnedProductDetailsView *_detailsView;
    UIView *_verticalSeparatorView;
    IGTapButton *_saveButton;
    IGTapButton *_textCTAButton;
    IGTVShoppingPinnedProductViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)_handleCTASelection;
- (void)_animateForTouchDown:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_didTapTextCTAButton:(id)arg1;
- (void)_didTapSaveButton:(id)arg1;
- (void)_didTapPinnedProduct:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
@property(readonly, nonatomic) _Bool isDisplayingProduct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1;

@end
