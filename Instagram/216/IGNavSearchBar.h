//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"
#import "UITextInputTraits-Protocol.h"

@class IGButton, IGNavSearchBarPlaceholderView, IGTapButton, IGTextField, NSAttributedString, NSString, UIButton, UISearchBar, UITextField, UITextInputPasswordRules;
@protocol IGNavSearchBarDelegate;

@interface IGNavSearchBar : UIView <UITextFieldDelegate, UITextInputTraits>
{
    _Bool _showsCancelButton;
    _Bool _showsScanButton;
    UIView *_contentView;
    IGTextField *_searchTextField;
    IGNavSearchBarPlaceholderView *_placeholderView;
    UIButton *_backgroundButton;
    UISearchBar *_backgroundSearchBar;
    IGButton *_cancelButton;
    IGTapButton *_scanButton;
    IGTapButton *_discoverPeopleButton;
    _Bool _editing;
    _Bool _useDoneLabelWithCancelButton;
    _Bool _showsDiscoverPeopleButton;
    id <IGNavSearchBarDelegate> _delegate;
    double _searchBarAnimationDuration;
    struct UIEdgeInsets _sideInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showsDiscoverPeopleButton; // @synthesize showsDiscoverPeopleButton=_showsDiscoverPeopleButton;
@property(nonatomic) _Bool showsScanButton; // @synthesize showsScanButton=_showsScanButton;
@property(nonatomic) _Bool useDoneLabelWithCancelButton; // @synthesize useDoneLabelWithCancelButton=_useDoneLabelWithCancelButton;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) double searchBarAnimationDuration; // @synthesize searchBarAnimationDuration=_searchBarAnimationDuration;
@property(nonatomic) struct UIEdgeInsets sideInsets; // @synthesize sideInsets=_sideInsets;
@property(readonly, nonatomic) IGTapButton *scanButton; // @synthesize scanButton=_scanButton;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <IGNavSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) long long autocapitalizationType;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)_buildCancelButtonWithText:(id)arg1 labelColor:(id)arg2 highlightedColor:(id)arg3;
- (id)navigationBarTransformableViews;
- (void)_applyLayoutSpec:(CDStruct_e287b37a)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)layoutSubviews;
- (void)_discoverPeopleButtonTapped;
- (void)_scanButtonTapped;
- (void)_cancelButtonTapped;
- (void)_searchBarTapped;
@property(readonly, nonatomic) UITextField *textField;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *text;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

