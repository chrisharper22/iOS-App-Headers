//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGDirectActionButtonsView-Protocol.h>
#import <FBSharedFramework/IGMultilineSecondaryButtonDelegate-Protocol.h>

@class IGDirectActionSendButtonConfiguration, IGMultilineSecondaryButton, NSString, UIButton, UIColor;
@protocol IGDirectActionButtonsViewDelegate;

@interface IGDirectHorizontalStackButtonsView : UIView <IGMultilineSecondaryButtonDelegate, IGDirectActionButtonsView>
{
    UIColor *_currentActionButtonGradientStartColor;
    IGDirectActionSendButtonConfiguration *_sendButtonConfig;
    _Bool _shouldShowSendToGroupButton;
    _Bool _isSendToGroupButtonAvailable;
    id <IGDirectActionButtonsViewDelegate> _delegate;
    UIButton *_sendButton;
    IGMultilineSecondaryButton *_sendToGroupButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGMultilineSecondaryButton *sendToGroupButton; // @synthesize sendToGroupButton=_sendToGroupButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak id <IGDirectActionButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateActionButtonBackgroundGradientWithStartColor:(id)arg1 endColor:(id)arg2;
- (void)_setSendButtonColor;
- (id)_createSendButton;
- (void)_addActionButtons;
- (void)_addSendToGroupButtonInHiddenState;
- (void)_setup;
- (void)didTapButton:(id)arg1;
- (void)sendButtonTapped:(id)arg1;
- (id)containerViewColor;
- (_Bool)shouldRemoveExtraPadding;
- (_Bool)isButtonRounded;
- (void)setPrimaryButtonColorScheme:(long long)arg1;
- (void)_updateSendButtonColorsForced:(_Bool)arg1;
- (void)setPrimaryButtonImageTintColor:(id)arg1;
- (void)setPrimaryButtonImage:(id)arg1;
- (void)setPrimaryButtonEnabled:(_Bool)arg1;
- (void)setSecondaryButtonEnabled:(_Bool)arg1;
- (void)setPrimaryButtonTitle:(id)arg1;
- (void)showSecondayButton:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1 sendButtonConfig:(id)arg2 isSendToGroupButtonAvailable:(_Bool)arg3;
- (id)initWithSendButtonConfig:(id)arg1 isSendToGroupButtonAvailable:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

