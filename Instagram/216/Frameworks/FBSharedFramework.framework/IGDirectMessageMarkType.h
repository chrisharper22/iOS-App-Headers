//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGDirectLastSeenShhMessageInfo;

@interface IGDirectMessageMarkType : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGDirectLastSeenShhMessageInfo *_threadItemSeen_shhMessageSeenInfo;
    unsigned long long _visualItemSeen_targetItemType;
}

+ (id)visualItemSeenWithTargetItemType:(unsigned long long)arg1;
+ (id)visualItemScreenshotted;
+ (id)visualItemReplayed;
+ (id)threadItemSeenWithShhMessageSeenInfo:(id)arg1;
- (void).cxx_destruct;
- (void)matchThreadItemSeen:(CDUnknownBlockType)arg1 visualItemSeen:(CDUnknownBlockType)arg2 visualItemReplayed:(CDUnknownBlockType)arg3 visualItemScreenshotted:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanThreadItemSeen:(CDUnknownBlockType)arg1 visualItemSeen:(CDUnknownBlockType)arg2 visualItemReplayed:(CDUnknownBlockType)arg3 visualItemScreenshotted:(CDUnknownBlockType)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

