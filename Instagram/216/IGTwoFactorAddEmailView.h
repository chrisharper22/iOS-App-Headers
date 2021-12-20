//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGTextFieldDelegate-Protocol.h"
#import "IGTwoFactorCommonHeaderViewDelegate-Protocol.h"

@class IGBottomButtonsView, IGInformativeTextView, IGTwoFactorCommonHeaderView, NSString, UIScrollView;
@protocol IGTwoFactorAddEmailViewDelegate;

@interface IGTwoFactorAddEmailView : UIView <IGTextFieldDelegate, IGTwoFactorCommonHeaderViewDelegate>
{
    UIScrollView *_containerScrollView;
    IGTwoFactorCommonHeaderView *_headerView;
    IGInformativeTextView *_emailFieldTextView;
    IGBottomButtonsView *_bottomButtonsView;
    double _bottomButtonsViewOriginY;
    id <IGTwoFactorAddEmailViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTwoFactorAddEmailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_contentHeight;
- (void)configureWithSize:(struct CGSize)arg1 email:(id)arg2;
- (void)adjustViewWithKeyboardFrame:(struct CGRect)arg1 duration:(double)arg2;
- (void)popUpKeyboard;
- (void)stopSpinner;
- (void)startSpinner;
- (id)email;
- (void)twoFactorCommonHeaderView:(id)arg1 didTapOnLinkWithURL:(id)arg2;
- (void)textFieldDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 isSkippable:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
