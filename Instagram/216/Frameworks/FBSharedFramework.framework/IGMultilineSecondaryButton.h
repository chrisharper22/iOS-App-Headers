//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGMultilineSecondaryButtonConfig, UIButton;
@protocol IGMultilineSecondaryButtonDelegate;

@interface IGMultilineSecondaryButton : UIView
{
    IGMultilineSecondaryButtonConfig *_buttonConfig;
    id <IGMultilineSecondaryButtonDelegate> _delegate;
    UIButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <IGMultilineSecondaryButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_createButton;
- (void)_setup;
- (void)buttonTapped:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)updateColor;
- (void)setButtonTitle:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1 buttonConfig:(id)arg2;
- (id)initWithButtonConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
