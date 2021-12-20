//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectMessageBubbleStyle, IGDirectMessageEffect, IGDirectTextMessageBubbleLayoutSpec, IGStyledString, NSArray;

@interface IGDirectTextMessageBubbleViewModelBuilder : NSObject
{
    IGStyledString *_styledText;
    struct CGSize _styledTextSize;
    _Bool _isOnlyEmoji;
    IGDirectMessageEffect *_messageEffectToApply;
    IGDirectMessageBubbleStyle *_bubbleStyle;
    IGDirectTextMessageBubbleLayoutSpec *_layoutSpec;
    _Bool _isVaultingEnabled;
    NSArray *_highlightRanges;
}

+ (id)directTextMessageBubbleViewModelFromExistingDirectTextMessageBubbleViewModel:(id)arg1;
+ (id)directTextMessageBubbleViewModel;
- (void).cxx_destruct;
- (id)withHighlightRanges:(id)arg1;
- (id)withIsVaultingEnabled:(_Bool)arg1;
- (id)withLayoutSpec:(id)arg1;
- (id)withBubbleStyle:(id)arg1;
- (id)withMessageEffectToApply:(id)arg1;
- (id)withIsOnlyEmoji:(_Bool)arg1;
- (id)withStyledTextSize:(struct CGSize)arg1;
- (id)withStyledText:(id)arg1;
- (id)build;

@end
