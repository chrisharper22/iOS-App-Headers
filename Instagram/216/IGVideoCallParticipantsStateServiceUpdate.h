//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGVideoCallUserKey, NSArray;

@interface IGVideoCallParticipantsStateServiceUpdate : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGVideoCallUserKey *_ringing_userKey;
    IGVideoCallUserKey *_rejected_userKey;
    IGVideoCallUserKey *_invited_inviter;
    NSArray *_invited_invitees;
}

+ (id)ringingWithUserKey:(id)arg1;
+ (id)rejectedWithUserKey:(id)arg1;
+ (id)invitedWithInviter:(id)arg1 invitees:(id)arg2;
- (void).cxx_destruct;
- (void)matchRinging:(CDUnknownBlockType)arg1 rejected:(CDUnknownBlockType)arg2 invited:(CDUnknownBlockType)arg3;

@end
