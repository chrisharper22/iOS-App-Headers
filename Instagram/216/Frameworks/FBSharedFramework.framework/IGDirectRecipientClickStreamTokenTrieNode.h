//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface IGDirectRecipientClickStreamTokenTrieNode : NSObject
{
    NSMutableDictionary *_charMap;
    NSMutableSet *_userIds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *userIds; // @synthesize userIds=_userIds;
@property(retain, nonatomic) NSMutableDictionary *charMap; // @synthesize charMap=_charMap;
- (id)init;

@end

