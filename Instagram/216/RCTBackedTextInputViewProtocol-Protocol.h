//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UITextInput-Protocol.h"

@class NSAttributedString, NSDictionary, NSString, UIColor, UITextRange, UIView;
@protocol RCTBackedTextInputDelegate;

@protocol RCTBackedTextInputViewProtocol <UITextInput>
@property(copy, nonatomic) NSString *text;
@property(readonly, nonatomic) struct UIEdgeInsets contentInset;
@property(readonly, nonatomic) struct CGPoint contentOffset;
@property(readonly, nonatomic) double zoomScale;
@property(retain, nonatomic) NSString *inputAccessoryViewID;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
@property(nonatomic) long long clearButtonMode;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) _Bool caretHidden;
@property(nonatomic, getter=isEditable) _Bool editable;
@property(nonatomic) _Bool contextMenuHidden;
@property(retain, nonatomic) NSDictionary *defaultTextAttributes;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(nonatomic) __weak id <RCTBackedTextInputDelegate> textInputDelegate;
@property(retain, nonatomic) UIView *inputView;
@property(retain, nonatomic) UIView *inputAccessoryView;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
@property(readonly, nonatomic) _Bool textWasPasted;
@property(retain, nonatomic) UIColor *placeholderColor;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)setSelectedTextRange:(UITextRange *)arg1 notifyDelegate:(_Bool)arg2;
- (void)setSelectedTextRange:(UITextRange *)arg1;
@end

