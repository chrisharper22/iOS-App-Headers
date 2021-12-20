//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGButton, UIImageView, UILabel;
@protocol IGAccountSettingsPaymentsUnavailableViewDelegate;

@interface IGAccountSettingsPaymentsUnavailableView : UIView
{
    UILabel *_headerLabel;
    UILabel *_messageLabel;
    UIImageView *_lockImageView;
    UIView *_separatorView;
    IGButton *_primaryButton;
    id <IGAccountSettingsPaymentsUnavailableViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAccountSettingsPaymentsUnavailableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didPressButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 header:(id)arg2 description:(id)arg3 buttonText:(id)arg4;

@end

