//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBEmojiUnicodeStoring-Protocol.h>

@class NSString;

@interface FBEmojiUnicodeStoreOS13_2 : NSObject <FBEmojiUnicodeStoring>
{
}

+ (id)sharedStore;
- (id)flagsEmojis;
- (id)symbolsEmojis;
- (id)objectsEmojis;
- (id)travelAndPlacesEmojis;
- (id)activityEmojis;
- (id)foodAndDrinkEmojis;
- (id)animalsAndNatureEmojis;
- (id)smileysAndPeopleEmojis;
- (id)defaultFrequentlyUsedEmojis;
- (id)emojiEligibleForSkintone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

