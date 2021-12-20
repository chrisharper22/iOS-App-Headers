//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBPayFormCellBase.h>

@class FBPayFormCellViewModel, UIImageView, UILabel;

@interface FBPayFormTextLabelViewCell : FBPayFormCellBase
{
    UILabel *_textLabel;
    UIImageView *_accessoryImageView;
    FBPayFormCellViewModel *_viewModel;
}

- (void).cxx_destruct;
- (id)viewModel;
- (unsigned long long)accessibilityTraits;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)isFirstResponder;
- (void)_setupAccessoryImageView;
- (void)_setupTextLabel;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

