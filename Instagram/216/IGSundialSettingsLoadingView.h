//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, UIActivityIndicatorView, UILabel;
@protocol IGSundialSettingsLoadingViewDelegate;

@interface IGSundialSettingsLoadingView : UIView
{
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_errorLabel;
    IGTapButton *_retryButton;
    id <IGSundialSettingsLoadingViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSundialSettingsLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapRetry;
- (void)setSpinnerState:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end
