//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, IGImageView, IGTVVideoProgressHeaderView;

@interface IGTVVideoPreviewCoverImageContainerView : UIView
{
    IGImageView *_coverImageView;
    IGGradientView *_topLegibilityGradient;
    IGTVVideoProgressHeaderView *_headerView;
}

- (void).cxx_destruct;
- (void)configureWithHeaderViewModel:(id)arg1;
- (void)configureWithImageSpecifier:(id)arg1 headerViewModel:(id)arg2 cornerRadius:(double)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

