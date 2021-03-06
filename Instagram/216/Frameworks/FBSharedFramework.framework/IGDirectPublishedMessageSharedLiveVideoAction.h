//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGDirectPublishedMessageSharedLiveBroadcastOrPlaceholder, IGLiveBroadcast, IGUser, NSDate, NSString, NSURL;

@interface IGDirectPublishedMessageSharedLiveVideoAction : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGDirectPublishedMessageSharedLiveBroadcastOrPlaceholder *_invite_broadcastOrPlaceholder;
    NSString *_invite_ctaButtonName;
    NSString *_invite_igtvPostId;
    NSURL *_invite_igtvPostCoverFrameUrl;
    NSString *_invite_broadcastId;
    IGUser *_invite_broadcaster;
    NSDate *_invite_broadcastStartDate;
    IGLiveBroadcast *_share_broadcast;
}

+ (id)shareWithBroadcast:(id)arg1;
+ (id)inviteWithBroadcastOrPlaceholder:(id)arg1 ctaButtonName:(id)arg2 igtvPostId:(id)arg3 igtvPostCoverFrameUrl:(id)arg4 broadcastId:(id)arg5 broadcaster:(id)arg6 broadcastStartDate:(id)arg7;
- (void).cxx_destruct;
- (void)matchInvite:(CDUnknownBlockType)arg1 share:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanInvite:(CDUnknownBlockType)arg1 share:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

