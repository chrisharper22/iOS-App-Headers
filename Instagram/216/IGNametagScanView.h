//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, FBShimmeringView, IGGradientView, IGNametagView, IGNametagViewConfiguration, IGRadialLoadingIndicatorView, IGStoryCameraGalleryButton, IGTapButton, IGUserSession, UIBarButtonItem, UINavigationBar, UIToolbar, UIVisualEffectView;
@protocol IGNametagScanViewDelegate;

@interface IGNametagScanView : UIView
{
    IGNametagViewConfiguration *_cardConfig;
    IGUserSession *_userSession;
    IGNametagView *_friendCardView;
    IGGradientView *_gradientBackground;
    FBShimmeringView *_shimmeringView;
    UIVisualEffectView *_blurredView;
    CAShapeLayer *_blurMaskLayer;
    IGRadialLoadingIndicatorView *_loadingView;
    IGStoryCameraGalleryButton *_galleryButton;
    UIToolbar *_toolbar;
    IGTapButton *_scanButton;
    id <IGNametagScanViewDelegate> _delegate;
    UINavigationBar *_naviBar;
    UIBarButtonItem *_cancelItem;
    UIBarButtonItem *_galleryItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *galleryItem; // @synthesize galleryItem=_galleryItem;
@property(retain, nonatomic) UIBarButtonItem *cancelItem; // @synthesize cancelItem=_cancelItem;
@property(retain, nonatomic) UINavigationBar *naviBar; // @synthesize naviBar=_naviBar;
@property(nonatomic) __weak id <IGNametagScanViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapCameraButton:(id)arg1;
- (void)_didTapGalleryButton:(id)arg1;
- (void)_didTapCloseButton:(id)arg1;
- (void)_layoutCardView;
- (void)_configNaviBarWithBarColor:(id)arg1 itemTintColor:(id)arg2;
- (void)_createNaviBarButtons;
- (void)_createNavigationBar;
- (void)_configToolbarWithBarColor:(id)arg1 itemTintColor:(id)arg2;
- (void)_createToolbarButtons;
- (void)_createToolbar;
- (void)_createLoadingIndicatorView;
- (void)_createShimmeringView;
- (void)_createBlurredView;
- (void)_createGradientBackground;
- (void)_createFriendCardView;
- (void)_updateLoadingIndicatorWithShouldShow:(_Bool)arg1;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)stopCardViewAnimation;
- (void)startCardViewAnimation;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1 cardConfig:(id)arg2;

@end
