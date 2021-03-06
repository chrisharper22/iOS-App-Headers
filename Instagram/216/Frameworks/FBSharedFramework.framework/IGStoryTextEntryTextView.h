//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGSerializable-Protocol.h>
#import <FBSharedFramework/UITextViewDelegate-Protocol.h>

@class IGTextView, NSAttributedString, NSDictionary, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIBezierPath, UIColor, UIDragInteraction, UIFont, UILabel, UITextRange;
@protocol IGStoryTextEntryTextViewDelegate;

@interface IGStoryTextEntryTextView : UIView <UITextViewDelegate, IGSerializable>
{
    IGTextView *_textView;
    UIBezierPath *_cachedOutlinePath;
    double _outlinePathComputationIdentifier;
    _Bool _outlinePathComputationInProgress;
    UILabel *_footerLabel;
    _Bool _prideRelatedHashtagTextHintVisible;
    CDStruct_c7a4ad33 _delegateFlags;
    id <IGStoryTextEntryTextViewDelegate> _delegate;
    unsigned long long _richTextAlignment;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
+ (void)load;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long richTextAlignment; // @synthesize richTextAlignment=_richTextAlignment;
@property(nonatomic) __weak id <IGStoryTextEntryTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
@property(readonly, nonatomic) UIDragInteraction *textDragInteraction;
@property(nonatomic) _Bool showsHorizontalScrollIndicator;
@property(nonatomic) _Bool showsVerticalScrollIndicator;
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
@property(readonly, nonatomic) NSTextContainer *textContainer;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
@property(readonly, nonatomic) NSTextStorage *textStorage;
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
@property(copy, nonatomic) NSDictionary *typingAttributes;
@property(retain, nonatomic) NSAttributedString *attributedPlaceholder;
@property(copy) NSAttributedString *attributedText;
@property(nonatomic) struct _NSRange selectedRange;
@property(retain, nonatomic) UIColor *placeholderLabelTextColor;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *text;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)isFirstResponder;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)reloadInputViews;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)outlinePath;
- (void)_recomputeOutlinePath;
- (void)invalidateCachedOutlinePath;
- (void)_didEndEditing:(id)arg1;
- (void)_didBeginEditing:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)showPrideRelatedHashtagTextHintWithPrideType:(long long)arg1 animated:(_Bool)arg2;
- (void)hidePrideRelatedHashtagTextHintAnimated:(_Bool)arg1;
- (id)initWithTextView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

