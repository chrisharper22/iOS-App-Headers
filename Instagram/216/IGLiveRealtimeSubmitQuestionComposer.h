//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class IGLiveRealtimeSubmitQuestionBroadcasterView, IGTapButton, NSString, UITextField;
@protocol IGLiveRealtimeSubmitQuestionComposerDelegate;

@interface IGLiveRealtimeSubmitQuestionComposer : UIView <UITextFieldDelegate>
{
    IGLiveRealtimeSubmitQuestionBroadcasterView *_broadcasterView;
    UIView *_ovalContainer;
    UITextField *_textField;
    IGTapButton *_sendButton;
    id <IGLiveRealtimeSubmitQuestionComposerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <IGLiveRealtimeSubmitQuestionComposerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_attributedTypeInYourQuestionPlaceholder;
- (void)_installAndConfigureSendButton;
- (void)_installAndConfigureTextField;
- (void)_installAndConfigureOvalContainer;
- (void)_installAndConfigureBroadcasterViewWithBroadcaster:(id)arg1 analyticsModule:(id)arg2;
- (void)_send;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_textFieldTextDidChangeNotification:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithBroadcaster:(id)arg1 analyticsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

