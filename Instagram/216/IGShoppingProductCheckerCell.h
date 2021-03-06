//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, IGGradientView, IGMultiImageThumbnailView, IGScalingTransitionImageView, IGShoppingProductCheckerViewModel, IGShoppingProductThumbnailImageView, UILabel, UIView;

@interface IGShoppingProductCheckerCell : UICollectionViewCell
{
    IGMultiImageThumbnailView *_multiThumbnailView;
    IGScalingTransitionImageView *_transitionImageView;
    IGShoppingProductThumbnailImageView *_singleThumbnailView;
    CALayer *_highlightOverlay;
    IGGradientView *_thumbnailGradientView;
    UILabel *_thumbnailTitleLabel;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    UIView *_emptyThumbnail;
    UILabel *_emptyLabel;
    IGShoppingProductCheckerViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_configureAccessibility;
- (void)stopPlayback;
- (void)preparePlayback;
- (void)pausePlayback;
- (void)startPlayback;
- (void)configureWithViewModel:(id)arg1 cellWidth:(double)arg2 analyticsModule:(id)arg3;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

