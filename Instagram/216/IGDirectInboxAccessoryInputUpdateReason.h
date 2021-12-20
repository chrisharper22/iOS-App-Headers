//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGUserPresenceUpdate, NSArray, NSString;

@interface IGDirectInboxAccessoryInputUpdateReason : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGUserPresenceUpdate *_presenceUpdate;
    NSString *_typingStatusUpdate_threadId;
    NSArray *_typingStatusUpdate_typingStatuses;
}

+ (id)typingStatusUpdateWithThreadId:(id)arg1 typingStatuses:(id)arg2;
+ (id)presenceUpdate:(id)arg1;
+ (id)other;
- (void).cxx_destruct;
- (void)matchPresenceUpdate:(CDUnknownBlockType)arg1 typingStatusUpdate:(CDUnknownBlockType)arg2 other:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanPresenceUpdate:(CDUnknownBlockType)arg1 typingStatusUpdate:(CDUnknownBlockType)arg2 other:(CDUnknownBlockType)arg3;

@end
