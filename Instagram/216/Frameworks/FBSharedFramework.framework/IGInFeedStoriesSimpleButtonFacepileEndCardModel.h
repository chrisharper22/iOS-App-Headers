//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGInFeedStoriesSimpleButtonEndCardModel.h>

@class NSArray;

@interface IGInFeedStoriesSimpleButtonFacepileEndCardModel : IGInFeedStoriesSimpleButtonEndCardModel
{
    _Bool _isCloseFriends;
    NSArray *_users;
}

+ (id)makeWithPK:(id)arg1 type:(long long)arg2 filteringTag:(id)arg3 entryDictionary:(id)arg4 objectStores:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isCloseFriends; // @synthesize isCloseFriends=_isCloseFriends;
@property(readonly, copy, nonatomic) NSArray *users; // @synthesize users=_users;
- (_Bool)isEqual:(id)arg1;
- (id)_initWithPK:(id)arg1 type:(long long)arg2 filteringTag:(id)arg3 title:(id)arg4 buttonText:(id)arg5 actionTypeValue:(id)arg6 users:(id)arg7;

@end
