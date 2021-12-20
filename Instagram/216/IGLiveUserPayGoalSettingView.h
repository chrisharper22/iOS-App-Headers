//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class IGProfilePictureImageView, IGTextView, IGUser, IGUserSession, NSString, UIImageView, UILabel;
@protocol IGLiveUserPayGoalSettingViewDelegate;

@interface IGLiveUserPayGoalSettingView : UIView <UITextViewDelegate>
{
    IGTextView *_textView;
    IGProfilePictureImageView *_profileImageView;
    IGUser *_user;
    IGUserSession *_userSession;
    UILabel *_usernameLabel;
    UILabel *_pinLabel;
    UIImageView *_pinImageView;
    UIView *_separator;
    UILabel *_suggestionLabel;
    _Bool _isInPreviewMode;
    _Bool _isInEditingMode;
    id <IGLiveUserPayGoalSettingViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveUserPayGoalSettingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)_suggestionLabelClicked;
- (void)_setEditingMode:(_Bool)arg1;
- (void)_setPreviewMode:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 user:(id)arg2 userSession:(id)arg3 goalSettingMessage:(id)arg4 goalSettingSuggestionMessage:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

