//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGDirectComposerAttachmentViewCloseButton, UILabel;
@protocol IGDirectComposerThreadInfoBarDelegate;

@interface IGDirectComposerThreadInfoBar : UIView
{
    UIView *_lineView;
    IGDirectComposerAttachmentViewCloseButton *_closeButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    id <IGDirectComposerThreadInfoBarDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectComposerThreadInfoBarDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)_subtitleSizeWithContainerWidth:(double)arg1;
- (struct CGSize)_titleSizeWithContainerWidth:(double)arg1;
- (void)_setUpTitleAndSubtitleWithThreadDisplayName:(id)arg1 bizThreadThrottlingState:(unsigned long long)arg2;
- (void)_didTapCloseButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureBackgroundColor:(id)arg1 titleColor:(id)arg2 lineViewColor:(id)arg3 interfaceStyle:(unsigned long long)arg4;
- (void)layoutSubviews;
- (id)initWithThreadDisplayName:(id)arg1 bizThreadThrottlingState:(unsigned long long)arg2;

@end

