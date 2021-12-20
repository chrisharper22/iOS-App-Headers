//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class IGStatusState, IGTooltipView, NSString, UIButton, UIImageView, UILabel, UITextField;
@protocol IGStatusComposerViewDelegate;

@interface IGStatusComposerView : UIView <UITextFieldDelegate>
{
    IGStatusState *_statusState;
    UIView *_emojiContainerView;
    UIImageView *_emojiPlaceholderView;
    UILabel *_emojiLabel;
    UIView *_textContainerView;
    UITextField *_textField;
    UIButton *_clearButton;
    UIButton *_setButton;
    UIView *_separatorView;
    IGTooltipView *_emojiTooltip;
    id <IGStatusComposerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStatusComposerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)_currentTextIsValid;
- (_Bool)_currentEmojiIsValid;
- (_Bool)_didEmojiChange;
- (_Bool)_currentInputIsValid;
- (void)_textFieldDidChange:(id)arg1;
- (void)_updateAuxiliaryButtonsIfNeeded;
- (void)_didTapEmoji:(id)arg1;
- (void)_didTapSetButton:(id)arg1;
- (void)_cleanupEmojiTooltip;
- (void)_showEmojiTooltip;
- (id)_statusText;
- (void)_didTapClearButton:(id)arg1;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)setEmoji:(id)arg1;
- (void)updateWithStatusState:(id)arg1;
- (id)initWithStatusState:(id)arg1;
- (void)_configureViewsWithStatusState;
- (void)_updateViewsForStatusStateSome:(id)arg1;
- (void)_updateViewsForNoneStatusState;
- (void)_setupSubviews;
- (void)_setupTapGestureForEmojiContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

