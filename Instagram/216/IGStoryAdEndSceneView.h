//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGLinearGradientView, IGStoryCTAButton, UILabel;
@protocol IGStoryAdEndSceneViewDelegate;

@interface IGStoryAdEndSceneView : UIView
{
    IGLinearGradientView *_gradientView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGStoryCTAButton *_ctaButton;
    double _titleLabelYTranslation;
    id <IGStoryAdEndSceneViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryAdEndSceneViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareForReuse;
- (void)startAnimation;
- (void)configureWithViewModel:(id)arg1 eventAttributionViewOverlay:(id)arg2;
- (void)_ctaButtonTapped;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

