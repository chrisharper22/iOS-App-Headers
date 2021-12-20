//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGImageView, IGTVSeriesOverviewViewModel, UILabel;

@interface IGTVSeriesOverviewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGImageView *_coverImageView;
    IGTVSeriesOverviewViewModel *_viewModel;
}

+ (double)preferredHeightForWidth:(double)arg1 viewModel:(id)arg2;
- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
