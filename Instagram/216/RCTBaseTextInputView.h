//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTView.h"

#import "RCTBackedTextInputDelegate-Protocol.h"

@class NSAttributedString, NSNumber, NSString, RCTBridge, RCTTextAttributes, RCTTextSelection, UIView;
@protocol RCTBackedTextInputViewProtocol, RCTEventDispatcherProtocol;

@interface RCTBaseTextInputView : RCTView <RCTBackedTextInputDelegate>
{
    RCTBridge *_bridge;
    id <RCTEventDispatcherProtocol> _eventDispatcher;
    _Bool _hasInputAccesoryView;
    NSString *_predictedText;
    _Bool _didMoveToWindow;
    _Bool _autoFocus;
    _Bool _blurOnSubmit;
    _Bool _selectTextOnFocus;
    _Bool _clearTextOnFocus;
    _Bool _secureTextEntry;
    _Bool _showSoftInputOnFocus;
    RCTTextAttributes *_textAttributes;
    CDUnknownBlockType _onContentSizeChange;
    CDUnknownBlockType _onSelectionChange;
    CDUnknownBlockType _onChange;
    CDUnknownBlockType _onTextInput;
    CDUnknownBlockType _onScroll;
    long long _mostRecentEventCount;
    long long _nativeEventCount;
    NSNumber *_maxLength;
    NSString *_inputAccessoryViewID;
    struct UIEdgeInsets _reactPaddingInsets;
    struct UIEdgeInsets _reactBorderInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showSoftInputOnFocus; // @synthesize showSoftInputOnFocus=_showSoftInputOnFocus;
@property(copy, nonatomic) NSString *inputAccessoryViewID; // @synthesize inputAccessoryViewID=_inputAccessoryViewID;
@property(retain, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) _Bool clearTextOnFocus; // @synthesize clearTextOnFocus=_clearTextOnFocus;
@property(nonatomic) _Bool selectTextOnFocus; // @synthesize selectTextOnFocus=_selectTextOnFocus;
@property(nonatomic) _Bool blurOnSubmit; // @synthesize blurOnSubmit=_blurOnSubmit;
@property(nonatomic) _Bool autoFocus; // @synthesize autoFocus=_autoFocus;
@property(readonly, nonatomic) long long nativeEventCount; // @synthesize nativeEventCount=_nativeEventCount;
@property(nonatomic) long long mostRecentEventCount; // @synthesize mostRecentEventCount=_mostRecentEventCount;
@property(copy, nonatomic) CDUnknownBlockType onScroll; // @synthesize onScroll=_onScroll;
@property(copy, nonatomic) CDUnknownBlockType onTextInput; // @synthesize onTextInput=_onTextInput;
@property(copy, nonatomic) CDUnknownBlockType onChange; // @synthesize onChange=_onChange;
@property(copy, nonatomic) CDUnknownBlockType onSelectionChange; // @synthesize onSelectionChange=_onSelectionChange;
@property(copy, nonatomic) CDUnknownBlockType onContentSizeChange; // @synthesize onContentSizeChange=_onContentSizeChange;
@property(nonatomic) struct UIEdgeInsets reactBorderInsets; // @synthesize reactBorderInsets=_reactBorderInsets;
@property(nonatomic) struct UIEdgeInsets reactPaddingInsets; // @synthesize reactPaddingInsets=_reactPaddingInsets;
@property(retain, nonatomic) RCTTextAttributes *textAttributes; // @synthesize textAttributes=_textAttributes;
- (void)handleInputAccessoryDoneButton;
- (void)reloadInputViewsIfNecessary;
- (void)setDefaultInputAccessoryView;
- (void)setCustomInputAccessoryViewWithNativeID:(id)arg1;
- (void)didSetProps:(id)arg1;
- (void)didMoveToWindow;
- (void)reactBlur;
- (void)reactFocus;
- (id)reactAccessibilityElement;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateLocalData;
- (void)textInputDidChangeSelection;
- (void)textInputDidChange;
- (id)textInputShouldChangeText:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)textInputDidReturn;
- (_Bool)textInputShouldReturn;
- (void)textInputDidEndEditing;
- (_Bool)textInputShouldEndEditing;
- (void)textInputDidBeginEditing;
- (_Bool)textInputShouldBeginEditing;
@property(nonatomic) long long keyboardType;
- (void)setPasswordRules:(id)arg1;
- (void)setTextContentType:(id)arg1;
- (void)setSelectionStart:(long long)arg1 selectionEnd:(long long)arg2;
@property(copy, nonatomic) RCTTextSelection *selection;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (_Bool)textOf:(id)arg1 equals:(id)arg2;
- (void)enforceTextAttributesIfNeeded;
- (void)didUpdateReactSubviews;
@property(readonly, nonatomic) UIView<RCTBackedTextInputViewProtocol> *backedTextInputView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

