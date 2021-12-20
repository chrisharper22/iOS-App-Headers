//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor;
@protocol IGRegistrationSignInHelperToggleViewDelegate;

@interface IGRegistrationSignInHelperToggleView : UIView
{
    UIColor *_selectedButtonColor;
    UIColor *_unselectedButtonColor;
    UIColor *_selectedLineColor;
    UIColor *_unselectedLineColor;
    id <IGRegistrationSignInHelperToggleViewDelegate> _delegate;
    UIButton *_usernameButton;
    UIButton *_phoneButton;
    UIView *_usernameLine;
    UIView *_phoneLine;
}

+ (id)_createButtonWithTitle:(id)arg1 color:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *phoneLine; // @synthesize phoneLine=_phoneLine;
@property(retain, nonatomic) UIView *usernameLine; // @synthesize usernameLine=_usernameLine;
@property(retain, nonatomic) UIButton *phoneButton; // @synthesize phoneButton=_phoneButton;
@property(retain, nonatomic) UIButton *usernameButton; // @synthesize usernameButton=_usernameButton;
@property(nonatomic) __weak id <IGRegistrationSignInHelperToggleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_phoneButtonTapped;
- (void)_usernameButtonTapped;
- (void)updateWithInputMode:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 withSelectedButtonColor:(id)arg2 unselectedButtonColor:(id)arg3 selectedLineColor:(id)arg4 unselectedLineColor:(id)arg5;

@end

