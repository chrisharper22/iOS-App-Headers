//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGFixedWidthLayout, IGImageView, IGTapButton, UIImageView, UILabel;
@protocol IGLayoutElement, IGSundialTrendHeaderCellDelegate;

@interface IGSundialTrendHeaderCell : UICollectionViewCell
{
    id <IGLayoutElement> _insetCellLayout;
    IGFixedWidthLayout *_titleConstraintLayout;
    IGFixedWidthLayout *_primarySubtitleConstraintLayout;
    UIImageView *_titleIconImageView;
    UIImageView *_subtitleIconImageView;
    UILabel *_titleLabel;
    UILabel *_primarySubtitleLabel;
    UILabel *_secondarySubtitleLabel;
    UILabel *_seperatorLabel;
    _Bool _extraSpaceBetweenTitleAndIcon;
    IGImageView *_previewImageView;
    IGTapButton *_cameraButton;
    id <IGSundialTrendHeaderCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSundialTrendHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGTapButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(readonly, copy, nonatomic) IGImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
- (id)accessibilityLabel;
- (void)_setupLayout;
- (void)configureTitle:(id)arg1 withIcon:(id)arg2 withExtraSpace:(_Bool)arg3 subtitle:(id)arg4 subtitleIcon:(id)arg5 secondarySubtitle:(id)arg6 cameraButtonHidden:(_Bool)arg7;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_didTapCameraButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

