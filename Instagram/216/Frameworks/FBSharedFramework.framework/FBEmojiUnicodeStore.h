//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBEmojiUnicodeStoring-Protocol.h>

@class NSString;

@interface FBEmojiUnicodeStore : NSObject <FBEmojiUnicodeStoring>
{
}

+ (id)sharedStoreWithOSVersionCheck:(_Bool)arg1;
+ (id)sharedStore;
- (id)emojisVariationSet;
- (id)emojiEligibleForSkintone;
- (id)defaultFrequentlyUsedEmojis;
- (id)travelAndPlacesEmojis;
- (id)symbolsEmojis;
- (id)objectsEmojis;
- (id)foodAndDrinkEmojis;
- (id)flagsEmojis;
- (id)animalsAndNatureEmojis;
- (id)activityEmojis;
- (id)smileysAndPeopleEmojis;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
