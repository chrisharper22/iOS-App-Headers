//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGEmojiModel, IGImageSpecifier, NSArray, NSString;

@interface IGDirectMessageReactionSpecifier : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGEmojiModel *_emoji_model;
    NSArray *_emoji_displayNames;
    IGImageSpecifier *_profileImage_specifier;
    NSString *_label_text;
}

+ (id)profileImageWithSpecifier:(id)arg1;
+ (id)labelWithText:(id)arg1;
+ (id)emojiWithModel:(id)arg1 displayNames:(id)arg2;
- (void).cxx_destruct;
- (void)matchEmoji:(CDUnknownBlockType)arg1 profileImage:(CDUnknownBlockType)arg2 label:(CDUnknownBlockType)arg3;
- (double)matchDoubleEmoji:(CDUnknownBlockType)arg1 profileImage:(CDUnknownBlockType)arg2 label:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanEmoji:(CDUnknownBlockType)arg1 profileImage:(CDUnknownBlockType)arg2 label:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
