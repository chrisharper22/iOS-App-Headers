//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGDirectMessageModalSubtitleView, IGDirectMessageModalTitleViewModel, IGTapButton, UILabel;
@protocol IGDirectMessageModalTitleViewDelgate;

@interface IGDirectMessageModalTitleView : UIView
{
    IGTapButton *_titleButton;
    IGDirectMessageModalSubtitleView *_subtitleView;
    UILabel *_titleLabel;
    IGDirectMessageModalTitleViewModel *_viewModel;
    id <IGDirectMessageModalTitleViewDelgate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectMessageModalTitleViewDelgate> delegate; // @synthesize delegate=_delegate;
- (double)_titlePaddingForSubtitleHeight:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setSubtitleTextColor:(id)arg1;
- (void)_didTapTitle;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1 subtitleViewModel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
