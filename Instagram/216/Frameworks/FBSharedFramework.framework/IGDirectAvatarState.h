//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGDirectAvatarStoryState;

@interface IGDirectAvatarState : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGDirectAvatarStoryState *_story;
}

+ (id)story:(id)arg1;
+ (id)empty;
- (void).cxx_destruct;
- (void)matchEmpty:(CDUnknownBlockType)arg1 story:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanEmpty:(CDUnknownBlockType)arg1 story:(CDUnknownBlockType)arg2;
- (_Bool)isStoryState;

@end
