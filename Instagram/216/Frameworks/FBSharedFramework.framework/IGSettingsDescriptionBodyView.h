//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCoreTextView, UIImageView, UILabel;

@interface IGSettingsDescriptionBodyView : UIView
{
    IGCoreTextView *_descriptionTextView;
    UIImageView *_imageView;
    _Bool _isLargeStyle;
    double _titleTopInset;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isLargeStyle; // @synthesize isLargeStyle=_isLargeStyle;
@property(nonatomic) double titleTopInset; // @synthesize titleTopInset=_titleTopInset;
- (id)accessibilityLabel;
- (void)setDescriptionLinkHandler:(id)arg1;
- (void)setTitleText:(id)arg1 titleStyle:(id)arg2 andAnnotatedDescriptionText:(id)arg3 descriptionStyle:(id)arg4 linkStyle:(id)arg5 image:(id)arg6 descriptionNumberOfLines:(long long)arg7 descriptionContainerWidth:(double)arg8;
- (void)setTitleText:(id)arg1 titleStyle:(id)arg2 andAnnotatedDescriptionText:(id)arg3 image:(id)arg4;
- (void)setTitleText:(id)arg1 titleStyle:(id)arg2 andAnnotatedDescriptionText:(id)arg3 descriptionStyle:(id)arg4 linkStyle:(id)arg5 image:(id)arg6;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)titleLabelSizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end

