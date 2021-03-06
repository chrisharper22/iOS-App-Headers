//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol IGGDPRConsentBottomButtonViewDelegate;

@interface IGGDPRConsentBottomButtonView : UIView
{
    UILabel *_separatorLineLabel;
    UIButton *_primaryBottomButton;
    UIButton *_secondaryBottomButton;
    _Bool _isPrimaryButtonEnabled;
    id <IGGDPRConsentBottomButtonViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGDPRConsentBottomButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapOnSecondaryBottomButton;
- (void)_didTapOnPrimaryBottomButton;
- (void)setPrimaryButtonEnabled:(_Bool)arg1;
- (void)configureWithPrimaryButtonText:(id)arg1 sendaryButtonText:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

