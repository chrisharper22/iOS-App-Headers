//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCoreTextView, IGDirectNUXBannerConfig, IGSimpleButton, UILabel;

@interface IGDirectNUXBanner : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGCoreTextView *_subtitleLabelWithLink;
    IGSimpleButton *_closeButton;
    CDUnknownBlockType _closeButtonHandler;
    IGDirectNUXBannerConfig *_config;
}

- (void).cxx_destruct;
- (void)_setupBorderForLineType:(long long)arg1;
- (void)_layoutSubTitleView;
- (id)_subtitleView;
- (void)setLinkHandler:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_didTapCloseButton;
- (void)_initializeCloseButton;
- (void)_setupWithTitle:(id)arg1 Subtitle:(id)arg2 config:(id)arg3 closeButtonHandler:(CDUnknownBlockType)arg4;
- (id)initWithText:(id)arg1 config:(id)arg2 closeButtonHandler:(CDUnknownBlockType)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 config:(id)arg3 closeButtonHandler:(CDUnknownBlockType)arg4;

@end
