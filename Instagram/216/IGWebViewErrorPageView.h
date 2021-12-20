//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, IGTextButton, IGWebViewErrorPageViewModel, UILabel;
@protocol IGWebViewErrorPageViewDelegate;

@interface IGWebViewErrorPageView : UIView
{
    UILabel *_titleLabel;
    IGTapButton *_refreshIconButton;
    IGTextButton *_actionButton;
    IGWebViewErrorPageViewModel *_viewModel;
    id <IGWebViewErrorPageViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGWebViewErrorPageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGWebViewErrorPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)_addFullScreenRefreshTap:(_Bool)arg1;
- (void)_continueAnywayButtonTapped;
- (void)_refreshButtonTapped;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
