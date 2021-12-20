//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <FBSharedFramework/NSLayoutManagerDelegate-Protocol.h>

@class NSString, NSTextAttachment, UIColor, UIFont, UIImageView, UITextView;

@interface IGMultilineChevronButton : UIControl <NSLayoutManagerDelegate>
{
    UITextView *_textView;
    UIImageView *_chevronImageView;
    NSTextAttachment *_placeholderTextAttachment;
    _Bool _useTextShadow;
    _Bool _isOpen;
    _Bool _shouldShowChevron;
    UIColor *_textColor;
    UIFont *_font;
    NSString *_text;
    struct UIEdgeInsets _hitInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowChevron; // @synthesize shouldShowChevron=_shouldShowChevron;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) struct UIEdgeInsets hitInsets; // @synthesize hitInsets=_hitInsets;
@property(nonatomic) _Bool useTextShadow; // @synthesize useTextShadow=_useTextShadow;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (struct CGRect)_chevronFrame;
- (void)_updateChevronFrame;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
@property(retain, nonatomic) UIColor *chevronTintColor;
- (void)configureWithText:(id)arg1 shouldShowChevron:(_Bool)arg2 shouldTruncateText:(_Bool)arg3;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
