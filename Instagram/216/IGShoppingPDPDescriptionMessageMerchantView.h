//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGShoppingPDPSecondaryLinkDataModel, IGTextButton, UILabel;
@protocol IGShoppingPDPDescriptionMessageMerchantViewDelegate;

@interface IGShoppingPDPDescriptionMessageMerchantView : UIView
{
    UILabel *_title;
    IGTextButton *_button;
    IGShoppingPDPSecondaryLinkDataModel *_viewModel;
    id <IGShoppingPDPDescriptionMessageMerchantViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPDescriptionMessageMerchantViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapMessageMerchantButton:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

