//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGTapButton, UIButton, UILabel, UIView;
@protocol IGHScrollBannerCellDelegate;

@interface IGHScrollBannerCell : UICollectionViewCell
{
    UIView *_backgroundView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
    IGTapButton *_dismissButton;
    UIButton *_moreButton;
    UILabel *_dotSeparator;
    UIView *_separator;
    long long _format;
    _Bool _shouldDeemphasizeActionButton;
    id <IGHScrollBannerCellDelegate> _delegate;
    struct UIEdgeInsets _backgroundBleedInset;
}

+ (double)_widthForDotSeparator;
+ (struct CGSize)_sizeForSubtitleLabelWithCellWidth:(double)arg1 subtitle:(id)arg2 action:(id)arg3 format:(long long)arg4 showDismissButton:(_Bool)arg5 shouldDeemphasizeActionButton:(_Bool)arg6 shouldShowMoreButton:(_Bool)arg7;
+ (struct CGSize)_sizeForTitleLabelWithCellWidth:(double)arg1 title:(id)arg2 action:(id)arg3 showDismissButton:(_Bool)arg4 shouldDeemphasizeActionButton:(_Bool)arg5 shouldShowMoreButton:(_Bool)arg6;
+ (double)heightForCellWithWidth:(double)arg1 title:(id)arg2 subtitle:(id)arg3 action:(id)arg4 format:(long long)arg5 showDismissButton:(_Bool)arg6 shouldDeemphasizeActionButton:(_Bool)arg7 shouldShowMoreButton:(_Bool)arg8;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets backgroundBleedInset; // @synthesize backgroundBleedInset=_backgroundBleedInset;
@property(nonatomic) __weak id <IGHScrollBannerCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapMoreButton;
- (void)_didTapDismissButton;
- (void)_didTapActionButton;
- (void)_setupSeparator;
- (void)_setupDotSeparator;
- (void)_setupMoreButton;
- (void)_setupDismissButton;
- (void)_setupActionButtonWithTitle:(id)arg1 shouldDeemphasize:(_Bool)arg2;
- (void)_setupSubtitleLabel;
- (void)startTrackingSeeAllImpressionWithAction:(id)arg1;
- (void)setActionLabelHidden:(_Bool)arg1;
- (void)setBackgroundViewBackgroundColor:(id)arg1;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 actionLabel:(id)arg3 format:(long long)arg4 shouldHideSeparator:(_Bool)arg5 shouldShowDismissButton:(_Bool)arg6 shouldDeemphasizeActionButton:(_Bool)arg7 shouldShowMoreButton:(_Bool)arg8;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

