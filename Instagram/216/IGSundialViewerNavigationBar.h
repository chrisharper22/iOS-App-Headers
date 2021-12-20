//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGBouncyButton, IGGradientView, IGStackLayout, IGSundialTrendButton, IGUnifiedVideoUFIButton, NSArray, UIControl, UILabel, UIView;
@protocol IGSundialViewerNavigationBarDelegate;

@interface IGSundialViewerNavigationBar : IGPassthroughView
{
    IGGradientView *_legibilityGradient;
    IGBouncyButton *_titleBouncyButton;
    UILabel *_titleLabel;
    NSArray *_accessibilityItems;
    long long _dismissButtonType;
    IGStackLayout *_rightButtonsLayout;
    IGUnifiedVideoUFIButton *_remixButton;
    id <IGSundialViewerNavigationBarDelegate> _delegate;
    UIControl *_dismissButton;
    UIView *_titleView;
    IGSundialTrendButton *_trendingButton;
    UIControl *_cameraButton;
    UIControl *_menuButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIControl *menuButton; // @synthesize menuButton=_menuButton;
@property(readonly, nonatomic) UIControl *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(readonly, nonatomic) IGSundialTrendButton *trendingButton; // @synthesize trendingButton=_trendingButton;
@property(readonly, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) UIControl *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(nonatomic) __weak id <IGSundialViewerNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapRemixButton;
- (void)_didTapMenu;
@property(readonly, nonatomic) double maxTitleWidth;
- (void)setTitleAlpha:(double)arg1 fadeDismissButton:(_Bool)arg2 animated:(_Bool)arg3;
- (id)accessibilityElements;
@property(nonatomic) _Bool showRemixCTAButton;
@property(readonly, nonatomic) _Bool isTitleLeftAligned;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTitle:(id)arg1 dismissButtonType:(long long)arg2;

@end
