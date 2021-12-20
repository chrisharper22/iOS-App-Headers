//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView, UILabel;

@interface IGOptionSelectionLargeCardView : UIView
{
    UIImageView *_headerImageView;
    UIImage *_headerIcon;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_selectButton;
    UIView *_roundedEdgeView;
    CDUnknownBlockType _selectButtonTapHandler;
}

- (void).cxx_destruct;
- (void)_selectButtonTapped:(id)arg1;
- (struct CGSize)_selectButtonSize:(struct CGSize)arg1;
- (struct CGSize)_selectButtonSize;
- (struct CGSize)_subtitleLabelSize:(struct CGSize)arg1;
- (struct CGSize)_subtitleLabelSize;
- (struct CGSize)_titleLabelSize:(struct CGSize)arg1;
- (struct CGSize)_titleLabelSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1 titleText:(id)arg2 subtitle:(id)arg3 selectTitle:(id)arg4 shouldShowRoundedBorder:(_Bool)arg5 selectButtonTapHandler:(CDUnknownBlockType)arg6;

@end
