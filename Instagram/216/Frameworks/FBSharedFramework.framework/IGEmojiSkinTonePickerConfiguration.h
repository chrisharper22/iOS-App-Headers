//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@protocol IGEmojiAlternatesProvider;

@interface IGEmojiSkinTonePickerConfiguration : FBValueObject <NSCopying, NSCoding>
{
    _Bool _includesSeparator;
    unsigned long long _presentationType;
    unsigned long long _alternativeSelectionSize;
    unsigned long long _gestureType;
    id <IGEmojiAlternatesProvider> _alternatesProvider;
}

+ (id)emojiReaction;
+ (id)quickReactionDefaultWithOrdering:(unsigned long long)arg1;
+ (id)default;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool includesSeparator; // @synthesize includesSeparator=_includesSeparator;
@property(readonly, nonatomic) id <IGEmojiAlternatesProvider> alternatesProvider; // @synthesize alternatesProvider=_alternatesProvider;
@property(readonly, nonatomic) unsigned long long gestureType; // @synthesize gestureType=_gestureType;
@property(readonly, nonatomic) unsigned long long alternativeSelectionSize; // @synthesize alternativeSelectionSize=_alternativeSelectionSize;
@property(readonly, nonatomic) unsigned long long presentationType; // @synthesize presentationType=_presentationType;
- (id)initWithPresentationType:(unsigned long long)arg1 alternativeSelectionSize:(unsigned long long)arg2 gestureType:(unsigned long long)arg3 alternatesProvider:(id)arg4 includesSeparator:(_Bool)arg5;

@end

