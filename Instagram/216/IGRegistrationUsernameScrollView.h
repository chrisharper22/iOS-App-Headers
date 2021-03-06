//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "IGRegistrationUsernameFieldDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IGCoreTextView, IGLabel, IGNUXLayoutSpec, IGRegistrationNextButton, IGRegistrationUsernameField, IGRegistrationUsernameViewController, NSArray, NSString, UILabel, UITableView, UIView;

@interface IGRegistrationUsernameScrollView : UIScrollView <IGRegistrationUsernameFieldDelegate, UITableViewDelegate, UITableViewDataSource>
{
    IGNUXLayoutSpec *_layoutSpec;
    NSString *_previousUsername;
    IGRegistrationUsernameViewController *_vcDelegate;
    UILabel *_usernameLabel;
    UILabel *_usernameDescriptionLabel;
    IGRegistrationUsernameField *_usernameField;
    IGRegistrationNextButton *_nextButton;
    IGCoreTextView *_termView;
    IGLabel *_inlineErrorLabel;
    NSString *_tosVersion;
    UITableView *_usernameSuggestionTableView;
    UIView *_usernameSuggestionShadowView;
    NSArray *_usernameSuggestions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *usernameSuggestions; // @synthesize usernameSuggestions=_usernameSuggestions;
@property(retain, nonatomic) UIView *usernameSuggestionShadowView; // @synthesize usernameSuggestionShadowView=_usernameSuggestionShadowView;
@property(retain, nonatomic) UITableView *usernameSuggestionTableView; // @synthesize usernameSuggestionTableView=_usernameSuggestionTableView;
@property(copy, nonatomic) NSString *tosVersion; // @synthesize tosVersion=_tosVersion;
@property(retain, nonatomic) IGLabel *inlineErrorLabel; // @synthesize inlineErrorLabel=_inlineErrorLabel;
@property(retain, nonatomic) IGCoreTextView *termView; // @synthesize termView=_termView;
@property(retain, nonatomic) IGRegistrationNextButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) IGRegistrationUsernameField *usernameField; // @synthesize usernameField=_usernameField;
@property(readonly, nonatomic) UILabel *usernameDescriptionLabel; // @synthesize usernameDescriptionLabel=_usernameDescriptionLabel;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(nonatomic) __weak IGRegistrationUsernameViewController *vcDelegate; // @synthesize vcDelegate=_vcDelegate;
- (double)_minimumTableViewHeight;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)registrationUsernameField:(id)arg1 didTapValidationButtonWithState:(long long)arg2;
- (void)hideUsernameSuggestions;
- (void)showUsernameSuggestions:(id)arg1 forUsername:(id)arg2;
- (void)hideTermView;
- (void)hideInlineError;
- (void)showInlineError:(id)arg1;
- (id)_createNextButton;
- (id)_createUsernameSuggestionShadowView;
- (id)_createUsernameSuggestionTableView;
- (id)_createUsernameField;
- (id)_createUsernameDescriptionLabelWithSubtitle:(id)arg1;
- (id)_createUsernameLabelWithTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 layoutSpec:(id)arg2 tosVersion:(id)arg3 showTermView:(_Bool)arg4 title:(id)arg5 subtitle:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

