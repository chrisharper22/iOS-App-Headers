//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGDirectPendingInboxUpdateReason : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
}

+ (id)mutation;
+ (id)dataLoad;
+ (id)initialLoad;
- (void)matchInitialLoad:(CDUnknownBlockType)arg1 dataLoad:(CDUnknownBlockType)arg2 mutation:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanInitialLoad:(CDUnknownBlockType)arg1 dataLoad:(CDUnknownBlockType)arg2 mutation:(CDUnknownBlockType)arg3;

@end

