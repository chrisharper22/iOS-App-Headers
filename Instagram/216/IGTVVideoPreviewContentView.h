//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, IGTVVideoPreviewDetailsView, IGTVVideoProgressHeaderView;

@interface IGTVVideoPreviewContentView : UIView
{
    UIView *_coverImageView;
    IGTVVideoProgressHeaderView *_headerView;
    IGTVVideoPreviewDetailsView *_detailsView;
    IGGradientView *_topGradientView;
    IGGradientView *_bottomGradientView;
    double _gradientAlpha;
}

- (void).cxx_destruct;
@property(nonatomic) double gradientAlpha; // @synthesize gradientAlpha=_gradientAlpha;
- (void)configureWithTitle:(id)arg1 username:(id)arg2 isUserVerified:(_Bool)arg3 shouldEnableDarkLabel:(_Bool)arg4;
- (void)configureWithMedia:(id)arg1 shouldShowUsername:(_Bool)arg2 shouldEnableDarkLabel:(_Bool)arg3;
- (void)configureWithHeaderViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCoverImageView:(id)arg1;

@end

