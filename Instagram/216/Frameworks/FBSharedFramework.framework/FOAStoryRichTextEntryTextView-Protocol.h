//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGCustomTextLayoutManager, NSAttributedString, NSDictionary, NSMutableArray, NSString, NSTextContainer, NSTextStorage, UIColor, UIFont;
@protocol FOARichTextFormat;

@protocol FOAStoryRichTextEntryTextView <NSObject>
@property(retain, nonatomic) id <FOARichTextFormat> textFormat;
@property(nonatomic) struct _NSRange selectedRange;
@property(readonly, nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *persistedColorTypingAttribute;
@property(copy, nonatomic) NSDictionary *typingAttributes;
@property(readonly, nonatomic) NSTextContainer *textContainer;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
@property(readonly, nonatomic) NSTextStorage *textStorage;
@property(retain, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *text;
@property(readonly, nonatomic) IGCustomTextLayoutManager *layoutManager;
@property(retain, nonatomic) UIFont *font;
@property(copy) NSAttributedString *attributedText;
- (NSMutableArray *)invertedRanges;
- (NSMutableArray *)emphasizedRanges;
- (void)finalizeRichTextAttributedStringIfNeeded;
@end

