//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGBrowserTitleViewDelegate-Protocol.h"

@class CAGradientLayer, CAShapeLayer, IGBrowserTitleBarViewModel, IGBrowserTitleView, IGProgressiveLoadingAnimator, IGTapButton, NSArray, NSString;
@protocol IGBrowserTitleBarDelegate;

@interface IGBrowserTitleBar : UIView <IGBrowserTitleViewDelegate>
{
    IGBrowserTitleBarViewModel *_viewModel;
    NSArray *_leftButtons;
    IGTapButton *_rightButton;
    CAShapeLayer *_backdrop;
    UIView *_contentView;
    UIView *_bottomSeparator;
    unsigned long long _secureIconType;
    UIView *_progressTrackView;
    CAGradientLayer *_progressGradientLayer;
    IGProgressiveLoadingAnimator *_progressiveLoadingAnimator;
    _Bool _hasRoundedCorner;
    _Bool _showBarButtons;
    double _profileInfoHeaderViewTopOffset;
    double _preferredHeight;
    id <IGBrowserTitleBarDelegate> _delegate;
    IGBrowserTitleView *_titleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGBrowserTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic, getter=hasShownBarButton) _Bool showBarButtons; // @synthesize showBarButtons=_showBarButtons;
@property(nonatomic) _Bool hasRoundedCorner; // @synthesize hasRoundedCorner=_hasRoundedCorner;
@property(nonatomic) __weak id <IGBrowserTitleBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(nonatomic) double profileInfoHeaderViewTopOffset; // @synthesize profileInfoHeaderViewTopOffset=_profileInfoHeaderViewTopOffset;
- (void)traitCollectionDidChange:(id)arg1;
- (void)cardTitleViewDidTapSubtitleIcon:(id)arg1;
- (void)_didTapView:(id)arg1;
- (void)_didTapButton:(id)arg1;
- (void)_updateProgressBarWithProgressValue:(double)arg1;
@property(nonatomic) _Bool bottomSeparatorHidden;
- (void)updateAlphaForButtons:(double)arg1;
- (void)updateAlphaForSubviewsExceptCloseButton:(double)arg1;
- (void)resetProgressBar;
- (void)setProgressValue:(double)arg1;
- (void)initializeProgressBarWithValue:(double)arg1;
- (void)setSubtitle:(id)arg1 withSecureIconType:(unsigned long long)arg2;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)_setupSubviewsWithViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

