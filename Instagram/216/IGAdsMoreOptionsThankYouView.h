//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol IGAdsMoreOptionsThankYouViewDelegate;

@interface IGAdsMoreOptionsThankYouView : UIView
{
    UIImageView *_checkmarkImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_aboutAdsButton;
    id <IGAdsMoreOptionsThankYouViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAdsMoreOptionsThankYouViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapAboutAdsButton:(id)arg1;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 shouldShowAboutActionButton:(_Bool)arg2;

@end

