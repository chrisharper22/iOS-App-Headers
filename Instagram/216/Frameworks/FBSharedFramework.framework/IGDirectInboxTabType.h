//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGDirectInboxTabType : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    long long _folder;
}

+ (id)rooms;
+ (id)folder:(long long)arg1;
+ (id)activeNow;
- (void)matchFolder:(CDUnknownBlockType)arg1 rooms:(CDUnknownBlockType)arg2 activeNow:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanFolder:(CDUnknownBlockType)arg1 rooms:(CDUnknownBlockType)arg2 activeNow:(CDUnknownBlockType)arg3;

@end

