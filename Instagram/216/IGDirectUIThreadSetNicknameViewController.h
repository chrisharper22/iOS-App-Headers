//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGTextFieldDelegate-Protocol.h"

@class IGDirectAvatarView, IGDirectNicknameManager, IGTextField, IGUser, IGUserSession, NSString, UIBarButtonItem, UILabel;

@interface IGDirectUIThreadSetNicknameViewController : IGViewController <IGTextFieldDelegate>
{
    IGUserSession *_userSession;
    IGUser *_user;
    IGDirectNicknameManager *_nicknameManager;
    UIBarButtonItem *_doneButtonItem;
    IGDirectAvatarView *_avatarImageView;
    UILabel *_primaryNameLabel;
    UILabel *_secondaryNameLabel;
    UILabel *_nicknameLabel;
    IGTextField *_nicknameTextField;
    UILabel *_descriptionLabel;
}

- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_avatarImageViewTapped;
- (void)_backButtonTapped;
- (void)_doneButtonTapped;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)_setupDescriptionLabel;
- (void)_setupNicknameTextField;
- (void)_setupNicknameLabel;
- (void)_setupSecondaryNameLabel;
- (void)_setupPrimaryNameLabel;
- (void)_setupAvatarImageView;
- (void)_setupBackButton;
- (void)_setupDoneButton;
- (void)_setupTitle;
- (id)initWithUserSession:(id)arg1 user:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

