//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSUUID;

@interface IGVideoCallResolvedUUID : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSUUID *_sameAsCurrentCall_uUID;
    NSUUID *_sameAsCurrentCallThread_uUID;
    NSUUID *_newCall_uUID;
}

+ (id)sameAsCurrentCallWithUUID:(id)arg1;
+ (id)sameAsCurrentCallThreadWithUUID:(id)arg1;
+ (id)newCallWithUUID:(id)arg1;
- (void).cxx_destruct;
- (void)matchSameAsCurrentCall:(CDUnknownBlockType)arg1 sameAsCurrentCallThread:(CDUnknownBlockType)arg2 newCall:(CDUnknownBlockType)arg3;
- (_Bool)hasSameUUID;

@end

