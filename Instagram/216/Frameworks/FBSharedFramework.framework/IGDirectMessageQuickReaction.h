//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGEmojiModel;

@interface IGDirectMessageQuickReaction : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGEmojiModel *_quickReaction_emoji;
    double _quickReaction_width;
    IGEmojiModel *_emojiReaction_emoji;
    double _emojiReaction_width;
}

+ (id)quickReactionWithEmoji:(id)arg1 width:(double)arg2;
+ (id)none;
+ (id)emojiReactionWithEmoji:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
- (void)matchNone:(CDUnknownBlockType)arg1 quickReaction:(CDUnknownBlockType)arg2 emojiReaction:(CDUnknownBlockType)arg3;
- (double)matchDoubleNone:(CDUnknownBlockType)arg1 quickReaction:(CDUnknownBlockType)arg2 emojiReaction:(CDUnknownBlockType)arg3;

@end

