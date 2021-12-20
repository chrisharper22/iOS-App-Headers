//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGBloksSpinnerButton, UILabel;
@protocol IGBloksErrorViewDelegate;

@interface IGBloksErrorView : UIView
{
    UILabel *_errorLabel;
    IGBloksSpinnerButton *_loadingSpinnerButton;
    struct UIEdgeInsets _contentInsets;
    id <IGBloksErrorViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBloksErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_spinnerButtonTapAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithContentInsets:(struct UIEdgeInsets)arg1;

@end

