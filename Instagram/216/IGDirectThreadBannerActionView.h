//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGAttributedStringTextViewDelegate-Protocol.h"

@class IGAttributedStringTextView, IGAttributedStringTextViewConfiguration, NSAttributedString, NSString, UIButton, UIImageView;
@protocol IGDirectBannerActionViewDelegate;

@interface IGDirectThreadBannerActionView : UIView <IGAttributedStringTextViewDelegate>
{
    IGAttributedStringTextView *_textView;
    IGAttributedStringTextViewConfiguration *_textViewConfig;
    NSAttributedString *_attributedString;
    UIImageView *_imageView;
    UIButton *_dismissButton;
    _Bool _shouldShowDismissButton;
    id <IGDirectBannerActionViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectBannerActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)attributedStringTextView:(id)arg1 didTapLink:(id)arg2;
- (void)_dismissButtonTapped:(id)arg1;
- (void)_calculateLayout:(struct CGSize)arg1 result:(CDUnknownBlockType)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutImageAndButton:(struct CGSize)arg1 imageSize:(struct CGSize)arg2;
- (void)_layoutTextView:(double)arg1 textHeight:(double)arg2;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
