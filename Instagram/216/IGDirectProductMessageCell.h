//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGDirectMessageCell.h>

@class IGDirectProductMessageProductInfoViewModel, IGDirectProductMessageViewModel, IGDirectReshareMessageHeaderView, IGImageProgressView, IGShoppingProductInfoView;

@interface IGDirectProductMessageCell : IGDirectMessageCell
{
    IGDirectReshareMessageHeaderView *_headerView;
    IGImageProgressView *_imageView;
    IGShoppingProductInfoView *_productInfoView;
    IGDirectProductMessageViewModel *_viewModel;
    IGDirectProductMessageProductInfoViewModel *_productInfoViewModel;
}

- (void).cxx_destruct;
- (void)_setUpAccessibility;
- (struct CGSize)messageContentSize;
- (void)configureWithViewModel:(id)arg1 showCheckoutSignaling:(_Bool)arg2 userSession:(id)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

