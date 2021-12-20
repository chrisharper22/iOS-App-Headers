//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGUFIButton, NSArray;
@protocol IGUFIButtonBarViewDelegate;

@interface IGUFIButtonBarView : UIView
{
    long long _saveButtonStyle;
    long long _externalShareButtonStyle;
    _Bool _configureLongPressOnSendButton;
    UIView *_sendButtonLongPressTarget;
    long long _colorType;
    id <IGUFIButtonBarViewDelegate> _delegate;
    IGUFIButton *_saveButton;
    IGUFIButton *_commentButton;
    IGUFIButton *_sendButton;
    IGUFIButton *_relatedPostsButton;
    IGUFIButton *_coWatchButton;
    UIView *_saveButtonLongPressTarget;
    NSArray *_accessibilityElements;
    IGUFIButton *_likeButton;
    IGUFIButton *_externalShareButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUFIButton *externalShareButton; // @synthesize externalShareButton=_externalShareButton;
@property(readonly, nonatomic) IGUFIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) NSArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(readonly, nonatomic) UIView *saveButtonLongPressTarget; // @synthesize saveButtonLongPressTarget=_saveButtonLongPressTarget;
@property(readonly, nonatomic) IGUFIButton *coWatchButton; // @synthesize coWatchButton=_coWatchButton;
@property(readonly, nonatomic) IGUFIButton *relatedPostsButton; // @synthesize relatedPostsButton=_relatedPostsButton;
@property(readonly, nonatomic) IGUFIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(readonly, nonatomic) IGUFIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(readonly, nonatomic) IGUFIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) __weak id <IGUFIButtonBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long colorType; // @synthesize colorType=_colorType;
- (id)_accessibleElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)updateUFIButtonWithHasLiked:(_Bool)arg1 hasSaved:(_Bool)arg2 showCommentButton:(_Bool)arg3 showLikeButton:(_Bool)arg4 showSendButton:(_Bool)arg5 showSaveButton:(_Bool)arg6 showRelatedPostsButton:(_Bool)arg7 externalShareButtonLocation:(unsigned long long)arg8 showCoWatchButton:(_Bool)arg9 likeAnimated:(_Bool)arg10 saveAnimated:(_Bool)arg11;
- (void)resetUFIButtonView;
- (void)_onCoWatchButtonPressed:(id)arg1;
- (void)_onRelatedPostsButtonPressed:(id)arg1;
- (void)_onExternalShareButtonPressed:(id)arg1;
- (void)_onSaveButtonLongPressed:(id)arg1;
- (void)_onSaveButtonPressed:(id)arg1;
- (void)_onSendButtonLongPressed:(id)arg1;
- (void)_onSendButtonPressed:(id)arg1;
- (void)_onCommentButtonPressed:(id)arg1;
- (void)_onLikeButtonPressed:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_createSendButtonLongPressTarget;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 colorType:(long long)arg2 saveButtonStyle:(long long)arg3 externalShareButtonStyle:(long long)arg4 configureLongPressOnSendButton:(_Bool)arg5;

@end

